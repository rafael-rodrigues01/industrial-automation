
int vermelho = 3;
int amarelo = 4;
int verde = 5;

void setup(){
    pinMode(vermelho, OUTPUT);    
    pinMode(amarelo, OUTPUT);  
    pinMode(verde, OUTPUT);  

}

void loop(){
  	digitalWrite(verde, 1);
  	delay(5000);
  	digitalWrite(verde, 0);
  
    digitalWrite(amarelo, 1);
  	delay(3000);
  	digitalWrite(amarelo, 0);
  
    digitalWrite(vermelho, 1);
    delay(5000);
  	digitalWrite(vermelho, 0);

}

