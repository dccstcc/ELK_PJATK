#include <LiquidCrystal_I2C.h>

int switchPin = 2;
long value = 0;
int LED_1_pin = 4; 
int LED_2_pin = 5;
int LED_3_pin = 6;
int LED_4_pin = 7;
int LED_5_pin = 8;
int LED_6_pin = 9;
int LED_7_pin = 10;
int LED_8_pin = 11;
int LED_9_pin = 12;
long workTime = 0;
long standby = 0;
long timeOff = 0;
long randomizer = 0;
int valSummarize = 0;

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Ustawienie adresu ukladu na 0x27

void setup() {
  Serial.begin(9600);
  pinMode(switchPin, INPUT);
  pinMode(LED_1_pin, OUTPUT);
  pinMode(LED_2_pin, OUTPUT);
  pinMode(LED_3_pin, OUTPUT);
  pinMode(LED_4_pin, OUTPUT);
  pinMode(LED_5_pin, OUTPUT);
  pinMode(LED_6_pin, OUTPUT);
  pinMode(LED_7_pin, OUTPUT);
  pinMode(LED_8_pin, OUTPUT);
  pinMode(LED_9_pin, OUTPUT);
  lcd.begin(16, 2);
  lcd.backlight();
}

void loop() {

  
  //naciśnięcie/przytrzymanie microswitch'a
  if(digitalRead(switchPin) == HIGH)
  { 

    for (int i=70, j=0; i>0; i--, j+=2)
    {

      //możliwość rzutu kostką od nowa
      if(digitalRead(switchPin) == HIGH)
      {
        i=70;
        j=0;
      }
      
      //generator liczb pseudolosowych
      randomizer = random(1, 1000);
      randomizer += millis();
      value = random(1, 1000);
      value += randomizer;
      value %= 7;
      if(value == 0) value = random(1, 7);

      //wyświetla wynik losowania z generatora
      setValue(value);
      delay(70+j); //opóźnienie
      offValue(value);
    }
    if(digitalRead(switchPin) == LOW) //po puszczeniu microswitch'a
    {
        for(int i=5; i>0; i--) //miganie diody z wynikiem
        {
             setValue(value);
             delay(250);
             offValue(value);
             delay(250);
        }

     //wyświetlenie wyniku i sumy wyników
     setValue(value);
     valSummarize += value;
     printLCD(valSummarize);
          
     workTime = millis();
     timeOff = workTime + 7000; //czas wyświetlania wyniku
     
     //możliwość losowania od nowa w trakcie wyświetlania wyniku   
     while(standby < timeOff  &&  digitalRead(switchPin) == LOW)
     {
        standby = millis();
     }

     //wygaszenie
     if(standby >= timeOff)
     {
        offValue(value);
     }
    }
  }
  
}

//mapowanie cyfry na wyświetloną liczbę oczek
void setValue(int value)
{
  if(value == 1)
  {
        digitalWrite(LED_5_pin, HIGH);
  }
  if(value == 2)
  {
        digitalWrite(LED_1_pin, HIGH);
        digitalWrite(LED_9_pin, HIGH);
  }
  if(value == 3)
  {
        digitalWrite(LED_3_pin, HIGH);
        digitalWrite(LED_5_pin, HIGH);
        digitalWrite(LED_7_pin, HIGH);   
  }
  if(value == 4)
  {
        digitalWrite(LED_1_pin, HIGH);
        digitalWrite(LED_3_pin, HIGH);
        digitalWrite(LED_7_pin, HIGH);
        digitalWrite(LED_9_pin, HIGH);
  }
  if(value == 5)
  {
        digitalWrite(LED_1_pin, HIGH);
        digitalWrite(LED_3_pin, HIGH);
        digitalWrite(LED_5_pin, HIGH);
        digitalWrite(LED_7_pin, HIGH);
        digitalWrite(LED_9_pin, HIGH);
  }
  if(value == 6)
  {
        digitalWrite(LED_1_pin, HIGH);
        digitalWrite(LED_3_pin, HIGH);
        digitalWrite(LED_4_pin, HIGH);
        digitalWrite(LED_6_pin, HIGH);
        digitalWrite(LED_7_pin, HIGH);
        digitalWrite(LED_9_pin, HIGH);
  }
}

//wyłączanie diód o podanej liczbie oczek 
void offValue(int value)
{
  if(value == 1)
  {
        digitalWrite(LED_5_pin, LOW);
  }
  if(value == 2)
  {
        digitalWrite(LED_1_pin, LOW);
        digitalWrite(LED_9_pin, LOW);
  }
  if(value == 3)
  {
        digitalWrite(LED_3_pin, LOW);
        digitalWrite(LED_5_pin, LOW);
        digitalWrite(LED_7_pin, LOW);   
  }
  if(value == 4)
  {
        digitalWrite(LED_1_pin, LOW);
        digitalWrite(LED_3_pin, LOW);
        digitalWrite(LED_7_pin, LOW);
        digitalWrite(LED_9_pin, LOW);
  }
  if(value == 5)
  {
        digitalWrite(LED_1_pin, LOW);
        digitalWrite(LED_3_pin, LOW);
        digitalWrite(LED_5_pin, LOW);
        digitalWrite(LED_7_pin, LOW);
        digitalWrite(LED_9_pin, LOW);
  }
  if(value == 6)
  {
        digitalWrite(LED_1_pin, LOW);
        digitalWrite(LED_3_pin, LOW);
        digitalWrite(LED_4_pin, LOW);
        digitalWrite(LED_6_pin, LOW);
        digitalWrite(LED_7_pin, LOW);
        digitalWrite(LED_9_pin, LOW);
  }
}

//wydruk na wyświetlacz LCD
void printLCD(int value)
{
     lcd.setCursor(0,0);
     lcd.print("Suma wyniku:");
     lcd.setCursor(0,1);
     lcd.print(value);
}
