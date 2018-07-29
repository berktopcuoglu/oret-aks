#include "telemetry.h"
#include "sensor.h"
#include "battery.h"
#include "Arduino.h"

void telemetry::sendData(){

byte bms[28]={};
      
        Serial1.print('8');
        
        if (Serial1.available() > 0) {
          if(Serial1.find("bms")){
            
             Serial1.readBytes(bms,28);
        int c1i = (int) bms[0];
        int c1f = (int) bms[1];
        
        int c2i = (int) bms[2];
        int c2f = (int) bms[3];
         
        int c3i = (int) bms[4];
        int c3f = (int) bms[5];
        
        int c4i = (int) bms[6];
        int c4f = (int) bms[7];
        
        int c5i = (int) bms[8];
        int c5f = (int) bms[9];
        
        int c6i = (int) bms[10];
        int c6f = (int) bms[11];
        
        int c7i = (int) bms[12];
        int c7f = (int) bms[13];
        
        int c8i = (int) bms[14];
        int c8f = (int) bms[15];
        
        int c9i = (int) bms[16];
        int c9f = (int) bms[17]; 
            
        int c10i = (int) bms[18];
        int c10f = (int) bms[19];
        
        int c11i = (int) bms[20];
        int c11f = (int) bms[21];
        
        int c12i = (int) bms[22];
        int c12f = (int) bms[23];
        
        int c13i = (int) bms[24];
        int c13f = (int) bms[25];

        int temp1 = (int) bms[26];
        
        int temp2 = (int) bms[27];

        const int motorTempPin = A0;  //Motor temperature analog pin A0
        int tempVal = analogRead(motorTempPin)*50.0/1023.0;
    
        const int currentPin = A1;  //Motor temperature analog pin A0
        int currentVal = analogRead(currentPin)*50.0/1023.0;

        const int batteryVoltagePin = A2;  //Motor temperature analog pin A0
        int batteryVoltageVal = analogRead(batteryVoltagePin)*50.0/1023.0;

    
  Serial3.print(tempVal);
  Serial3.print('#');
  Serial3.print(currentVal);
  Serial3.print('#');
  Serial3.print(0); //////////////////////// speed
  Serial3.print('#');
  Serial3.print(batteryVoltageVal);
  Serial3.println('#');  
  
  Serial3.print(c1i);
  Serial3.print(",");
  Serial3.print(c1f);
  Serial3.println('#'); 
  
  Serial3.print(c2i);
  Serial3.print(",");     
  Serial3.print(c2f);
  Serial3.println('#');
  
  Serial3.print(c3i);
  Serial3.print(","); 
  Serial3.print(c3f);
  Serial3.println('#');
  
  Serial3.print(c4i);
  Serial3.print(",");
  Serial3.print(c4f);
  Serial3.println('#');
  
  Serial3.print(c5i);  
  Serial3.print(",");
  Serial3.print(c5f);  
  Serial3.println('#');
  
  Serial3.print(c6i);
  Serial3.print(",");
  Serial3.print(c6f);
  Serial3.println('#');
  
  Serial3.print(c7i);
  Serial3.print(",");
  Serial3.print(c7f);
  Serial3.println('#');

  Serial3.print(c8i);
  Serial3.print(",");
  Serial3.print(c8f);
  Serial3.println('#');
  
  Serial3.print(c9i);
  Serial3.print(",");
  Serial3.print(c9f);
  Serial3.println('#');
  
  Serial3.print(c10i);
  Serial3.print(",");
  Serial3.print(c10i);
  Serial3.println('#');
  
  Serial3.print(c11i);
  Serial3.print(",");
  Serial3.print(c11f);
  Serial3.println('#');
 
  Serial3.print(c12i);
  Serial3.print(",");
  Serial3.print(c12f);
  Serial3.println('#');
 
  Serial3.print(c13i);
  Serial3.print(",");
  Serial3.print(c13f);
  Serial3.println('#');


  Serial3.print(temp1);
  Serial3.println('#');
 
  Serial3.print(temp2);
  Serial3.println('#');

  Serial3.flush();
  
  }
  }
  
  }
