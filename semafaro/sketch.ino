int red = 8;
int green = 9;
int yellow = 10;
int tempoEspera = 10000;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
}

void loop() {
  digitalWrite(red, HIGH);
  delay(tempoEspera);
  
  digitalWrite(yellow, HIGH);
  delay(2000);

  digitalWrite(green, HIGH);
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  delay(tempoEspera);

  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
  delay(2000);

  digitalWrite(yellow, LOW);
}
