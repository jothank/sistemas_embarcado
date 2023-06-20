byte ledPin[] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
int pPin = A0;
int direcao = 1;
int ledCorrente = 0;

void setup() {
  for (byte pin : ledPin) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  int pValue = analogRead(pPin);
  int ledDelay = map(pValue, 0, 1023, 10, 1000);

  digitalWrite(ledPin[ledCorrente], LOW);
  ledCorrente += direcao;
  digitalWrite(ledPin[ledCorrente], HIGH);

  if (ledCorrente == 9 || ledCorrente == 0) {
    direcao = -direcao;
  }

  delay(ledDelay);
}
