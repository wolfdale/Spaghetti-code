from socket import *
import time
import sys
import os

os.system('clear')
filename = raw_input()

#INIT BLOCK TRANSFER
MAXRECV = 2048
DEF_BLK = 512
MAN_BLK1 = 1024
MAN_BLK2 = 1536
MAN_BLK3 = 2040

INIT_BLOCK = '01'
ACK_OP = '04'

#INITIAL POINT OF CONTACT
INIT_address = ('127.0.0.1',4600)
clientsocket = socket(AF_INET, SOCK_DGRAM)


rrq_string = '#netascii#blksize#512#timeout#10#'


print '------------------------------------------------------------------------\n'
print 'File Name : ' + filename
request = '01' + filename + rrq_string
print 'REQUEST STRING : ' + request
print 'Block Size :' + str(512)
#Send Request
clientsocket.sendto (request, INIT_address)
recv_data , RE_addr = clientsocket.recvfrom (512)
print '\nSERVER Accepted REQUEST : OACK RECEIVED ' + recv_data
	
recv_file = open(filename,'a')
while (1):
	#Send Block ZERO
	block_no = ACK_OP + INIT_BLOCK + '#'
	clientsocket.sendto (block_no, RE_addr)
	recv_data , addr = clientsocket.recvfrom (512+4)
	recv_file.write(recv_data[4:])
	#IF LAST PACKET
	data_length = len(recv_data)
	print data_length
	#print data_length
	if((data_length-4) < 512):
		break
	
print 'All Packets Successfully Received\n'
print'------------------------------------------------------------------------\n'
recv_file.close()

