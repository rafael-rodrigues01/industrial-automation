/*
10 - Crie uma lógica a qual o botão deve ligar o led somente se um dos dois botões for pressionado. Se ambos
Forem pressionados juntos, o led não deve ligar.
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
  if(digitalRead(botao1) == 1 && digitalRead(botao2) == 1) {
  	digitalWrite(led, 0);
    return;
  }
  
   if(digitalRead(botao1) == 1) {
  	digitalWrite(led, 1);
  }
  
  if(digitalRead(botao2) == 1) {
  	digitalWrite(led, 1);
  }

}