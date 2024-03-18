/*
07- Somar cliques de um botão, e o led pisca em um intervalo de 1s a quantidade de vezes em que
Foi clicada.
Ex:     Cliquei uma vez, o led pisca 1x a cada 1s
    Cliquei duas vezes, o led pisca 2x a cada 1s
    Cliquei cinco vezes, o led pisca 5x a cada 1s.
*/

// C++ code
//
int contadorCliques = 1;
int botao = 6;
int led = 4;
bool botaoLigado = false;

void setup()
{	
  pinMode(botao, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  bool estadoBotao = digitalRead(botao);
  
  if(estadoBotao == true || botaoLigado == true) {
    botaoLigado = true;
    if(contadorCliques == 1) {
    	digitalWrite(led, 1);
      	digitalWrite(led, 0);
       	contadorCliques++;
      	delay(1000);
    } else if(contadorCliques == 2) {
    	digitalWrite(led, 1);
      	delay(250);
      	digitalWrite(led, 0);
      	delay(250);
      	digitalWrite(led, 1);
      	delay(250);
      	digitalWrite(led, 0);
      	delay(1000);
      	contadorCliques++;
    } else if (contadorCliques == 3) {
    	digitalWrite(led, 1);
      	delay(250);
      	digitalWrite(led, 0);
      	delay(250);
      	digitalWrite(led, 1);
      	delay(250);
      	digitalWrite(led, 0);
      	delay(250);
      	digitalWrite(led, 1);
      	delay(250);
      	digitalWrite(led, 0);
      	delay(250);
      	digitalWrite(led, 1);
      	delay(250);
      	digitalWrite(led, 0);
      	contadorCliques++;
      	delay(1000);
    
    }
    
  }
  
}