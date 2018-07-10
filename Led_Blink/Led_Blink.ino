void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT); // defines pin 13 as output pin used in o/p mode

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH); // writing value high to pin 13 ( +5 V)
  delay(250);           // creates delay of 1s i.e 1000ms
  digitalWrite(13,LOW);
  delay(250);
}
