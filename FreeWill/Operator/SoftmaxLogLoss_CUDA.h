#ifndef SOFTMAXLOGLOSS_CUDA_H
#define SOFTMAXLOGLOSS_CUDA_H

//#ifdef __cplusplus

template <typename DataType = float>
__host__ void softmaxLogLossCUDAKernel(DataType *output, unsigned int *label, DataType *cost, unsigned int vectorSize, unsigned int batchSize);

template <typename DataType = float>
__host__ void softmaxLogLossDerivativeCUDAKernel(DataType *inputDelta, DataType *output, unsigned int *label, unsigned int vectorSize, unsigned int batchSize);


//#endif

#endif
