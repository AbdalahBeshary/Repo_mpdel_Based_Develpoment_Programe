#include "Wiper.h"
//Input  

#define    Rain_error_sensor     8
#define    Rain_density          A0
#define    Mod_Analog           A1

//Output
#define    Pulse_Width_Out      3  
#define    wiper_state          4

 int operation_mode =9;
      
float  modes;
void setup() {
  //Input

pinMode(operation_mode,INPUT);
pinMode(Rain_error_sensor,INPUT);
pinMode(Rain_density,INPUT);
pinMode(Mod_Analog,INPUT);
//oUTPUT
pinMode(Pulse_Width_Out,OUTPUT);
pinMode(wiper_state,OUTPUT);

}

void loop() {
  modes= (analogRead(Mod_Analog)*3/1023);
  operation_mode= static_cast<int>(modes);
 rtU.Wiper_Mode_of_Operation=operation_mode;
 rtU.Rain_Sensor_Error= digitalRead(Rain_error_sensor);
 rtU.Rain_Density= analogRead(Rain_density);
 Wiper_step();
 analogWrite(Pulse_Width_Out,255*rtY.PWM);
 digitalWrite(wiper_state,rtY.Wiper_indcation);
 
}
