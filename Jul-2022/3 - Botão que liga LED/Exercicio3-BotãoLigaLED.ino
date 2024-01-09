void setup() {// Aqui coloque os códigos que vão rodar somente uma vez ao ligar o Arduino ou a resetá-lo
    pinMode(2, OUTPUT);// Declara o pino 2 como saída digital
    pinMode(5, INPUT_PULLUP);// Declara o pino 5 como entrada digital com resistor de pull-up interno
}
// Comentario

/*
Comentarios
comentarios
 */
void loop() {
    // Aqui coloque os códigos que vão rodar infinitamente até que o arduino seja desligado
    if(digitalRead(5) == 0){ // Se pressionei o botão
        digitalWrite(2, HIGH);// Liga o LED ligado ao pino 2  
    }else{//Se não
        digitalWrite(2, LOW);// Desliga o LED ligado ao pino 2
    }
}