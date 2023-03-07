int ledR = 4;
int ledB = 5;
int ledG = 6;
int ledY = 7;

void setup() {
  pinMode(ledR, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledY, OUTPUT);
}

void loop() {
  digitalWrite(ledR, HIGH); 
  delay(35);
  digitalWrite(ledR, LOW); 

  digitalWrite(ledB, HIGH);
  delay(35);
  digitalWrite(ledB, LOW);

  digitalWrite(ledG, HIGH);
  delay(35);   
  digitalWrite(ledG, LOW); 

  digitalWrite(ledY, HIGH); 
  delay(35);   
  digitalWrite(ledY, LOW);     

}
