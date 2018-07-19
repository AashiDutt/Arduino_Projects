// led blink
// 1st led blinks once 
// 2nd led blinks twice
// 3rd led blinks thrice
// simulation of this code : https://www.tinkercad.com/things/ecScr4Di9mx-fantastic-jaagub-wluff

const int led_1_pin = 2;
const int led_2_pin =3;
const int led_3_pin =4;
void setup() {
  // put your setup code here, to run once:
  pinMode(led_1_pin, OUTPUT);
  pinMode(led_2_pin, OUTPUT);
  pinMode(led_3_pin, OUTPUT);
}

void loop() {

  // MAKE LED 1 BLINK ONCE
  digitalWrite(led_1_pin ,HIGH);
  delay(500);
  digitalWrite(led_1_pin ,LOW);
  delay(500);

  //MAKE LED 2 BLINK TWICE

  digitalWrite(led_2_pin, HIGH);
  delay(500);
  digitalWrite(led_2_pin, LOW);
  delay(500);
   digitalWrite(led_2_pin, HIGH);
  delay(500);
   digitalWrite(led_2_pin, LOW);
  delay(500);

  //MAKE LED 3 BLINK THRICE

  for(int i = 0; i<3;i++){
    digitalWrite(led_3_pin,HIGH);
    delay(500);
    digitalWrite(led_3_pin, LOW);
    delay(500);
  }
  }


