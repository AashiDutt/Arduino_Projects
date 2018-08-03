// This code is used to connect arduino to a webpage via ESP8266
// link to simulator 
// https://www.tinkercad.com/things/fnqcPPyF4yr-getting-a-webpage/editel

#include "SoftwareSerial.h"

// WiFi config
// Virtual Wifi

String ssid = "Simulator WiFi";
String password = "";

// Server, file and port
const String hostname = "example.com";
const String uri ="/index.html";
const int port = 80;


// Software Serial object
SoftwareSerial soft(8,9);  //Rx ,Tx

void setup(){

  //Intialize serial connections
  Serial.begin(115200);  // for 1st arduino
  soft.begin(9600);      // for 2nd arduino

  // Talk to ESP8266
  soft.println("Init ESP8266...");
  Serial.println("AT");   // AT respose = OK
  delay(10);
  if(Serial.find("OK") == 0 ){
    soft.println("ESP8266 not found");
    while(1);      // processor will hang if processor is not found
  }

  // connecting to Wifi
  
  soft.println("Connecting to wifi ...");
  Serial.println("AT+CWJAP=\"" + ssid + "\",\"" + password + "\"");
  // joins axis point with given network name and password
  // use + symbol to concatenate
  // \"" means to include double quotes 
  delay(10);
  if(Serial.find("OK") == 0){
    soft.println("Could not connect to WiFi");
    while(1);
   } else {
    soft.println("Connected ! ");
   }
  
}

void loop(){
  
  // open TCP connection
  Serial.println("AT+CIPSTART=\"TCP\", \"" + hostname + "\"," + port);
  delay(50);
  if(Serial.find("OK") == 0){
    soft.println("Error");

}

  // construct https request
  
  String req = "GET" + uri + "HTTP/1.1\r\n" + "Host: " + hostname+
                "\r\n" + "Connection: close\r\n" + "\r\n";
  int len = req.length();
  
  
  // send our request length 
  Serial.print("AT+CIPSEND=");
  Serial.println(len);
  delay(10);
  if(Serial.find(">") == 0){
    soft.println("Error");
  }
   
     
  // send our HTTP request
     
     Serial.print(req);
     delay(10);
     if(Serial.find("SEND OK\r\n") == 0){
       soft.println("Error");
     }
     
   // wait for response from server
     while(Serial.available() == 0){
       delay(5);
     }
   
   // print  reply from server
     while(Serial.available()){
       String ln  = Serial.readStringUntil('\r');
       soft.print(ln);
     }
     
   // close TCP connection
     
     Serial.println("AT+CIPCLOSE=0");
     delay(50);
     if(Serial.find("OK") == 0){
       soft.println("Error");
     }else {
       soft.println();
       soft.println("connection closed");
     }
     
     
     delay(10000);
     }
     
     

