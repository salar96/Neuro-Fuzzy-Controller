#ifndef __BTeovP3vODQtQdRntBRxBE_h__
#define __BTeovP3vODQtQdRntBRxBE_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "slexec_vm_zc_functions.h"

/* Type Definitions */
#ifndef struct_tag_sxmMx2bnXGqnKNFTADVnQgE
#define struct_tag_sxmMx2bnXGqnKNFTADVnQgE

struct tag_sxmMx2bnXGqnKNFTADVnQgE
{
  int32_T isInitialized;
  uint32_T inputVarSize1[8];
};

#endif                                 /*struct_tag_sxmMx2bnXGqnKNFTADVnQgE*/

#ifndef typedef_codertarget_arduinobase_internal_arduino_SerialWrite
#define typedef_codertarget_arduinobase_internal_arduino_SerialWrite

typedef struct tag_sxmMx2bnXGqnKNFTADVnQgE
  codertarget_arduinobase_internal_arduino_SerialWrite;

#endif                                 /*typedef_codertarget_arduinobase_internal_arduino_SerialWrite*/

#ifndef typedef_struct_T
#define typedef_struct_T

typedef struct {
  char_T f0[5];
  char_T f1[4];
  char_T f2[6];
  char_T f3[5];
  char_T f4[6];
  char_T f5[5];
  char_T f6[6];
  char_T f7[6];
} struct_T;

#endif                                 /*typedef_struct_T*/

#ifndef typedef_b_struct_T
#define typedef_b_struct_T

typedef struct {
  char_T f0[6];
  char_T f1[6];
} b_struct_T;

#endif                                 /*typedef_b_struct_T*/

#ifndef typedef_InstanceStruct_BTeovP3vODQtQdRntBRxBE
#define typedef_InstanceStruct_BTeovP3vODQtQdRntBRxBE

typedef struct {
  SimStruct *S;
  codertarget_arduinobase_internal_arduino_SerialWrite sysobj;
  boolean_T sysobj_not_empty;
  void *emlrtRootTLSGlobal;
  covrtInstance *covInst;
  real_T *u0;
} InstanceStruct_BTeovP3vODQtQdRntBRxBE;

#endif                                 /*typedef_InstanceStruct_BTeovP3vODQtQdRntBRxBE*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_BTeovP3vODQtQdRntBRxBE(SimStruct *S, int_T method,
  void* data);

#endif
