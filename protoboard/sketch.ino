int ledR = 13;
int ledG = 11;
int ledB = 9;


void setup() {
 pinMode(ledR, OUTPUT);
 pinMode(ledG, OUTPUT);
 pinMode(ledB, OUTPUT);

}

void loop() {
  digitalWrite(ledR, HIGH); 
  digitalWrite(ledR, LOW);
  delay(200);
  digitalWrite(ledG, HIGH); 
  digitalWrite(ledG, LOW);
  delay(200);
  digitalWrite(ledB, HIGH); 
  digitalWrite(ledB, LOW);
  delay(200);

}
