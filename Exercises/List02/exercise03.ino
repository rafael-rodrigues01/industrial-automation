//03 - Criar um contador que vai do zero ao nove e depois do nove ao zero com um clique do botão.

//Declarar Variáveis
int displaySeteSeg[10][7] = { 
  
 { 1,1,1,1,1,1,0 },  //DIGITO 0
 { 0,1,1,0,0,0,0 },  //DIGITO 1
 { 1,1,0,1,1,0,1 },  //DIGITO 2
 { 1,1,1,1,0,0,1 },  //DIGITO 3
 { 0,1,1,0,0,1,1 },  //DIGITO 4
 { 1,0,1,1,0,1,1 },  //DIGITO 5
 { 1,0,1,1,1,1,1 },  //DIGITO 6
 { 1,1,1,0,0,0,0 },  //DIGITO 7
 { 1,1,1,1,1,1,1 },  //DIGITO 8
 { 1,1,1,1,0,1,1 }   //DIGITO 9
 
};

int contador = 0;


int botao = 2;
bool botaoPressionado = false;


int a = 3;
int b = 4;
int c = 5;
int d = 6;
int e = 7;
int f = 8;
int g = 9;

void setup(){
    pinMode(botao, INPUT);

    for(int i = 0; i <=9 ; i++){
        pinMode(i, OUTPUT);
    }

    Serial.begin(100);

}

void loop(){
    bool estadoBotao = digitalRead(botao);
  
    if(digitalRead(botao) == HIGH || botaoPressionado == true){
        delay(500);
      	botaoPressionado = true;
      if (contador == 9) {
        for (int i = 9; i > 0; i--) {
          if (contador == i) {
          	contador--;
            ligaLeds(contador);
          }
        }
      }else {
        contador++;
      }
      	
      
      if (contador == 9) {
      	contador = 9;
        ligaLeds(contador);
      } else {
        ligaLeds(contador);
      }
    }
}

void ligaLeds(int numero){
	int pino = 3;
   
  for (int contadorSegmentos = 0; contadorSegmentos < 7; ++contadorSegmentos){ 
    digitalWrite(pino, displaySeteSeg[numero][contadorSegmentos]);
    ++pino; 
  }
}