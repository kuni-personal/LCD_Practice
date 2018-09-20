#define RS_PIN 12
#define E_PIN 11
#define DB4_PIN 5
#define DB5_PIN 4
#define DB6_PIN 3
#define DB7_PIN 2
#include <LiquidCrystal.h>;

LiquidCrystal lcd(RS_PIN, E_PIN,  DB4_PIN, DB5_PIN, DB6_PIN, DB7_PIN);

void setup() {
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("hello, world!");
}

void loop() {
  lcd.setCursor(0, 1);
  lcd.print(millis() / 1000);
}
