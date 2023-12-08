#include <string>
#include <vector>
#include <gtest/gtest.h>

#include "interfaces/kits/c/neural_network_runtime/neural_network_runtime_compat.h"
#include "common/log.h"

using namespace testing::ext;

class EndToEndTest: public testing::Test {};

constexpr size_t CircleCount = 10000;

NN_TensorDesc* createTensorDesc(const int32_t* shape, size_t shapeNum, OH_NN_DataType dataType, OH_NN_Format format)
{
    NN_TensorDesc* tensorDescTmp = OH_NNTensorDesc_Create();
    if (tensorDescTmp == nullptr) {
        LOGE("[NNRtTest]OH_NNTensorDesc_Create failed!");
        return nullptr;
    }

    OH_NN_ReturnCode ret = OH_NNTensorDesc_SetDataType(tensorDescTmp, dataType);
    if (ret != OH_NN_SUCCESS) {
        LOGE("[NNRtTest]OH_NNTensorDesc_SetDataType failed!ret = %d\n", ret);
        return nullptr;
    }

    ret = OH_NNTensorDesc_SetShape(tensorDescTmp, shape, shapeNum);
    if (ret != OH_NN_SUCCESS) {
        LOGE("[NNRtTest]OH_NNTensorDesc_SetShape failed!ret = %d\n", ret);
        return nullptr;
    }

    ret = OH_NNTensorDesc_SetFormat(tensorDescTmp, format);
    if (ret != OH_NN_SUCCESS) {
        LOGE("[NNRtTest]OH_NNTensorDesc_SetShape failed!ret = %d\n", ret);
        return nullptr;
    }

    return tensorDescTmp;
}

OH_NN_ReturnCode BuildModel(OH_NNModel **model,
                                const std::vector<NN_TensorDesc*>& tensorDescs)
{
    *model = OH_NNModel_Construct();
    if (*model == nullptr) {
        LOGE("End2EndTest::BuildModel failed, error happens when creating NNModel.");
        return OH_NN_FAILED;
    }

    OH_NN_ReturnCode status = OH_NN_SUCCESS;
    for (size_t i = 0; i < tensorDescs.size(); i++) {
        status = OH_NNModel_AddTensorToModel(*model, tensorDescs[i]);
        if (status != OH_NN_SUCCESS) {
            LOGE("End2EndTest::BuildModel failed, error happens when adding tensordesc[%zu].", i);
            return status;
        }
        status = OH_NNModel_SetTensorType(*model, i, OH_NN_TENSOR);
        if (status != OH_NN_SUCCESS) {
            LOGE("End2EndTest::BuildModel failed, error happens when SetModelTensorType[%zu].", i);
            return status;
        }
    }

    int8_t activationValue = OH_NN_FUSED_NONE;
    status = OH_NNModel_SetTensorData(*model, 2, &activationValue, sizeof(int8_t));
    if (status != OH_NN_SUCCESS) {
        LOGE("End2EndTest::BuildModel failed, error happens when setting model tensor data.");
        return status;
    }

    uint32_t inputIndicesValues[2] = {0, 1};
    uint32_t paramIndicesValues = 2;
    uint32_t outputIndicesValues = 3;
    OH_NN_UInt32Array paramIndices = {&paramIndicesValues, 1 * 4};
    OH_NN_UInt32Array inputIndices = {inputIndicesValues, 2 * 4};
    OH_NN_UInt32Array outputIndices = {&outputIndicesValues, 1 * 4};

    status = OH_NNModel_AddOperation(*model, OH_NN_OPS_ADD, &paramIndices, &inputIndices, &outputIndices);
    if (status != OH_NN_SUCCESS) {
        LOGE("End2EndTest::BuildModel failed, error happends when adding operation into the model.");
        return status;
    }

    status = OH_NNModel_SpecifyInputsAndOutputs(*model, &inputIndices, &outputIndices);
    if (status != OH_NN_SUCCESS) {
        LOGE("End2EndTest::BuildModel failed, error happends when specifying the inputs and outputs.");
        return status;
    }

    status = OH_NNModel_Finish(*model);
    if (status != OH_NN_SUCCESS) {
        LOGE("End2EndTest::BuildModel failed, error happends during constructing the model.");
        return status;
    }

    return status;
}

