/*
09- O botão 1 liga o led permanentemente, o botão 2 desliga o led permanentemente, e se pressionados,
Ambos ao mesmo tempo, o led ficará piscando até que se solte um deles. O botão que ficar pressionado,
mantém o led no estado em que deve estar.
*/

//Declaração de Variáveis
int led = 3;
int botao1 = 6;
int botao2 = 4;

//void setup
void setup(){
  	pinMode(botao1, INPUT);
  	pinMode(botao2, INPUT);
    pinMode(led, OUTPUT);
}

//void loop
void loop(){
  if(digitalRead(botao1) == 1) {
  	digitalWrite(led, 1);
  }
  
  if(digitalRead(botao2) == 1) {
  	digitalWrite(led, 0);
  }
  
  if(digitalRead(botao1) == 1 && digitalRead(botao2) == 1) {
  	digitalWrite(led, 1);
    delay(500);
    digitalWrite(led, 0);
    delay(500);
  }

}