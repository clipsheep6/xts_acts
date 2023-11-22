#include "end_to_end_test.h"

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

OH_NNCore_ReturnCode End2EndTest::CreateTensorDesc(OH_NNCore_TensorDesc** tensorDesc, std::string &backendName, const int32_t* shape, size_t shapeNum, 
                                                   OH_NNCore_DataType dataType, OH_NNCore_Format format,
                                                   OH_NNBackend_TensorType tensorType)
{
    *tensorDesc = OH_NNCore_CreateTensorDesc(backendName.c_str());
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
/*
* @tc.name:end_to_end_test_001
* @tc.desc:Test End-to-End operation of Neural Network Core.
* @tc.type:FUNC
*/
HWTEST_F(End2EndTest, end_to_end_test_001, testing::ext::TestSize.Level1)
{
    size_t backendNum = 0;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendNum(&backendNum));
    const char* backendNameTmp = nullptr;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(0, &backendNameTmp));
    std::string backendName(backendNameTmp);

    std::vector<OH_NNCore_TensorDesc*> tensorDescs;
    OH_NNCore_TensorDesc* tensorDesc;
    int32_t inputDims[4] = {1, 2, 2, 3};
    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc, backendNum, inputDims, 4, 
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE, OH_NNBACKEND_TENSOR));
    tensorDescs.push_back(tensorDesc);

    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc, backendNum, inputDims, 4, 
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE, OH_NNBACKEND_TENSOR));
    tensorDescs.push_back(tensorDesc);

    int32_t activationDims = 1;
    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc, backendNum, &activationDims, 1, 
                                                  OH_NNCORE_INT8, OH_NNCORE_FORMAT_NONE, OH_NNBACKEND_ADD_ACTIVATIONTYPE));

    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc, backendNum, inputDims, 4, 
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE, OH_NNBACKEND_TENSOR));
    tensorDescs.push_back(tensorDesc);

    OH_NNBackend_Model *model;
    ASSERT_EQ(OH_NNCORE_SUCCESS, BuildModel(&model, tensorDesc));
    
    OH_NNCore_Compilation* compilation = OH_NNCore_ConstructCompilationWithNNModel(model);
    ASSERT_NE(nullptr, compilation);
    OH_NNBackend_DestroyModel(&model);
    ASSERT_EQ(nullptr, model);
    // 设置backendName
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetCompilationBackend(compilation, backendName.c_str()));
    // 创建并设置compilation options
    OH_NNCore_CompilationOptions* compilationOptions = OH_NNBackend_CreateCompilationOptions();
    ASSERT_NE(nullptr, compilationOptions);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetCompilationPriority(compilationOptions, OH_NNBACKEND_PRIORITY_HIGH));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetCompilationPerformanceMode(compilationOptions, OH_NNBACKEND_PERFORMANCE_EXTREME));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetCompilationEnableFloat16(compilationOptions, true));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetCompilationOptions(compilation, compilationOptions));
    // 编译生成compiled对象后销毁compilation
    OH_NNCore_Compiled* compiled = OH_NNCore_BuildCompilation(compilation);
    ASSERT_NE(nullptr, compiled);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyCompilation(&compilation));

    // 创建并设置compiled options，目前只有cache版本号设置
    OH_NNCore_CompiledOptions* compiledOptions = nullptr; // OH_NNBackend_CreateCompiledOptions();
    ASSERT_EQ(nullptr, compiledOptions);
    // size_t version = 1;
    // ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetCompiledCacheVersion(compiledOptions, version);
    // CHECKNEQ(returnCode, OH_NNCORE_SUCCESS, -1, "OH_NNBackend_SetCompiledVersion failed.");
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetCompiledOptions(compiled, compiledOptions));
    // 保存cache
    const char* filePath = "";
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SaveCompiledToFile(compiled, filePath));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_RestoreCompiledFromFile(filePath, backendName.c_str(), &compiled));
    // 从compiled中创建executor
    OH_NNCore_Executor* executor = OH_NNCore_ConstructExecutor(compiled);
    ASSERT_NE(nullptr, executor);
    // 销毁compiled
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyCompiled(&compiled));
    // 创建输入输出Tensor
    OH_NNCore_Tensor* inputTensors[inputCount];
    OH_NNCore_Tensor* tensor = nullptr;
    size_t byteSize = 0;
    OH_NNBackend_Memory* memory = nullptr;
    for (size_t i = 0; i < inputCount; ++i) {
        tensor = nullptr;
        byteSize = 0;
        tensor = OH_NNBackend_CreateTensor(inputTensorDescs[i]);
        ASSERT_NE(nullptr, tensor);
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetTensorDescByteSize(inputTensorDescs[i], &byteSize));
        memory = OH_NNBackend_AllocateMemory(executor, byteSize);
        ASSERT_NE(nullptr, memory);
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetTensorData(tensor, memory));
        inputTensors[i] = tensor;
    }
    OH_NNCore_Tensor* outputTensors[outputCount];
    for (size_t i = 0; i < outputCount; ++i) {
        tensor = nullptr;
        memory = nullptr;
        byteSize = 0;
        tensor = OH_NNBackend_CreateTensor(outputTensorDescs[i]);
        ASSERT_NE(nullptr, tensor);
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetTensorDescByteSize(outputTensorDescs[i], &byteSize));
        memory = OH_NNBackend_AllocateMemory(executor, byteSize);
        ASSERT_NE(nullptr, memory);
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetTensorData(tensor, memory));
        outputTensors[i] = tensor;
    }
    // 执行run
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_ExecutorRunSync(executor, inputTensors, inputCount, outputTensors, outputCount));
    // 清理输入输出Tensor
    for (size_t i = 0; i < inputCount; ++i) {
        OH_NNBackend_Memory* memoryTmp = OH_NNBackend_GetTensorData(inputTensors[i]);
        ASSERT_NE(nullptr, memoryTmp);
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_ReleaseMemory(executor, &memoryTmp));
    }
    for (size_t i = 0; i < outputCount; ++i) {
        OH_NNBackend_Memory* memoryTmp = OH_NNBackend_GetTensorData(outputTensors[i]);
        ASSERT_NE(nullptr, memoryTmp);
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_ReleaseMemory(executor, &memoryTmp));
    }
    // 销毁Executor
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyExecutor(&executor));
}