OH_NNCompilation* ConstructCompilation(OH_NNModel* model, size_t deviceId)
{
    OH_NNCompilation* compilation = nullptr;
    if (model == nullptr) {
        compilation = OH_NNCompilation_ConstructForCache();
        if (compilation == nullptr) {
            LOGE("End2EndTest::OH_NNCompilation_ConstructForCache failed.");
            return nullptr;
        }
    }
    else {
        compilation = OH_NNCompilation_Construct(model);
        if (compilation == nullptr) {
            LOGE("End2EndTest::OH_NNCompilation_Construct failed.");
            return nullptr;
        }
    }

    OH_NN_ReturnCode returnCode = OH_NNCompilation_SetDevice(compilation, deviceId);
    if (returnCode != OH_NN_SUCCESS) {
        LOGE("End2EndTest::OH_NNCompilation_SetDevice failed.");
        return nullptr;
    }

    returnCode = OH_NNCompilation_SetCache(compilation, "./", 1);
    if (returnCode != OH_NN_SUCCESS) {
        LOGE("End2EndTest::OH_NNCompilation_SetCache failed.");
        return nullptr;
    }

    returnCode = OH_NNCompilation_SetPerformanceMode(compilation, OH_NN_PERFORMANCE_EXTREME);
    if (returnCode != OH_NN_SUCCESS) {
        LOGE("End2EndTest::OH_NNCompilation_SetPerformanceMode failed.");
        return nullptr;
    }

    returnCode = OH_NNCompilation_SetPriority(compilation, OH_NN_PRIORITY_HIGH);
    if (returnCode != OH_NN_SUCCESS) {
        LOGE("End2EndTest::OH_NNCompilation_SetPriority failed.");
        return nullptr;
    }

    returnCode = OH_NNCompilation_EnableFloat16(compilation, false);
    if (returnCode != OH_NN_SUCCESS) {
        LOGE("End2EndTest::OH_NNCompilation_EnableFloat16 failed.");
        return nullptr;
    }

    // 执行编译
    returnCode = OH_NNCompilation_Build(compilation);
    if (returnCode != OH_NN_SUCCESS) {
        LOGE("End2EndTest::OH_NNCompilation_Build failed.");
        return nullptr;
    }
    return compilation;
}

OH_NN_ReturnCode SetInputData(NN_Tensor* inputTensor[], size_t inputSize)
{
    OH_NN_DataType dataType(OH_NN_FLOAT32);
    OH_NN_ReturnCode ret{OH_NN_FAILED};
    size_t elementNum = 0;
    for (size_t i = 0; i < inputSize; ++i) {
        auto data = OH_NNTensor_GetDataBuffer(inputTensor[i]);
        if (data == nullptr) {
            LOGE("End2EndTest::OH_NNTensor_GetDataBuffer failed.");
            return OH_NN_FAILED;
        }
        auto desc = OH_NNTensor_GetTensorDesc(inputTensor[i]);
        if (desc == nullptr) {
            LOGE("End2EndTest::OH_NNTensor_GetTensorDesc failed.");
            return OH_NN_FAILED;
        }
        ret = OH_NNTensorDesc_GetDataType(desc, &dataType);
        if (ret != OH_NN_SUCCESS) {
            LOGE("End2EndTest::OH_NNTensorDesc_GetDataType failed.");
            return ret;
        }
        ret = OH_NNTensorDesc_GetElementCount(desc, &elementNum);
        if (ret != OH_NN_SUCCESS) {
            LOGE("End2EndTest::OH_NNTensorDesc_GetElementCount failed.");
            return ret;
        }
        switch(dataType) {
            case OH_NN_FLOAT32: {
                float* floatValue = reinterpret_cast<float*>(data);
                for (size_t j = 0; j < elementNum; ++j) {
                    floatValue[j] = static_cast<float>(j);
                }
                break;
            }
            case OH_NN_INT32: {
                int* intValue = reinterpret_cast<int*>(data);
                for (size_t j = 0; j < elementNum; ++j) {
                    intValue[j] = static_cast<int>(j);
                }
                break;
            }
            default:
                return OH_NN_FAILED;
        }
    }
    return OH_NN_SUCCESS;
}

