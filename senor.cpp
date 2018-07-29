#include "sensor.h"
#include "Arduino.h"

void sensor::buttons(){
          
      emergencyVal= digitalRead(emergencyPin);    // read the input pin Emergency button
      reverseVal= digitalRead(reversePin);    // read the input pin Reverse button
      lightVal= digitalRead(lightPin);  //read the input pin Ligth button
      
      byte speedData[5]={};
      
         Serial2.print('5');
        
   /*     if (Serial2.available() > 0) {
          if(Serial2.find("hiz")){
          Serial2.readBytes(speedData,5);
          int a = (int) speedData[1];
       
      Serial.print("speedVal.val=");  // Motor Temp Value
      Serial.print(a);  
      Serial.write(0xff);  
      Serial.write(0xff);
      Serial.write(0xff);   
          }   
          }*/
      
      if(emergencyVal==HIGH){         
      Serial.print("click EmerB,");  // Motor Temp Value
      Serial.print("1");  
      Serial.write(0xff);  
      Serial.write(0xff);
      Serial.write(0xff);            
      }
      else{
      Serial.print("click EmerB,");  // 
      Serial.print("0");  
      Serial.write(0xff);  
      Serial.write(0xff);
      Serial.write(0xff);      
      }
      
      if(reverseVal==HIGH){
      Serial.print("click RevB,");  // 
      Serial.print("1");  
      Serial.write(0xff);  
      Serial.write(0xff);
      Serial.write(0xff);            
      }
      else{
      Serial.print("click RevB,");  // Motor Temp Value
      Serial.print("0");  
      Serial.write(0xff);  
      Serial.write(0xff);
      Serial.write(0xff);     
      }

      if(lightVal==HIGH){
      Serial.print("click FarB,");  // 
      Serial.print("1");  
      Serial.write(0xff);  
      Serial.write(0xff);
      Serial.write(0xff);           
      }
      else{
      Serial.print("click FarB,");  // Motor Temp Value
      Serial.print("0");  
      Serial.write(0xff);  
      Serial.write(0xff);
      Serial.write(0xff);       
      }
   
}
      
void sensor::sensors(){ 





  
const int motorTempPin = A0;  //Motor temperature analog pin A0
int tempVal = analogRead(motorTempPin)*50.0/1023.0;

 const int currentPin = A1;  //Motor temperature analog pin A0
int currentVal = analogRead(currentPin)*50.0/1023.0;

const int batteryVoltagePin = A2;  //Motor temperature analog pin A0
int batteryVoltageVal = analogRead(batteryVoltagePin)*50.0/1023.0;
    
        Serial.print("tempVal.val=");  // Motor Temp Value
    Serial.print(tempVal);  
    Serial.write(0xff);  
    Serial.write(0xff);
    Serial.write(0xff);

        Serial.print("CurrentNum.val=");  // Motor Temp Value
    Serial.print(currentVal);  
    Serial.write(0xff);  
    Serial.write(0xff);
    Serial.write(0xff);

         Serial.print("voltageVal.val=");  // Motor Temp Value
    Serial.print(batteryVoltageVal);  
    Serial.write(0xff);  
    Serial.write(0xff);
    Serial.write(0xff);

    
}
