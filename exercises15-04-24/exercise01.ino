
int led = 13;

void setup()
{
  pinMode(led, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(led, HIGH);
  Serial.println("Entrada: Ligado");
  delay(1000);
  digitalWrite(led, LOW);
  Serial.println("Saida: Desligado");
  delay(1000); 
}