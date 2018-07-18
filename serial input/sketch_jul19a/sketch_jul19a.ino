// READING SERIAL INPUT

void setup() {
  Serial.begin(9600); 
}

void loop() {
  
String fname = "";  // create empty strings
String lname = "";

Serial.println("Enter your first name");

// if string is still empty read the new string 
// else break out of the loop

while( fname.equals("")){
  fname = Serial.readString();
}

 Serial.println("enter your last name");
 while( lname.equals("")){
  lname = Serial.readString();
 }
 
 // concatinating first and last name
 fname.concat(" ");
 fname.concat(lname);

// Print the output
 Serial.print("Hello, ");
 Serial.println(fname);
 Serial.println();  
}
