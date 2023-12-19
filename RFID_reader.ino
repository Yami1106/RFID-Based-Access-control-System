#include <LCD_I2C.h>
#include <SPI.h>
#include <MFRC522.h>

#define RST_PIN         9          
#define SS_PIN          10 

int rled=4;
int gled=2;
int buzz=7;

     
MFRC522 mfrc522(SS_PIN, RST_PIN);
LCD_I2C lcd(0x27,16,2);  

byte accessID[4]= {0x33, 0x66, 0x6B, 0xA6};


void setup() {
  pinMode(rled,OUTPUT);
  pinMode(gled,OUTPUT);
  pinMode(buzz,OUTPUT);
  Serial.begin(9600);   
  while (!Serial);    
  SPI.begin();      
  mfrc522.PCD_Init();   
  delay(4);      
  mfrc522.PCD_DumpVersionToSerial();  
  lcd.begin();
  lcd.backlight();
}

void loop() {
  // Reset the loop if no new card present on the sensor/reader. This saves the entire process when idle.
  if ( ! mfrc522.PICC_IsNewCardPresent()) {
    lcd.setCursor(0,0);
    lcd.print("No card found");
    lcd.setCursor(0,1);
    lcd.print("Place card ");
    return;
  }

  // Select one of the cards
  if ( ! mfrc522.PICC_ReadCardSerial()) {
    return;
  }
  

  if(mfrc522.uid.uidByte[0]==accessID[0] && mfrc522.uid.uidByte[1]==accessID[1] && mfrc522.uid.uidByte[2]==accessID[2] && mfrc522.uid.uidByte[3]==accessID[3]){
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Access Granted");
    digitalWrite(gled,HIGH);
    delay(2000);
    digitalWrite(gled,LOW); 
  }
  else{
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Access Denied");
    digitalWrite(rled,HIGH);
    digitalWrite(buzz,HIGH);
    delay(1000);
    digitalWrite(rled,LOW);
    digitalWrite(buzz,LOW);
}

//used to reset the rfid reader
mfrc522.PICC_HaltA();
}
