// RUN: dpct --format-range=none --use-custom-helper=api -out-root %T/DnnlUtils/api_test18_out %s --cuda-include-path="%cuda-path/include" -- -x cuda --cuda-host-only
// RUN: grep "IsCalled" %T/DnnlUtils/api_test18_out/MainSourceFiles.yaml | wc -l > %T/DnnlUtils/api_test18_out/count.txt
// RUN: FileCheck --input-file %T/DnnlUtils/api_test18_out/count.txt --match-full-lines %s
// RUN: rm -rf %T/DnnlUtils/api_test18_out

// CHECK: 14
// TEST_FEATURE: DnnlUtils_batch_normalization_forward_inference_ex_norm
// TEST_FEATURE: DnnlUtils_batch_normalization_mode
// TEST_FEATURE: DnnlUtils_batch_normalization_ops
// TEST_FEATURE: DnnlUtils_get_batch_normalization_workspace_size

#include <cuda_runtime.h>
#include <cudnn.h>
#include <iostream>
#include <vector>

int main() {
    int nDevices;
    cudnnHandle_t handle;
    cudnnTensorDescriptor_t dataTensor, outTensor, scalebiasTensor;
    cudaStream_t stream1;
    int in = 2, ic = 4, ih = 5, iw = 5;
    int on = 2, oc = 4, oh = 5, ow = 5;
    int sbn = 1, sbc = 4, sbh = 5, sbw = 5;
    int ele_num = in* ic * ih * iw;
    int oele_num = on* oc * oh * ow;
    int sele_num = sbn*sbc * sbh * sbw;
    int save = 1;
    float *data, *out, *scale, *bias, *rmean, *rvar, *smean, *svar, *z;
    float alpha = 1.f, beta = 0.f, eps = 1.f;
    double factor = 0.5f;

    cudnnActivationDescriptor_t ActivationDesc;
    cudnnCreateActivationDescriptor(&ActivationDesc);
    cudnnSetActivationDescriptor(ActivationDesc, CUDNN_ACTIVATION_RELU, CUDNN_PROPAGATE_NAN, 0.0f);
    auto status = cudnnNormalizationForwardInference(
        handle, 
        CUDNN_NORM_PER_ACTIVATION,
        //CUDNN_NORM_PER_CHANNEL,
        CUDNN_NORM_OPS_NORM,
        //CUDNN_NORM_OPS_NORM_ACTIVATION,
        //CUDNN_NORM_OPS_NORM_ADD_ACTIVATION,
        CUDNN_NORM_ALGO_STANDARD,
        &alpha,
        &beta,
        dataTensor,
        data,
        scalebiasTensor,
        scale,
        bias,
        scalebiasTensor,
        smean,
        svar,
        dataTensor,
        z,
        ActivationDesc,
        outTensor,
        out,
        eps,
        1);

    return 0;
}