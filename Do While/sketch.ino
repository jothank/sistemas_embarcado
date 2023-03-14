int x=0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  do{
    Serial.println(x);
    x++;
    delay(500);
  }
  while(x < 10);
  while(1);{}
}
