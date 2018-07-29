#ifndef sensor_h
#define sensor_h


class sensor{
  
  public:  
         
   const  int emergencyPin = 6;   //Emergency button connecto digital pin 6
   int emergencyVal = 0;   //Emergency button connecto digital pin 6

   const int reversePin = 5;  //Reverse statuse button connecto digital pin 5
   int reverseVal = 0;  //Reverse statuse button connecto digital pin 5

   const int lightPin = 4;  //Reverse statuse button connecto digital pin 4
   int lightVal = 0;  //Reverse statuse button connecto digital pin 4
   int currentVal=0;


  
   void buttons();
   void sensors();
  
  };
#endif
