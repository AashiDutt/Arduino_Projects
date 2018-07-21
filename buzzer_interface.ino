// this is  a code for buzzer interface with arduino
// link to simulator
// https://www.tinkercad.com/things/2NId0mY2jjV-buzzer-interface
const int speaker_pin = 9;
void setup() {
  pinMode(speaker_pin , OUTPUT);
}

void loop() {
  tone(speaker_pin,440,500);
  // (pin, frequncy in Hz,length of note (ms))
  delay(1000);

}
