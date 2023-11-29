#include <cmath>
#include <cstdio>
#include <filesystem>
#include <string>
#include <vector>
#include <thread>
#include <gtest/gtest.h>

#include "End2EndTest.h"

using namespace OHOS::NeuralNetworkCore;
using namespace testing::ext;

OH_NNCore_ReturnCode End2EndTest::BuildModel(OH_NNBackend_Model **model,
                                             const std::vector<OH_NNCore_TensorDesc*>& tensorDescs)
{
    *model = OH_NNBackend_CreateModel();
    if (*model == nullptr) {
        LOGE("End2EndTest::BuildModel failed, error happens when creating OH_NNModel.");
        return OH_NNCORE_INVALID_PARAMETER;
    }

    OH_NNCore_ReturnCode status;
    for (size_t i = 0; i < tensorDescs.size(); i++) {
        status = OH_NNBackend_AddTensorToModel(*model, tensorDescs[i]);
        if (status != OH_NNCORE_SUCCESS) {
            LOGE("End2EndTest::BuildModel failed, error happens when adding tensordesc[%zu].", i);
            return status;
        }
        status = OH_NNBackend_SetModelTensorType(*model, i, OH_NNBACKEND_TENSOR);
        if (status != OH_NNCORE_SUCCESS) {
            LOGE("End2EndTest::BuildModel failed, error happens when SetModelTensorType[%zu].", i);
            return status;
        }
    }

    int8_t activationValue = OH_NNBACKEND_FUSED_NONE;
    status = OH_NNBackend_SetModelTensorData(*model, 2, &activationValue, sizeof(int8_t));
    if (status != OH_NNCORE_SUCCESS) {
        LOGE("End2EndTest::BuildModel failed, error happens when setting model tensor data.");
        return status;
    }

    uint32_t inputIndicesValues[2] = {0, 1};
    uint32_t paramIndicesValues = 2;
    uint32_t outputIndicesValues = 3;
    OH_NNBackend_Array paramIndices = {&paramIndicesValues, 1 * 4, OH_NNCORE_UINT32};
    OH_NNBackend_Array inputIndices = {inputIndicesValues, 2 * 4, OH_NNCORE_UINT32};
    OH_NNBackend_Array outputIndices = {&outputIndicesValues, 1 * 4, OH_NNCORE_UINT32};

    status = OH_NNBackend_AddOperationToModel(*model, OH_NNBACKEND_OPS_ADD, &paramIndices, &inputIndices, &outputIndices);
    if (status != OH_NNCORE_SUCCESS) {
        LOGE("End2EndTest::BuildModel failed, error happends when adding operation into the model.");
        return status;
    }

    status = OH_NNBackend_SpecifyModelInputsAndOutputs(*model, &inputIndices, &outputIndices);
    if (status != OH_NNCORE_SUCCESS) {
        LOGE("End2EndTest::BuildModel failed, error happends when specifying the inputs and outputs.");
        return status;
    }

    status = OH_NNBackend_BuildModel(*model);
    if (status != OH_NNCORE_SUCCESS) {
        LOGE("End2EndTest::BuildModel failed, error happends during constructing the model.");
        return status;
    }

    return status;
}

OH_NNCore_ReturnCode End2EndTest::CreateTensorDesc(OH_NNCore_TensorDesc** tensorDesc, const int32_t* shape, size_t shapeNum, 
                                                   OH_NNCore_DataType dataType, OH_NNCore_Format format)
{
    *tensorDesc = OH_NNCore_CreateTensorDesc();
    if (*tensorDesc == nullptr) {
        LOGE("End2EndTest::CreateTensorDesc failed, error happens when creating OH_NNCore_TensorDesc.");
        return OH_NNCORE_INVALID_PARAMETER;
    }

    OH_NNCore_ReturnCode status = OH_NNCore_SetTensorDescShape(*tensorDesc, shape, shapeNum);
    if (status != OH_NNCORE_SUCCESS) {
        LOGE("End2EndTest::CreateTensorDesc failed, error happends when setting TensorDesc Shape.");
        return status;
    }

    status = OH_NNCore_SetTensorDescDataType(*tensorDesc, dataType);
    if (status != OH_NNCORE_SUCCESS) {
        LOGE("End2EndTest::CreateTensorDesc failed, error happends when setting TensorDesc DataType.");
        return status;
    }

    status = OH_NNCore_SetTensorDescFormat(*tensorDesc, format);
    if (status != OH_NNCORE_SUCCESS) {
        LOGE("End2EndTest::CreateTensorDesc failed, error happends when setting TensorDesc Format.");
        return status;
    }

    return status;
}

