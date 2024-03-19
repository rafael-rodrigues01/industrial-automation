//Definindo variáveis
int bits = 0;
int led = 3;
int tempo = 0;

//void Setup
void setup(){
	pinMode(led, OUTPUT);
  
  //Monitor Serial
  Serial.begin(9600);
}

//void loop
void loop(){
	bits = analogRead(A0)/4;
  	Serial.println("bits antes do primeiro for: ");
	Serial.println(bits);
  
  if(bits == 0) {
    analogWrite(led, 0);
  	return;
  } else if (bits == 255) {
  	tempo = 4000 / 2;
  }
  
  for(int i = 0; i < 256; i++) {
    delay(tempo);
    Serial.println("bits dentro do primeiro for");
    Serial.println(i);
    analogWrite(led, i);
  }
  Serial.println("bits depois do primeiro for: ");
  Serial.println(bits);
  
   for(int i = 256; i >= 0; i--) {
    delay(tempo);
    Serial.println("bits dentro do segundo for");
    Serial.println(i);
    analogWrite(led, i);
  }
  
  Serial.println("bits depois do segundo for: ");
  Serial.println(bits);
}