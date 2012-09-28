import logging, strutils

var i : uint = 3

logging.level = lvlDebug

var 
  l : ref TConsoleLogger
  l2 : ref TFileLogger

new(l)
l2 = newFileLogger()
handlers.add(l)
handlers.add(l2)


debug("d $1 $2", [$i, $4.0])
info("i $1 $2", [$i, $4.0])