OH_NNExecutor* runExecutor(OH_NNCompilation* compilation, size_t deviceId)
{
    OH_NNExecutor *executor = OH_NNExecutor_Construct(compilation);
    if (executor == nullptr) {
        LOGE("End2EndTest::OH_NNExecutor_Construct failed.");
        return nullptr;
    }
    size_t inputCount = 0;
    OH_NN_ReturnCode returnCode = OH_NNExecutor_GetInputCount(executor, &inputCount);
    if (returnCode != OH_NN_SUCCESS) {
        LOGE("End2EndTest::OH_NNExecutor_GetInputCount failed.");
        return nullptr;
    }
    std::vector<NN_TensorDesc*> inputTensorDescs;
    NN_TensorDesc* tensorDescTmp = nullptr;
    for (size_t i = 0; i < inputCount; ++i) {
        tensorDescTmp = OH_NNExecutor_CreateInputTensorDesc(executor, i);
        if (tensorDescTmp == nullptr) {
            LOGE("End2EndTest::OH_NNExecutor_CreateInputTensorDesc failed.");
            return nullptr;
        }
        inputTensorDescs.emplace_back(tensorDescTmp);
    }
    size_t outputCount = 0;
    returnCode = OH_NNExecutor_GetOutputCount(executor, &outputCount);
    if (returnCode != OH_NN_SUCCESS) {
        LOGE("End2EndTest::OH_NNExecutor_GetOutputCount failed.");
        return nullptr;
    }
    std::vector<NN_TensorDesc*> outputTensorDescs;
    for (size_t i = 0; i < outputCount; ++i) {
        tensorDescTmp = OH_NNExecutor_CreateOutputTensorDesc(executor, i);
        if (tensorDescTmp == nullptr) {
            LOGE("End2EndTest::OH_NNExecutor_CreateOutputTensorDesc failed.");
            return nullptr;
        }
        outputTensorDescs.emplace_back(tensorDescTmp);
    }

    // 创建输入输出Tensor
    NN_Tensor* inputTensors[inputCount];
    NN_Tensor* tensor = nullptr;
    for (size_t i = 0; i < inputCount; ++i) {
        tensor = nullptr;
        tensor = OH_NNTensor_Create(deviceId, inputTensorDescs[i]);
        if (tensor == nullptr) {
            LOGE("End2EndTest::OH_NNTensor_Create failed.");
            return nullptr;
        }
        inputTensors[i] = tensor;
    }
    NN_Tensor* outputTensors[outputCount];
    for (size_t i = 0; i < outputCount; ++i) {
        tensor = nullptr;
        tensor = OH_NNTensor_Create(deviceId, outputTensorDescs[i]);
        if (tensor == nullptr) {
            LOGE("End2EndTest::OH_NNTensor_Create failed.");
            return nullptr;
        }
        outputTensors[i] = tensor;
    }
    // 设置输入元素值
    returnCode = SetInputData(inputTensors, inputCount);
    if (returnCode != OH_NN_SUCCESS) {
        LOGE("End2EndTest::SetInputData failed.");
        return nullptr;
    }
    // 执行run
    returnCode = OH_NNExecutor_RunSync(executor, inputTensors, inputCount, outputTensors, outputCount);
    if (returnCode != OH_NN_SUCCESS) {
        LOGE("End2EndTest::OH_NNExecutor_RunSync failed.");
        return nullptr;
    }
    // 清理输入输出Tensor
    for (size_t i = 0; i < inputCount; ++i) {
        returnCode = OH_NNTensor_Destroy(&inputTensors[i]);
        if (returnCode != OH_NN_SUCCESS) {
            LOGE("End2EndTest::OH_NNTensor_Destroy failed.");
            return nullptr;
        }
    }
    for (size_t i = 0; i < outputCount; ++i) {
        returnCode = OH_NNTensor_Destroy(&outputTensors[i]);
        if (returnCode != OH_NN_SUCCESS) {
            LOGE("End2EndTest::OH_NNTensor_Destroy failed.");
            return nullptr;
        }
    }
    return executor;
}

/*
* @tc.name:end_to_end_test_001
* @tc.desc:定长模型编译端到端测试
* @tc.type:FUNC
*/
HWTEST_F(EndToEndTest, end_to_end_test_001, Function | MediumTest | Level1)
{
    const size_t *allDevicesID = nullptr;
    uint32_t deviceCount = 0;
    OH_NN_ReturnCode returnCode = OH_NNDevice_GetAllDevicesID(&allDevicesID, &deviceCount);
    ASSERT_EQ(returnCode, OH_NN_SUCCESS);
    const char *name = nullptr;
    size_t deviceId = 0;
    returnCode = OH_NNDevice_GetName(allDevicesID[0], &name);
    ASSERT_EQ(returnCode, OH_NN_SUCCESS);
    deviceId = allDevicesID[0];

    int32_t inputDims[4] = {1, 2, 2, 3};
    std::vector<NN_TensorDesc*> tensorDescs;
    NN_TensorDesc* tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NONE);
    tensorDescs.push_back(tensorDesc);
    tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NONE);
    tensorDescs.push_back(tensorDesc);

    int32_t activationDims = 1;
    tensorDesc = createTensorDesc(&activationDims, 1, OH_NN_INT8, OH_NN_FORMAT_NONE);
    tensorDescs.push_back(tensorDesc);
    tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NONE);
    tensorDescs.push_back(tensorDesc);

    OH_NNModel* model = nullptr;
    ASSERT_EQ(OH_NN_SUCCESS, BuildModel(&model, tensorDescs));

    OH_NNCompilation* compilation = ConstructCompilation(model, deviceId);
    ASSERT_NE(nullptr, compilation);

    OH_NNModel_Destroy(&model);
    OH_NNExecutor* executor = runExecutor(compilation, deviceId);
    ASSERT_NE(nullptr, executor);
    OH_NNCompilation_Destroy(&compilation);
    OH_NNExecutor_Destroy(&executor);
}

