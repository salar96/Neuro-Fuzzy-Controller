/* Include files */

#include "modelInterface.h"
#include "m_BTeovP3vODQtQdRntBRxBE.h"
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */
#define portNumber                     (0.0)

/* Variable Declarations */

/* Variable Definitions */
static const mxArray *eml_mx;
static const mxArray *b_eml_mx;
static emlrtMCInfo emlrtMCI = { 1, 1, "SystemCore",
  "E:\\Program Files\\MATLAB\\R2016a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"
};

static emlrtMCInfo b_emlrtMCI = { 171, 28, "validateattributes",
  "E:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"
};

static emlrtMCInfo c_emlrtMCI = { 162, 28, "validateattributes",
  "E:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"
};

/* Function Declarations */
static void arduino_SerialWrite_validateInputsImpl
  (InstanceStruct_BTeovP3vODQtQdRntBRxBE *moduleInstance,
   codertarget_arduinobase_internal_arduino_SerialWrite *unusedU0, real_T dataIn);
static void cgxe_mdl_start(InstanceStruct_BTeovP3vODQtQdRntBRxBE *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_BTeovP3vODQtQdRntBRxBE
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_BTeovP3vODQtQdRntBRxBE
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_BTeovP3vODQtQdRntBRxBE
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_BTeovP3vODQtQdRntBRxBE
  *moduleInstance);
static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_BTeovP3vODQtQdRntBRxBE *moduleInstance);
static codertarget_arduinobase_internal_arduino_SerialWrite emlrt_marshallIn
  (InstanceStruct_BTeovP3vODQtQdRntBRxBE *moduleInstance, const mxArray
   *b_sysobj, const char_T *identifier);
static codertarget_arduinobase_internal_arduino_SerialWrite b_emlrt_marshallIn
  (InstanceStruct_BTeovP3vODQtQdRntBRxBE *moduleInstance, const mxArray *u,
   const emlrtMsgIdentifier *parentId);
static int32_T c_emlrt_marshallIn(InstanceStruct_BTeovP3vODQtQdRntBRxBE
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId);
static void d_emlrt_marshallIn(InstanceStruct_BTeovP3vODQtQdRntBRxBE
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId,
  uint32_T y[8]);
static boolean_T e_emlrt_marshallIn(InstanceStruct_BTeovP3vODQtQdRntBRxBE
  *moduleInstance, const mxArray *b_sysobj_not_empty, const char_T *identifier);
static boolean_T f_emlrt_marshallIn(InstanceStruct_BTeovP3vODQtQdRntBRxBE
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId);
static void cgxe_mdl_set_sim_state(InstanceStruct_BTeovP3vODQtQdRntBRxBE
  *moduleInstance, const mxArray *st);
static const mxArray *message(InstanceStruct_BTeovP3vODQtQdRntBRxBE
  *moduleInstance, const mxArray *b, const mxArray *c, emlrtMCInfo *location);
static void error(InstanceStruct_BTeovP3vODQtQdRntBRxBE *moduleInstance, const
                  mxArray *b, emlrtMCInfo *location);
static void b_error(InstanceStruct_BTeovP3vODQtQdRntBRxBE *moduleInstance, const
                    mxArray *b, const mxArray *c, emlrtMCInfo *location);
static int32_T g_emlrt_marshallIn(InstanceStruct_BTeovP3vODQtQdRntBRxBE
  *moduleInstance, const mxArray *src, const emlrtMsgIdentifier *msgId);
static void h_emlrt_marshallIn(InstanceStruct_BTeovP3vODQtQdRntBRxBE
  *moduleInstance, const mxArray *src, const emlrtMsgIdentifier *msgId, uint32_T
  ret[8]);
static boolean_T i_emlrt_marshallIn(InstanceStruct_BTeovP3vODQtQdRntBRxBE
  *moduleInstance, const mxArray *src, const emlrtMsgIdentifier *msgId);
static void init_simulink_io_address(InstanceStruct_BTeovP3vODQtQdRntBRxBE
  *moduleInstance);

