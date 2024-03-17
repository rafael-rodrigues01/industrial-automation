/*
06- Ao apertar o botão uma vez, liga um led. Ao apertar novamente, desliga o primeiro, liga o
Segundo. Ao apertar novamente, desliga o segundo liga o terceiro
*/

//Declaração de Variáveis
int vermelho1 = 3;
int amarelo1 = 4;
int verde1 = 5;
double tempo = 5000;
int botao = 7;
int contador = 0;

//void Setup
void setup() {
  pinMode(botao, INPUT);
    for(int i=3; i<=5; i++){
        pinMode(i, OUTPUT);
        //Define
    }
  Serial.begin(9600);
}

//Void Loop
void loop(){
  bool estadoBotao = digitalRead(botao);
  
  if (estadoBotao == true) {
    contador++;
    Serial.println(contador);
    if(contador == 2) {
    	digitalWrite(verde1, 0);
      	digitalWrite(amarelo1, 1);
      	delay(500);
      return;
    } else if (contador == 3) {
    	digitalWrite(amarelo1, 0);
      	digitalWrite(vermelho1, 1);
      	contador = 0;
      	delay(500);
      	return;
    }
  	digitalWrite(verde1, 1);
    digitalWrite(vermelho1, 0);
    delay(500);
  }

}