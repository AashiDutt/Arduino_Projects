// Write an Arduino program that prints integers that
//count up from 1,
//except that for every multiple of 3 (3, 6, 9, 12, etc.),
//an LED attached to pin 5 flashes on for 0.5 seconds.
// ckt link below
https://www.tinkercad.com/things/2eg9DQvm5Fx-mighty-stantia-hillar/editel


int i;
const int led= 13;
void setup() {
  Serial.begin(9600);
  pinMode(led , OUTPUT);
}

void loop() {
  for(i=1;i<30;i++){
   if(i % 3 == 0){
    digitalWrite(led , HIGH);
    delay(500);
    digitalWrite(led , LOW);
    delay(500);
   }else{
    Serial.println(i);
   }
  }

}
