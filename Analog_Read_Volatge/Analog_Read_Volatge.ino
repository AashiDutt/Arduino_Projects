// code to check volatge of a volatage divider circuit
// link to simulator
// https://www.tinkercad.com/things/7902QspGWiw-reading-analog-voltage/editel


const int ain_pin =A0;

void setup() {
 Serial.begin(9600);
 
}

void loop() {
  int val = analogRead(ain_pin);
  float volatage = val * 5.0 / 1023;

  Serial.println(voltage);
  delay(100);
}
