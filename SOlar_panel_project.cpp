/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SOlar_panel_project.c
 *
 * Code generated for Simulink model 'SOlar_panel_project'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Tue Dec 19 21:38:14 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "SOlar_panel_project.h"
#include "rtwtypes.h"
#include <math.h>

/* Block signals and states (default storage) */
DW rtDW;

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Forward declaration for local functions */
static real_T servo_land(real_T Right_sensors, real_T Left_sensors);

/* Function for Chart: '<S1>/Chart' */
static real_T servo_land(real_T Right_sensors, real_T Left_sensors)
{
  real_T Servo_out_land;

  /*  speed  */
  if (fabs(Right_sensors - Left_sensors) <= 0.5) {
    Servo_out_land = 0.0;
  } else if (Right_sensors > Left_sensors) {
    Servo_out_land = Left_sensors / 2.0 * 51.0 * rtDW.Step_angle;
  } else {
    Servo_out_land = Right_sensors / 2.0 * 51.0 * rtDW.Step_angle;
  }

  return Servo_out_land;
}

/* Model step function */
void SOlar_panel_project_step(void)
{
  real_T rtb_Gain;
  real_T rtb_Gain1;
  real_T rtb_Gain2;
  real_T rtb_Gain3;

  /* Outputs for Atomic SubSystem: '<Root>/Subsystem1' */
  /* Gain: '<S3>/Gain2' incorporates:
   *  Inport: '<Root>/LDR_U_Left'
   */
  rtb_Gain2 = 0.0048828125 * rtU.LDR_U_Left;

  /* Gain: '<S3>/Gain3' incorporates:
   *  Inport: '<Root>/LDR_U_Right'
   */
  rtb_Gain3 = 0.0048828125 * rtU.LDR_U_Right;

  /* Gain: '<S3>/Gain' incorporates:
   *  Inport: '<Root>/LDR_B_Left'
   */
  rtb_Gain = 0.0048828125 * rtU.LDR_B_Left;

  /* Gain: '<S3>/Gain1' incorporates:
   *  Inport: '<Root>/LDR_B_Right'
   */
  rtb_Gain1 = 0.0048828125 * rtU.LDR_B_Right;

  /* Chart: '<S1>/Chart' */
  if (rtDW.is_active_c3_SOlar_panel_projec == 0U) {
    rtDW.is_active_c3_SOlar_panel_projec = 1U;
  } else {
    /* Outport: '<Root>/Servo_Rotate' incorporates:
     *  Sum: '<S3>/Add2'
     *  Sum: '<S3>/Add3'
     */
    rtY.Servo_Rotate = servo_land(rtb_Gain1 + rtb_Gain3, rtb_Gain + rtb_Gain2);

    /* Outport: '<Root>/Servo_Rotate_Panel_Plate' incorporates:
     *  Sum: '<S3>/Add'
     *  Sum: '<S3>/Add1'
     */
    rtY.Servo_Rotate_Panel_Plate = servo_land(rtb_Gain2 + rtb_Gain3, rtb_Gain +
      rtb_Gain1);
  }

  /* End of Chart: '<S1>/Chart' */
  /* End of Outputs for SubSystem: '<Root>/Subsystem1' */
}

/* Model initialize function */
void SOlar_panel_project_initialize(void)
{
  /* SystemInitialize for Atomic SubSystem: '<Root>/Subsystem1' */
  /* SystemInitialize for Chart: '<S1>/Chart' */
  rtDW.Step_angle = 0.70588235294117652;

  /* End of SystemInitialize for SubSystem: '<Root>/Subsystem1' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
