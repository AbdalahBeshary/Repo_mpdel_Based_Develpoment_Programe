#include "SOlar_panel_project.h"

#define LDR1   A0
#define LDR2   A1
#define LDR3   A2
#define LDR4   A3
#define Solar_panel_motor     6
#define Solar_ground_motor    5

void setup() {
  // put your setup code here, to run once:
pinMode(LDR1,INPUT);
pinMode(LDR2,INPUT);
pinMode(LDR3,INPUT);
pinMode(LDR4,INPUT);
pinMode(Solar_panel_motor,OUTPUT);
pinMode(Solar_ground_motor,OUTPUT);
SOlar_panel_project_initialize();
Serial.begin(9600);
}

void loop(){
 
 rtU.LDR_U_Left= analogRead(LDR1);
 rtU.LDR_U_Right= analogRead(LDR2);
 rtU.LDR_B_Right= analogRead(LDR3);
 rtU.LDR_B_Left= analogRead(LDR4);
SOlar_panel_project_step();
analogWrite(Solar_panel_motor,rtY.Servo_Rotate);
analogWrite(Solar_ground_motor,rtY.Servo_Rotate_Panel_Plate);
int sensor=analogRead(LDR4);
Serial.println(sensor);
delay(100);
}
