

/* 

O semáforo deve conter  as seguintes funções:
Iniciar no amarelo piscante, por 3x.

depois que iniciou, ele vai ficar em repetição.
fazendo a seguinte ordem:

Verde (5s)
Amarelo (3s)
Vermelho (5s)

*/

//Declaração das variáveis GLOBAIS
int greenCar = 5;
int yellowCar = 4;
int redCar = 3;
int pedestrianGreen = 6;
int pedestrianRed = 7;
int botao = 2;



//tem energia -> DigitalRead() retorna 1
// não tem energia -> DigitalRead retorna 0
	
void setup(){
    pinMode(greenCar, OUTPUT);
    pinMode(yellowCar, OUTPUT);
    pinMode(redCar, OUTPUT);
    pinMode(pedestrianGreen, OUTPUT);
    pinMode(pedestrianRed, OUTPUT);
    pinMode(botao, INPUT);

    attachInterrupt(digitalPinToInterrupt(botao), crossing, CHANGE);

}

void loop(){
  digitalWrite(greenCar, 1);
  digitalWrite(pedestrianRed, 1);

  delay(1000);

  digitalWrite(greenCar, 0);
  digitalWrite(yellowCar, 1);

  delay(500);

  digitalWrite(yellowCar, 0);
  digitalWrite(pedestrianRed, 0);
  delay(200);
  digitalWrite(pedestrianRed, 1);
  delay(200);
  digitalWrite(pedestrianRed, 0);
  delay(200);
  digitalWrite(pedestrianRed, 1);
  delay(200);
  digitalWrite(pedestrianRed, 0);
  delay(200);
  digitalWrite(redCar, 1);
  digitalWrite(pedestrianGreen, 1);

  delay(1000);

  digitalWrite(redCar, 0);
  digitalWrite(pedestrianGreen, 0);

}

void crossing () {
  digitalWrite(greenCar, 0);
  digitalWrite(yellowCar, 0);
  digitalWrite(redCar, 0);
  digitalWrite(pedestrianGreen, 0);
  digitalWrite(pedestrianRed, 0);

  digitalWrite(greenCar, 1);
  digitalWrite(pedestrianRed, 1);

  delay(100);

  digitalWrite(greenCar, 0);
  digitalWrite(yellowCar, 1);

  delay(50);

  digitalWrite(yellowCar, 0);
  digitalWrite(pedestrianRed, 0);
  delay(20);
  digitalWrite(pedestrianRed, 1);
  delay(20);
  digitalWrite(pedestrianRed, 0);
  delay(20);
  digitalWrite(pedestrianRed, 1);
  delay(20);
  digitalWrite(pedestrianRed, 0);
  delay(20);
  digitalWrite(redCar, 1);
  digitalWrite(pedestrianGreen, 1);

  delay(100);

  digitalWrite(redCar, 0);
  digitalWrite(pedestrianGreen, 0);
}
