int botao = 12;

void setup()
{
  pinMode(botao, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  int state = digitalRead(botao);
  
  if(state == 1) {
  	Serial.print("ON: ");
    Serial.println(state);
    delay(500);
    return;
  }
  
  	Serial.print("OFF: ");
    Serial.println(state);
  	delay(500);
}