
const int buttonPin = 7;
const int ledPin1 = 13;
const int ledPin2 = 12;
int buttonState = 0;

void setup() {
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
pinMode(buttonPin, INPUT);
}

void loop() {
buttonState = digitalRead(buttonPin);

  if(buttonState == HIGH){
      digitalWrite(ledPin1, HIGH);
      delay(1000);
      digitalWrite(ledPin2, HIGH);
      delay(500);
    } else {
      digitalWrite(ledPin1,LOW);
      delay(1000);
      digitalWrite(ledPin2,LOW);
      delay(500);
    }
}
