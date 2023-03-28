int ledTempo;
int direcao = 1;
int ledAtual = 0;
unsigned long alteraTempo;
int pot = 0;
byte Pino[] ={0,1,2,3,4,5,6,7,8,9};

void setup() {
 for(int x=0; x<10; x++){
   pinMode(Pino[x], OUTPUT);
 }
 alteraTempo = millis();
}

void loop() {
  ledTempo = analogRead(pot);
  if((millis()-alteraTempo)>ledTempo){
    trocaLed();
    alteraTempo = millis();
  }
}

void trocaLed(){
  for(int x=0; x<10; x++){
    digitalWrite(Pino[x], LOW);
  }
  digitalWrite(Pino[ledAtual], HIGH);
  ledAtual += direcao;
  if(ledAtual ==9){direcao = -1;}
  if(ledAtual ==0){direcao = 1;}
  
}
