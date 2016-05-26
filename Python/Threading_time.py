 #the timeout passed is less than the amount of time the daemon thread sleeps, 
 #the thread is still “alive” after join() returns.

import threading
import time

def worker():
  print 'Worker'
  time.sleep(1)
  print 'Exit Worker'
 

def daemon():
  print 'Daemon'
  time.sleep(3)
  print 'Exit Daemon'


d = threading.Thread(name='Daemon',target=(daemon))
d.start()

w = threading.Thread(name='Worker',target=(worker))
w.start()

d.join(1)
print 'd.isaliv()', d.isAlive()

w.join()





