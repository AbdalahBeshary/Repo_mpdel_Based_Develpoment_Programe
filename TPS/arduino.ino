#include "TPS.h"

void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  

    pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(8,OUTPUT);


} 

void loop() {
  // put your main code here, to run repeatedly:
rtU.TPS_bChorencyFailure=digitalRead(2);
rtU.TPS_bsesnor1_Failure=digitalRead(3);
rtU.TPS_bsesnor2_Failure=digitalRead(4);
TPS_step();
  switch(rtY.App_stOperationMode1)
  {
    case DowngradedS1:
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      break;
    case DowngradedS2:
      digitalWrite(10,HIGH);
      digitalWrite(9,LOW);
      break;
    case Failure:
      digitalWrite(8,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(9,HIGH);
      break;
    default:
      digitalWrite(10,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);      
      break;
}
    



}
