https://www.tinkercad.com/things/delh52MaYBe-semaforo/editel?returnTo=%2Fdashboard%3Ftype%3Dcircuits%26collection%3Ddesigns&sharecode=XWRWopTfZf8teVaj8P7G0GReCh9l79zQl2GBVbi-hj4

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
int vermelho = 3;
int amarelo = 4;
int verde = 5;
int tempo_intermitente = 1000;
int botao = 2;

//tem energia -> DigitalRead() retorna 1
// não tem energia -> DigitalRead retorna 0


//void setup
void setup(){
    //Determina que os pinos 3,4,5 serão saídas.
    pinMode(vermelho, OUTPUT);
    pinMode(amarelo, OUTPUT);
    pinMode(verde, OUTPUT);
    pinMode(botao, INPUT);

    controlaCor(amarelo, 1000, false);
    controlaCor(amarelo, 1000, false);
    controlaCor(amarelo, 1000, false);

}


//{tipo do retorno} {nome da função} (parâmetros)
//void loop
void loop(){
    //bla bla bla, minha lógica.
    //Criar uma função para controlar as cores.

    //digitalWrite(pino, HIGH ou LOW), o HIGH é ligado e o L    
    //LÊ UM DETERMINADO PINO, 
    //Sintaxe: digitalRead(pino) -> Retorna true ou false
    //Só lê pinos configurados como input.
    
    bool estadoBotao = false;
    estadoBotao = digitalRead(botao);

    //Desvio condicional.
    /*
        Se acontecer algo, faz isso.
        Senão, faz aquilo.

        sintaxe:
        if(condição){

        }

        condições aceitas
            1= atribuição 2= comparação
            relacionais
            igualdade -> ==
                3 == 2 false
                1 == 1 true
                1 == 0 false

            desigualdade -> != (exclamação igual)
                3 != 3 false
                3 != 5 true
                1 != 1 false

            (js)estritamente igual -> ===
                3 == 3 true
                3 === 3 true
                3 === "3" false
                3 == "3" true

            maior que -> >
                3 > 1 true
                1 > 1 false
                10 > 10 false
                12 > 5 true

            menor que -> <
                3 < 2 false
                3 < 5 true
                3 < 3 false
                -1 < -4 true

            maior ou igual a -> >=
                1 >= 3 false
                3 >= 5 false
                5 >= 5 true

            menor ou igual a -> <=
                1 <= 3 true
                10 <= 2 false
                0 <= 5 true

            
            lógicos

            and -> &&
            as duas condições sejam verdadeiras, para ser verdadeiro.
                1 > 3 && 3 > 5 false
                10 > 5 && 5 > 10 false
                10 > 5 && 5 > 3  true


            or -> ||
            a uma ou ambas as condições verdadeiras, o sistema é verdadeiro.
                3 > 1 || 1 > 3 true
                10 <= 3 || 4 != 4 false
                estadoBotao == false || contador == 2 (contador = 2)  true

            
            not -> !
            ele inverte ou testa o contrário da condição atual.
                if(!estadoBotao) (estado botao = false);
            
            
            existe ou não
            if(estadoBotao){
                if(!estadoBotao){

                }
            }
    
    */


   if(estadoBotao == true){
    digitalWrite(verde, 1);
   }
    

}
//Função serve para controlar a cor que eu quiser, pelo tempo que eu quiser.
int controlaCor (int cor, int tempo, bool esta_no_loop) {
    digitalWrite(cor, 1);
    delay(tempo);
    digitalWrite(cor, 0);
    
    if(esta_no_loop == false){
        delay(tempo);
        return 0;
        //se bateu aqui, é por que a função foi chamada no setup
    }
    else{
        return 1;
        //se bateu aqui, é por que a função foi chamada no Loop
    }
}








