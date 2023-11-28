
#ifndef SYSTEM_TEST_END_TO_END_TEST
#define SYSTEM_TEST_END_TO_END_TEST

#include <cmath>
#include <cstdio>
#include <vector>

#include "interfaces/kits/c/v2_0/neural_network_core.h"
#include "interfaces/kits/c/v2_0/neural_network_runtime_type.h"


namespace OHOS {
namespace NeuralNetworkRuntime {
namespace SystemTest {
class End2EndTest : public NNRtTest {
public:
    End2EndTest() = default;

    OH_NNCore_ReturnCode BuildModel(OH_NNBackend_Model **model,
                                    const std::vector<OH_NNCore_TensorDesc*>& tensorDescs);
    
    OH_NNCore_ReturnCode CreateTensorDesc(OH_NNCore_TensorDesc** tensorDesc, std::string &backendName, const int32_t* shape, size_t shapeNum, 
                                          OH_NNCore_DataType dataType, OH_NNCore_Format format,
                                          OH_NNBackend_TensorType tensorType);

    OH_NNCore_Options* SetOptions(const char* backendName);

    void GetTensorDescFormCompiled(OH_NNCore_Compiled* compiled, size_t *count, std::vector<OH_NNCore_TensorDesc*>& tensorDescs)

    void CreateTensorFormTensorDesc(OH_NNCore_Tensor* tensors, size_t count, std::vector<OH_NNCore_TensorDesc*>& tensorDescs)
    void DestroyTensor(OH_NNCore_Executor* executor, OH_NNCore_Tensor* tensors, size_t count)

    void RunModelTest(OH_NNBackend_Model *model, std::string& backendName)
};
} // namespace SystemTest
} // NeuralNetworkRuntime
} // OHOS

#endif // SYSTEM_TEST_END_TO_END_TEST