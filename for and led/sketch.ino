void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  int i;
  for(i = 0; i <= 10; i++){
    digitalWrite(13, HIGH);
    delay(100);
    digitalWrite(13, LOW);
    delay(100);
  }
    delay(100);
}
