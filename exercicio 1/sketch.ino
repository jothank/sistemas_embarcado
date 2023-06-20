const int ledPins[] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
const int numLeds = sizeof(ledPins) / sizeof(int);

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(65);
    digitalWrite(ledPins[i], LOW);
    digitalWrite(ledPins[numLeds - i - 1], HIGH);
    delay(65);
    digitalWrite(ledPins[numLeds - i - 1], LOW);
  }
}
