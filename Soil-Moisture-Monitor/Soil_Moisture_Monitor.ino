#include <LiquidCrystal.h>


LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{ pinMode(A1,0);
 pinMode(7,1);
  
  lcd.begin(16,2);
  
 delay(50);
  
}

void loop()
{ int x=analogRead(A1);
 lcd.clear();
 lcd.print("soilmoistureval.");
 
 lcd.setCursor(0,1);
 lcd.print(x);
 delay(50);
 if (x>=300)
 { 
   digitalWrite(7,1);
 }
 else{
   digitalWrite(7,0);
 }
}