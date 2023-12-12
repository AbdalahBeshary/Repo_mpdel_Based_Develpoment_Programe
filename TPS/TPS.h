/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TPS.h
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

#ifndef RTW_HEADER_TPS_h_
#define RTW_HEADER_TPS_h_
#ifndef TPS_COMMON_INCLUDES_
#define TPS_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* TPS_COMMON_INCLUDES_ */

#ifndef DEFINED_TYPEDEF_FOR_MyEnum_
#define DEFINED_TYPEDEF_FOR_MyEnum_

typedef enum {
  Normal = 0,                          /* Default value */
  DowngradedS1,
  DowngradedS2,
  Failure
} MyEnum;

#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Theata;                       /* '<Root>/Theata' */
  boolean_T TPS_bsesnor1_Failure;      /* '<Root>/TPS_bsesnor1_Failure' */
  boolean_T TPS_bsesnor2_Failure;      /* '<Root>/TPS_bsesnor2_Failure' */
  real_T TPS_bChorencyFailure;         /* '<Root>/TPS_bChorencyFailure' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  MyEnum App_stOperationMode1;         /* '<Root>/App_stOperationMode1' */
} ExtY;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void TPS_initialize(void);
extern void TPS_step(void);
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
 * '<Root>' : 'TPS'
 * '<S1>'   : 'TPS/Abdelrahman1'
 */
#endif                                 /* RTW_HEADER_TPS_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
