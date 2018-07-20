// code to form rainbow shades using neopixels 
// link to simulator
// https://www.tinkercad.com/things/cc69pLiUy4E-bodacious-densor-inari/editel?tenant=circuits


#include <Adafruit_NeoPixel.h>

const int data_pin = 6;
const int num_pixels = 5;

// creating an object
// NEO_KHZ800 = operatimg frequency at 800 Mhz
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(num_pixels,data_pin, NEO_GRB + NEO_KHZ800);


void setup() {
  // Initalize NeoPixels
  pixels.begin();

  // set LED colors(G , R , B)
  pixels.setPixelColor(0, pixels.Color(255, 0, 0));  // Red color
  pixels.setPixelColor(1, pixels.Color(255, 127, 0)); // Orange color
  pixels.setPixelColor(2, pixels.Color(0, 255,0));   // Green color
  pixels.setPixelColor(3, pixels.Color(0,0, 255));  // Blue color
  pixels.setPixelColor(4, pixels.Color(127, 0, 255)); 

  // Write data out to NeoPixels
  pixels.show();
}


void loop() {
  // put your main code here, to run repeatedly:

}
