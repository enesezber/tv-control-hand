#include <IRremote.h>
IRsend IrSend;

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4); // set the LCD address to 0x27 for a 16 chars and 2 line display

int PARMAK1P = 2; // anahtarların portları
int PARMAK2P = 4;
int PARMAK3P = 5 ;
int PARMAK4P = 6;
int PARMAK5P = 7;

int IRLED = 3;

int LED1 = 12;
int LED2 = 11;
int LED3 = 10;
int LED4 = 8;
int LED5 = 9;




void setup() {
  // put your setup code here, to run once:
  pinMode(PARMAK1P, INPUT);
  pinMode(PARMAK2P, INPUT);
  pinMode(PARMAK3P, INPUT);
  pinMode(PARMAK4P, INPUT);
  pinMode(PARMAK5P, INPUT);
  pinMode(IRLED, OUTPUT);


  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
}

void loop() {
 lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("KOMUT BEKLENIYOR");


tekrarbak:  //tekrardan bakmak için geri geldi
  if (digitalRead(PARMAK1P) == HIGH )
  { //1????
    goto basla;
  }
  else
  {
  }
  if (digitalRead(PARMAK2P) == HIGH )
  { //?1???
    goto basla;;
  }
  else
  {
  }
  if (digitalRead(PARMAK3P) == HIGH )
  { //??1??
    goto basla;;
  }
  else
  {
  }
  if (digitalRead(PARMAK4P) == HIGH )
  { //???1?
    goto basla;;

  }
  else
  {
  }     if (digitalRead(PARMAK5P) == HIGH )
  { //????1
    goto basla;;
  }
  else
  {
  }
  goto tekrarbak;  //usteki ifleri geçip bu satıra geldiyse demek oluytor ki tum parmaklar açık yani 00000 yawni hepsi sıfır yani hiçbir şey yapmasın


basla:   ////bu satıra gewldiğinde parmaklar bir işaret veriyor komut yollamak için ve işareti yapması için 1 saniye bekliyor ki kullanıcı istediği komutu 1 saniye içerisinde verebilsin
  digitalWrite(LED1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);
  digitalWrite(LED1, LOW);   // turn the LED on (low is the voltage level)
  digitalWrite(LED2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);
  digitalWrite(LED2, LOW);   // turn the LED on (low is the voltage level)
  digitalWrite(LED3, HIGH);   // turn the LED on (HIGH is the voltage level
  delay(200);
  digitalWrite(LED3, LOW);   // turn the LED on (low is the voltage level))
  digitalWrite(LED4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);
  digitalWrite(LED4, LOW);   // turn the LED on (low is the voltage level)
  digitalWrite(LED5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);
  digitalWrite(LED5, LOW);   // turn the LED on (low is the voltage level)

  if (digitalRead(PARMAK1P) == HIGH )
  { //1????
    if (digitalRead(PARMAK2P) == HIGH )
    { //11???
      if (digitalRead(PARMAK3P) == HIGH )
      { //111??
        if (digitalRead(PARMAK4P) == HIGH )
        { //1111?
          if (digitalRead(PARMAK5P) == HIGH )
          { //11111
            //tüm parmaklar kapalı yani portlardan 11111 sinyalleri geliyor
            //31.durum
            digitalWrite(LED1, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED2, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED3, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED4, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED5, HIGH);   // turn the LED on (HIGH is the voltage level)
            // wait for a second

            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<31.komut>>");
            //////////////

            unsigned int raw[68] = {8900, 4500, 500, 600, 550, 1700, 550, 550, 550, 600, 550, 550, 550, 600, 500, 600, 550, 600, 550, 1700, 500, 600, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 500, 1750, 550, 1700, 500, 600, 550, 1700, 550, 600, 500, 1700, 550, 600, 550, 550, 550, 600, 550, 550, 550, 1750, 500, 600, 500, 1750, 500, 600, 550, 1700, 550, 1700, 550, 1700, 500, 1750, 500,};
            IrSend.sendRaw(raw, 68, 38);





          }
          else
          { //11110
            //30.durum
            //////////////
            digitalWrite(LED1, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED2, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED3, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED4, HIGH);   // turn the LED on (HIGH is the voltage level)

            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<30.komut>>");

            unsigned int raw[68] = { 9000, 4500, 560, 560, 560, 560, 560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560,
                                     1690, 560, 1690, 560
                                   }; // Using exact NEC timing
            IrSend.sendRaw(raw, 68, 38);

            /////////////
          }
        }
        else
        { //1110?
          if (digitalRead(PARMAK5P) == HIGH )
          { //11101
            digitalWrite(LED1, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED2, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED3, HIGH);   // turn the LED on (HIGH is the voltage level)

            digitalWrite(LED5, HIGH);   // turn the LED on (HIGH is the voltage level)
            //29.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<29.komut>>");

            unsigned int raw[68] = { 9000, 4500, 560, 560, 560, 560, 560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560,
                                     1690, 560, 1690, 560
                                   }; // Using exact NEC timing
            IrSend.sendRaw(raw, 68, 38);

            /////////////
          }
          else
          { //11100
            //28.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<28.komut>>");

            digitalWrite(LED1, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED2, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED3, HIGH);   // turn the LED on (HIGH is the voltage level)

            unsigned int raw[68] = { 9000, 4500, 560, 560, 560, 560, 560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560,
                                     1690, 560, 1690, 560
                                   }; // Using exact NEC timing
            IrSend.sendRaw(raw, 68, 38);

            /////////////
          }
        }
      }
      else
      { //110??
        if (digitalRead(PARMAK4P) == HIGH )
        { //1101?
          if (digitalRead(PARMAK5P) == HIGH )
          { //11011
            digitalWrite(LED1, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED2, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED4, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED5, HIGH);   // turn the LED on (HIGH is the voltage level)
            //27.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<27.komut>>");

            unsigned int raw[68] = { 9000, 4500, 560, 560, 560, 560, 560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560,
                                     1690, 560, 1690, 560
                                   }; // Using exact NEC timing
            IrSend.sendRaw(raw, 68, 38);

            /////////////
          }
          else
          { //11110
            digitalWrite(LED1, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED2, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED3, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED4, HIGH);   // turn the LED on (HIGH is the voltage level)
            //26.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<26.komut>>");
            unsigned int raw[68] = { 9000, 4500, 560, 560, 560, 560, 560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560,
                                     1690, 560, 1690, 560
                                   }; // Using exact NEC timing
            IrSend.sendRaw(raw, 68, 38);

            /////////////
          }
        }
        else
        { //1100?
          if (digitalRead(PARMAK5P) == HIGH )
          { //11001
            digitalWrite(LED1, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED2, HIGH);   // turn the LED on (HIGH is the voltage level)

            digitalWrite(LED5, HIGH);   // turn the LED on (HIGH is the voltage level)
            //25.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<25.komut>>");
            unsigned int raw[68] = { 9000, 4500, 560, 560, 560, 560, 560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560,
                                     1690, 560, 1690, 560
                                   }; // Using exact NEC timing
            IrSend.sendRaw(raw, 68, 38);

            /////////////
          }
          else
          { //11000
            //24.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<24.komut>>");
            digitalWrite(LED1, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED2, HIGH);   // turn the LED on (HIGH is the voltage level)

            unsigned int raw[68] = { 9000, 4500, 560, 560, 560, 560, 560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560,
                                     1690, 560, 1690, 560
                                   }; // Using exact NEC timing
            IrSend.sendRaw(raw, 68, 38);

            /////////////
          }
        }
      }
    }
    else
    { //10???
      if (digitalRead(PARMAK3P) == HIGH )
      { //101??
        if (digitalRead(PARMAK4P) == HIGH )
        { //1011?
          if (digitalRead(PARMAK5P) == HIGH )
          { //10111

            //23.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<23.komut>>");
            digitalWrite(LED1, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED3, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED4, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED5, HIGH);   // turn the LED on (HIGH is the voltage level)

            unsigned int raw[68] = { 9000, 4500, 560, 560, 560, 560, 560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560,
                                     1690, 560, 1690, 560
                                   }; // Using exact NEC timing
            IrSend.sendRaw(raw, 68, 38);

            /////////////
          }
          else
          { //10110
            //22.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<22.komut>>");
            digitalWrite(LED1, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED3, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED4, HIGH);   // turn the LED on (HIGH is the voltage level)


            unsigned int raw[68] = { 9000, 4500, 560, 560, 560, 560, 560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560,
                                     1690, 560, 1690, 560
                                   }; // Using exact NEC timing
            IrSend.sendRaw(raw, 68, 38);

            /////////////
          }


        }
        else
        { //1010?
          if (digitalRead(PARMAK5P) == HIGH )
          { //10101
            digitalWrite(LED1, HIGH);   // turn the LED on (HIGH is the voltage level)

            digitalWrite(LED3, HIGH);   // turn the LED on (HIGH is the voltage level)

            digitalWrite(LED5, HIGH);   // turn the LED on (HIGH is the voltage level)
            //21.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<21.komut>>");
            unsigned int raw[68] = { 9000, 4500, 560, 560, 560, 560, 560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560,
                                     1690, 560, 1690, 560
                                   }; // Using exact NEC timing
            IrSend.sendRaw(raw, 68, 38);

            /////////////
          }
          else
          { //10100
            //20.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<20.komut>>");
            digitalWrite(LED1, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED3, HIGH);   // turn the LED on (HIGH is the voltage level)


            unsigned int raw[68] = { 9000, 4500, 560, 560, 560, 560, 560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560,
                                     1690, 560, 1690, 560
                                   }; // Using exact NEC timing
            IrSend.sendRaw(raw, 68, 38);

            /////////////
          }

        }

      }
      else
      { //100??
        if (digitalRead(PARMAK4P) == HIGH )
        { //1001?

          if (digitalRead(PARMAK5P) == HIGH )
          { //10011

            //19.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<19.komut>>");
            unsigned int raw[68] = { 9000, 4500, 560, 560, 560, 560, 560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560,
                                     1690, 560, 1690, 560
                                   }; // Using exact NEC timing
            IrSend.sendRaw(raw, 68, 38);

            /////////////
          }
          else
          { //10010
            //18.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<18.komut>>");
            digitalWrite(LED1, HIGH);   // turn the LED on (HIGH is the voltage level)

            digitalWrite(LED4, HIGH);   // turn the LED on (HIGH is the voltage level)


            unsigned int raw[68] = { 9000, 4500, 560, 560, 560, 560, 560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560,
                                     1690, 560, 1690, 560
                                   }; // Using exact NEC timing
            IrSend.sendRaw(raw, 68, 38);

            /////////////
          }

        }
        else
        { //1000?
          if (digitalRead(PARMAK5P) == HIGH )
          { //10001
            //17.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<17.komut>>");
            digitalWrite(LED1, HIGH);   // turn the LED on (HIGH is the voltage level)

            digitalWrite(LED5, HIGH);   // turn the LED on (HIGH is the voltage level)
            unsigned int raw[68] = { 9000, 4500, 560, 560, 560, 560, 560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560,
                                     1690, 560, 1690, 560
                                   }; // Using exact NEC timing
            IrSend.sendRaw(raw, 68, 38);

            /////////////
          }
          else
          { //10000
            //16.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<16.komut>>");
            digitalWrite(LED1, HIGH);   // turn the LED on (HIGH is the voltage level)


            unsigned int raw[68] = { 9000, 4500, 560, 560, 560, 560, 560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 560, 560, 560,
                                     560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560,
                                     1690, 560, 1690, 560
                                   }; // Using exact NEC timing
            IrSend.sendRaw(raw, 68, 38);

            /////////////
          }

        }

      }
    }
  }
  else
  { //0????
    if (digitalRead(PARMAK2P) == HIGH )
    { //01???
      if (digitalRead(PARMAK3P) == HIGH )
      { //011??
        if (digitalRead(PARMAK4P) == HIGH )
        { //0111?
          if (digitalRead(PARMAK5P) == HIGH )
          { //01111
            //tüm parmaklar kapalı yani portlardan 11111 sinyalleri geliyor
            //15.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<15.komut>>");
            digitalWrite(LED2, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED3, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED4, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED5, HIGH);   // turn the LED on (HIGH is the voltage level)
            unsigned int raw[68] = {8900, 4500, 550, 550, 550, 1700, 550, 600, 550, 550, 550, 550, 600, 550, 550, 550, 600, 550, 550, 1700, 550, 550, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 550, 550, 600, 550, 550, 550, 1700, 550, 600, 550, 550, 550, 600, 500, 600, 550, 1700, 550, 1700, 550, 1700, 500, 650, 500, 1700, 550, 1700, 550, 1700, 550,};
            IrSend.sendRaw(raw, 68, 38);
            unsigned int raww[68] = {8850, 4500, 550, 600, 500, 1750, 500, 600, 500, 600, 550, 600, 500, 600, 550, 600, 500, 600, 550, 1700, 550, 600, 500, 1750, 500, 1750, 500, 1750, 500, 1700, 550, 1700, 550, 1700, 550, 600, 500, 600, 550, 1700, 550, 600, 500, 1750, 500, 600, 550, 600, 500, 600, 500, 1750, 500, 1750, 550, 550, 550, 1700, 550, 600, 500, 1750, 500, 1750, 500, 1750, 500,};
            IrSend.sendRaw(raww, 68, 38);

            /////////////
          }
          else
          { //01110
            //14.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<14.komut>>");
            digitalWrite(LED2, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED3, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED4, HIGH);   // turn the LED on (HIGH is the voltage level)
            unsigned int raw[68] = {8900, 4500, 550, 550, 550, 1700, 550, 600, 550, 550, 550, 550, 600, 550, 550, 550, 600, 550, 550, 1700, 550, 550, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 550, 550, 600, 550, 550, 550, 1700, 550, 600, 550, 550, 550, 600, 500, 600, 550, 1700, 550, 1700, 550, 1700, 500, 650, 500, 1700, 550, 1700, 550, 1700, 550,};
            IrSend.sendRaw(raw, 68, 38);
            unsigned int raww[68] = {8850, 4500, 500, 600, 550, 1700, 550, 600, 500, 600, 550, 600, 500, 600, 550, 550, 550, 600, 550, 1700, 550, 600, 500, 1750, 500, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 500, 1750, 500, 650, 500, 1700, 550, 600, 500, 600, 550, 1700, 550, 600, 500, 600, 550, 600, 500, 1700, 550, 600, 550, 1700, 550, 1700, 500, 650, 500, 1700, 550,};
            IrSend.sendRaw(raww, 68, 38);

            /////////////
          }
        }
        else
        { //0110?
          if (digitalRead(PARMAK5P) == HIGH )
          { //01101

            //13.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<13.komut>>");
            digitalWrite(LED2, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED3, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED5, HIGH);   // turn the LED on (HIGH is the voltage level)

            unsigned int raw[68] = {8900, 4500, 550, 550, 550, 1700, 550, 600, 550, 550, 550, 550, 600, 550, 550, 550, 600, 550, 550, 1700, 550, 550, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 550, 550, 600, 550, 550, 550, 1700, 550, 600, 550, 550, 550, 600, 500, 600, 550, 1700, 550, 1700, 550, 1700, 500, 650, 500, 1700, 550, 1700, 550, 1700, 550,};
            IrSend.sendRaw(raw, 68, 38);
            unsigned int raww[66] = {550, 550, 600, 1650, 600, 550, 550, 550, 600, 550, 550, 550, 600, 550, 550, 550, 600, 1650, 600, 500, 600, 1650, 600, 1650, 600, 1650, 600, 1650, 600, 1650, 600, 1650, 600, 1650, 600, 1650, 600, 500, 600, 550, 600, 1650, 550, 550, 600, 550, 550, 550, 600, 550, 550, 550, 600, 1650, 600, 1650, 600, 500, 600, 1650, 600, 1650, 600, 1650, 600,};
            IrSend.sendRaw(raww, 66, 38);


            /////////////
          }
          else
          { //01100
            //12.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<12.komut>>");
            digitalWrite(LED2, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED3, HIGH);   // turn the LED on (HIGH is the voltage level)

            unsigned int raw[68] = {8900, 4500, 550, 550, 550, 1700, 550, 600, 550, 550, 550, 550, 600, 550, 550, 550, 600, 550, 550, 1700, 550, 550, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 550, 550, 600, 550, 550, 550, 1700, 550, 600, 550, 550, 550, 600, 500, 600, 550, 1700, 550, 1700, 550, 1700, 500, 650, 500, 1700, 550, 1700, 550, 1700, 550,};
            IrSend.sendRaw(raw, 68, 38);
            unsigned int raww[68] = {8900, 4450, 600, 550, 550, 1650, 600, 550, 600, 500, 600, 550, 600, 500, 600, 550, 550, 550, 600, 1650, 600, 550, 550, 1700, 550, 1700, 550, 1700, 550, 1650, 600, 1650, 600, 1650, 600, 550, 550, 1700, 550, 550, 550, 600, 550, 1700, 550, 550, 550, 600, 550, 550, 550, 1700, 550, 600, 550, 1650, 550, 1700, 550, 600, 550, 1700, 550, 1700, 550, 1700, 550,};
            IrSend.sendRaw(raww, 68, 38);

            /////////////
          }
        }
      }
      else
      { //010??
        if (digitalRead(PARMAK4P) == HIGH )
        { //0101?
          if (digitalRead(PARMAK5P) == HIGH )
          { //01011
            digitalWrite(LED2, HIGH);   // turn the LED on (HIGH is the voltage level)

            digitalWrite(LED4, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED5, HIGH);   // turn the LED on (HIGH is the voltage level)

            //11.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<11.komut>>");
            unsigned int raw[68] = {8900, 4500, 550, 550, 550, 1700, 550, 600, 550, 550, 550, 550, 600, 550, 550, 550, 600, 550, 550, 1700, 550, 550, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 550, 550, 600, 550, 550, 550, 1700, 550, 600, 550, 550, 550, 600, 500, 600, 550, 1700, 550, 1700, 550, 1700, 500, 650, 500, 1700, 550, 1700, 550, 1700, 550,};
            IrSend.sendRaw(raw, 68, 38);

            /////////////
          }
          else
          { //01110
            //10.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<10.komut>>");
            digitalWrite(LED2, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED3, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED4, HIGH);   // turn the LED on (HIGH is the voltage level)
            unsigned int raw[68] = {8900, 4500, 550, 550, 550, 1700, 550, 600, 550, 550, 550, 550, 600, 550, 550, 550, 600, 550, 550, 1700, 550, 550, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 550, 550, 600, 550, 550, 550, 1700, 550, 600, 550, 550, 550, 600, 500, 600, 550, 1700, 550, 1700, 550, 1700, 500, 650, 500, 1700, 550, 1700, 550, 1700, 550,};
            IrSend.sendRaw(raw, 68, 38);

            unsigned int raww[72] = {200, 200, 8500, 4450, 50, 150, 400, 500, 650, 1600, 600, 550, 600, 500, 600, 550, 600, 500, 600, 550, 600, 500, 600, 1650, 600, 550, 600, 1650, 550, 1700, 550, 1650, 600, 1650, 600, 1650, 600, 1650, 600, 550, 600, 500, 600, 550, 600, 1650, 550, 1650, 600, 550, 600, 500, 600, 550, 600, 1650, 600, 1650, 600, 1650, 600, 500, 600, 550, 550, 1700, 550, 1700, 550, 1650, 600,};
            IrSend.sendRaw(raww, 72, 38);

            /////////////
          }
        }
        else
        { //0100?
          if (digitalRead(PARMAK5P) == HIGH )
          { //01001

            //9.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<9.komut>>");
            digitalWrite(LED2, HIGH);   // turn the LED on (HIGH is the voltage level)

            digitalWrite(LED5, HIGH);   // turn the LED on (HIGH is the voltage level)

            unsigned int raw[70] = {1300, 1800, 5850, 4450, 600, 500, 600, 1650, 600, 500, 600, 550, 600, 500, 600, 550, 600, 500, 600, 550, 600, 1650, 600, 500, 600, 1650, 600, 1650, 600, 1650, 600, 1650, 600, 1650, 600, 1650, 600, 1650, 600, 1650, 600, 1650, 600, 550, 550, 1650, 600, 550, 600, 500, 600, 550, 600, 500, 600, 550, 600, 500, 600, 1650, 600, 500, 650, 1600, 650, 1600, 600, 1650, 600,};
            IrSend.sendRaw(raw, 70, 38);

            /////////////
          }
          else
          { //01000
            //8.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<8.komut>>");
            digitalWrite(LED2, HIGH);   // turn the LED on (HIGH is the voltage level)

            unsigned int raw[68] = {8850, 4500, 500, 650, 500, 1750, 500, 600, 500, 600, 550, 600, 500, 600, 550, 600, 500, 600, 550, 1700, 550, 600, 500, 1750, 500, 1750, 500, 1750, 500, 1750, 500, 1700, 550, 1700, 550, 600, 500, 1750, 500, 1750, 500, 600, 550, 600, 500, 600, 550, 600, 500, 600, 550, 1700, 500, 650, 500, 600, 550, 1700, 500, 1750, 500, 1750, 500, 1700, 550, 1750, 500,};
            IrSend.sendRaw(raw, 68, 38);

            /////////////
          }
        }
      }
    }
    else
    { //00???
      if (digitalRead(PARMAK3P) == HIGH )
      { //001??
        if (digitalRead(PARMAK4P) == HIGH )
        { //0011?
          if (digitalRead(PARMAK5P) == HIGH )
          { //00111

            //7.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<7.komut>>");
            digitalWrite(LED3, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED4, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED5, HIGH);   // turn the LED on (HIGH is the voltage level)
            unsigned int raw[68] = {8900, 4450, 550, 600, 550, 1700, 550, 600, 500, 600, 550, 550, 550, 600, 550, 600, 500, 600, 500, 1750, 500, 600, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 500, 650, 500, 1700, 550, 1700, 550, 600, 500, 1750, 500, 600, 550, 600, 500, 600, 550, 1700, 550, 550, 550, 600, 550, 1700, 550, 600, 500, 1700, 550, 1700, 550, 1700, 550,};
            IrSend.sendRaw(raw, 68, 38);


            /////////////
          }
          else
          { //00110
            //6.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<6.komut>>");
            digitalWrite(LED3, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED4, HIGH);   // turn the LED on (HIGH is the voltage level)

            unsigned int raw[68] = {8850, 4500, 550, 600, 500, 1700, 550, 600, 550, 600, 500, 600, 550, 550, 550, 600, 550, 600, 500, 1700, 550, 600, 500, 1750, 500, 1750, 500, 1750, 500, 1700, 550, 1750, 500, 1750, 500, 1750, 500, 600, 500, 1750, 500, 600, 550, 1700, 550, 600, 500, 600, 550, 600, 500, 600, 550, 1700, 500, 650, 500, 1700, 550, 600, 500, 1750, 500, 1750, 500, 1750, 500,};
            IrSend.sendRaw(raw, 68, 38);

            /////////////
          }


        }
        else
        { //0010?
          if (digitalRead(PARMAK5P) == HIGH )
          { //00101

            //5.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<5.komut>>");
            digitalWrite(LED3, HIGH);   // turn the LED on (HIGH is the voltage level)


            digitalWrite(LED5, HIGH);   // turn the LED on (HIGH is the voltage level)
            unsigned int raw[68] = {8850, 4500, 550, 600, 500, 1750, 500, 600, 500, 600, 550, 600, 500, 600, 550, 600, 500, 600, 550, 1700, 550, 600, 500, 1750, 500, 1750, 500, 1750, 500, 1700, 550, 1700, 550, 1700, 550, 600, 500, 600, 550, 1700, 550, 600, 500, 1750, 500, 600, 550, 600, 500, 600, 500, 1750, 500, 1750, 550, 550, 550, 1700, 550, 600, 500, 1750, 500, 1750, 500, 1750, 500,};
            IrSend.sendRaw(raw, 68, 38);

            /////////////
          }
          else
          { //00100
            //4.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<4.komut>>");
            digitalWrite(LED3, HIGH);   // turn the LED on (HIGH is the voltage level)
            unsigned int raw[68] = {8850, 4500, 500, 600, 550, 1700, 550, 600, 500, 600, 550, 600, 500, 600, 550, 550, 550, 600, 550, 1700, 550, 600, 500, 1750, 500, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 550, 1700, 500, 1750, 500, 650, 500, 1700, 550, 600, 500, 600, 550, 1700, 550, 600, 500, 600, 550, 600, 500, 1700, 550, 600, 550, 1700, 550, 1700, 500, 650, 500, 1700, 550,};
            IrSend.sendRaw(raw, 68, 38);

            /////////////
          }

        }

      }
      else
      { //000??
        if (digitalRead(PARMAK4P) == HIGH )
        { //0001?

          if (digitalRead(PARMAK5P) == HIGH )
          { //00011

            //3.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<3.komut>>");
            digitalWrite(LED4, HIGH);   // turn the LED on (HIGH is the voltage level)
            digitalWrite(LED5, HIGH);   // turn the LED on (HIGH is the voltage level)

            unsigned int raw[66] = {550, 550, 600, 1650, 600, 550, 550, 550, 600, 550, 550, 550, 600, 550, 550, 550, 600, 1650, 600, 500, 600, 1650, 600, 1650, 600, 1650, 600, 1650, 600, 1650, 600, 1650, 600, 1650, 600, 1650, 600, 500, 600, 550, 600, 1650, 550, 550, 600, 550, 550, 550, 600, 550, 550, 550, 600, 1650, 600, 1650, 600, 500, 600, 1650, 600, 1650, 600, 1650, 600,};
            IrSend.sendRaw(raw, 66, 38);

            /////////////
          }
          else
          { //00010
            //2.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<2.komut>>");
            digitalWrite(LED4, HIGH);   // turn the LED on (HIGH is the voltage level)
            unsigned int raw[66] = {550, 550, 600, 1650, 600, 550, 550, 550, 600, 550, 550, 550, 600, 550, 550, 550, 600, 1650, 600, 500, 600, 1650, 600, 1650, 600, 1650, 600, 1650, 600, 1650, 600, 1650, 600, 1650, 600, 1650, 600, 500, 600, 550, 600, 1650, 550, 550, 600, 550, 550, 550, 600, 550, 550, 550, 600, 1650, 600, 1650, 600, 500, 600, 1650, 600, 1650, 600, 1650, 600,};
            IrSend.sendRaw(raw, 66, 38);
            /////////////
          }

        }
        else
        { //0000?
          if (digitalRead(PARMAK5P) == HIGH )
          { //00001

            //1.durum
            //////////////
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("<<1.komut>>");
            digitalWrite(LED5, HIGH);   // turn the LED on (HIGH is the voltage level)
            //////////tv kapat aç on off


            /////////////
          }
          else
          { //00000
            //0.durum
            //////////////////////////////////hicbirsey yapmasın tekrardan parmakların kapalı olup olmadığını kontrol etsin
            lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("KOMUT BEKLENIYOR");
          }

        }

      }
    }
  }
  delay(1000);//bir komut(örenegin ses acma) gönderdikten sonra 1 saniye bekle
 lcd.init();
            // Print a message to the LCD.
            lcd.backlight();
            lcd.setCursor(0, 0);
            lcd.print("KOMUT BEKLENIYOR");
            
  digitalWrite(LED1, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED2, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED3, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED4, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED5, LOW);   // turn the LED on (HIGH is the voltage level)
}
