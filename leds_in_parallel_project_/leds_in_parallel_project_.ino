// Use 1 GPIO pin on the microcontroller to blink 5 LEDs on 
// and off simultaneously.
// link to simulator
// https://www.tinkercad.com/things/35ehdg3LtM5-leds-in-parallel-project

const int led_pin = 6;
 
void setup() {
  pinMode(led_pin, OUTPUT);
}
 
void loop() {
  digitalWrite(led_pin, HIGH);
  delay(500);
  digitalWrite(led_pin, LOW);
  delay(500);
}
