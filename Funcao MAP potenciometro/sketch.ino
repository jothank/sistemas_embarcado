const int potenciometro = 0;
int valor = 0.0;
int valor_mapeado;

void setup() {
  Serial.begin(9600);
}

void loop() {
  valor = analogRead(potenciometro);
  valor_mapeado = map(valor, 0, 1023, 0, 255);
  Serial.println(valor_mapeado);
  delay(200);
}
