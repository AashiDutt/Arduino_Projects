//Build one of the circuits below (depending on which type of RGB LED you have), and write a program that changes the LED to various colors, such as orange, violet, cyan, yellow, etc.
// USE COMMON CATHODE OR COMMON ANODE RGB LED
// link to circuit
//https://www.tinkercad.com/things/eQ44SPt1SFt-tremendous-leelo/editel?tenant=circuits

// Pins
const int r_pin = 11;
const int g_pin = 10;
const int b_pin = 9;

// Time to wait between each color
int wait = 1000;    // milliseconds (ms)
void setup() {
  pinMode(r_pin, OUTPUT);
  pinMode(g_pin, OUTPUT);
  pinMode(b_pin, OUTPUT);
}
void loop() {
  showColor(255, 0, 0);     // Red
  delay(wait);
  showColor(255, 15, 0);    // Orange
  delay(wait);
  showColor(255, 60, 0);    // Yellow
  delay(wait);
  showColor(0, 255, 0);     // Green
  delay(wait);
  showColor(0, 0, 255);     // Blue
  delay(wait);
  showColor(75, 0, 255);    // Violet
  delay(wait);
}
 
// Use "byte" as parameters since it can only be 0-255
void showColor(byte r, byte g, byte b) {
  analogWrite(r_pin, r);
  analogWrite(g_pin, g);
  analogWrite(b_pin, b);
}
