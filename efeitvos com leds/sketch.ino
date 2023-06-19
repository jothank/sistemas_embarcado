byte ledPin[] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
int ledDelay(65);
int direcao = 1;
int ledCorrente = 0;
unsigned long changeTime;

void setup() {
  for (int x = 0; x < 10; x++) {
    pinMode(ledPin[x], OUTPUT);
  }
  changeTime = millis();
}

void loop() {
  if ((millis() - changeTime) > ledDelay) {
    changeLED();
    changeTime = millis();
  }
}

void changeLED() {
  for (int x = 0; x < 10; x++) {
    digitalWrite(ledPin[x], LOW);
  }

  digitalWrite(ledPin[ledCorrente], HIGH);
  ledCorrente += direcao;

  if (ledCorrente == 9) {
    direcao = -1;
  }

  if (ledCorrente == 0) {
    direcao = 1;
  }
}