/* Function Definitions */
static void arduino_SerialWrite_validateInputsImpl
  (InstanceStruct_BTeovP3vODQtQdRntBRxBE *moduleInstance,
   codertarget_arduinobase_internal_arduino_SerialWrite *unusedU0, real_T dataIn)
{
  boolean_T p;
  int32_T i0;
  const mxArray *y;
  char_T u[21];
  static char_T cv0[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 21 };

  const mxArray *b_y;
  char_T b_u[21];
  static char_T cv1[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static const int32_T iv1[2] = { 1, 21 };

  const mxArray *c_y;
  char_T c_u[29];
  static char_T cv2[29] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ', 'i',
    'n', 'p', 'u', 't', ' ', 't', 'o', ' ', 'b', 'e', ' ', 'n', 'o', 'n', '-',
    'N', 'a', 'N', '.' };

  static const int32_T iv2[2] = { 1, 29 };

  const mxArray *d_y;
  char_T d_u[28];
  static char_T cv3[28] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ', 'i',
    'n', 'p', 'u', 't', ' ', 't', 'o', ' ', 'b', 'e', ' ', 'f', 'i', 'n', 'i',
    't', 'e', '.' };

  static const int32_T iv3[2] = { 1, 28 };

  (void)unusedU0;
  p = true;
  if (muDoubleScalarIsNaN(dataIn)) {
    p = false;
  }

  if (!p) {
    for (i0 = 0; i0 < 21; i0++) {
      u[i0] = cv0[i0];
    }

    y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 21, m0, &u[0]);
    emlrtAssign(&y, m0);
    for (i0 = 0; i0 < 29; i0++) {
      c_u[i0] = cv2[i0];
    }

    c_y = NULL;
    m0 = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 29, m0, &c_u[0]);
    emlrtAssign(&c_y, m0);
    b_error(moduleInstance, y, c_y, &b_emlrtMCI);
  }

  p = true;
  if (!((!muDoubleScalarIsInf(dataIn)) && (!muDoubleScalarIsNaN(dataIn)))) {
    p = false;
  }

  if (!p) {
    for (i0 = 0; i0 < 21; i0++) {
      b_u[i0] = cv1[i0];
    }

    b_y = NULL;
    m0 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 21, m0, &b_u[0]);
    emlrtAssign(&b_y, m0);
    for (i0 = 0; i0 < 28; i0++) {
      d_u[i0] = cv3[i0];
    }

    d_y = NULL;
    m0 = emlrtCreateCharArray(2, iv3);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 28, m0, &d_u[0]);
    emlrtAssign(&d_y, m0);
    b_error(moduleInstance, b_y, d_y, &c_emlrtMCI);
  }
}

