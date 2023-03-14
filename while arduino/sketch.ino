int x=10;

void setup() {
  Serial.begin(9600);
}

void loop() {
  while(x <= 10 && x > 0){
    Serial.println(x);
    delay(1000);
    x--;
  }
}
