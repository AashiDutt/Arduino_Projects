
// This code represents even and odd numbers 
// writing user defined  function
int i = 0;
int e;

void setup() {
   Serial.begin(9600);
}

void loop() {
  e = isEven(i);
  
  Serial.print(i);
  Serial.print(": ");
  if(e==1){
    Serial.println("even");
  } else{
    Serial.println("odd");
  }
  i++;

  delay(500);
}

int isEven(int a){

  if( a % 2 == 0){
    return 1;
  } else {
    return 0;
  }
}

