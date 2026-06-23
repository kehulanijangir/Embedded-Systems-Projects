#include <LiquidCrystal.h>


LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{ pinMode(A1,0);
 pinMode(7,1);
  
  lcd.begin(16,2);
  lcd.print("photoresistorval.");
 delay(1000);
  
}

void loop()
{ int x=analogRead(A1);
 float valtage = x*(5.0/1023.0);
 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("temprature: ");
 
 lcd.print("temprature value");
 
 lcd.setCursor(0,1);
 lcd.print(x);
 delay(50);
 if (x<=200)
 { 
   digitalWrite(7,1);
 }
 else{
   digitalWrite(7,0);
 }
}