void End2EndTest::SetOptionsFormBackend(const char* backendName, OH_NNCore_Options** Options)
{
    *Options = OH_NNCore_CreateOptions(backendName);
    ASSERT_NE(nullptr, *Options);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetPriority(*Options, OH_NNCORE_PRIORITY_HIGH));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetPerformanceMode(*Options, OH_NNCORE_PERFORMANCE_EXTREME));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetEnableFloat16(*Options, true));
}

void End2EndTest::GetTensorDescFormCompiled(OH_NNCore_Compiled* compiled, size_t *inputNum, std::vector<OH_NNCore_TensorDesc*>& inputTensorDescs,
                               size_t *outputNum, std::vector<OH_NNCore_TensorDesc*>& outputTensorDescs)
{
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetCompiledInputNum(compiled, inputNum));
    OH_NNCore_TensorDesc* tensorDesc = nullptr;
    for (size_t i = 0; i < *inputNum; ++i) {
        tensorDesc = nullptr;
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetCompiledInputDesc(compiled, i, &tensorDesc));
        inputTensorDescs.emplace_back(tensorDesc);
    }
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetCompiledOutputNum(compiled, outputNum));
    for (size_t i = 0; i < *outputNum; ++i) {
        tensorDesc = nullptr;
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetCompiledInputDesc(compiled, i, &tensorDesc));
        outputTensorDescs.emplace_back(tensorDesc);
    }
}

void End2EndTest::CreateTensorFormTensorDesc(const char* backendName, OH_NNCore_Tensor* tensors[], size_t count, std::vector<OH_NNCore_TensorDesc*>& tensorDescs)
{
    for (size_t i = 0; i < count; ++i) {
        OH_NNCore_Tensor* tensor = nullptr;
        tensor = OH_NNCore_CreateTensor(backendName, tensorDescs[i]);
        ASSERT_NE(nullptr, tensor);
        tensors[i] = tensor;
    }
}

