#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

String zeileEins[]={"Boa, siehst Du  ", "Deine Hater    ", "Du hast sooo    ", "Heute ist Dein ", "Lecker wie Pizza", "Ja man, drueck"};
String zeileZwei[]={"heute geil aus! ", "lieben Dich!!  ", "schoene Augen.  ", "GLUECKSTAG!!!  ", "Burger-Sushi!   ", "meinen Knopf!"};

int anzahl = 6;

void setup() {
  randomSeed(analogRead(0));
  
  lcd.begin(16, 2);

  int i = random(anzahl);

  lcd.setCursor(0, 0);
  lcd.print(zeileEins[i]);

  lcd.setCursor(0, 1);
  lcd.print(zeileZwei[i]);
 
}

void loop() {
      
}
