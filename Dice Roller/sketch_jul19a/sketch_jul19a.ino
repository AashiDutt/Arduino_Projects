void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);

   // seed our random number generator
   randomSeed(analogRead(A0));
}

void loop() {
  String str;
  int num;
  
  Serial.println("Enter the number of sides on the die");
  while(str.equals("")){
    str =Serial.readString();
  }

  // convert input string into number
  num = str.toInt();

  // only roll the die if we have a positive number

  if ( num > 0){
    num = random(1, num+1);
    Serial.print("You rolled : ");
    Serial.println(num);
     
  }
  
}
