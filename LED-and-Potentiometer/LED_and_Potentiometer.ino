#include <LiquidCrystal.h>


LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
 pinMode(A0,0);
  pinMode(7,1);
  
  lcd.begin(16,2);
  lcd.print("pot.value");
  delay(1000);
  
}

void loop()
{ int x=analogRead(A0);
 lcd.clear();
 lcd.setCursor(0,1);
 lcd.print(x);
 delay(50);
 if (x<=500)
 { 
   digitalWrite(7,1);
 }
 else{
   digitalWrite(7,0);
 }
 
 
}