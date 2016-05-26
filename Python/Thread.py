#Simple Threads 

import threading
import time
def worker():
  '@Thread Method with sleep 1 Sec'
  print threading.currentThread().getName(),'Starting'
  time.sleep(1)
  print threading.currentThread().getName(),'Exiting'

def service():
  '@Thread Method With Sleep 3 Sec'
  print threading.currentThread().getName(),'Starting Service Module'          
  time.sleep(3)
  print threading.currentThread().getName(),'Exiting Service Module'


t = threading.Thread(name='Worker' ,target=worker)
w = threading.Thread(name='Service' ,target=service)

t.start()
w.start()

