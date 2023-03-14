int pino13 = 13;

void setup() {
    pinMode(pino13, OUTPUT);
}

void loop() {
  for(int x = 0; x < 3; x++){
    digitalWrite(pino13, HIGH);
    delay(150);
    digitalWrite(pino13, LOW);
    delay(100);
  }

  delay(100);

  for(int x = 0; x < 3; x++){
    digitalWrite(pino13, HIGH);
    delay(400);
    digitalWrite(pino13, LOW);
    delay(100);
  }

  delay(100);

  for(int x = 0; x < 3; x++){
    digitalWrite(pino13, HIGH);
    delay(400);
    digitalWrite(pino13, LOW);
    delay(100);
  }

  delay(100);

  for(int x = 0; x < 3; x++){
    digitalWrite(pino13, HIGH);
    delay(150);
    digitalWrite(pino13, LOW);
    delay(100);
  }

  delay(5000);

}
