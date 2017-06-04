#include <SoftwareSerial.h>
#define MY_ID "2 32 30 31 35 30 36 30 39 39 35 41 46 3"
SoftwareSerial RFID(2, 3); // RX and TX

int i ;
int relay9 = 9;


void setup()
{
  RFID.begin(9600);    // start serial to RFID reader
  Serial.begin(9600);  // start serial to PC
  pinMode (relay9, OUTPUT);
}

void loop()
{

  if (RFID.available() > 0)
  {

    i = RFID.read();
    Serial.print(i, DEC);
    Serial.print(" ");
    
    if (RFID.available() > 0)
    {
      digitalWrite (relay9, HIGH);
    }
    delay (100);
  }

  }



