/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Wiper.h
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

#ifndef RTW_HEADER_Wiper_h_
#define RTW_HEADER_Wiper_h_
#ifndef Wiper_COMMON_INCLUDES_
#define Wiper_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Wiper_COMMON_INCLUDES_ */

#ifndef DEFINED_TYPEDEF_FOR_Operation_Mode_
#define DEFINED_TYPEDEF_FOR_Operation_Mode_

typedef enum {
  OFF = 0,                             /* Default value */
  Auto,
  Low_Speed,
  High_Speed
} Operation_Mode;

#endif

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S4>/Unit Delay' */
} DW;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: [0 64 128 192 256]
   * Referenced by: '<S5>/1-D Lookup Table'
   */
  real_T uDLookupTable_tableData[5];

  /* Expression: [0 256 512 768 1023]
   * Referenced by: '<S5>/1-D Lookup Table'
   */
  real_T uDLookupTable_bp01Data[5];
} ConstP;

/* External inputs (root inport signals with default storage) */
typedef struct {
  Operation_Mode Wiper_Mode_of_Operation;/* '<Root>/Wiper_Mode_of_Operation' */
  real_T Rain_Sensor_Error;            /* '<Root>/Rain_Sensor_Error' */
  real_T Rain_Density;                 /* '<Root>/Rain_Density' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T PWM;                          /* '<Root>/PWM' */
  boolean_T Wiper_indcation;           /* '<Root>/Wiper_indcation' */
} ExtY;

/* Block signals and states (default storage) */
extern DW rtDW;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Constant parameters (default storage) */
extern const ConstP rtConstP;

/* Model entry point functions */
extern void Wiper_initialize(void);
extern void Wiper_step(void);
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Wiper'
 * '<S1>'   : 'Wiper/Wiper'
 * '<S2>'   : 'Wiper/Wiper/Auto_Mode'
 * '<S3>'   : 'Wiper/Wiper/Compare To Zero'
 * '<S4>'   : 'Wiper/Wiper/Smoothing_Speed'
 * '<S5>'   : 'Wiper/Wiper/Auto_Mode/Density_of_rain_algorthim'
 */
#endif                                 /* RTW_HEADER_Wiper_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
