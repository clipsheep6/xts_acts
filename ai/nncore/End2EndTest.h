
#ifndef SYSTEM_TEST_END_TO_END_TEST
#define SYSTEM_TEST_END_TO_END_TEST

#include <cmath>
#include <cstdio>
#include <vector>

#include "gtest/gtest.h"
#include "End2EndTest.h"
#include "interfaces/kits/c/v2_0/neural_network_core.h"
#include "interfaces/kits/c/v2_0/neural_network_core_type.h"
#include "interfaces/kits/c/v2_0/neural_network_runtime.h"
#include "interfaces/kits/c/v2_0/neural_network_runtime_type.h"


namespace OHOS {
namespace NeuralNetworkCore {
class End2EndTest {
public:
    End2EndTest() = default;

    OH_NNCore_ReturnCode BuildModel(OH_NNBackend_Model **model,
                                    const std::vector<OH_NNCore_TensorDesc*>& tensorDescs);
    
    OH_NNCore_ReturnCode CreateTensorDesc(OH_NNCore_TensorDesc** tensorDesc, const int32_t* shape, size_t shapeNum, 
                                          OH_NNCore_DataType dataType, OH_NNCore_Format format);

    void GetTensorDescFormCompiled(OH_NNCore_Compiled* compiled, size_t *count, std::vector<OH_NNCore_TensorDesc*>& tensorDescs);

    void CreateTensorFormTensorDesc(const char* backendName, OH_NNCore_Tensor* tensors[], size_t count, std::vector<OH_NNCore_TensorDesc*>& tensorDescs);
    void DestroyTensor(OH_NNCore_Executor* executor, OH_NNCore_Tensor* tensors[], size_t count);
};
} // NeuralNetworkRuntime
} // OHOS

#endif // SYSTEM_TEST_END_TO_END_TEST