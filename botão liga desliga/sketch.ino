int estado = 0;
int contador = 0;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, INPUT);
}

void loop() {
  estado = digitalRead(12);

  if (estado == HIGH) {
    digitalWrite(13, HIGH);
    contador++;

    if (contador == 5) {
      digitalWrite(13, LOW);
      delay(2000);
      digitalWrite(13, HIGH);
      contador = 0;
    }
  }
}