static void cgxe_mdl_start(InstanceStruct_BTeovP3vODQtQdRntBRxBE *moduleInstance)
{
  const mxArray *m1;
  static const int32_T iv4[2] = { 0, 0 };

  static const int32_T iv5[2] = { 0, 0 };

  codertarget_arduinobase_internal_arduino_SerialWrite *obj;
  int32_T i1;
  const mxArray *y;
  char_T u[51];
  static char_T cv4[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static const int32_T iv6[2] = { 1, 51 };

  const mxArray *b_y;
  char_T b_u[5];
  static char_T cv5[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv7[2] = { 1, 5 };

  init_simulink_io_address(moduleInstance);
  m1 = emlrtCreateNumericArray(2, iv4, mxDOUBLE_CLASS, mxREAL);
  emlrtAssignP(&b_eml_mx, m1);
  m1 = emlrtCreateCharArray(2, iv5);
  emlrtAssignP(&eml_mx, m1);
  if (!moduleInstance->sysobj_not_empty) {
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj_not_empty = true;
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized != 0) {
    for (i1 = 0; i1 < 51; i1++) {
      u[i1] = cv4[i1];
    }

    y = NULL;
    m1 = emlrtCreateCharArray(2, iv6);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 51, m1, &u[0]);
    emlrtAssign(&y, m1);
    for (i1 = 0; i1 < 5; i1++) {
      b_u[i1] = cv5[i1];
    }

    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv7);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m1, &b_u[0]);
    emlrtAssign(&b_y, m1);
    error(moduleInstance, message(moduleInstance, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  obj->isInitialized = 1;
  for (i1 = 0; i1 < 8; i1++) {
    obj->inputVarSize1[i1] = 1U;
  }

  arduino_SerialWrite_validateInputsImpl(moduleInstance, obj,
    *moduleInstance->u0);
}

static void cgxe_mdl_initialize(InstanceStruct_BTeovP3vODQtQdRntBRxBE
  *moduleInstance)
{
  codertarget_arduinobase_internal_arduino_SerialWrite *obj;
  int32_T i2;
  boolean_T flag;
  const mxArray *y;
  char_T u[45];
  static char_T cv6[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m2;
  static const int32_T iv8[2] = { 1, 45 };

  const mxArray *b_y;
  char_T b_u[45];
  static const int32_T iv9[2] = { 1, 45 };

  const mxArray *c_y;
  char_T c_u[8];
  static char_T cv7[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  static const int32_T iv10[2] = { 1, 8 };

  const mxArray *d_y;
  char_T d_u[5];
  static char_T cv8[5] = { 'r', 'e', 's', 'e', 't' };

  static const int32_T iv11[2] = { 1, 5 };

  if (!moduleInstance->sysobj_not_empty) {
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj_not_empty = true;
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i2 = 0; i2 < 45; i2++) {
      u[i2] = cv6[i2];
    }

    y = NULL;
    m2 = emlrtCreateCharArray(2, iv8);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m2, &u[0]);
    emlrtAssign(&y, m2);
    for (i2 = 0; i2 < 8; i2++) {
      c_u[i2] = cv7[i2];
    }

    c_y = NULL;
    m2 = emlrtCreateCharArray(2, iv10);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m2, &c_u[0]);
    emlrtAssign(&c_y, m2);
    error(moduleInstance, message(moduleInstance, y, c_y, &emlrtMCI), &emlrtMCI);
  }

  flag = (obj->isInitialized == 1);
  if (flag && (moduleInstance->sysobj.isInitialized == 2)) {
    for (i2 = 0; i2 < 45; i2++) {
      b_u[i2] = cv6[i2];
    }

    b_y = NULL;
    m2 = emlrtCreateCharArray(2, iv9);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m2, &b_u[0]);
    emlrtAssign(&b_y, m2);
    for (i2 = 0; i2 < 5; i2++) {
      d_u[i2] = cv8[i2];
    }

    d_y = NULL;
    m2 = emlrtCreateCharArray(2, iv11);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m2, &d_u[0]);
    emlrtAssign(&d_y, m2);
    error(moduleInstance, message(moduleInstance, b_y, d_y, &emlrtMCI),
          &emlrtMCI);
  }
}

