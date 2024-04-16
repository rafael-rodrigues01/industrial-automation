int red = 8;
int green = 9;
int yellow = 10;

void setup()
{
  for(int i = 8; i >= 10; i++) {
    pinMode(i, OUTPUT);
  }
  
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available() > 0) {
    char character = Serial.read();
  
    switch(character) {
      case 'R':
		printMessage(character, "red");
        digitalWrite(red, HIGH);
  		digitalWrite(green, LOW);
      	digitalWrite(yellow, LOW);
      	delay(500);
        break;
      case 'G':
      	printMessage(character, "green");
         digitalWrite(green, HIGH);
  		digitalWrite(red, LOW);
      	digitalWrite(yellow, LOW);
        break;
      case 'Y':
      	printMessage(character, "yellow");
        digitalWrite(yellow, HIGH);
  		digitalWrite(green, LOW);
      	digitalWrite(red, LOW);
      	delay(500);
        break;
      default:
        break;
    }
  }
}

void printMessage(char character, String cor) {
	Serial.print("Letra: ");
	Serial.print(character);
	Serial.println(" liga led " + cor);

}
