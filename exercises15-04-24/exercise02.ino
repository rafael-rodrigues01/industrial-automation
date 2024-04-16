// C++ code
//

int led = 5;

void setup()
{
  pinMode(led, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  
  int i = 0;
  
  for(i = 0; i <= 255; i++){
    analogWrite(led, i);
    Serial.println("Brilho = " + String(i));
    delay(50);
  }
  
  for(i = 255; i>= 0; i--) {
  	analogWrite(led, i);
     Serial.println("Brilho = " + String(i));
    delay(50);
  }
  
}