static void cgxe_mdl_outputs(InstanceStruct_BTeovP3vODQtQdRntBRxBE
  *moduleInstance)
{
  codertarget_arduinobase_internal_arduino_SerialWrite *obj;
  int32_T k;
  boolean_T anyInputSizeChanged;
  const mxArray *y;
  char_T u[45];
  static char_T cv9[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m3;
  static const int32_T iv12[2] = { 1, 45 };

  boolean_T exitg1;
  const mxArray *b_y;
  char_T b_u[51];
  static char_T cv10[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static const int32_T iv13[2] = { 1, 51 };

  const mxArray *c_y;
  char_T c_u[4];
  static char_T cv11[4] = { 's', 't', 'e', 'p' };

  static const int32_T iv14[2] = { 1, 4 };

  const mxArray *d_y;
  char_T d_u[5];
  static char_T cv12[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv15[2] = { 1, 5 };

  if (!moduleInstance->sysobj_not_empty) {
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj_not_empty = true;
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (k = 0; k < 45; k++) {
      u[k] = cv9[k];
    }

    y = NULL;
    m3 = emlrtCreateCharArray(2, iv12);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m3, &u[0]);
    emlrtAssign(&y, m3);
    for (k = 0; k < 4; k++) {
      c_u[k] = cv11[k];
    }

    c_y = NULL;
    m3 = emlrtCreateCharArray(2, iv14);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 4, m3, &c_u[0]);
    emlrtAssign(&c_y, m3);
    error(moduleInstance, message(moduleInstance, y, c_y, &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    if (obj->isInitialized != 0) {
      for (k = 0; k < 51; k++) {
        b_u[k] = cv10[k];
      }

      b_y = NULL;
      m3 = emlrtCreateCharArray(2, iv13);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 51, m3, &b_u
        [0]);
      emlrtAssign(&b_y, m3);
      for (k = 0; k < 5; k++) {
        d_u[k] = cv12[k];
      }

      d_y = NULL;
      m3 = emlrtCreateCharArray(2, iv15);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m3, &d_u[0]);
      emlrtAssign(&d_y, m3);
      error(moduleInstance, message(moduleInstance, b_y, d_y, &emlrtMCI),
            &emlrtMCI);
    }

    obj->isInitialized = 1;
    for (k = 0; k < 8; k++) {
      obj->inputVarSize1[k] = 1U;
    }

    arduino_SerialWrite_validateInputsImpl(moduleInstance, obj,
      *moduleInstance->u0);
  }

  anyInputSizeChanged = false;
  k = 0;
  exitg1 = false;
  while ((exitg1 == false) && (k < 8)) {
    if (obj->inputVarSize1[k] != 1U) {
      anyInputSizeChanged = true;
      for (k = 0; k < 8; k++) {
        obj->inputVarSize1[k] = 1U;
      }

      exitg1 = true;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged) {
    arduino_SerialWrite_validateInputsImpl(moduleInstance, obj,
      *moduleInstance->u0);
  }
}

static void cgxe_mdl_update(InstanceStruct_BTeovP3vODQtQdRntBRxBE
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_BTeovP3vODQtQdRntBRxBE
  *moduleInstance)
{
  codertarget_arduinobase_internal_arduino_SerialWrite *obj;
  int32_T i3;
  boolean_T flag;
  const mxArray *y;
  char_T u[45];
  static char_T cv13[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m4;
  static const int32_T iv16[2] = { 1, 45 };

  const mxArray *b_y;
  char_T b_u[45];
  static const int32_T iv17[2] = { 1, 45 };

  const mxArray *c_y;
  char_T c_u[8];
  static char_T cv14[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  static const int32_T iv18[2] = { 1, 8 };

  const mxArray *d_y;
  char_T d_u[7];
  static char_T cv15[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  static const int32_T iv19[2] = { 1, 7 };

  emlrtDestroyArray(&b_eml_mx);
  emlrtDestroyArray(&eml_mx);
  if (!moduleInstance->sysobj_not_empty) {
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj_not_empty = true;
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i3 = 0; i3 < 45; i3++) {
      u[i3] = cv13[i3];
    }

    y = NULL;
    m4 = emlrtCreateCharArray(2, iv16);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m4, &u[0]);
    emlrtAssign(&y, m4);
    for (i3 = 0; i3 < 8; i3++) {
      c_u[i3] = cv14[i3];
    }

    c_y = NULL;
    m4 = emlrtCreateCharArray(2, iv18);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m4, &c_u[0]);
    emlrtAssign(&c_y, m4);
    error(moduleInstance, message(moduleInstance, y, c_y, &emlrtMCI), &emlrtMCI);
  }

  flag = (obj->isInitialized == 1);
  if (flag) {
    obj = &moduleInstance->sysobj;
    if (moduleInstance->sysobj.isInitialized == 2) {
      for (i3 = 0; i3 < 45; i3++) {
        b_u[i3] = cv13[i3];
      }

      b_y = NULL;
      m4 = emlrtCreateCharArray(2, iv17);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m4, &b_u
        [0]);
      emlrtAssign(&b_y, m4);
      for (i3 = 0; i3 < 7; i3++) {
        d_u[i3] = cv15[i3];
      }

      d_y = NULL;
      m4 = emlrtCreateCharArray(2, iv19);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 7, m4, &d_u[0]);
      emlrtAssign(&d_y, m4);
      error(moduleInstance, message(moduleInstance, b_y, d_y, &emlrtMCI),
            &emlrtMCI);
    }

    if (obj->isInitialized == 1) {
      obj->isInitialized = 2;
    }
  }
}

