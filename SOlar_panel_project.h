/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SOlar_panel_project.h
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

#ifndef RTW_HEADER_SOlar_panel_project_h_
#define RTW_HEADER_SOlar_panel_project_h_
#ifndef SOlar_panel_project_COMMON_INCLUDES_
#define SOlar_panel_project_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                /* SOlar_panel_project_COMMON_INCLUDES_ */

#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#define SOlar_panel_project_M          (rtM)

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T Step_angle;                   /* '<S1>/Chart' */
  uint8_T is_active_c3_SOlar_panel_projec;/* '<S1>/Chart' */
} DW;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T LDR_B_Left;                   /* '<Root>/LDR_B_Left' */
  real_T LDR_B_Right;                  /* '<Root>/LDR_B_Right' */
  real_T LDR_U_Left;                   /* '<Root>/LDR_U_Left' */
  real_T LDR_U_Right;                  /* '<Root>/LDR_U_Right' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Servo_Rotate_Panel_Plate;     /* '<Root>/Servo_Rotate_Panel_Plate' */
  real_T Servo_Rotate;                 /* '<Root>/Servo_Rotate' */
} ExtY;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T * volatile errorStatus;
};

/* Block signals and states (default storage) */
extern DW rtDW;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void SOlar_panel_project_initialize(void);
extern void SOlar_panel_project_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;
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
 * '<Root>' : 'SOlar_panel_project'
 * '<S1>'   : 'SOlar_panel_project/Subsystem1'
 * '<S2>'   : 'SOlar_panel_project/Subsystem1/Chart'
 * '<S3>'   : 'SOlar_panel_project/Subsystem1/Subsystem'
 */
#endif                                 /* RTW_HEADER_SOlar_panel_project_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
