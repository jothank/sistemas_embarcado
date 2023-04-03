int Pino[] = {2,3,4,5,6,7,8,9};
byte sete_segmentos[20][8] = {{0,0,0,0,0,0,1,1},
                              {1,0,0,1,1,1,1,1},
                              {0,0,1,0,0,1,0,1},
                              {0,0,0,0,1,1,0,1},
                              {1,0,0,1,1,0,0,1},
                              {0,1,0,0,1,0,0,1},
                              {0,1,0,0,0,0,0,1},
                              {0,0,0,1,1,1,1,1},
                              {0,0,0,0,0,0,0,1},
                              {0,0,0,1,1,0,0,1},
                              {0,0,0,1,1,0,0,1},
                              {0,0,0,0,0,0,0,1},
                              {0,0,0,1,1,1,1,1},
                              {0,1,0,0,0,0,0,1},
                              {0,1,0,0,1,0,0,1},
                              {1,0,0,1,1,0,0,1},
                              {0,0,0,0,1,1,0,1},
                              {0,0,1,0,0,1,0,1},
                              {1,0,0,1,1,1,1,1},
                              {0,0,0,0,0,0,1,1},
                              };

void setup() {
  for(int i=0; i<8; i++){
    pinMode(Pino[i], OUTPUT);
  }
}

void escreveSeteSeg(byte cont){
  byte pino = 2;
  for(byte contSeg = 0; contSeg <14; contSeg++){
    digitalWrite(pino, sete_segmentos[cont][contSeg]);
    pino++;
  }
}

void loop() {
  for(byte contador=0; contador <= 18; contador++){
    delay(500);
    escreveSeteSeg(contador);
  }
}


// cima 
// lado direito cima
// lado direito baixo
// baixo
// lado esquerdo baixo
// lado esquerdo cima
// meio 