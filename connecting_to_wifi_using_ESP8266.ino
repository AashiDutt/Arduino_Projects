// Code to connect wifi to arduino using ESP8266
// link to simulator
// https://www.tinkercad.com/things/etm7ifajWNe-connectingtowifiusingesp8266/editel

#include "SoftwareSerial.h"

// WiFi config
// Virtual Wifi

String ssid = "Simulator WiFi";
String password = "";

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
  
}
 

