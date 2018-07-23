import serial  # add Serial library for Serial communication

Arduino_Serial = serial.Serial('com4', 9600)  # Create Serial port object called arduinoSerialData
 # read the serial data and print it as line

while(1==1):
    my_data =(Arduino_Serial.readline().strip())
    print(my_data.decode())
