
// This is a code for interfacing Temperature Sensor TMP36 with arduino
// link to simulator 
// click on serial monitor for temperature update
// https://www.tinkercad.com/things/k7hnneTuBp6-tmp36temperaturesensor

const int temp_pin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
 float voltage;
 float temp_c;

 // read voltage and convert it to temperature in degree celsius

 voltage = analogRead(temp_pin) * 5.0 / 1023;
 temp_c = 100.0 * voltage - 50;

 // print voltage and temperature

 Serial.print("Voltage: ");
 Serial.print(voltage);
 Serial.print("   Temperature in degree C: ");
 Serial.println(temp_c);

 delay(500);
}
