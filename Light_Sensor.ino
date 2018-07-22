
// Light Sensor with arduino
// link to simulator
// https://www.tinkercad.com/things/8bRqG58GxDo-epic-snaget-wolt/editel?tenant=circuits

const int light_pin = A0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  
  int light_val = analogRead(light_pin);

  // returns value between 0 -1023 (0V -5V)

  Serial.println(light_val);
  delay(100);

}
