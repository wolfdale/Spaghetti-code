from Queue import Queue
from threading import Thread
import socket

########
## If computation Rejected -> Receive '$'
## if computation not presend on any client -> receive '#$'
########

#CLIENT ID
CLIENT_ID = '1234'

#GLOBAL SEND DATA QUEUE
send_data_queue = Queue(maxsize = 0)

#GLOBAL RECIEVING DATA QUEUE
recv_data_queue = Queue(maxsize = 0)

#GLOBAL BUFFER LIST (IN CASE COMPUTATION REJECTED -> RESEND)
buffer_computation = []



def multiply(x,y):
	send_results(x*y)

def add(x,y):
	send_results(x+y)


def send_computation(data_queue):
	"""Finally Send Data from Queue to Mediation Server"""
	sending_socket = socket.socket()
	host = socket.gethostname()
	port = 54545
	sending_socket.bind((host,port))
	sending_socket.listen()
	while True:
		#what do do if computation queue empty??
		#doubt about accept call and where to close socket ??
		mediation_sock , addr = socket_desc.accept()
		
		if(data_queue.empty() not True):
			data_in_queue = data_queue.get()			
			buffer_computation.append(data_in_queue)
			mediation_sock.send(data_in_queue)
		

def recv_from_sock():
	
	receiving_socket = socket.socket()



def communication_manager():
	"""Manager for creating Threads"""	

	sender_thread = Thread(target=send_computation, args=(send_data_queue,)) 	
		
	receiver_thread_worker = Thread(target = recv_from_sock, args=(()))

	receiver_thread_processor = Thread(target = recv_data_processing, args=(recv_data_queue,))
				


def receive_results(receive_queue):
	"""Thread Continously check the Receiving socket & put data in queue for Processing"""
	while True:
		



	

def send_computation():
	"""Sends The computation name and arguments in correct format"""
	req_computation = "fact$int$5"
	computation_id 
	pack_data = CLIENT_ID + computation_id + req_computation
	send_data_queue.put(pack_data)


def send_results(data):
	"""Send Computation Results"""

	tag = "S$"
	pack_data = tag+str(data)
	communication_manager(pack_data)
	send_data_queue.put(pack_data)


def register_with_mediation_server():
	"""Send All The Computation Present in this client"""
	
	tag = "S$"	
	
	function_1 = "multiply$int$x$int$y"
	function_2 = "add$int$x$int$y"
	
	pack_data = tag + CLIENT_ID + function_1 + function_2
	send_data_queue.put(pack_data)


def Client_App_Driver():
	"""Clinet APP INIT"""
	
	while True:
		#First Register With Server
		register_with_mediation_server()

		#Give Control to Communication MAnager
		communication_manager()
	

if __name__ == "__main__":
	Client_App_Driver()



