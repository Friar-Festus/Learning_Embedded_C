#!/usr/bin/python

import socket
import sys

UDP_IP 		= "192.168.33.190"
UDP_PORT 	= 6500
MESSAGE 	= "Message from Demos...\0"

print "UDP target IP:", UDP_IP 
print "UDP target port:", UDP_PORT
print "Message:", MESSAGE

# Set up a UDP socket
sock = socket.socket(socket.AF_INET, 		# Internet
					 socket.SOCK_DGRAM)		# UDP
					 
try:
	sock.bind(('', (UDP_PORT+1)))
except:
	print 'Bind failed. Error Code: ' + str(msg[0]) + ' Message ' + msg[1]
	sys.exit()
	
print "Socket bind complete, bound to port", (UDP_PORT+1)

# Run ./udp_test just after starting eth_test on TM4C board
sock.sendto(MESSAGE, (UDP_IP, UDP_PORT))

# Listen for reply message from TM4 (TEST_BOARD or GB_PCB)
while True:
	data, addr = sock.recvfrom(1024)		# buffer size = 1024 bytes
	print "Received message:", data
	
	if (data[:10] == "We got it!"):
		print "Test succeeded!"
		break;

sys.exit()

