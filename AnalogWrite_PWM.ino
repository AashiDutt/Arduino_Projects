// code for PWM inbuilt in arduino (hardware at digital pins 3,5,6)
// using Analog Write which helps in varying duty cycle thus helps in dimming of LED.
// link to circuit
//https://www.tinkercad.com/things/975aKmINXXz-pwmusinganalogwrite

const int led_1_pin = 3;
const int led_2_pin = 5;
const int led_3_pin = 6;
void setup() {
  pinMode(led_1_pin, OUTPUT);
  pinMode(led_2_pin, OUTPUT); 
  pinMode(led_3_pin, OUTPUT);

 // analogWrite with diffrent duty cycles(duty cycle = T(on) /(T(on) + T(off)) ) or 
 // change the voltage levels
  analogWrite(led_1_pin , 5);
  analogWrite(led_2_pin , 20);
  analogWrite(led_3_pin , 255);
}

void loop() {
 

}
