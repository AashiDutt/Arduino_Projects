//Code to interface ultrasonic sensor to arduino
// link to circuit 
//https://www.tinkercad.com/things/8t2V0zM9a9y-ultrasonicsensorinterfacingwitharduino/editel

const int trig_pin = 7;
const int pw_pin =7;
const int trig_delay = 5; // microseconds


void setup() {
 Serial.begin(9600);
}

void loop() {
 long duration ;
 float cm;

 // tell distance to send out a pulse
 pinMode(trig_pin ,OUTPUT);
 digitalWrite(trig_pin, LOW);
 delayMicroseconds(10);
 digitalWrite(trig_pin, HIGH);
 delayMicroseconds(trig_delay);
 digitalWrite(trig_pin, HIGH);

 // measure time of pulse on PW pin
 pinMode(pw_pin, INPUT);
 duration = pulseIn(pw_pin, HIGH);


 // convert time to distance
 cm = duration / 58.8;
 Serial.print(cm);
 Serial.println(" cm ");

 delay(100);

}
