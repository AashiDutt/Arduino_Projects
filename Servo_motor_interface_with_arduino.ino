// This is a code for Servo Motor Interface with Arduino
// link to simulator
// https://www.tinkercad.com/things/jEfajoXImw1-servoarduinointerface

#include <Servo.h>

const int servo_pin = 9;
Servo servo;
void setup() {
// Attaching servo to pin 9
  servo.attach(servo_pin);  
}

void loop() {
  servo.write(90);  // sends appropriate signals for servo to move to center
  delay(1000);

  servo.write(180); // moves servo clockwise
  delay(1000);

  servo.write(0);   // moves servo counter clockwise
  delay(1000);


// sweeping servos from 0 to 180 degree at increment of 5 degree at each iteration.

  for(int pos = 0; pos<=180; pos += 5){
    servo.write(pos);
    delay(50);
  }
}
