#include "End2EndTest.h"

#include <cmath>
#include <cstdio>
#include <filesystem>
#include <string>
#include <vector>

OH_NNCore_ReturnCode End2EndTest::BuildModel(OH_NNBackend_Model **model,
                                             const std::vector<OH_NNCore_TensorDesc*>& tensorDescs)
{
    *model = OH_NNBackend_ConstructModel();
    if (*model == nullptr) {
        LOGE("End2EndTest::BuildModel failed, error happens when creating OH_NNModel.");
        return OH_NNCORE_INVALID_PARAMETER;
    }

    OH_NNCore_ReturnCode status;
    for (size_t i = 0; i < tensorDescs.size(); i++) {
        status = OH_NNBackend_AddTensorToModel(model, tensorDescs[i]);
        if (status != OH_NNCORE_SUCCESS) {
            LOGE("End2EndTest::BuildModel failed, error happens when adding tensordesc[%zu].", &i);
            return status;
        }
    }

    int8_t activationValue = OH_NNBACKEND_FUSED_NONE;
    status = OH_NNBackend_SetModelTensorData(*model, 2, &activationValue, sizeof(int8_t));
    if (status != OH_NNCORE_SUCCESS) {
        LOGE("End2EndTest::BuildModel failed, error happens when setting model tensor data.");
        return status;
    }

    status = OH_NNBackend_AddOperationToModel(*model, OH_NNBACKEND_OPS_ADD, {2}, {0, 1}, {3});
    if (status != OH_NNCORE_SUCCESS) {
        LOGE("End2EndTest::BuildModel failed, error happends when adding operation into the model.");
        return status;
    }

    status = OH_NNBackend_SpecifyModelInputsAndOutputs(*model, {0, 1}, {3});
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
                                                   OH_NNCore_DataType dataType, OH_NNCore_Format format,
                                                   OH_NNBackend_TensorType tensorType)
{
    *tensorDesc = OH_NNCore_CreateTensorDesc();
    if (*model == nullptr) {
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

    status = OH_NNBackend_SetTensorDescTensorType(*tensorDesc, tensorType);
    if (status != OH_NNCORE_SUCCESS) {
        LOGE("End2EndTest::CreateTensorDesc failed, error happends when setting TensorDesc TensorType.");
        return status;
    }

    return status;
}

void End2EndTest::SetOptions(const char* backendName)
{
    OH_NNCore_Options* Options = OH_NNBackend_CreateOptions(backendName);
    ASSERT_NE(nullptr, Options);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetPriority(Options, OH_NNBACKEND_PRIORITY_HIGH));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetPerformanceMode(Options, OH_NNBACKEND_PERFORMANCE_EXTREME));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetEnableFloat16(Options, true));
}

void End2EndTest::GetTensorDescFormCompiled(OH_NNCore_Compiled* compiled, size_t *count, std::vector<OH_NNCore_TensorDesc*>& tensorDescs)
{
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetCompiledInputCount(compiled, count));
    OH_NNCore_TensorDesc* tensorDesc = nullptr;
    for (size_t i = 0; i < *count; ++i) {
        tensorDesc = nullptr;
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetCompiledInputDesc(compiled, i, &tensorDesc));
        tensorDescs.emplace_back(tensorDesc);
    }
}

void End2EndTest::CreateTensorFormTensorDesc(OH_NNCore_Tensor* tensors, size_t count, std::vector<OH_NNCore_TensorDesc*>& tensorDescs)
{
    OH_NNBackend_Memory* memory = nullptr;
    for (size_t i = 0; i < count; ++i) {
        OH_NNCore_Tensor* tensor = nullptr;
        size_t byteSize = 0;
        tensor = OH_NNBackend_CreateTensor(tensorDescs[i]);
        ASSERT_NE(nullptr, tensor);
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetTensorDescByteSize(inputTensorDescs[i], &byteSize));
        memory = OH_NNBackend_AllocateMemory(executor, byteSize);
        ASSERT_NE(nullptr, memory);
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetTensorData(tensor, memory));
        tensors[i] = tensor;
    }
}

void End2EndTest::DestroyTensor(OH_NNCore_Executor* executor, OH_NNCore_Tensor* tensors, size_t count)
{
    for (size_t i = 0; i < count; ++i) {
        OH_NNBackend_Memory* memoryTmp = OH_NNBackend_GetTensorData(tensors[i]);
        ASSERT_NE(nullptr, memoryTmp);
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_ReleaseMemory(executor, &memoryTmp));
    }
}

