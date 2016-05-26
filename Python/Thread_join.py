import threading
import time
import logging

def daemon():
  print 'Daemon'
  time.sleep(2)
  print 'Exit Daemon'
 

def worker():
  print 'Starting Worker'
  print 'Exiting Worker'

d = threading.Thread(name='Daemon',target=(daemon))
d.setDaemon(True)

w = threading.Thread(name='Wokr',target=(worker))

d.start()
w.start()
d.join()
w.join()
