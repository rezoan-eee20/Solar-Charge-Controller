
#include <LiquidCrystal.h>


LiquidCrystal lcd(A0, A1, 8, 9, 10, 11);

void setup() {
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  lcd.begin(20, 4);
 
}

void loop() {



 float c=analogRead(A2);
 float d=(c*5.00)/1023.00;
 lcd.setCursor(0, 0);
 lcd.print("Solar Volt:");
  lcd.setCursor(13, 0);
  lcd.print(d);
  delay(1000);
  
 float a=analogRead(A3);
 float b=(a*5.00)/1023.00;
 lcd.setCursor(0, 1);
 lcd.print("Battery Volt:");
  lcd.setCursor(13, 1);
  lcd.print(b);
  delay(1000);

lcd.setCursor(0, 2);
 lcd.print("Battery:");
 
  if(b<5.00)
  {
  digitalWrite(7,HIGH);
  lcd.setCursor(8, 2);
 lcd.print("Charging");
  }
else
{
  digitalWrite(7,LOW);
  lcd.setCursor(8, 2);
 lcd.print("Full    ");
}

if((b<2.00))
  {
  digitalWrite(6,LOW);
  lcd.setCursor(8, 2);
 lcd.print("Low     ");
  }
else
{
  digitalWrite(6,HIGH);
}



  
}