/*
* @tc.name:end_to_end_test_002
* @tc.desc:变长模型编译端到端测试
* @tc.type:FUNC
*/
HWTEST_F(EndToEndTest, end_to_end_test_002, Function | MediumTest | Level1)
{
    const size_t *allDevicesID = nullptr;
    uint32_t deviceCount = 0;
    OH_NN_ReturnCode returnCode = OH_NNDevice_GetAllDevicesID(&allDevicesID, &deviceCount);
    ASSERT_EQ(returnCode, OH_NN_SUCCESS);
    const char *name = nullptr;
    size_t deviceId = 0;
    returnCode = OH_NNDevice_GetName(allDevicesID[0], &name);
    ASSERT_EQ(returnCode, OH_NN_SUCCESS);
    deviceId = allDevicesID[0];

    int32_t inputDims[4] = {-1, 2, 2, 3};
    std::vector<NN_TensorDesc*> tensorDescs;
    NN_TensorDesc* tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NONE);
    tensorDescs.push_back(tensorDesc);
    inputDims[0] = 1;
    tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NONE);
    tensorDescs.push_back(tensorDesc);

    int32_t activationDims = 1;
    tensorDesc = createTensorDesc(&activationDims, 1, OH_NN_INT8, OH_NN_FORMAT_NONE);
    tensorDescs.push_back(tensorDesc);
    tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NONE);
    tensorDescs.push_back(tensorDesc);

    OH_NNModel* model = nullptr;
    ASSERT_EQ(OH_NN_SUCCESS, BuildModel(&model, tensorDescs));

    OH_NNCompilation* compilation = ConstructCompilation(model, deviceId);
    ASSERT_NE(nullptr, compilation);
    OH_NNModel_Destroy(&model);
    OH_NNExecutor* executor = runExecutor(compilation, deviceId);
    ASSERT_NE(nullptr, executor);
    OH_NNCompilation_Destroy(&compilation);
    OH_NNExecutor_Destroy(&executor);
}

/*
* @tc.name:end_to_end_test_003
* @tc.desc:定长模型编译带量化参数端到端测试
* @tc.type:FUNC
*/
HWTEST_F(EndToEndTest, end_to_end_test_003, Function | MediumTest | Level1)
{
    const size_t *allDevicesID = nullptr;
    uint32_t deviceCount = 0;
    OH_NN_ReturnCode returnCode = OH_NNDevice_GetAllDevicesID(&allDevicesID, &deviceCount);
    ASSERT_EQ(returnCode, OH_NN_SUCCESS);
    const char *name = nullptr;
    size_t deviceId = 0;
    returnCode = OH_NNDevice_GetName(allDevicesID[0], &name);
    ASSERT_EQ(returnCode, OH_NN_SUCCESS);
    deviceId = allDevicesID[0];

    int32_t inputDims[4] = {1, 2, 2, 3};
    std::vector<NN_TensorDesc*> tensorDescs;
    NN_TensorDesc* tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NCHW);
    tensorDescs.push_back(tensorDesc);
    tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NCHW);
    tensorDescs.push_back(tensorDesc);

    int32_t activationDims = 1;
    tensorDesc = createTensorDesc(&activationDims, 1, OH_NN_INT8, OH_NN_FORMAT_NONE);
    tensorDescs.push_back(tensorDesc);
    tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NCHW);
    tensorDescs.push_back(tensorDesc);

    OH_NNModel* model = nullptr;
    ASSERT_EQ(OH_NN_SUCCESS, BuildModel(&model, tensorDescs));
    NN_QuantParam* quantParam = OH_NNQuantParam_Create();
    double scales = 0.2;
    int32_t zeroPoints = 0;
    uint32_t numBits = 8;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNQuantParam_SetScales(quantParam, &scales, 2));
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNQuantParam_SetZeroPoints(quantParam, &zeroPoints, 2));
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNQuantParam_SetNumBits(quantParam, &numBits, 2));
    ASSERT_EQ(OH_NN_FAILED, OH_NNModel_SetTensorQuantParams(model, 0, quantParam));
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNQuantParam_Destroy(&quantParam));

    OH_NNCompilation* compilation = ConstructCompilation(model, deviceId);
    ASSERT_NE(nullptr, compilation);
    OH_NNModel_Destroy(&model);
    OH_NNExecutor* executor = runExecutor(compilation, deviceId);
    ASSERT_NE(nullptr, executor);
    OH_NNCompilation_Destroy(&compilation);
    OH_NNExecutor_Destroy(&executor);
}

