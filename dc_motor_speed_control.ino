
// this is a code for controlling speed of a dc motor.
// Gradually increasing and decreasng speed of motor.
// link to simulator
// https://www.tinkercad.com/things/dv3Zdup89EF-speedcontroldcmotor

const int motor_pin = 6;
 
void setup() {
  pinMode(motor_pin, OUTPUT);
}
 
void loop() {
  
  // Slowly increase motor speed
  for ( int i = 0; i < 256; i++ ) {
    analogWrite(motor_pin, i);
    delay(10);
  }
  
  // Slowly decrease motor speed
  for ( int i = 255; i <= 0; i-- ) {
    analogWrite(motor_pin, i);
    delay(10);
  }
}
