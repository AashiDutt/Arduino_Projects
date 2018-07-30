// In this project we will be using a transistor to controll blinking of led
// link to simulator 
// https://www.tinkercad.com/things/j0lTBx60uLw-transistor-interface-using-arduino


const int led_pin =6;

void setup() {
  pinMode(led_pin , OUTPUT);

}

void loop() {
 digitalWrite(led_pin, HIGH);
 delay(500);
 digitalWrite(led_pin, LOW);
 delay(500);

}
