// Code to Debounce signal and avoid automatic bouncing
// link to simulator
// 

const int btn_pin = 2;
const int debounce_delay =50; // ms
// we require debounce to make sure that microcontroller does not 
// consider state change automatically

// Globals
 int counter =0;
 int btn_state = HIGH;
 int btn_prev = HIGH;
 unsigned long last_debounce_time = 0;

void setup() {
  pinMode(btn_pin, INPUT_PULLUP);
  Serial.begin(9600);
   
}

void loop() {
  int btn_read = digitalRead(btn_pin);

  // when button chages state
  if( btn_read != btn_prev ){
    last_debounce_time = millis();
  }
  // wait before checking the state of button again
  if(millis() > (last_debounce_time + debounce_delay)){
    if( btn_read != btn_state){
      btn_state = btn_read;
      if(btn_state == LOW){
        counter++;
        Serial.println(counter);
        
      }
    }
  }
// remeber the previous state for next loop()
   btn_prev = btn_read;
}
