#include <ThingSpeak.h>


#include "ESP8266WiFi.h"
#include "ThingSpeak.h"

// Wifi config
const char ssid[] = "mySSID";
const char password[] = "myPassword";

// ThingSpeak config
const unsigned long channel_id = 555842
const char write_api_key[] = "OC8PZ442W9EPTR3M";

// WiFi client object
WiFiClient client;


void setup() {

 // Initialize Serial
 Serial.begin(9600);
 delay(100);

 // Connect to WiFi
 Serial.print("Connecting to ");
 Serial.print(ssid);
 WiFi.begin(ssid, password);
 while(WiFi.status() != WL_CONNECTED ){
  delay(500);
  Serial.print(".");
 }
 Serial.println();

 // show that we are connected
 Serial.println("Connected!");

 // Connect to ThingSpeak
 ThingSpeak.begin(client);

 randomSeed(micros());
}

void loop() {

  // generate random  numbers 1-100
  int rando = random(1,101);

  // write values to our ThingSoeak channel
  Serial.println("Posting " +String(rando) + "to ThingSpeak");
  ThingSpeak.setField(1, rando);
  ThingSpeak.writeFields(channel_id, write_api_key);

  delay(30000);
  

}