/*
* @tc.name:Reliability_test_001
* @tc.desc:定长模型编译长稳测试
* @tc.type:FUNC
*/
HWTEST_F(EndToEndTest, Reliability_test_001, Function | MediumTest | Level1)
{
    const size_t *allDevicesID = nullptr;
    uint32_t deviceCount = 0;
    OH_NN_ReturnCode returnCode = OH_NNDevice_GetAllDevicesID(&allDevicesID, &deviceCount);
    ASSERT_EQ(returnCode, OH_NN_SUCCESS);
    const char *name = nullptr;
    size_t deviceId = 0;
    returnCode = OH_NNDevice_GetName(allDevicesID[0], &name);
    ASSERT_EQ(returnCode, OH_NN_SUCCESS);
    deviceId = allDevicesID[0];

    int32_t inputDims[4] = {1, 2, 2, 3};
    std::vector<NN_TensorDesc*> tensorDescs;
    NN_TensorDesc* tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NONE);
    tensorDescs.push_back(tensorDesc);
    tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NONE);
    tensorDescs.push_back(tensorDesc);

    int32_t activationDims = 1;
    tensorDesc = createTensorDesc(&activationDims, 1, OH_NN_INT8, OH_NN_FORMAT_NONE);
    tensorDescs.push_back(tensorDesc);
    tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NONE);
    tensorDescs.push_back(tensorDesc);

    OH_NNModel* model = nullptr;
    ASSERT_EQ(OH_NN_SUCCESS, BuildModel(&model, tensorDescs));
    for (int i = 0; i < CircleCount; i++) {
        OH_NNCompilation* compilation = ConstructCompilation(model, deviceId);
        ASSERT_NE(nullptr, compilation);
        OH_NNExecutor* executor = runExecutor(compilation, deviceId);
        ASSERT_NE(nullptr, executor);
        OH_NNModel_Destroy(&model);
        OH_NNCompilation_Destroy(&compilation);
        OH_NNExecutor_Destroy(&executor);
    }
}

/*
* @tc.name:Reliability_test_002
* @tc.desc:变长模型编译端到端测试
* @tc.type:FUNC
*/
HWTEST_F(EndToEndTest, Reliability_test_002, Function | MediumTest | Level1)
{
    const size_t *allDevicesID = nullptr;
    uint32_t deviceCount = 0;
    OH_NN_ReturnCode returnCode = OH_NNDevice_GetAllDevicesID(&allDevicesID, &deviceCount);
    ASSERT_EQ(returnCode, OH_NN_SUCCESS);
    const char *name = nullptr;
    size_t deviceId = 0;
    returnCode = OH_NNDevice_GetName(allDevicesID[0], &name);
    ASSERT_EQ(returnCode, OH_NN_SUCCESS);
    deviceId = allDevicesID[0];

    int32_t inputDims[4] = {-1, 2, 2, 3};
    std::vector<NN_TensorDesc*> tensorDescs;
    NN_TensorDesc* tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NONE);
    tensorDescs.push_back(tensorDesc);
    inputDims[0] = 1;
    tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NONE);
    tensorDescs.push_back(tensorDesc);

    int32_t activationDims = 1;
    tensorDesc = createTensorDesc(&activationDims, 1, OH_NN_INT8, OH_NN_FORMAT_NONE);
    tensorDescs.push_back(tensorDesc);
    tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NONE);
    tensorDescs.push_back(tensorDesc);

    OH_NNModel* model = nullptr;
    ASSERT_EQ(OH_NN_SUCCESS, BuildModel(&model, tensorDescs));
    for (int i = 0; i < CircleCount; i++) {
        OH_NNCompilation* compilation = ConstructCompilation(model, deviceId);
        ASSERT_NE(nullptr, compilation);
        OH_NNExecutor* executor = runExecutor(compilation, deviceId);
        ASSERT_NE(nullptr, executor);
        OH_NNModel_Destroy(&model);
        OH_NNCompilation_Destroy(&compilation);
        OH_NNExecutor_Destroy(&executor);
    }
}
