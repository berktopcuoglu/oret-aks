#include "battery.h"
#include "Arduino.h"

void battery::batteryVoltageRead(){
     
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

        
     Serial.print("c1i.txt=");  //cell1 integer
     Serial.print("\"");
     Serial.print(c1i);
     Serial.print("\"");
     Serial.write(0xff);  
     Serial.write(0xff);
     Serial.write(0xff);

     Serial.print("c1f.txt=");  //cell1
     Serial.print("\"");
     Serial.print(c1f);
   Serial.print("\"");
   Serial.write(0xff);  
   Serial.write(0xff);
   Serial.write(0xff);
   
    Serial.print("c2i.txt=");  //cell2  integer
   Serial.print("\"");
   Serial.print(c2i);
   Serial.print("\"");     
   Serial.write(0xff);  
   Serial.write(0xff);
   Serial.write(0xff);

     Serial.print("c2f.txt=");  //cell2
   Serial.print("\"");
   Serial.print(c2f);
   Serial.print("\"");     
   Serial.write(0xff);  
   Serial.write(0xff);
   Serial.write(0xff);


  Serial.print("c3i.txt=");  //cell3  integer
  Serial.print("\"");
  Serial.print(c3i);
  Serial.print("\""); 
  Serial.write(0xff);  
  Serial.write(0xff);
  Serial.write(0xff);

    Serial.print("c3f.txt=");  //cell3 float
  Serial.print("\"");
  Serial.print(c3f);
  Serial.print("\""); 
  Serial.write(0xff);  
  Serial.write(0xff);
  Serial.write(0xff);

    Serial.print("c4i.txt=");  // cell4 integer
     Serial.print("\"");
  Serial.print(c4i);
   Serial.print("\"");
  Serial.write(0xff);  
  Serial.write(0xff);
  Serial.write(0xff);

   Serial.print("c4f.txt=");  // cell4 float
     Serial.print("\"");
  Serial.print(c4f);
   Serial.print("\"");
  Serial.write(0xff);  
  Serial.write(0xff);
  Serial.write(0xff);
  
    Serial.print("c5i.txt=");  // cell5 integer 
    Serial.print("\"");
  Serial.print(c5i);  
  Serial.print("\"");
  Serial.write(0xff);  
  Serial.write(0xff);
  Serial.write(0xff);

     Serial.print("c5f.txt=");  // cell5 float
    Serial.print("\"");
  Serial.print(c5f);  
  Serial.print("\"");
  Serial.write(0xff);  
  Serial.write(0xff);
  Serial.write(0xff);
  
    Serial.print("c6i.txt=");  //cell6 integer
        Serial.print("\"");
  Serial.print(c6i);
  Serial.print("\"");
  Serial.write(0xff);  
  Serial.write(0xff);
  Serial.write(0xff);

      Serial.print("c6f.txt=");  //cell6 float
        Serial.print("\"");
  Serial.print(c6f);
  Serial.print("\"");
  Serial.write(0xff);  
  Serial.write(0xff);
  Serial.write(0xff);
  
    Serial.print("c7i.txt=");  //cell7 integer
        Serial.print("\"");
  Serial.print(c7i);
  Serial.print("\"");
  Serial.write(0xff);  
  Serial.write(0xff);
  Serial.write(0xff);


      Serial.print("c7f.txt=");  //cell7 float
        Serial.print("\"");
  Serial.print(c7f);
  Serial.print("\"");
  Serial.write(0xff);  
  Serial.write(0xff);
  Serial.write(0xff);

      Serial.print("c8i.txt=");  //cell8 integer
        Serial.print("\"");
  Serial.print(c8i);
  Serial.print("\"");
  Serial.write(0xff);  
  Serial.write(0xff);
  Serial.write(0xff);

        Serial.print("c8f.txt=");  //cell8 float
        Serial.print("\"");
  Serial.print(c8f);
  Serial.print("\"");
  Serial.write(0xff);  
  Serial.write(0xff);
  Serial.write(0xff);

     Serial.print("c9i.txt=");  //cell9 integer
        Serial.print("\"");
  Serial.print(c9i);
  Serial.print("\"");
  Serial.write(0xff);  
  Serial.write(0xff);
  Serial.write(0xff);
  
       Serial.print("c9f.txt=");  //cell9 float
        Serial.print("\"");
  Serial.print(c9f);
  Serial.print("\"");
  Serial.write(0xff);  
  Serial.write(0xff);
  Serial.write(0xff);

      Serial.print("c10i.txt=");  //cell10 integer
        Serial.print("\"");
  Serial.print(c10i);
  Serial.print("\"");
  Serial.write(0xff);  
  Serial.write(0xff);
  Serial.write(0xff);

        Serial.print("c10f.txt=");  //cell10 float
        Serial.print("\"");
  Serial.print(c10i);
  Serial.print("\"");
  Serial.write(0xff);  
  Serial.write(0xff);
  Serial.write(0xff);

   Serial.print("c11i.txt=");  //cell11 integer
        Serial.print("\"");
  Serial.print(c11i);
  Serial.print("\"");
  Serial.write(0xff);  
  Serial.write(0xff);
  Serial.write(0xff);

    Serial.print("c11f.txt=");  //cell11 float
        Serial.print("\"");
  Serial.print(c11f);
  Serial.print("\"");
  Serial.write(0xff);  
  Serial.write(0xff);
  Serial.write(0xff);

   Serial.print("c12i.txt=");  //cell12 integer
        Serial.print("\"");
  Serial.print(c12i);
  Serial.print("\"");
  Serial.write(0xff);  
  Serial.write(0xff);
  Serial.write(0xff);

   Serial.print("c12f.txt=");  //cell12 float
        Serial.print("\"");
  Serial.print(c12f);
  Serial.print("\"");
  Serial.write(0xff);  
  Serial.write(0xff);
  Serial.write(0xff);

  
   Serial.print("c13i.txt=");  //cell13 integer
        Serial.print("\"");
  Serial.print(c13i);
  Serial.print("\"");
  Serial.write(0xff);  
  Serial.write(0xff);
  Serial.write(0xff);

    Serial.print("c13f.txt=");  //cell13 float
        Serial.print("\"");
  Serial.print(c13f);
  Serial.print("\"");
  Serial.write(0xff);  
  Serial.write(0xff);
  Serial.write(0xff);

      Serial.print("batTempleftN.val=");  //cell13 float
  Serial.print(temp1);
  Serial.write(0xff);  
  Serial.write(0xff);
  Serial.write(0xff);
  
        Serial.print("batTempRigthN.val=");  //cell13 float
  Serial.print(temp1);
  Serial.write(0xff);  
  Serial.write(0xff);
  Serial.write(0xff);
  
          }
}

}


