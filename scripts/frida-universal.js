'use strict';

const co = require('co');
const frida = require('frida');
const fs = require('fs');

const mgr = frida.getDeviceManager();

const theScript = `
var platform = Process.platform;
var address = undefined;
if (platform == 'darwin') {
  var sig = ''
  // iOS
  if (Process.arch == 'arm64') {
    // 64 bit
    sig = 'FA 67 BB A9 F8 5F 01 A9 F6 57 02 A9 F4 4F 03 A9 FD 7B 04 A9 FD 03 01 91 FF C3 08 D1 F4 03 01 AA F3 03 00 AA F5 2C 00 F0 B5 C6 46 F9 B5 02 40 F9 B5 83 1B F8 00 00 80 D2 ED 6E 05 94 6E 6E 05 94 16 00 80 D2 F7 23 04 91 F0 6D 05 94 E0 6A 36 38 D6 06 00 91 DF 82 00 F1 81 FF FF 54 E0 23 04 91 E1 23 00 91 D5 FF FF 97 E8 03 18 32 17 01 34 4B';
  } else {
    // 32 bit
    sig = 'F0 B5 03 AF 2D E9 00 0D AD F5 0A 7D 6C 46 6F F3 02 04 A5 46 80 46 48 F6 F4 10 C0 F2 45 00 8A 46 78 44 00 24 00 68 00 68 89 90 00 20 4D F1 9E ED 4D F1 4C EC 40 AD 4D F1 EA EA 28 55 01 34 20 2C F9 D1 6D 46 40 A8 29 46 FF F7 BC FF 08 F1 20 00 41 46 52 46 4D F1 D2 E8 28 46 60 F9 0D 0A 60 F9 CF 2A 40 46 40 F9 0D 0A 40 F9 0F 2A 5F FA 8A F0 C0 F5 80 74 0A F1 20 00 04 EB 0A 06 06 F1 20 0B';
  }
  // TODO: don't use sigs and just use the addresses from ./wiki/Android-sub-vs-iOS-sub
  address = Memory.scanSync(new NativePointer(Module.findBaseAddress('pokemongo')), 0x1feb000, sig)[0].address
} else {
  // Android address
  address = Module.findBaseAddress("libNianticLabsPlugin.so").add(0x87444).or(1);
  console.log("Corrected RVA : " + address)
}
Interceptor.attach(address, {
  onEnter: function (args) {
    var buf = Memory.readByteArray(args[0], args[1].toInt32());
    this.buf = [args[0], args[1].toInt32()];
    send({direction: 'in'}, buf);
  },
  onLeave: function(retval) {
    var buf = Memory.readByteArray(this.buf[0], this.buf[1]);
    send({direction: 'out'}, buf);
  }
});
`;

co(function *() {
  const devices = yield mgr.enumerateDevices();

  // make sure this is correct for you
  const device = devices[2];

  console.log(device)

  var attach = '';
  if (device.name == 'iOS Device') {
    attach = 'Pokémon GO';
  } else {
    attach = 'com.nianticlabs.pokemongo';
  }

  const process = yield device.attach(attach)
  var counter = 0
  const script = yield process.createScript(theScript)
    script.load().then(function(def) {
      console.log('Script loaded')
    })
    script.events.listen('message', (message, buf) => {
      if (message.direction == 'in') {
        // Store the output; eg. route through protoc --decode_raw
        console.log(message)
        fs.writeFile('dump_'+ (counter++) + '.bin', buf, (err) => {
          if (err) {
            throw err;
          }
        });
      }
    });

})
.catch(error => {
  console.error(error);
});
