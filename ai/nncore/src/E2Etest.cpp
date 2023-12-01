#include <string>
#include <vector>
#include <thread>

#include "../common/hdi_nncore_utils.h"

using namespace OHOS::NeuralNetworkCore;
using namespace testing::ext;

class End2EndTest: public testing::Test {};

NNCore_ReturnCode BuildModel(NNBackend_Model **model,
                                const std::vector<NNCore_TensorDesc*>& tensorDescs)
{
    *model = OH_NNBackend_CreateModel();
    if (*model == nullptr) {
        LOGE("End2EndTest::BuildModel failed, error happens when creating NNModel.");
        return NNCORE_INVALID_PARAMETER;
    }

    NNCore_ReturnCode status;
    for (size_t i = 0; i < tensorDescs.size(); i++) {
        status = OH_NNBackend_AddTensorToModel(*model, tensorDescs[i]);
        if (status != NNCORE_SUCCESS) {
            LOGE("End2EndTest::BuildModel failed, error happens when adding tensordesc[%zu].", i);
            return status;
        }
        status = OH_NNBackend_SetModelTensorType(*model, i, NNBACKEND_TENSOR);
        if (status != NNCORE_SUCCESS) {
            LOGE("End2EndTest::BuildModel failed, error happens when SetModelTensorType[%zu].", i);
            return status;
        }
    }

    int8_t activationValue = NNBACKEND_FUSED_NONE;
    status = OH_NNBackend_SetModelTensorData(*model, 2, &activationValue, sizeof(int8_t));
    if (status != NNCORE_SUCCESS) {
        LOGE("End2EndTest::BuildModel failed, error happens when setting model tensor data.");
        return status;
    }

    uint32_t inputIndicesValues[2] = {0, 1};
    uint32_t paramIndicesValues = 2;
    uint32_t outputIndicesValues = 3;
    NNBackend_Array paramIndices = {&paramIndicesValues, 1 * 4, NNCORE_UINT32};
    NNBackend_Array inputIndices = {inputIndicesValues, 2 * 4, NNCORE_UINT32};
    NNBackend_Array outputIndices = {&outputIndicesValues, 1 * 4, NNCORE_UINT32};

    status = OH_NNBackend_AddOperationToModel(*model, NNBACKEND_OPS_ADD, &paramIndices, &inputIndices, &outputIndices);
    if (status != NNCORE_SUCCESS) {
        LOGE("End2EndTest::BuildModel failed, error happends when adding operation into the model.");
        return status;
    }

    status = OH_NNBackend_SpecifyModelInputsAndOutputs(*model, &inputIndices, &outputIndices);
    if (status != NNCORE_SUCCESS) {
        LOGE("End2EndTest::BuildModel failed, error happends when specifying the inputs and outputs.");
        return status;
    }

    status = OH_NNBackend_BuildModel(*model);
    if (status != NNCORE_SUCCESS) {
        LOGE("End2EndTest::BuildModel failed, error happends during constructing the model.");
        return status;
    }

    return status;
}

NNCore_ReturnCode ConstructTensorDesc(NNCore_TensorDesc** tensorDesc, const int32_t* shape, size_t shapeNum, 
                                                   NNCore_DataType dataType, NNCore_Format format)
{
    *tensorDesc = OH_NNCore_CreateTensorDesc();
    if (*tensorDesc == nullptr) {
        LOGE("End2EndTest::CreateTensorDesc failed, error happens when creating OH_NNCore_TensorDesc.");
        return NNCORE_INVALID_PARAMETER;
    }

    NNCore_ReturnCode status = OH_NNCore_SetTensorDescShape(*tensorDesc, shape, shapeNum);
    if (status != NNCORE_SUCCESS) {
        LOGE("End2EndTest::CreateTensorDesc failed, error happends when setting TensorDesc Shape.");
        return status;
    }

    status = OH_NNCore_SetTensorDescDataType(*tensorDesc, dataType);
    if (status != NNCORE_SUCCESS) {
        LOGE("End2EndTest::CreateTensorDesc failed, error happends when setting TensorDesc DataType.");
        return status;
    }

    status = OH_NNCore_SetTensorDescFormat(*tensorDesc, format);
    if (status != NNCORE_SUCCESS) {
        LOGE("End2EndTest::CreateTensorDesc failed, error happends when setting TensorDesc Format.");
        return status;
    }

    return status;
}

void SetOptionsFormBackend(const char* backendName, NNCore_Options** Options)
{
    *Options = OH_NNCore_CreateOptions(backendName);
    ASSERT_NE(nullptr, *Options);
    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_SetPriority(*Options, NNCORE_PRIORITY_HIGH));
    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_SetPerformanceMode(*Options, NNCORE_PERFORMANCE_EXTREME));
    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_SetEnableFloat16(*Options, true));
}