void End2EndTest::SetInputData(OH_NNCore_Tensor* inputTensor[], size_t inputSize)
{
    OH_NNCore_DataType dataType(OH_NNCORE_FLOAT32);
    OH_NNCore_ReturnCode ret{OH_NNCORE_FAILED};
    size_t elementNum = 0;
    for (size_t i = 0; i < inputSize; ++i) {
        auto data = OH_NNCore_GetDataBuffer(inputTensor[i]);
        ASSERT_NE(nullptr, data);
        auto desc = OH_NNCore_GetTensorDesc(inputTensor[i]);
        ASSERT_NE(nullptr, desc);
        ret = OH_NNCore_GetTensorDescDataType(desc, &dataType);
        ASSERT_EQ(OH_NNCORE_SUCCESS, ret);
        ret = OH_NNCore_GetTensorDescElementNum(desc, &elementNum);
        ASSERT_EQ(OH_NNCORE_SUCCESS, ret);
        switch(dataType) {
            case OH_NNCORE_FLOAT32: {
                float* floatValue = reinterpret_cast<float*>(data);
                for (size_t j = 0; j < elementNum; ++j) {
                    floatValue[i] = static_cast<float>(j);
                }
                break;
            }
            case OH_NNCORE_INT32: {
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

void End2EndTest::DestroyTensor(OH_NNCore_Executor* executor, OH_NNCore_Tensor* tensors[], size_t count)
{
    for (size_t i = 0; i < count; ++i) {
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyTensor(&tensors[i]));
    }
}

void End2EndTest::RunModelTest(const char* backendName, OH_NNCore_Compiled* compiled)
{
    // 从compiled获取输入输出信息
    size_t inputCount = 0;
    std::vector<OH_NNCore_TensorDesc*> inputTensorDescs;
    size_t outputCount = 0;
    std::vector<OH_NNCore_TensorDesc*> outputTensorDescs;
    GetTensorDescFormCompiled(compiled, &inputCount, inputTensorDescs, &outputCount, outputTensorDescs);
    // 从compiled中创建executor
    OH_NNCore_Executor* executor = OH_NNCore_ConstructExecutor(compiled);
    // 创建输入输出Tensor
    OH_NNCore_Tensor* inputTensors[inputCount];
    CreateTensorFormTensorDesc(backendName, inputTensors, inputCount, inputTensorDescs);
    SetInputData(inputTensors, inputCount);
    OH_NNCore_Tensor* outputTensors[outputCount];
    CreateTensorFormTensorDesc(backendName, outputTensors, outputCount, outputTensorDescs);
    // 执行run
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_ExecutorRunSync(executor, inputTensors, inputCount, outputTensors, outputCount));
    // 清理输入输出Tensor
    DestroyTensor(executor, inputTensors, inputCount);
    DestroyTensor(executor, outputTensors, outputCount);
    // 销毁Executor
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyExecutor(&executor));
}
/*
* @tc.name:end_to_end_test_001
* @tc.desc:Test End-to-End operation of Neural Network Core.
* @tc.type:FUNC
*/
HWTEST_F(End2EndTest, end_to_end_test_001, testing::ext::TestSize.Level1)
{
    size_t backendNum = 0;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendNum(&backendNum));
    const char* backendName = nullptr;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(0, &backendName));

    std::vector<OH_NNCore_TensorDesc*> tensorDescs;
    OH_NNCore_TensorDesc* tensorDesc;
    int32_t inputDims[4] = {1, 2, 2, 3};
    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc, inputDims, 4, 
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE));
    tensorDescs.push_back(tensorDesc);

    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc, inputDims, 4, 
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE));
    tensorDescs.push_back(tensorDesc);

    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc, inputDims, 4, 
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE));
    tensorDescs.push_back(tensorDesc);

    OH_NNBackend_Model *model;
    ASSERT_EQ(OH_NNCORE_SUCCESS, BuildModel(&model, tensorDescs));

    OH_NNCore_Compilation* compilation = OH_NNCore_ConstructCompilationWithNNModel(model);
    ASSERT_NE(nullptr, compilation);
    OH_NNBackend_DestroyModel(&model);
    ASSERT_EQ(nullptr, model);
    // 创建并设置options
    OH_NNCore_Options* Options = nullptr;
    SetOptionsFormBackend(backendName, &Options);

    // 编译生成compiled对象后销毁compilation
    OH_NNCore_Compiled* compiled = OH_NNCore_BuildCompilation(compilation, backendName, Options);
    ASSERT_NE(nullptr, compiled);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyCompilation(&compilation));

    // 保存cache
    const char* filePath = "file";
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SaveCompiledToFile(compiled, filePath));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_RestoreCompiledFromFile(filePath, backendName, Options, &compiled));
    RunModelTest(backendName, compiled);

    // 销毁compiled
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyCompiled(&compiled));
}


/*
* @tc.name:end_to_end_test_002
* @tc.desc:Test End-to-End operation of Neural Network Core with dynamic inputs.
* @tc.type:FUNC
*/
HWTEST_F(End2EndTest, end_to_end_test_002, testing::ext::TestSize.Level1)
{
    const char* backendName = nullptr;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(1, &backendName));

    std::vector<OH_NNCore_TensorDesc*> tensorDescs;
    OH_NNCore_TensorDesc* tensorDesc;
    int32_t inputDims[4] = {-1, 2, 2, 3};
    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc, inputDims, 4, 
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE));
    tensorDescs.push_back(tensorDesc);

    inputDims[0] = 1;
    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc, inputDims, 4, 
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE));
    tensorDescs.push_back(tensorDesc);
    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc, inputDims, 4, 
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE));
    tensorDescs.push_back(tensorDesc);

    OH_NNBackend_Model *model;
    ASSERT_EQ(OH_NNCORE_SUCCESS, BuildModel(&model, tensorDescs));
    
    OH_NNCore_Compilation* compilation = OH_NNCore_ConstructCompilationWithNNModel(model);
    ASSERT_NE(nullptr, compilation);
    OH_NNBackend_DestroyModel(&model);
    ASSERT_EQ(nullptr, model);
    // 创建并设置options
    OH_NNCore_Options* Options = nullptr;
    SetOptionsFormBackend(backendName, &Options);
    // 编译生成compiled对象后销毁compilation
    OH_NNCore_Compiled* compiled = OH_NNCore_BuildCompilation(compilation, backendName, Options);
    ASSERT_NE(nullptr, compiled);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyCompilation(&compilation));
    const char* filePath = "file";
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SaveCompiledToFile(compiled, filePath));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_RestoreCompiledFromFile(filePath, backendName, Options, &compiled));
    RunModelTest(backendName, compiled);
    // 销毁compiled
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyCompiled(&compiled));
}

