#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Senac 2023");
  delay(1000);
  lcd.setCursor(0, 1);
  lcd.print("Vida Nova");
  lcd.print("               ");
  delay(3000);
  lcd.setCursor(0, 3);
  lcd.print("Vale a Pena");
}
