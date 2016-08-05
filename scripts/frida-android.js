import frida
import sys

package_name = "com.nianticlabs.pokemongo"
input_counter = 0

def get_messages_from_js(message, data):
		print(message)
		if data is None:
			return
		global input_counter
		file_name = 'dump'
		file_name += str(input_counter)
		file_name += '.bin'
		f = open(file_name, 'wb')
		f.write(data)
		f.close()
		input_counter +=1
 

def instrument_debugger_checks():

        hook_code = """
		
		var fctToHookPtr = Module.findBaseAddress("libNianticLabsPlugin.so").add(0x87444);
		console.log("Base address of libNianticLabsPlugin.so : " + Module.findBaseAddress("libNianticLabsPlugin.so"));
		console.log("Offset : +0x87444");
		console.log("Corrected RVA : " + fctToHookPtr.or(1));
		Interceptor.attach(fctToHookPtr.or(1), {
		onEnter: function (args) {
					
					console.log("INPUT : ");
					var buf = Memory.readByteArray(args[0], args[1].toInt32());
					this.bufPtr = args[0];
					this.bufLen = args[1].toInt32();
					send({name:'start'},buf);
					/*console.log(hexdump(buf, {
					  offset: 0,
					  length: args[1].toInt32(),
					  header: true,
					  ansi: true
					}));*/

		},
		onLeave: function(retval) {
					console.log("INPUT AFTER END OF FUNCTION:");
					var buf = Memory.readByteArray(this.bufPtr, this.bufLen);
					console.log(hexdump(buf, {
					  offset: 0,
					  length: this.bufLen,
					  header: true,
					  ansi: true
					}));
					
					console.log("RESULT (1000 BYTES):");
				var buf = Memory.readByteArray(retval, 1000);
					console.log(hexdump(buf, {
					  offset: 0,
					  length: 1000,
					  header: true,
					  ansi: true
					}));
		}
	});
        """

        return hook_code

deviceManager = frida.get_device_manager()
deviceMobile = 0
devices = deviceManager.enumerate_devices()

for x in devices:
	if x.id == "75c2be6a":
		deviceMobile = x
		print(x)

process = deviceMobile.attach(package_name)
script = process.create_script(instrument_debugger_checks())
script.on('message',get_messages_from_js)
script.load()
sys.stdin.read()
