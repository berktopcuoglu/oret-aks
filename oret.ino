#include "battery.h"
#include "sensor.h"
#include "telemetry.h"
#define byte uint8_t

/* 
 *  Serial0 screen
 *  serial1 bms
 *  serail2 speed
 *  serial3 telemetry
*/



battery battery;
sensor sensor;
telemetry telemetry;
byte pageNumber = 0;   // for incoming serial data screen
byte tele = 0;   // for incoming serial data from telemetry

     byte speedData[1];
const int emergencyPin = 6;   //Emergency button connecto digital pin 6
const int reversePin = 5;  //Reverse statuse button connecto digital pin 5
const int lightPin = 4;  //Light statuse button connecto digital pin 4
const int chargePin = 3;
const int hizPin=2;

   int emergencyVal = 0;   //Emergency value
   int reverseVal = 0;  //Reverse value
   int lightVal = 0;  //ligth value
   int chargeVal = 0;
   int batteryVoltageVal=0;  
   int currentVal=0;
   int hiz=0;
   int tempVal=0;
   int speedD=0;



void setup() {
   Serial.begin(9600);
   Serial1.begin(9600);
   Serial2.begin(9600); 
   Serial3.begin(9600);     
   pinMode(emergencyPin,INPUT);   // sets the digital pin 6 as input
   pinMode(reversePin,INPUT);   // sets the digital pin 5 as input 
   pinMode(chargePin,INPUT);   // sets the digital pin 5 as input  
   pinMode(hizPin,INPUT);   // sets the digital pin 2 as input hız

   
}

void loop() {
Serial.flush();
  Serial1.flush();
    Serial2.flush();
      Serial3.flush();
      
if (Serial.available() > 0) {
    pageNumber = Serial.read();
  if(pageNumber=='0'){      //mainpage
   
      sensor.buttons();
      sensor.sensors();
  }

    if(pageNumber=='3'){   // battery manegmant page
      battery.batteryVoltageRead();      
  }
}
if (Serial3.available() > 0) {
        tele=Serial3.read();    //telemetri part
        if(tele=='?'){
        telemetry.sendData();
          }
          
}
}
