// This code is UART(Universal Asynchronous Reciever Transmitter)
// with two arduino interface.
// link to simulator
// https://www.tinkercad.com/things/ejs7skzYhHK-uarttwoarduinointerface

#include <SoftwareSerial.h>

SoftwareSerial soft(8,9);  // Rx , Tx

void setup() {
  soft.begin(9600); // baud rate

}

void loop() {
  soft.println("Hi");
  delay(1000);  
}
