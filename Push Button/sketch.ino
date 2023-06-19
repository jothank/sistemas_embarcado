int led = 4;
int botao = 3;
int estadoBotao = 0;
int contador = 0;

void setup () {
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT);
}

void loop () {
  estadoBotao = digitalRead(botao);
  digitalWrite(led, HIGH);
  if (estadoBotao == HIGH) {
    contador++;
    if (contador > 4) {
      digitalWrite(led, LOW);
      delay(2000);
      contador = 0;
    }
  }
}