// This is a code for building a Larson Scanner using
// arduino , Shift Register and led interface
// link to simulator
// https://www.tinkercad.com/things/3wV3efTJyqz-larsonscanner

// Pins
const int data_pin =2;
const int clock_pin = 3;
const int latch_pin = 4;

void setup() {
  pinMode(data_pin ,OUTPUT);
  pinMode(clock_pin, OUTPUT);
  pinMode(latch_pin , OUTPUT);
  
}

void loop() {
  // B = binary number
  byte x =B10000000;
  byte y =B00000001;
  for(int i =0;i<8;i++){
    shiftDisplay(x);
    x = x >>1; // bitwise right shift x on every iteration
    delay(100);
    
  }
   for(int i =0;i<8;i++){
    shiftDisplay(y);
    y = y << 1; // bitwise left shift x on every iteration
    delay(100);
   }

}


// for transfer to take place 1st latch is initiated to low indictes a signal is about to come
// on completion of transfer turn latch pin to HIGH

void shiftDisplay(byte data){
  digitalWrite(latch_pin, LOW);
 // shiftout is a built-In function that sends a single byte serially n a pin.
 // LSBFIRST = Least Significant Bit First
 // MSBFIRST =Most Significant Bit First
 
  shiftOut(data_pin, clock_pin,LSBFIRST , data);
  digitalWrite(latch_pin, HIGH);
}

