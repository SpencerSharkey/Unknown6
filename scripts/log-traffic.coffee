###
  Pokemon Go(c) MITM node proxy
  by Michael Strassburger <codepoet@cpan.org>

  This example just dumps all in-/outgoing messages and responses

  Source: https://gist.github.com/Lennix/416810a5aa42b00760e8b1153876d67c
###

PokemonGoMITM = require './lib/pokemon-go-mitm'

fs = require('fs')
util = require('util')

# Uncomment if you want to filter the regular messages
# ignore = ['GetHatchedEggs', 'DownloadSettings', 'GetInventory', 'CheckAwardedBadges', 'GetMapObjects']
ignore = []

formatDate = (date) ->
  timeStamp = [date.getHours(), date.getMinutes(), date.getSeconds()].join(" ")
  RE_findSingleDigits = /\b(\d)\b/g

  # Places a `0` in front of single digit numbers.
  timeStamp = timeStamp.replace( RE_findSingleDigits, "0$1" )
  timeStamp.replace /\s/g, ""

server = new PokemonGoMITM port: 8081
	.addRequestHandler "*", (data, action) ->
		#fs.appendFile("/tmp/dump.log", new Date().getTime() + ": [<-] Request for #{action} " + util.inspect(data) + "\n")
		console.log formatDate(new Date()), ": [<-] Request for #{action} ", util.inspect(data), "\n" unless action in ignore
		false

	.addResponseHandler "*", (data, action) ->
		console.log formatDate(new Date()), ": [->] Response for #{action} ", util.inspect(data), "\n" unless action in ignore
		false

	.addRequestEnvelopeHandler (data) ->
		fs.appendFile("/tmp/dump.log", util.inspect(data) + "\n")
		count = data.unknown6[0].unknown2.unknown1.length
		message = new Date().getTime() + ": "
		message += data.unknown6[0].unknown2.unknown1.toString('hex', 0, 32) + "\n"
		for i in [32..count] by 256
			message += data.unknown6[0].unknown2.unknown1.toString('hex', i, i+256)
			message += "\n"
		fs.appendFile("/tmp/dump.log", message)
		#fs.appendFile("/tmp/dump.log", util.inspect(data) + "\n")
		console.log formatDate(new Date()), ": [<-] Request Envelope", util.inspect(data), "\n"
		false

	.addResponseEnvelopeHandler (data) ->
		console.log formatDate(new Date()), ": [->] Response Envelope", util.inspect(data), "\n"
		false
	 
