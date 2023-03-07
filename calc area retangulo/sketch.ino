void setup() {
  Serial.begin(9600);
}

void loop() {
  int area;
  int largura;
  int altura;
  //assing width and height values
  largura = 3;
  altura = 7;
  area = largura * altura;
  String resultado = "Area retangulo: ";
  resultado += area;
  Serial.println(resultado);
}
