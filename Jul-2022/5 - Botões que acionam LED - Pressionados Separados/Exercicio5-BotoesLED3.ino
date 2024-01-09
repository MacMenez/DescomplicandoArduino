void setup() {
    // Aqui coloque os códigos que vão rodar somente uma vez ao ligar o Arduino ou a resetá-lo
    pinMode(2, OUTPUT);// Declara o pino 2 como saída digital
    pinMode(5, INPUT_PULLUP);// Declara o pino 5 como entrada digital com resistor de pull-up interno
    pinMode(6, INPUT_PULLUP);// Declara o pino 6 como entrada digital com resistor de pull-up interno
}

// Comentario um única linha

/*
Comentario
multiplas
linhas
*/

void loop() {// Aqui coloque os códigos que vão rodar infinitamente até que o arduino seja desligado  
    if(digitalRead(5) == 0 || digitalRead(6) == 0){ // Se pressionei qualquer um dos botões
        digitalWrite(2, HIGH);//Liga o pino 2
    }else{//se não
        digitalWrite(2, LOW);//Desliga o pino 2
    }
}