static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_BTeovP3vODQtQdRntBRxBE *moduleInstance)
{
  const mxArray *st;
  const mxArray *y;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m5;
  const mxArray *d_y;
  static const int32_T iv20[2] = { 1, 8 };

  uint32_T *pData;
  int16_T i;
  const mxArray *e_y;
  st = NULL;
  y = NULL;
  emlrtAssign(&y, emlrtCreateCellMatrix(2, 1));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  c_y = NULL;
  m5 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)mxGetData(m5) = moduleInstance->sysobj.isInitialized;
  emlrtAssign(&c_y, m5);
  emlrtAddField(b_y, c_y, "isInitialized", 0);
  d_y = NULL;
  m5 = emlrtCreateNumericArray(2, iv20, mxUINT32_CLASS, mxREAL);
  pData = (uint32_T *)mxGetData(m5);
  for (i = 0; i < 8; i++) {
    pData[i] = moduleInstance->sysobj.inputVarSize1[i];
  }

  emlrtAssign(&d_y, m5);
  emlrtAddField(b_y, d_y, "inputVarSize1", 0);
  emlrtSetCell(y, 0, b_y);
  e_y = NULL;
  m5 = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&e_y, m5);
  emlrtSetCell(y, 1, e_y);
  emlrtAssign(&st, y);
  return st;
}

static codertarget_arduinobase_internal_arduino_SerialWrite emlrt_marshallIn
  (InstanceStruct_BTeovP3vODQtQdRntBRxBE *moduleInstance, const mxArray
   *b_sysobj, const char_T *identifier)
{
  codertarget_arduinobase_internal_arduino_SerialWrite y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(moduleInstance, emlrtAlias(b_sysobj), &thisId);
  emlrtDestroyArray(&b_sysobj);
  return y;
}

