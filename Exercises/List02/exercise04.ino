//04- Os leds devem ir ligando e desligando continuamente em sequência:
//Ex: Liga led 1, desliga led 1, liga led 2, desliga led 2, liga led 3, desliga led 3, … Loop O tempo inicia em 5ms e termina em 5s (subindo 15% a cada loop).



//Declaração de Variáveis
int vermelho1 = 3;
int amarelo1 = 4;
int verde1 = 5;
double tempo = 5;

//void Setup
void setup() {
    for(int i=3; i<=5; i++){
        pinMode(i, OUTPUT);
        //Define
    }
  Serial.begin(9600);
}

//Void Loop
void loop(){
    farolDasRuas(verde1, tempo);
    farolDasRuas(amarelo1, tempo);
    farolDasRuas(vermelho1, tempo);
}

void farolDasRuas(int cor, double tempo){
    digitalWrite(cor, 1);
    Serial.print("tempo: ");
    Serial.println(String(tempo));
    tempo *= 0.15;
    Serial.print("tempo alterado: ");
    Serial.println(String(tempo));
    delay(tempo);
    digitalWrite(cor, 0);
}