void GetTensorDescFormCompiled(NNCore_Compiled* compiled, size_t *inputNum, std::vector<NNCore_TensorDesc*>& inputTensorDescs,
                               size_t *outputNum, std::vector<NNCore_TensorDesc*>& outputTensorDescs)
{
    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_GetCompiledInputNum(compiled, inputNum));
    NNCore_TensorDesc* tensorDesc = nullptr;
    for (size_t i = 0; i < *inputNum; ++i) {
        tensorDesc = nullptr;
        ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_CreateCompiledInputDesc(compiled, i, &tensorDesc));
        inputTensorDescs.emplace_back(tensorDesc);
    }
    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_GetCompiledOutputNum(compiled, outputNum));
    for (size_t i = 0; i < *outputNum; ++i) {
        tensorDesc = nullptr;
        ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_CreateCompiledInputDesc(compiled, i, &tensorDesc));
        outputTensorDescs.emplace_back(tensorDesc);
    }
}

void CreateTensorFormTensorDesc(const char* backendName, NNCore_Tensor* tensors[], size_t count, std::vector<NNCore_TensorDesc*>& tensorDescs)
{
    for (size_t i = 0; i < count; ++i) {
        NNCore_Tensor* tensor = nullptr;
        tensor = OH_NNCore_CreateTensor(backendName, tensorDescs[i]);
        ASSERT_NE(nullptr, tensor);
        tensors[i] = tensor;
    }
}

void SetInputData(NNCore_Tensor* inputTensor[], size_t inputSize)
{
    NNCore_DataType dataType(NNCORE_FLOAT32);
    NNCore_ReturnCode ret{NNCORE_FAILED};
    size_t elementNum = 0;
    for (size_t i = 0; i < inputSize; ++i) {
        auto data = OH_NNCore_GetDataBuffer(inputTensor[i]);
        ASSERT_NE(nullptr, data);
        auto desc = OH_NNCore_GetTensorDesc(inputTensor[i]);
        ASSERT_NE(nullptr, desc);
        ret = OH_NNCore_GetTensorDescDataType(desc, &dataType);
        ASSERT_EQ(NNCORE_SUCCESS, ret);
        ret = OH_NNCore_GetTensorDescElementNum(desc, &elementNum);
        ASSERT_EQ(NNCORE_SUCCESS, ret);
        switch(dataType) {
            case NNCORE_FLOAT32: {
                float* floatValue = reinterpret_cast<float*>(data);
                for (size_t j = 0; j < elementNum; ++j) {
                    floatValue[i] = static_cast<float>(j);
                }
                break;
            }
            case NNCORE_INT32: {
                int* intValue = reinterpret_cast<int*>(data);
                for (size_t j = 0; j < elementNum; ++j) {
                    intValue[i] = static_cast<int>(j);
                }
                break;
            }
            default:
                return;
        }
    }
}

void DestroyTensor(NNCore_Executor* executor, NNCore_Tensor* tensors[], size_t count)
{
    for (size_t i = 0; i < count; ++i) {
        ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_DestroyTensor(&tensors[i]));
    }
}

