const int pwm_pin =9;
const int dir_1a_pin = 8;
const int dir_2a_pin = 7;

void setup() {
  pinMode(pwm_pin, OUTPUT);
  pinMode(dir_1a_pin,OUTPUT);
  pinMode(dir_2a_pin,OUTPUT);
  
}

void loop() {

  // one direction at half speed
  digitalWrite(dir_1a_pin, HIGH);
  digitalWrite(dir_2a_pin, LOW);
  analogWrite(pwm_pin, 127);
  delay(1000);

  // stop spinning
  analogWrite(pwm_pin, 0);
  delay(1000);

  // other direction at full speed
  digitalWrite(dir_1a_pin, LOW);
  digitalWrite(dir_2a_pin , HIGH);
  analogWrite(pwm_pin, 255);
  delay(10000);

  // Brake
  digitalWrite(dir_1a_pin,LOW);
  digitalWrite(dir_2a_pin,LOW);
  analogWrite(pwm_pin, 0);
  delay(1000);
}
