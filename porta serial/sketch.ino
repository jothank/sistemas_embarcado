String str1 = "Arduino";
String str2 = "Curso";
String str3 = "";

int n1 = 2;
int n2 = 5;

void setup() {
 Serial.begin(9600);

}

void loop() {
  Serial.println("Escrevendo em C no Arduino");
  delay(500);
  
  Serial.println(str1);
  Serial.println(str2);
  str3 = str1 + " " + str2;
  Serial.println(str3);
  Serial.println(n1*n2);

}