void RunModelTest(const char* backendName, NNCore_Compiled* compiled)
{
    // 从compiled获取输入输出信息
    size_t inputCount = 0;
    std::vector<NNCore_TensorDesc*> inputTensorDescs;
    size_t outputCount = 0;
    std::vector<NNCore_TensorDesc*> outputTensorDescs;
    GetTensorDescFormCompiled(compiled, &inputCount, inputTensorDescs, &outputCount, outputTensorDescs);
    // 从compiled中创建executor
    NNCore_Executor* executor = OH_NNCore_ConstructExecutor(compiled);
    // 创建输入输出Tensor
    NNCore_Tensor* inputTensors[inputCount];
    CreateTensorFormTensorDesc(backendName, inputTensors, inputCount, inputTensorDescs);
    SetInputData(inputTensors, inputCount);
    NNCore_Tensor* outputTensors[outputCount];
    CreateTensorFormTensorDesc(backendName, outputTensors, outputCount, outputTensorDescs);
    // 执行run
    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_ExecutorRunSync(executor, inputTensors, inputCount, outputTensors, outputCount));
    // 清理输入输出Tensor
    DestroyTensor(executor, inputTensors, inputCount);
    DestroyTensor(executor, outputTensors, outputCount);
    // 销毁Executor
    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_DestroyExecutor(&executor));
}
/*
* @tc.name:end_to_end_test_001
* @tc.desc:Test End-to-End operation of Neural Network Core.
* @tc.type:FUNC
*/
HWTEST_F(End2EndTest, end_to_end_test_001, Function | MediumTest | Level1)
{
    size_t backendNum = 0;
    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_GetBackendNum(&backendNum));
    const char* backendName = nullptr;
    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_GetBackendName(0, &backendName));

    std::vector<NNCore_TensorDesc*> tensorDescs;
    NNCore_TensorDesc* tensorDesc;
    int32_t inputDims[4] = {1, 2, 2, 3};
    ASSERT_EQ(NNCORE_SUCCESS, ConstructTensorDesc(&tensorDesc, inputDims, 4, 
                                                  NNCORE_FLOAT32, NNCORE_FORMAT_NONE));
    tensorDescs.push_back(tensorDesc);

    ASSERT_EQ(NNCORE_SUCCESS, ConstructTensorDesc(&tensorDesc, inputDims, 4, 
                                                  NNCORE_FLOAT32, NNCORE_FORMAT_NONE));
    tensorDescs.push_back(tensorDesc);

    ASSERT_EQ(NNCORE_SUCCESS, ConstructTensorDesc(&tensorDesc, inputDims, 4, 
                                                  NNCORE_FLOAT32, NNCORE_FORMAT_NONE));
    tensorDescs.push_back(tensorDesc);

    NNBackend_Model *model;
    ASSERT_EQ(NNCORE_SUCCESS, BuildModel(&model, tensorDescs));

    NNCore_Compilation* compilation = OH_NNCore_ConstructCompilationWithNNModel(model);
    ASSERT_NE(nullptr, compilation);
    OH_NNBackend_DestroyModel(&model);
    ASSERT_EQ(nullptr, model);
    // 创建并设置options
    NNCore_Options* Options = nullptr;
    SetOptionsFormBackend(backendName, &Options);

    // 编译生成compiled对象后销毁compilation
    NNCore_Compiled* compiled = OH_NNCore_BuildCompilation(compilation, backendName, Options);
    ASSERT_NE(nullptr, compiled);
    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_DestroyCompilation(&compilation));

    // 保存cache
    const char* filePath = "file";
    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_SaveCompiledToFile(compiled, filePath));
    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_RestoreCompiledFromFile(filePath, backendName, Options, &compiled));
    RunModelTest(backendName, compiled);

    // 销毁compiled
    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_DestroyCompiled(&compiled));
}


/*
* @tc.name:end_to_end_test_002
* @tc.desc:Test End-to-End operation of Neural Network Core with dynamic inputs.
* @tc.type:FUNC
*/
HWTEST_F(End2EndTest, end_to_end_test_002, Function | MediumTest | Level1)
{
    const char* backendName = nullptr;
    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_GetBackendName(1, &backendName));

    std::vector<NNCore_TensorDesc*> tensorDescs;
    NNCore_TensorDesc* tensorDesc;
    int32_t inputDims[4] = {-1, 2, 2, 3};
    ASSERT_EQ(NNCORE_SUCCESS, ConstructTensorDesc(&tensorDesc, inputDims, 4, 
                                                  NNCORE_FLOAT32, NNCORE_FORMAT_NONE));
    tensorDescs.push_back(tensorDesc);

    inputDims[0] = 1;
    ASSERT_EQ(NNCORE_SUCCESS, ConstructTensorDesc(&tensorDesc, inputDims, 4, 
                                                  NNCORE_FLOAT32, NNCORE_FORMAT_NONE));
    tensorDescs.push_back(tensorDesc);
    ASSERT_EQ(NNCORE_SUCCESS, ConstructTensorDesc(&tensorDesc, inputDims, 4, 
                                                  NNCORE_FLOAT32, NNCORE_FORMAT_NONE));
    tensorDescs.push_back(tensorDesc);

    NNBackend_Model *model;
    ASSERT_EQ(NNCORE_SUCCESS, BuildModel(&model, tensorDescs));
    
    NNCore_Compilation* compilation = OH_NNCore_ConstructCompilationWithNNModel(model);
    ASSERT_NE(nullptr, compilation);
    OH_NNBackend_DestroyModel(&model);
    ASSERT_EQ(nullptr, model);
    // 创建并设置options
    NNCore_Options* Options = nullptr;
    SetOptionsFormBackend(backendName, &Options);
    // 编译生成compiled对象后销毁compilation
    NNCore_Compiled* compiled = OH_NNCore_BuildCompilation(compilation, backendName, Options);
    ASSERT_NE(nullptr, compiled);
    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_DestroyCompilation(&compilation));
    const char* filePath = "file";
    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_SaveCompiledToFile(compiled, filePath));
    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_RestoreCompiledFromFile(filePath, backendName, Options, &compiled));
    RunModelTest(backendName, compiled);
    // 销毁compiled
    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_DestroyCompiled(&compiled));
}

