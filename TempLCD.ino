#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int sensePin = A0;  
int sensorInput;    
double temp;         
 
void setup() {
  
  lcd.begin(16, 2);
  
  lcd.print("Arduino Course!");
}

void loop() {
  
  
  lcd.setCursor(0, 1);
  sensorInput = analogRead(A0);    //read the analog sensor
  temp = (double)sensorInput / 1024;      //find percentage of input reading
  temp = temp * 5;                 //multiply by 5V to get voltage
  temp = temp - 0.5;               
  temp = temp * 100;
  
    if (temp <= 50){
    lcd.setCursor(0, 1);
    lcd.print(temp);
    }
  else  {
    lcd.setCursor(0, 1);
    lcd.print("Hi Temp");
    delay(100);
    lcd.setCursor(0, 1);
    lcd.print("               ");
  } 
  
}
 
