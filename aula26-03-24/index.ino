/*

Faça um circuito em arduino (tinkercad) que contenha:
   - led RGB (opcional 3 leds)
   - buzzer
   - sensor de iluminação
   
Problema, controlar a iluninação de um armazém. 
Vamos supor que controlamos a iluminação, abrindo e fechando as cortinas. 
Como não temos cortina no tinkercad, vamos usar o buzzer para sinalizar que acionamos a ligação da cortina.

Caso iluminação seja:
  - Nivel 1: até 50%, led cor verde
  - Nivel 2: até 75%, led cor amarelo
  - Nivel 3: senão, led cor vermelha

O Buzzer deve "apitar" de acordo com o nível. Obs.: Apenas quando mudar de nível.

*/

#define FOTO A0

const int LED_VAV[] = {9,10,11};
const int BUZZ = 2;
int ledALigar = 0;
bool ledLigado = false;

int sensor = 0;

void setup()
{
  for (int i=0; i<3; i++){
    pinMode(LED_VAV[i], OUTPUT);
  }
  pinMode(BUZZ, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
	const int luz = iluminacao();
  
  	Serial.println(luz);
 
  
  if(luz >= 500 && luz <= 1017) {
 	ledALigar = 1;
  } else if (luz >= 390 && luz <= 500) {
    ledALigar = 2;
  } else {
  	ledALigar = 3;
  }
  
  
  
  if(ledALigar == 1 && ledLigado == false) {
    ledLigado = true;
    apito();
    verde();
    
  } else if(ledALigar == 2 && ledLigado == false) {
    ledLigado = true;
    apito();
    amarelo();
    
  } else if(ledALigar == 3 && ledLigado == false) {
    ledLigado = true;
    apito();
    vermelho();
    
  }
}

int iluminacao() {
  sensor = analogRead(FOTO);
  delay(1000);
  return sensor;
  
}

int apito() {
  tone(BUZZ, 220,100);
}


void verde () {
	  analogWrite(LED_VAV[0], 0);
      analogWrite(LED_VAV[1], 0);
      analogWrite(LED_VAV[2], 200);
      delay(500);
}

void amarelo () {
  analogWrite(LED_VAV[0], 200);
  analogWrite(LED_VAV[1], 0);
  analogWrite(LED_VAV[2], 200);
  delay(500);
}

void vermelho () {
	 analogWrite(LED_VAV[0], 200);
    analogWrite(LED_VAV[1], 0);
    analogWrite(LED_VAV[2], 0);
    delay(500);
}