/*
* @tc.name:end_to_end_test_003
* @tc.desc:Test End-to-End operation of Neural Network Core for StabilityTest.
* @tc.type:FUNC
*/
HWTEST_F(End2EndTest, end_to_end_test_003, Function | MediumTest | Level1)
{
    const char* backendName1 = nullptr;
    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_GetBackendName(0, &backendName1));

    std::vector<NNCore_TensorDesc*> tensorDescs1;
    NNCore_TensorDesc* tensorDesc1;
    int32_t inputDims[4] = {1, 2, 2, 3};
    ASSERT_EQ(NNCORE_SUCCESS, ConstructTensorDesc(&tensorDesc1, inputDims, 4, 
                                                  NNCORE_FLOAT32, NNCORE_FORMAT_NONE));
    tensorDescs1.push_back(tensorDesc1);

    ASSERT_EQ(NNCORE_SUCCESS, ConstructTensorDesc(&tensorDesc1, inputDims, 4, 
                                                  NNCORE_FLOAT32, NNCORE_FORMAT_NONE));
    tensorDescs1.push_back(tensorDesc1);

    ASSERT_EQ(NNCORE_SUCCESS, ConstructTensorDesc(&tensorDesc1, inputDims, 4, 
                                                  NNCORE_FLOAT32, NNCORE_FORMAT_NONE));
    tensorDescs1.push_back(tensorDesc1);

    NNBackend_Model *model1;
    ASSERT_EQ(NNCORE_SUCCESS, BuildModel(&model1, tensorDescs1));

    NNCore_Compilation* compilation1 = OH_NNCore_ConstructCompilationWithNNModel(model1);
    ASSERT_NE(nullptr, compilation1);
    ASSERT_EQ(nullptr, model1);
    // 创建并设置compilation options
    NNCore_Options* Options1 = nullptr;
    SetOptionsFormBackend(backendName1, &Options1);
    // 编译生成compiled对象后销毁compilation
    NNCore_Compiled* compiled1 = OH_NNCore_BuildCompilation(compilation1, backendName1, Options1);
    ASSERT_NE(nullptr, compiled1);
    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_DestroyCompilation(&compilation1));
    const char* filePath1 = "file1";
    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_SaveCompiledToFile(compiled1, filePath1));
    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_RestoreCompiledFromFile(filePath1, backendName1, Options1, &compiled1));

    const char* backendName2 = nullptr;
    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_GetBackendName(1, &backendName2));

    std::vector<NNCore_TensorDesc*> tensorDescs2;
    NNCore_TensorDesc* tensorDesc2;
    inputDims[0] = -1;
    ASSERT_EQ(NNCORE_SUCCESS, ConstructTensorDesc(&tensorDesc2, inputDims, 4, 
                                                  NNCORE_FLOAT32, NNCORE_FORMAT_NONE));
    tensorDescs2.push_back(tensorDesc2);

    inputDims[0] = 1;
    ASSERT_EQ(NNCORE_SUCCESS, ConstructTensorDesc(&tensorDesc2, inputDims, 4, 
                                                  NNCORE_FLOAT32, NNCORE_FORMAT_NONE));
    tensorDescs2.push_back(tensorDesc2);

    ASSERT_EQ(NNCORE_SUCCESS, ConstructTensorDesc(&tensorDesc2, inputDims, 4, 
                                                  NNCORE_FLOAT32, NNCORE_FORMAT_NONE));
    tensorDescs2.push_back(tensorDesc2);

    NNBackend_Model *model2;
    ASSERT_EQ(NNCORE_SUCCESS, BuildModel(&model2, tensorDescs2));
    NNCore_Compilation* compilation2 = OH_NNCore_ConstructCompilationWithNNModel(model2);
    ASSERT_NE(nullptr, compilation2);
    OH_NNBackend_DestroyModel(&model2);
    ASSERT_EQ(nullptr, model2);
    // 创建并设置compilation options
    NNCore_Options* Options2 = nullptr;
    SetOptionsFormBackend(backendName2, &Options2);
    // 编译生成compiled对象后销毁compilation
    NNCore_Compiled* compiled2 = OH_NNCore_BuildCompilation(compilation2, backendName2, Options2);
    ASSERT_NE(nullptr, compiled2);
    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_DestroyCompilation(&compilation2));
    // 保存cache
    const char* filePath2 = "file2";
    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_SaveCompiledToFile(compiled2, filePath2));
    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_RestoreCompiledFromFile(filePath2, backendName2, Options2, &compiled2));
    const size_t REPEAT_TIMES = 10000;
    for (size_t i = 0; i < REPEAT_TIMES; i++) {
    //     std::thread th1(RunModelTest, backendName1, compiled1);
    //     std::thread th2(RunModelTest, backendName2, compiled2);
    //     th1.join();
    //     th2.join();
    RunModelTest(backendName1, compiled1);
    RunModelTest(backendName2, compiled2);
    }
    // 销毁compiled
    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_DestroyCompiled(&compiled1));
    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_DestroyCompiled(&compiled2));
}