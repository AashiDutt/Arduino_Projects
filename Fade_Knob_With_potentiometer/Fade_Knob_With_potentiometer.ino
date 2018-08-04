// code to fade led glow with potentiometer
// link to simulator
https://www.tinkercad.com/things/dEE3EoobgQ7-fadeknobwithpotentiometer/editel

// Pins
const int knob_pin = A0;
const int led_pin = 5;
 
void setup() {
  pinMode(led_pin, OUTPUT);
}
 
void loop() {
  
  // Read knob value (0 - 1023)
  int val = analogRead(knob_pin);
  
  // Convert knob value to PWM value (0 - 255)
  int brightness = map(val, 0, 1023, 0, 255);
  
  // Set LED brightness
  analogWrite(led_pin, brightness);
}
