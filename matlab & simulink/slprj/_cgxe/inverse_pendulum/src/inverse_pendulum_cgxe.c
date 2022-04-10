/* Include files */

#include "inverse_pendulum_cgxe.h"
#include "m_BTeovP3vODQtQdRntBRxBE.h"

unsigned int cgxe_inverse_pendulum_method_dispatcher(SimStruct* S, int_T method,
  void* data)
{
  if (ssGetChecksum0(S) == 3388780834 &&
      ssGetChecksum1(S) == 990515852 &&
      ssGetChecksum2(S) == 3000086290 &&
      ssGetChecksum3(S) == 3767060906) {
    method_dispatcher_BTeovP3vODQtQdRntBRxBE(S, method, data);
    return 1;
  }

  return 0;
}
