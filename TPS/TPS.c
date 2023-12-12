/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TPS.c
 *
 * Code generated for Simulink model 'TPS'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Fri Dec  8 22:40:40 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "TPS.h"

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void TPS_step(void)
{
  /* Switch: '<S1>/Switch' incorporates:
   *  Inport: '<Root>/TPS_bChorencyFailure'
   */
  if (rtU.TPS_bChorencyFailure != 0.0) {
    /* Switch: '<S1>/Switch1' incorporates:
     *  Inport: '<Root>/TPS_bsesnor1_Failure'
     *  Inport: '<Root>/TPS_bsesnor2_Failure'
     *  Logic: '<S1>/AND'
     *  Logic: '<S1>/AND1'
     *  Logic: '<S1>/NOT'
     *  Logic: '<S1>/NOT1'
     *  Switch: '<S1>/Switch2'
     */
    if ((!rtU.TPS_bsesnor1_Failure) && rtU.TPS_bsesnor2_Failure) {
      /* Outport: '<Root>/App_stOperationMode1' incorporates:
       *  Constant: '<S1>/Constant1'
       */
      rtY.App_stOperationMode1 = DowngradedS1;
    } else if (rtU.TPS_bsesnor1_Failure && (!rtU.TPS_bsesnor2_Failure)) {
      /* Switch: '<S1>/Switch2' incorporates:
       *  Constant: '<S1>/Constant2'
       *  Outport: '<Root>/App_stOperationMode1'
       */
      rtY.App_stOperationMode1 = DowngradedS2;
    } else {
      /* Outport: '<Root>/App_stOperationMode1' incorporates:
       *  Constant: '<S1>/Constant3'
       *  Switch: '<S1>/Switch2'
       */
      rtY.App_stOperationMode1 = Failure;
    }

    /* End of Switch: '<S1>/Switch1' */
  } else {
    /* Outport: '<Root>/App_stOperationMode1' incorporates:
     *  Constant: '<S1>/Constant'
     */
    rtY.App_stOperationMode1 = Normal;
  }

  /* End of Switch: '<S1>/Switch' */
}

/* Model initialize function */
void TPS_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
