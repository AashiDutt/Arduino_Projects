
// This code is an interfacing of arduino with vibrational motor.
// link to simulator
// https://www.tinkercad.com/things/8xtQyXLHPBP-dcmotorinterface

const int motor = 6;
void setup() {
  pinMode(motor,OUTPUT);
}

void loop() {
  digitalWrite(motor ,HIGH);
  delay(500);
  digitalWrite(motor, LOW);
  delay(500);

}
