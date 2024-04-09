//Vamos começar, fazendo uma função básica.

int vermelho = 7;
int amarelo = 6;
int verde = 5;
int azul = 4;
int laranja = 3;
int branco = 2;

int pot = 0;
int tempo = 0;
String opcao = "";

void setup() {
    //Iniciar o Monitor Serial.
    Serial.begin(9600);
    Serial.println("Inicializando...");

    //Vai definindo todos como output, quando
    //passar por cada i.

    for (int i = 2; i <= 7; i++) {
        pinMode(i, OUTPUT);
        String valor = "Definindo pino: ";
        Serial.println(valor + i);
        delay(500);
    }

    Serial.println("Sistema Pronto!");
}

void loop() {
    pot = analogRead(A0);
    tempo = map(pot, 0, 1023, 5000, 200);

    //cria uma mensagem para interação do usuário
    Serial.println("Pressione C para Crescente");
    Serial.println("Pressione D para Decrescente");

    if (Serial.available() > 0) {
        opcao = Serial.readString();
        String message = "Tempo em ms: ";

        //Serial.println(opcao);

        if (opcao == "D" || opcao == "C") {
            Serial.println(message + tempo);
            controla(opcao);
        } else {
            Serial.println("Opção Indesejada");
        }
    }
}

void controla(String sentido) {
    if (sentido == "C") {
        Serial.println("Crescente");
        for (int i = 2; i <= 7; i++) {
            digitalWrite(i, HIGH);
            delay(tempo);
            digitalWrite(i, LOW);
        }
    } else if (sentido == "D") {
        Serial.println("Decrescente");
        for (int i = 7; i >= 2; i--) {
            digitalWrite(i, HIGH);
            delay(tempo);
            digitalWrite(i, LOW);
        }
    }
}