static codertarget_arduinobase_internal_arduino_SerialWrite b_emlrt_marshallIn
  (InstanceStruct_BTeovP3vODQtQdRntBRxBE *moduleInstance, const mxArray *u,
   const emlrtMsgIdentifier *parentId)
{
  codertarget_arduinobase_internal_arduino_SerialWrite y;
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[2] = { "isInitialized", "inputVarSize1" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(moduleInstance->emlrtRootTLSGlobal, parentId, u, 2,
    fieldNames, 0U, &dims);
  thisId.fIdentifier = "isInitialized";
  y.isInitialized = c_emlrt_marshallIn(moduleInstance, emlrtAlias
    (emlrtGetFieldR2013a(moduleInstance->emlrtRootTLSGlobal, u, 0,
    "isInitialized")), &thisId);
  thisId.fIdentifier = "inputVarSize1";
  d_emlrt_marshallIn(moduleInstance, emlrtAlias(emlrtGetFieldR2013a
    (moduleInstance->emlrtRootTLSGlobal, u, 0, "inputVarSize1")), &thisId,
                     y.inputVarSize1);
  emlrtDestroyArray(&u);
  return y;
}

static int32_T c_emlrt_marshallIn(InstanceStruct_BTeovP3vODQtQdRntBRxBE
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = g_emlrt_marshallIn(moduleInstance, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void d_emlrt_marshallIn(InstanceStruct_BTeovP3vODQtQdRntBRxBE
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId,
  uint32_T y[8])
{
  h_emlrt_marshallIn(moduleInstance, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static boolean_T e_emlrt_marshallIn(InstanceStruct_BTeovP3vODQtQdRntBRxBE
  *moduleInstance, const mxArray *b_sysobj_not_empty, const char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(moduleInstance, emlrtAlias(b_sysobj_not_empty), &thisId);
  emlrtDestroyArray(&b_sysobj_not_empty);
  return y;
}

static boolean_T f_emlrt_marshallIn(InstanceStruct_BTeovP3vODQtQdRntBRxBE
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = i_emlrt_marshallIn(moduleInstance, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void cgxe_mdl_set_sim_state(InstanceStruct_BTeovP3vODQtQdRntBRxBE
  *moduleInstance, const mxArray *st)
{
  const mxArray *u;
  u = emlrtAlias(st);
  moduleInstance->sysobj = emlrt_marshallIn(moduleInstance, emlrtAlias
    (emlrtGetCell(moduleInstance->emlrtRootTLSGlobal, "sysobj", u, 0)), "sysobj");
  moduleInstance->sysobj_not_empty = e_emlrt_marshallIn(moduleInstance,
    emlrtAlias(emlrtGetCell(moduleInstance->emlrtRootTLSGlobal,
    "sysobj_not_empty", u, 1)), "sysobj_not_empty");
  emlrtDestroyArray(&u);
  emlrtDestroyArray(&st);
}

static const mxArray *message(InstanceStruct_BTeovP3vODQtQdRntBRxBE
  *moduleInstance, const mxArray *b, const mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m6;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(moduleInstance->emlrtRootTLSGlobal, 1, &m6, 2,
    pArrays, "message", true, location);
}

static void error(InstanceStruct_BTeovP3vODQtQdRntBRxBE *moduleInstance, const
                  mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(moduleInstance->emlrtRootTLSGlobal, 0, NULL, 1, &pArray,
                        "error", true, location);
}

static void b_error(InstanceStruct_BTeovP3vODQtQdRntBRxBE *moduleInstance, const
                    mxArray *b, const mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(moduleInstance->emlrtRootTLSGlobal, 0, NULL, 2, pArrays,
                        "error", true, location);
}

static int32_T g_emlrt_marshallIn(InstanceStruct_BTeovP3vODQtQdRntBRxBE
  *moduleInstance, const mxArray *src, const emlrtMsgIdentifier *msgId)
{
  int32_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(moduleInstance->emlrtRootTLSGlobal, msgId, src,
    "int32", false, 0U, &dims);
  ret = *(int32_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void h_emlrt_marshallIn(InstanceStruct_BTeovP3vODQtQdRntBRxBE
  *moduleInstance, const mxArray *src, const emlrtMsgIdentifier *msgId, uint32_T
  ret[8])
{
  static const int32_T dims[2] = { 1, 8 };

  int32_T i4;
  emlrtCheckBuiltInR2012b(moduleInstance->emlrtRootTLSGlobal, msgId, src,
    "uint32", false, 2U, dims);
  for (i4 = 0; i4 < 8; i4++) {
    ret[i4] = (*(uint32_T (*)[8])mxGetData(src))[i4];
  }

  emlrtDestroyArray(&src);
}

static boolean_T i_emlrt_marshallIn(InstanceStruct_BTeovP3vODQtQdRntBRxBE
  *moduleInstance, const mxArray *src, const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(moduleInstance->emlrtRootTLSGlobal, msgId, src,
    "logical", false, 0U, &dims);
  ret = *mxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void init_simulink_io_address(InstanceStruct_BTeovP3vODQtQdRntBRxBE
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->covInst = (covrtInstance *)cgxertGetCovrtInstance
    (moduleInstance->S);
  moduleInstance->u0 = (real_T *)cgxertGetInputPortSignal(moduleInstance->S, 0);
}

/* CGXE Glue Code */
static void mdlOutputs_BTeovP3vODQtQdRntBRxBE(SimStruct *S, int_T tid)
{
  InstanceStruct_BTeovP3vODQtQdRntBRxBE *moduleInstance =
    (InstanceStruct_BTeovP3vODQtQdRntBRxBE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_BTeovP3vODQtQdRntBRxBE(SimStruct *S)
{
  InstanceStruct_BTeovP3vODQtQdRntBRxBE *moduleInstance =
    (InstanceStruct_BTeovP3vODQtQdRntBRxBE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_BTeovP3vODQtQdRntBRxBE(SimStruct *S, int_T tid)
{
  InstanceStruct_BTeovP3vODQtQdRntBRxBE *moduleInstance =
    (InstanceStruct_BTeovP3vODQtQdRntBRxBE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static mxArray* getSimState_BTeovP3vODQtQdRntBRxBE(SimStruct *S)
{
  mxArray* mxSS;
  InstanceStruct_BTeovP3vODQtQdRntBRxBE *moduleInstance =
    (InstanceStruct_BTeovP3vODQtQdRntBRxBE *)cgxertGetRuntimeInstance(S);
  mxSS = (mxArray *) cgxe_mdl_get_sim_state(moduleInstance);
  return mxSS;
}

static void setSimState_BTeovP3vODQtQdRntBRxBE(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_BTeovP3vODQtQdRntBRxBE *moduleInstance =
    (InstanceStruct_BTeovP3vODQtQdRntBRxBE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_set_sim_state(moduleInstance, emlrtAlias(ss));
}

static void mdlTerminate_BTeovP3vODQtQdRntBRxBE(SimStruct *S)
{
  InstanceStruct_BTeovP3vODQtQdRntBRxBE *moduleInstance =
    (InstanceStruct_BTeovP3vODQtQdRntBRxBE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlStart_BTeovP3vODQtQdRntBRxBE(SimStruct *S)
{
  InstanceStruct_BTeovP3vODQtQdRntBRxBE *moduleInstance =
    (InstanceStruct_BTeovP3vODQtQdRntBRxBE *)calloc(1, sizeof
    (InstanceStruct_BTeovP3vODQtQdRntBRxBE));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_BTeovP3vODQtQdRntBRxBE);
  ssSetmdlInitializeConditions(S, mdlInitialize_BTeovP3vODQtQdRntBRxBE);
  ssSetmdlUpdate(S, mdlUpdate_BTeovP3vODQtQdRntBRxBE);
  ssSetmdlTerminate(S, mdlTerminate_BTeovP3vODQtQdRntBRxBE);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_BTeovP3vODQtQdRntBRxBE(SimStruct *S)
{
}

void method_dispatcher_BTeovP3vODQtQdRntBRxBE(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_BTeovP3vODQtQdRntBRxBE(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_BTeovP3vODQtQdRntBRxBE(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_BTeovP3vODQtQdRntBRxBE(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_BTeovP3vODQtQdRntBRxBE(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: BTeovP3vODQtQdRntBRxBE.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_BTeovP3vODQtQdRntBRxBE_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxArray * elem_11;
  mxArray * elem_12;
  mxArray * elem_13;
  mxArray * elem_14;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,1,elem_3);
  elem_4 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_4);
  elem_5 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_5);
  elem_6 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_6);
  elem_7 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_7);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_8 = mxCreateCellMatrix(1,1);
  elem_9 = mxCreateString("codertarget.arduinobase.internal.arduino_SerialWrite");
  mxSetCell(elem_8,0,elem_9);
  mxSetCell(mxBIArgs,1,elem_8);
  elem_10 = mxCreateCellMatrix(1,1);
  elem_11 = mxCreateCellMatrix(1,2);
  elem_12 = mxCreateString("addDefines");
  mxSetCell(elem_11,0,elem_12);
  elem_13 = mxCreateCellMatrix(1,1);
  elem_14 = mxCreateString("_RTT_USE_SERIAL0_");
  mxSetCell(elem_13,0,elem_14);
  mxSetCell(elem_11,1,elem_13);
  mxSetCell(elem_10,0,elem_11);
  mxSetCell(mxBIArgs,2,elem_10);
  return mxBIArgs;
}

mxArray *cgxe_BTeovP3vODQtQdRntBRxBE_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString(
    "codertarget.arduinobase.internal.arduino_SerialWrite");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
