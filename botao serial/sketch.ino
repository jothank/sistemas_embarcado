int estado = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(12, INPUT);
// Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
estado = digitalRead(12);

if(estado == HIGH){
// Serial.println(estado);
delay(110);
}else{
  // Serial.println(estado);
  delay(100);
}

}
