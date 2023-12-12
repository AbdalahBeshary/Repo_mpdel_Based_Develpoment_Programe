/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Wiper.c
 *
 * Code generated for Simulink model 'Wiper'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Mon Dec 11 19:23:52 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "Wiper.h"
#include "rtwtypes.h"

/* Block signals and states (default storage) */
DW rtDW;

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;
static real_T look1_binlx(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
static real_T look1_binlx(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex)
{
  real_T frac;
  real_T yL_0d0;
  uint32_T bpIdx;
  uint32_T iLeft;
  uint32_T iRght;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0UL]) {
    iLeft = 0UL;
    frac = (u0 - bp0[0UL]) / (bp0[1UL] - bp0[0UL]);
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1UL;
    iLeft = 0UL;
    iRght = maxIndex;
    while (iRght - iLeft > 1UL) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1UL;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1UL] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1UL;
    frac = (u0 - bp0[maxIndex - 1UL]) / (bp0[maxIndex] - bp0[maxIndex - 1UL]);
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'wrapping'
   */
  yL_0d0 = table[iLeft];
  return (table[iLeft + 1UL] - yL_0d0) * frac + yL_0d0;
}

/* Model step function */
void Wiper_step(void)
{
  real_T rtb_Add;
  real_T rtb_Previous_value;

  /* Outputs for Atomic SubSystem: '<Root>/Wiper' */
  /* MultiPortSwitch: '<S1>/Multiport Switch' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S1>/Constant2'
   *  Inport: '<Root>/Wiper_Mode_of_Operation'
   */
  switch (rtU.Wiper_Mode_of_Operation) {
   case OFF:
    rtb_Previous_value = 0.0;
    break;

   case Auto:
    /* Switch: '<S2>/Switch' incorporates:
     *  Constant: '<S2>/Constant'
     *  Gain: '<S5>/Gain'
     *  Inport: '<Root>/Rain_Density'
     *  Inport: '<Root>/Rain_Sensor_Error'
     *  Lookup_n-D: '<S5>/1-D Lookup Table'
     */
    if (rtU.Rain_Sensor_Error != 0.0) {
      rtb_Previous_value = 0.0;
    } else {
      rtb_Previous_value = 0.00390625 * look1_binlx(rtU.Rain_Density,
        rtConstP.uDLookupTable_bp01Data, rtConstP.uDLookupTable_tableData, 4UL);
    }

    /* End of Switch: '<S2>/Switch' */
    break;

   case Low_Speed:
    rtb_Previous_value = 0.4;
    break;

   default:
    rtb_Previous_value = 0.7;
    break;
  }

  /* End of MultiPortSwitch: '<S1>/Multiport Switch' */

  /* Sum: '<S4>/Add' incorporates:
   *  Gain: '<S4>/Gain'
   *  Gain: '<S4>/Gain1'
   *  UnitDelay: '<S4>/Unit Delay'
   */
  rtb_Add = 0.7 * rtb_Previous_value + 0.3 * rtDW.UnitDelay_DSTATE;

  /* Update for UnitDelay: '<S4>/Unit Delay' */
  rtDW.UnitDelay_DSTATE = rtb_Add;

  /* End of Outputs for SubSystem: '<Root>/Wiper' */

  /* Outport: '<Root>/PWM' */
  rtY.PWM = rtb_Add;

  /* Outputs for Atomic SubSystem: '<Root>/Wiper' */
  /* Outport: '<Root>/Wiper_indcation' incorporates:
   *  Constant: '<S3>/Constant'
   *  RelationalOperator: '<S3>/Compare'
   */
  rtY.Wiper_indcation = (rtb_Previous_value > 0.0);

  /* End of Outputs for SubSystem: '<Root>/Wiper' */
}

/* Model initialize function */
void Wiper_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
