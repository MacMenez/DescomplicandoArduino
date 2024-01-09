void setup() {
    // Aqui coloque os códigos que vão rodar somente uma vez ao ligar o Arduino ou a resetá-lo
    pinMode(2, OUTPUT);// Declara o pino 2 como saída digital
}

void loop() {
    // Aqui coloque os códigos que vão rodar infinitamente até que o arduino seja desligado
    digitalWrite(2, HIGH);//Liga o pino 2
    delay(1000);//Aguarda 1 segundo
    digitalWrite(2, LOW);//Desliga o pino 2
    delay(1000);//Aguarda 1 segundo
}