void End2EndTest::RunModelTest(OH_NNCore_Compiled* compiled)
{
    // 从compiled获取输入输出信息
    size_t inputCount = 0;
    std::vector<OH_NNCore_TensorDesc*> inputTensorDescs;
    GetTensorDescFormCompiled(compiled, &inputCount, inputTensorDescs);
    size_t outputCount = 0;
    std::vector<OH_NNCore_TensorDesc*> outputTensorDescs;
    GetTensorDescFormCompiled(compiled, &outputCount, outputTensorDescs);
    // 从compiled中创建executor
    OH_NNCore_Executor* executor = OH_NNCore_ConstructExecutor(compiled);
    // 创建输入输出Tensor
    OH_NNCore_Tensor* inputTensors[inputCount];
    CreateTensorFormTensorDesc(inputTensors, inputCount, inputTensorDescs);
    OH_NNCore_Tensor* outputTensors[outputCount];
    CreateTensorFormTensorDesc(outputTensors, outputCount, outputTensorDescs);
    // 执行run
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_ExecutorRunSync(executor, inputTensors, inputCount, outputTensors, outputCount));
    // 清理输入输出Tensor
    DestroyTensor(executor, inputTensors);
    DestroyTensor(executor, outputTensors);
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
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE, OH_NNBACKEND_TENSOR));
    tensorDescs.push_back(tensorDesc);

    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc, inputDims, 4, 
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE, OH_NNBACKEND_TENSOR));
    tensorDescs.push_back(tensorDesc);

    int32_t activationDims = 1;
    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc, &activationDims, 1, 
                                                  OH_NNCORE_INT8, OH_NNCORE_FORMAT_NONE, OH_NNBACKEND_ADD_ACTIVATIONTYPE));
    tensorDescs.push_back(tensorDesc);
    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc, inputDims, 4, 
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE, OH_NNBACKEND_TENSOR));
    tensorDescs.push_back(tensorDesc);

    OH_NNBackend_Model *model;
    ASSERT_EQ(OH_NNCORE_SUCCESS, BuildModel(&model, tensorDesc));

    OH_NNCore_Compilation* compilation = OH_NNCore_ConstructCompilationWithNNModel(model);
    ASSERT_NE(nullptr, compilation);
    OH_NNBackend_DestroyModel(&model);
    ASSERT_EQ(nullptr, model);
    // 设置backendName
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetCompilationBackend(compilation, backendName));
    // 创建并设置compilation options
    SetOptions(backendName);
    // 编译生成compiled对象后销毁compilation
    OH_NNCore_Compiled* compiled = OH_NNCore_BuildCompilation(compilation);
    ASSERT_NE(nullptr, compiled);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyCompilation(&compilation));
    const char* filePath = "file";
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SaveCompiledToFile(compiled, filePath));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_RestoreCompiledFromFile(filePath, backendName, &compiled));
    RunModelTest(compiled);

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
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE, OH_NNBACKEND_TENSOR));
    tensorDescs.push_back(tensorDesc);

    inputDims[0] = 1;
    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc, inputDims, 4, 
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE, OH_NNBACKEND_TENSOR));
    tensorDescs.push_back(tensorDesc);

    int32_t activationDims = 1;
    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc, &activationDims, 1, 
                                                  OH_NNCORE_INT8, OH_NNCORE_FORMAT_NONE, OH_NNBACKEND_ADD_ACTIVATIONTYPE));
    tensorDescs.push_back(tensorDesc);
    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc, inputDims, 4, 
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE, OH_NNBACKEND_TENSOR));
    tensorDescs.push_back(tensorDesc);

    OH_NNBackend_Model *model;
    ASSERT_EQ(OH_NNCORE_SUCCESS, BuildModel(&model, tensorDesc));
    
    OH_NNCore_Compilation* compilation = OH_NNCore_ConstructCompilationWithNNModel(model);
    ASSERT_NE(nullptr, compilation);
    OH_NNBackend_DestroyModel(&model);
    ASSERT_EQ(nullptr, model);
    // 设置backendName
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetCompilationBackend(compilation, backendName));
    // 创建并设置compilation options
    SetOptions(backendName);
    // 编译生成compiled对象后销毁compilation
    OH_NNCore_Compiled* compiled = OH_NNCore_BuildCompilation(compilation);
    ASSERT_NE(nullptr, compiled);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyCompilation(&compilation));
    const char* filePath = "file";
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SaveCompiledToFile(compiled, filePath));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_RestoreCompiledFromFile(filePath, backendName, &compiled));
    RunModelTest(compiled);
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
    const char* backendName = nullptr;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(0, &backendName));

    std::vector<OH_NNCore_TensorDesc*> tensorDescs1;
    OH_NNCore_TensorDesc* tensorDesc1;
    int32_t inputDims[4] = {1, 2, 2, 3};
    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc1, inputDims, 4, 
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE, OH_NNBACKEND_TENSOR));
    tensorDescs1.push_back(tensorDesc1);

    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc1, inputDims, 4, 
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE, OH_NNBACKEND_TENSOR));
    tensorDescs1.push_back(tensorDesc1);

    int32_t activationDims = 1;
    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc1, &activationDims, 1, 
                                                  OH_NNCORE_INT8, OH_NNCORE_FORMAT_NONE, OH_NNBACKEND_ADD_ACTIVATIONTYPE));
    tensorDescs1.push_back(tensorDesc1);
    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc1, inputDims, 4, 
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE, OH_NNBACKEND_TENSOR));
    tensorDescs1.push_back(tensorDesc1);

    OH_NNBackend_Model *model1;
    ASSERT_EQ(OH_NNCORE_SUCCESS, BuildModel(&model1, tensorDesc1));

    OH_NNCore_Compilation* compilation1 = OH_NNCore_ConstructCompilationWithNNModel(model1);
    ASSERT_NE(nullptr, compilation1);
    OH_NNBackend_DestroyModel(&model1);
    ASSERT_EQ(nullptr, model1);
    // 设置backendName
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetCompilationBackend(compilation1, backendName));
    // 创建并设置compilation options
    SetOptions(backendName);
    // 编译生成compiled对象后销毁compilation
    OH_NNCore_Compiled* compiled1 = OH_NNCore_BuildCompilation(compilation1);
    ASSERT_NE(nullptr, compiled1);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyCompilation(&compilation1));
    const char* filePath1 = "file1";
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SaveCompiledToFile(compiled1, filePath1));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_RestoreCompiledFromFile(filePath1, backendName, &compiled1));

    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(1, &backendName));

    std::vector<OH_NNCore_TensorDesc*> tensorDescs2;
    OH_NNCore_TensorDesc* tensorDesc2;
    inputDims[0] = -1;
    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc2, inputDims, 4, 
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE, OH_NNBACKEND_TENSOR));
    tensorDescs2.push_back(tensorDesc2);

    inputDims[0] = 1;
    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc2, inputDims, 4, 
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE, OH_NNBACKEND_TENSOR));
    tensorDescs2.push_back(tensorDesc2);

    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc2, &activationDims, 1, 
                                                  OH_NNCORE_INT8, OH_NNCORE_FORMAT_NONE, OH_NNBACKEND_ADD_ACTIVATIONTYPE));

    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc2, inputDims, 4, 
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE, OH_NNBACKEND_TENSOR));
    tensorDescs.push_back(tensorDesc2);

    OH_NNBackend_Model *model2;
    ASSERT_EQ(OH_NNCORE_SUCCESS, BuildModel(&model2, tensorDesc2));
    OH_NNCore_Compilation* compilation2 = OH_NNCore_ConstructCompilationWithNNModel(model2);
    ASSERT_NE(nullptr, compilation2);
    OH_NNBackend_DestroyModel(&model2);
    ASSERT_EQ(nullptr, model2);
    // 设置backendName
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetCompilationBackend(compilation2, backendName));
    // 创建并设置compilation options
    SetOptions(backendName);
    // 编译生成compiled对象后销毁compilation
    OH_NNCore_Compiled* compiled2 = OH_NNCore_BuildCompilation(compilation2);
    ASSERT_NE(nullptr, compiled);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyCompilation(&compilation2));
    const char* filePath2 = "file2";
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SaveCompiledToFile(compiled2, filePath2));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_RestoreCompiledFromFile(filePath2, backendName, &compiled2));
    const size_t REPEAT_TIMES = 10000;
    for (size_t i = 0; i < REPEAT_TIMES; i++) {
        std::thread th1(RunModelTest, compiled1);
        std::thread th1(RunModelTest, compiled2);
        th1.join();
        th2.join();
    }
    // 销毁compiled
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyCompiled(&compiled1));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyCompiled(&compiled2));
}