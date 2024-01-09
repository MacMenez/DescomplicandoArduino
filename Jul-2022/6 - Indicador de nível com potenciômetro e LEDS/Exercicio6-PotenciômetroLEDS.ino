void setup(){// Aqui coloque os códigos que vão rodar somente uma vez ao ligar o Arduino ou a resetá-lo
    pinMode(2, OUTPUT);// Declara o pino 2 como saída digital
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);

}

void loop(){// Aqui coloque os códigos que vão rodar infinitamente até que o arduino seja desligado
  
    if(analogRead(A0) >= 0 && analogRead(A0) <= 170){// Se a leitura analógica do potênciometro for entre 0 e 170
        digitalWrite(2, LOW);//Desliga o pino 2
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
    }

    if(analogRead(A0) > 170 && analogRead(A0) <= 340){
        digitalWrite(2, HIGH); //Liga o pino 2
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
    }
    
    if(analogRead(A0) > 340 && analogRead(A0) <= 510){
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
    }

    
    if(analogRead(A0) > 510 && analogRead(A0) <= 680){
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
    }

    if(analogRead(A0) > 680 && analogRead(A0) <= 850){
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, LOW);
    }

    if(analogRead(A0) >=1020){
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
    }
}
