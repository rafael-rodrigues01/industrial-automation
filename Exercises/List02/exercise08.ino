/*
08- Escreva um programa que acenda o LED sempre que o sensor de movimento detectar
movimento e o apague após um intervalo de tempo.
*/


// C++ code
//
int botao = 6;
int led = 4;

void setup () {
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT);
  Serial.begin(9600);
}

void loop () {
	bool estadoBotao = false;
    estadoBotao = digitalRead(botao);
  
  if (estadoBotao == true) {
    digitalWrite(led, 1);
    return;
  }
  delay(2000);
  digitalWrite(led, 0);

}