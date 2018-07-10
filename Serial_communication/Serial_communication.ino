void setup() {
  // put your setup code here, to run once:
  // code for serial communication
Serial.begin(9600);  // 9600 bits per second (speed of communication)
Serial.println("starting");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("A "); //used to transit letters for comm.
  delay(1000);
  Serial.println("B");
  delay(1000);
}
