void setup() {
    // Aqui coloque os códigos que vão rodar somente uma vez ao ligar o Arduino ou a resetá-lo
    pinMode(2, OUTPUT); // Declara o pino 2 como saída digital
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
}

void loop() {
    // Aqui coloque os códigos que vão rodar infinitamente até que o arduino seja desligado
    digitalWrite(2, HIGH);//Liga o pino 2
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    delay(1000);//Aguarda 1 segundo
    digitalWrite(2, LOW);//Desliga o pino 2
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    delay(1000);//Aguarda 1 segundo
}