void setup()

{

pinMode(13, OUTPUT);

Serial.begin(9600);

while (!Serial);

Serial.println("Input 1 to Turn LED on and 0 to off");

}

void loop() {

if (Serial.available())

{

int state = Serial.parseInt();

if (state == 1)

{

digitalWrite(13, HIGH);

Serial.println("Command completed LED turned ON");

}

if (state == 0)

{

digitalWrite(13, LOW);

Serial.println("Command completed LED turned OFF");

}

}

}
