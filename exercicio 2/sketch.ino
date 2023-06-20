byte ledPin[] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
int ledDelay = 65;
int loopIndex = 0;
unsigned long changeTime;

void setup() {
  for (byte pin : ledPin) {
    pinMode(pin, OUTPUT);
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
  for (byte pin : ledPin) {
    digitalWrite(pin, LOW);
  }

  int ledInicio = loopIndex / 2;
  int ledFim = (loopIndex % 2 == 0) ? 9 : 9 - (loopIndex / 2);

  for (int x = ledInicio; x <= ledFim; x++) {
    digitalWrite(ledPin[x], HIGH);
  }

  loopIndex = (loopIndex + 1) % 20;
}
