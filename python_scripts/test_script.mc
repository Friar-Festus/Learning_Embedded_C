send ""

print "Running tests..."

expect {
	"->"
}
send i2c0_test
sleep 2

expect {
	"->"
}
send adc_test
sleep 2

expect {
	"->"
}
send echo_test
sleep 2

send eth_test
sleep 3
! /home/thomas/Documents/Learning_Embedded_C/python_scripts/udp_test.py
sleep 10

send ""
send ""
exit
