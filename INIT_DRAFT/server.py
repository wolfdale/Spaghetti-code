from socket import *
import os


port = 4600
server_sock = socket(AF_INET,SOCK_DGRAM)
server_sock.bind(('127.0.0.1',port))
BLK = 512
req_str ,RE_addr = server_sock.recvfrom(BLK)
print 'Client Request Received : ' + req_str
token_list = req_str.split('#')
oack = '06#'+token_list[2]+'#'+token_list[3]+'#'+token_list[4]+'#'+token_list[5]+'#'
print token_list[0]
file_name = token_list[0].replace('','')[2:]
print file_name
#UPDATE BLOCK SIZE
BLK = int(token_list[3])

server_sock.sendto(oack , RE_addr)
recv_data , RE_addr = server_sock.recvfrom(BLK)
print recv_data
block = '01'
data_op = '03'
with open(file_name,'rb') as _file:
  bytes_read = 0
  data_chunk = _file.read(BLK)
  bytes_read = bytes_read + (len(data_chunk))
  
  print "Bytes Send to Client -- " + str(bytes_read)
  while (data_chunk != ''):
    #Set Block Number
    if block>10:
      pack_block = data_op + block
    else:
      pack_block = data_op + block
		
    #Data Packet
    data_packet = pack_block + data_chunk

    bytes_read = bytes_read + len(data_chunk)
    
    print 'File Name : ' + file_name
    print '-------------------------------------------------------'
    print "Bytes Send to Client -- " + str(bytes_read) + 'Bytes'
    print '-------------------------------------------------------'
    server_sock.sendto(data_packet,RE_addr)
    
    recv_data , Re_addr = server_sock.recvfrom(BLK)
    data_chunk= _file.read(BLK)

print 'All Data Packet Sent to client'


