int Pino[] = {2,3,4,5,6,7,8,9};
byte sete_segmentos[10][7] = {{0,0,0,0,0,0,1},
                              {1,0,0,1,1,1,1},
                              {0,0,1,0,0,1,0},
                              {0,0,0,0,1,1,0},
                              {1,0,0,1,1,0,0},
                              {0,1,0,0,1,0,0},
                              {0,1,0,0,0,0,0},
                              {0,0,0,1,1,1,1},
                              {0,0,0,0,0,0,0},
                              {0,0,0,1,1,0,0},
                              };

// cima 
// lado direito cima
// lado direito baixo
// baixo
// lado esquerdo baixo
// lado esquerdo cima
// meio 

void setup() {
  for(int i=0; i<8; i++){
    pinMode(Pino[i], OUTPUT);
  }
}

void escreveSeteSeg(byte cont){
  byte pino = 2;
  for(byte contSeg = 0; contSeg <7; contSeg++){
    digitalWrite(pino, sete_segmentos[cont][contSeg]);
    pino++;
  }
  digitalWrite(9,HIGH);
}

void loop() {
  for(byte contador=0; contador <= 9; contador++){
    delay(1000);
    escreveSeteSeg(contador);
  }
}
