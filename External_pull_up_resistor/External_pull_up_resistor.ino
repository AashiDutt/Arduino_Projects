const int btn_pin = 2;
const int led_pin = 6;


void setup() {
  pinMode(btn_pin, INPUT);
  pinMode(led_pin, OUTPUT);
  
}

void loop() {
  if( digitalRead(btn_pin) == LOW ){
    // returns 0 for 0V  Button Pressed
    // returns 1 for 5V  Button Not Pressed
    digitalWrite(led_pin, HIGH);
    }else {
      digitalWrite(led_pin, LOW);
    }

}
