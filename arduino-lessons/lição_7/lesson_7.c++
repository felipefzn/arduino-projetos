#include <LiquidCrystal.h>
LiquidCrystal lcd(9, 8, 5, 4, 3, 2);

void setup()
{
  lcd.begin(16, 2);
  
}
  void loop()
  {
    float temp = ((analogRead(A0) * (5.0/1024))-0.5)/0.01;
lcd.clear();
delay(1000);
lcd.setCursor(0, 0);
lcd.print("Temperatura");
lcd.setCursor(2, 1);
lcd.print(temp);
delay(3000);
}
          