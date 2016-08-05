#!/usr/bin/python
# -*- coding: utf-8 -*-
#
# For iOS (64bit)
#
import frida
import sys

package_name = "com.nianticlabs.pokemongo"

def get_messages_from_js(message, data):
            print(message)
            print(message['payload'])
 
#NOTE: You have to subtract the BaseImage from offset you see in IDA:
#sub_1015A59E0 --> 0x1015A59E0 - 0x100000000 = 0x15A59E0
#
def instrument_debugger_checks():

        hook_code = """
		
		var fctToHookPtr = Module.findBaseAddress("pokemongo").add(0x15A59E0);
		console.log("Base address of Main Module: " + Module.findBaseAddress("pokemongo"));
		console.log("Offset : +0x15A59E0");
		console.log("Corrected RVA : " + fctToHookPtr);
		Interceptor.attach(fctToHookPtr, {
		onEnter: function (args) {
					
					console.log("INPUT : ");
					var buf = Memory.readByteArray(args[0], args[1].toInt32());
					this.bufPtr = args[0];
					this.bufLen = args[1].toInt32();
					console.log(hexdump(buf, {
					  offset: 0,
					  length: args[1].toInt32(),
					  header: true,
					  ansi: true
					}));

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
		}
	});
        """

        return hook_code

device = frida.get_usb_device()
print u"Device Found: {}".format(device.name)

pid = device.spawn([package_name]) #spawned process with pid at suspended state
print "Spawned with PID: {}".format(pid)

process = device.attach(pid) #get a debug session from pid
print "Process attached!"
device.resume(pid) #resume process from suspended state

script = process.create_script(instrument_debugger_checks())
script.on('message',get_messages_from_js)
script.load()
sys.stdin.read()
