// RUN: dpct --format-range=none --use-custom-helper=api -out-root %T/LapackUtils/api_test1_out %s --cuda-include-path="%cuda-path/include" -- -x cuda --cuda-host-only
// RUN: grep "IsCalled" %T/LapackUtils/api_test1_out/MainSourceFiles.yaml | wc -l > %T/LapackUtils/api_test1_out/count.txt
// RUN: FileCheck --input-file %T/LapackUtils/api_test1_out/count.txt --match-full-lines %s
// RUN: rm -rf %T/LapackUtils/api_test1_out

// CHECK: 2
// TEST_FEATURE: LapackUtils_sygvd

#include "cusolverDn.h"

int main() {
  cusolverDnHandle_t handle;
  float *a_s, *b_s, *w_s, *work_s;
  int lwork_s;
  int *devInfo;
  cusolverDnSsygvd(handle, CUSOLVER_EIG_TYPE_1, CUSOLVER_EIG_MODE_VECTOR, CUBLAS_FILL_MODE_UPPER, 3, a_s, 3, b_s, 3, w_s, work_s, lwork_s, devInfo);
  return 0;
}