/*
* @tc.name:end_to_end_test_002
* @tc.desc:Test End-to-End operation of Neural Network Core with dynamic inputs.
* @tc.type:FUNC
*/
HWTEST_F(End2EndTest, end_to_end_test_001, testing::ext::TestSize.Level1)
{
    size_t backendNum = 0;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendNum(&backendNum));
    const char* backendNameTmp = nullptr;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(1, &backendNameTmp));
    std::string backendName(backendNameTmp);

    std::vector<OH_NNCore_TensorDesc*> tensorDescs;
    OH_NNCore_TensorDesc* tensorDesc;
    int32_t inputDims[4] = {-1, 2, 2, 3};
    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc, backendNum, inputDims, 4, 
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE, OH_NNBACKEND_TENSOR));
    tensorDescs.push_back(tensorDesc);

    inputDim[0] = 1;
    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc, backendNum, inputDims, 4, 
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE, OH_NNBACKEND_TENSOR));
    tensorDescs.push_back(tensorDesc);

    int32_t activationDims = 1;
    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc, backendNum, &activationDims, 1, 
                                                  OH_NNCORE_INT8, OH_NNCORE_FORMAT_NONE, OH_NNBACKEND_ADD_ACTIVATIONTYPE));

    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc, backendNum, inputDims, 4, 
                                                  OH_NNCORE_FLOAT32, OH_NNCORE_FORMAT_NONE, OH_NNBACKEND_TENSOR));
    tensorDescs.push_back(tensorDesc);

    OH_NNBackend_Model *model;
    ASSERT_EQ(OH_NNCORE_SUCCESS, BuildModel(&model, tensorDesc));
    
    OH_NNCore_Compilation* compilation = OH_NNCore_ConstructCompilationWithNNModel(model);
    ASSERT_NE(nullptr, compilation);
    OH_NNBackend_DestroyModel(&model);
    ASSERT_EQ(nullptr, model);
    // 设置backendName
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetCompilationBackend(compilation, backendName.c_str()));
    // 创建并设置compilation options
    OH_NNCore_CompilationOptions* compilationOptions = OH_NNBackend_CreateCompilationOptions();
    ASSERT_NE(nullptr, compilationOptions);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetCompilationPriority(compilationOptions, OH_NNBACKEND_PRIORITY_HIGH));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetCompilationPerformanceMode(compilationOptions, OH_NNBACKEND_PERFORMANCE_EXTREME));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetCompilationEnableFloat16(compilationOptions, true));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetCompilationOptions(compilation, compilationOptions));
    // 编译生成compiled对象后销毁compilation
    OH_NNCore_Compiled* compiled = OH_NNCore_BuildCompilation(compilation);
    ASSERT_NE(nullptr, compiled);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyCompilation(&compilation));

    // 创建并设置compiled options，目前只有cache版本号设置
    OH_NNCore_CompiledOptions* compiledOptions = nullptr; // OH_NNBackend_CreateCompiledOptions();
    ASSERT_EQ(nullptr, compiledOptions);
    // size_t version = 1;
    // ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetCompiledCacheVersion(compiledOptions, version);
    // CHECKNEQ(returnCode, OH_NNCORE_SUCCESS, -1, "OH_NNBackend_SetCompiledVersion failed.");
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetCompiledOptions(compiled, compiledOptions));
    // 保存cache
    const char* filePath = "";
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SaveCompiledToFile(compiled, filePath));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_RestoreCompiledFromFile(filePath, backendName.c_str(), &compiled));
    // 从compiled中创建executor
    OH_NNCore_Executor* executor = OH_NNCore_ConstructExecutor(compiled);
    ASSERT_NE(nullptr, executor);
    // 销毁compiled
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyCompiled(&compiled));
    // 创建输入输出Tensor
    OH_NNCore_Tensor* inputTensors[inputCount];
    OH_NNCore_Tensor* tensor = nullptr;
    size_t byteSize = 0;
    OH_NNBackend_Memory* memory = nullptr;
    for (size_t i = 0; i < inputCount; ++i) {
        tensor = nullptr;
        byteSize = 0;
        tensor = OH_NNBackend_CreateTensor(inputTensorDescs[i]);
        ASSERT_NE(nullptr, tensor);
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetTensorDescByteSize(inputTensorDescs[i], &byteSize));
        memory = OH_NNBackend_AllocateMemory(executor, byteSize);
        ASSERT_NE(nullptr, memory);
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetTensorData(tensor, memory));
        inputTensors[i] = tensor;
    }
    OH_NNCore_Tensor* outputTensors[outputCount];
    for (size_t i = 0; i < outputCount; ++i) {
        tensor = nullptr;
        memory = nullptr;
        byteSize = 0;
        tensor = OH_NNBackend_CreateTensor(outputTensorDescs[i]);
        ASSERT_NE(nullptr, tensor);
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetTensorDescByteSize(outputTensorDescs[i], &byteSize));
        memory = OH_NNBackend_AllocateMemory(executor, byteSize);
        ASSERT_NE(nullptr, memory);
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetTensorData(tensor, memory));
        outputTensors[i] = tensor;
    }
    // 执行run
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_ExecutorRunSync(executor, inputTensors, inputCount, outputTensors, outputCount));
    // 清理输入输出Tensor
    for (size_t i = 0; i < inputCount; ++i) {
        OH_NNBackend_Memory* memoryTmp = OH_NNBackend_GetTensorData(inputTensors[i]);
        ASSERT_NE(nullptr, memoryTmp);
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_ReleaseMemory(executor, &memoryTmp));
    }
    for (size_t i = 0; i < outputCount; ++i) {
        OH_NNBackend_Memory* memoryTmp = OH_NNBackend_GetTensorData(outputTensors[i]);
        ASSERT_NE(nullptr, memoryTmp);
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_ReleaseMemory(executor, &memoryTmp));
    }
    // 销毁Executor
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyExecutor(&executor));
}