/*
* @tc.name:end_to_end_test_003
* @tc.desc:Test End-to-End operation of Neural Network Core for StabilityTest.
* @tc.type:FUNC
*/
HWTEST_F(End2EndTest, end_to_end_test_003, testing::ext::TestSize.Level3)
{
    const char* backendName1 = nullptr;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(0, &backendName1));

    std::vector<OH_NNCore_TensorDesc*> tensorDescs1;
    OH_NNCore_TensorDesc* tensorDesc1;
    int32_t inputDims[4] = {1, 2, 2, 3};
    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc1, inputDims, 4, 
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE));
    tensorDescs1.push_back(tensorDesc1);

    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc1, inputDims, 4, 
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE));
    tensorDescs1.push_back(tensorDesc1);

    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc1, inputDims, 4, 
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE));
    tensorDescs1.push_back(tensorDesc1);

    OH_NNBackend_Model *model1;
    ASSERT_EQ(OH_NNCORE_SUCCESS, BuildModel(&model1, tensorDescs1));

    OH_NNCore_Compilation* compilation1 = OH_NNCore_ConstructCompilationWithNNModel(model1);
    ASSERT_NE(nullptr, compilation1);
    ASSERT_EQ(nullptr, model1);
    // 创建并设置compilation options
    OH_NNCore_Options* Options1 = nullptr;
    SetOptionsFormBackend(backendName1, &Options1);
    // 编译生成compiled对象后销毁compilation
    OH_NNCore_Compiled* compiled1 = OH_NNCore_BuildCompilation(compilation1, backendName1, Options1);
    ASSERT_NE(nullptr, compiled1);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyCompilation(&compilation1));
    const char* filePath1 = "file1";
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SaveCompiledToFile(compiled1, filePath1));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_RestoreCompiledFromFile(filePath1, backendName1, Options1, &compiled1));

    const char* backendName2 = nullptr;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(1, &backendName2));

    std::vector<OH_NNCore_TensorDesc*> tensorDescs2;
    OH_NNCore_TensorDesc* tensorDesc2;
    inputDims[0] = -1;
    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc2, inputDims, 4, 
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE));
    tensorDescs2.push_back(tensorDesc2);

    inputDims[0] = 1;
    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc2, inputDims, 4, 
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE));
    tensorDescs2.push_back(tensorDesc2);

    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc2, inputDims, 4, 
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE));
    tensorDescs2.push_back(tensorDesc2);

    OH_NNBackend_Model *model2;
    ASSERT_EQ(OH_NNCORE_SUCCESS, BuildModel(&model2, tensorDescs2));
    OH_NNCore_Compilation* compilation2 = OH_NNCore_ConstructCompilationWithNNModel(model2);
    ASSERT_NE(nullptr, compilation2);
    OH_NNBackend_DestroyModel(&model2);
    ASSERT_EQ(nullptr, model2);
    // 创建并设置compilation options
    OH_NNCore_Options* Options2 = nullptr;
    SetOptionsFormBackend(backendName2, &Options2);
    // 编译生成compiled对象后销毁compilation
    OH_NNCore_Compiled* compiled2 = OH_NNCore_BuildCompilation(compilation2, backendName2, Options2);
    ASSERT_NE(nullptr, compiled2);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyCompilation(&compilation2));
    // 保存cache
    const char* filePath2 = "file2";
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SaveCompiledToFile(compiled2, filePath2));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_RestoreCompiledFromFile(filePath2, backendName2, Options2, &compiled2));
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
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyCompiled(&compiled1));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyCompiled(&compiled2));
}