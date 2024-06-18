#include <Arduino.h>
#include <DIYables_IRcontroller.h> // DIYables_IRcontroller library
#include <LiquidCrystal_I2C.h>

#define IR_RECEIVER_PIN 19 // The ESP32 pin GPIO19 connected to IR controller

int lcdColumns = 16;
int lcdRows = 2;

LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows);

DIYables_IRcontroller_17 irController(IR_RECEIVER_PIN, 200); // debounce time is 200ms

void setup()
{
  Serial.begin(9600);
  irController.begin();
  lcd.init();
  lcd.backlight();
}

void loop()
{
  Key17 key = irController.getKey();
  if (key != Key17::NONE)
  {
    switch (key)
    {
    case Key17::KEY_1:
      Serial.println("1");
      lcd.clear();
      lcd.setCursor(5, 0);
      lcd.print("1");
      break;

    case Key17::KEY_2:
      Serial.println("2");
      lcd.clear();
      lcd.setCursor(5, 0);
      lcd.print("2");
      break;

    case Key17::KEY_3:
      Serial.println("3");
      lcd.clear();
      lcd.setCursor(5, 0);
      lcd.print("3");
      break;

    case Key17::KEY_4:
      Serial.println("4");
      lcd.clear();
      lcd.setCursor(5, 0);
      lcd.print("4");
      break;

    case Key17::KEY_5:
      Serial.println("5");
      lcd.clear();
      lcd.setCursor(5, 0);
      lcd.print("5");
      break;

    case Key17::KEY_6:
      Serial.println("6");
      lcd.clear();
      lcd.setCursor(5, 0);
      lcd.print("6");
      break;

    case Key17::KEY_7:
      Serial.println("7");
      lcd.clear();
      lcd.setCursor(5, 0);
      lcd.print("7");
      break;

    case Key17::KEY_8:
      Serial.println("8");
      lcd.clear();
      lcd.setCursor(5, 0);
      lcd.print("8");
      break;

    case Key17::KEY_9:
      Serial.println("9");
      lcd.clear();
      lcd.setCursor(5, 0);
      lcd.print("9");
      break;

    case Key17::KEY_STAR:
      Serial.println("*");
      lcd.clear();
      lcd.setCursor(5, 0);
      lcd.print("*");
      break;

    case Key17::KEY_0:
      Serial.println("0");
      lcd.clear();
      lcd.setCursor(5, 0);
      lcd.print("0");
      break;

    case Key17::KEY_SHARP:
      Serial.println("#");
      lcd.clear();
      lcd.setCursor(5, 0);
      lcd.print("#");
      break;

    case Key17::KEY_UP:
      Serial.println("UP");
      lcd.clear();
      lcd.setCursor(5, 0);
      lcd.print("UP");
      break;

    case Key17::KEY_DOWN:
      Serial.println("DOWN");
      lcd.clear();
      lcd.setCursor(5, 0);
      lcd.print("DOWN");
      break;

    case Key17::KEY_LEFT:
      Serial.println("LEFT");
      lcd.clear();
      lcd.setCursor(5, 0);
      lcd.print("LEFT");
      break;

    case Key17::KEY_RIGHT:
      Serial.println("RIGHT");
      lcd.clear();
      lcd.setCursor(5, 0);
      lcd.print("RIGHT");
      break;

    case Key17::KEY_OK:
      Serial.println("OK");
      lcd.clear();
      lcd.setCursor(5, 0);
      lcd.print("OK");
      break;

    default:
      Serial.println("WARNING: undefined key:");
      break;
    }
  }
}