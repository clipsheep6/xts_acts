/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef HDI_NNCORE_UTILS_H
#define HDI_NNCORE_UTILS_H

#include <string>
#include "gtest/gtest.h"

#include "../nncore_common/hdi_nncore_utils.h"
#include "interfaces/kits/c/v2_0/neural_network_core.h"
#include "interfaces/kits/c/v2_0/neural_network_core_type.h"
#include "interfaces/kits/c/v2_0/neural_network_runtime.h"
#include "interfaces/kits/c/v2_0/neural_network_runtime_type.h"


namespace OHOS::NeuralNetworkCore {

struct OHNNOperandTest {
    OH_NNCore_DataType dataType;
    OH_NNBackend_TensorType type;
    std::vector<int32_t> shape;
    void *data{nullptr};
    int32_t length{0};
    OH_NNCore_Format format;
};

struct OHNNGraphArgs {
    OH_NNBackend_OperationType operationType;
    std::vector<OHNNOperandTest> operands;
    std::vector<uint32_t> paramIndices;
    std::vector<uint32_t> inputIndices;
    std::vector<uint32_t> outputIndices;
    bool build = true;
    bool specifyIO = true;
    bool addOperation = true;
};

struct OHNNGraphArgsMulti {
    std::vector<OH_NNBackend_OperationType> operationTypes;
    std::vector<std::vector<OHNNOperandTest>> operands;
    std::vector<std::vector<uint32_t>> paramIndices;
    std::vector<std::vector<uint32_t>> inputIndices;
    std::vector<std::vector<uint32_t>> outputIndices;
    std::vector<uint32_t> graphInput;
    std::vector<uint32_t> graphOutput;
};

struct OHNNcompilationParam {
    uint32_t cacheVersion = 0;
    OH_NNCore_PerformanceMode performanceMode = OH_NNCORE_PERFORMANCE_NONE;
    OH_NNCore_Priority priority = OH_NNCORE_PRIORITY_NONE;
    bool enableFp16 = false;
};

struct AddModel {
// ADD MODEL
float inputValue0[4] = {0, 1, 2, 3};
float inputValue1[4] = {0, 1, 2, 3};
int8_t activationValue = OH_NN_FUSED_NONE;
float outputValue[4] = {0};
float expectValue[4] = {0, 2, 4, 6};

OHNNOperandTest input0 = {OH_NNCORE_FLOAT32, OH_NNBACKEND_TENSOR, {1, 2, 2, 1}, inputValue0, sizeof(inputValue0), OH_NNCORE_FORMAT_NONE};
OHNNOperandTest input1 = {OH_NNCORE_FLOAT32, OH_NNBACKEND_TENSOR, {1, 2, 2, 1}, inputValue1, sizeof(inputValue1), OH_NNCORE_FORMAT_NONE};
OHNNOperandTest activation = {OH_NNCORE_INT8, OH_NNBACKEND_ADD_ACTIVATIONTYPE, {}, &activationValue, sizeof(int8_t), OH_NNCORE_FORMAT_NONE};
OHNNOperandTest output = {OH_NNCORE_FLOAT32, OH_NNBACKEND_TENSOR, {1, 2, 2, 1}, outputValue, sizeof(outputValue), OH_NNCORE_FORMAT_NONE};
OHNNGraphArgs graphArgs = {.operationType = OH_NNBACKEND_OPS_ADD,
                            .operands = {input0, input1, activation, output},
                            .paramIndices = {2},
                            .inputIndices = {0, 1},
                            .outputIndices = {3}};
};

struct AvgPoolDynamicModel {
    // AVG POOL MODEL
    float inputValue[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    uint64_t kernelValue[2] = {2, 2};
    uint64_t strideValue[2] = {1, 1};
    int8_t padValue = 1;
    int8_t activationValue = OH_NNBACKEND_FUSED_NONE;
    float outputValue[4] = {0};
    float expectValue[4] = {2, 3, 5, 6};

    OHNNOperandTest dynamicInput = {OH_NNCORE_FLOAT32, OH_NNBACKEND_TENSOR, {-1, -1, -1, -1}, inputValue, sizeof(inputValue), OH_NNCORE_FORMAT_NONE};
    OHNNOperandTest kernel = {OH_NNCORE_INT64, OH_NNBACKEND_AVG_POOL_KERNEL_SIZE, {2}, kernelValue, sizeof(kernelValue), OH_NNCORE_FORMAT_NONE};
    OHNNOperandTest strides = {OH_NNCORE_INT64, OH_NNBACKEND_AVG_POOL_STRIDE, {2}, strideValue, sizeof(strideValue), OH_NNCORE_FORMAT_NONE};
    OHNNOperandTest padMode = {OH_NNCORE_INT8, OH_NNBACKEND_AVG_POOL_PAD_MODE, {}, &padValue, sizeof(padValue), OH_NNCORE_FORMAT_NONE};
    OHNNOperandTest activation = {OH_NNCORE_INT8, OH_NNBACKEND_AVG_POOL_ACTIVATION_TYPE, {}, &activationValue, sizeof(int8_t), OH_NNCORE_FORMAT_NONE};
    OHNNOperandTest output = {OH_NNCORE_FLOAT32, OH_NNBACKEND_TENSOR, {-1, -1, -1, -1}, outputValue, sizeof(outputValue), OH_NNCORE_FORMAT_NONE};

    OHNNGraphArgs graphArgs = {.operationType = OH_NNBACKEND_OPS_AVG_POOL,
                               .operands = {dynamicInput, kernel, strides, padMode, activation, output},
                               .paramIndices = {1, 2, 3, 4},
                               .inputIndices = {0},
                               .outputIndices = {5}};
};

struct TopKModel {
    // TopK Model
    float valueX[6] = {0, 1, 2, 3, 4, 5};
    int8_t valueK = 2;
    bool valueSorted = true;
    float valueOutput1[2];
    int32_t valueOutput2[2];

    OHNNOperandTest x = {OH_NNCORE_FLOAT32, OH_NNBACKEND_TENSOR, {1, 6}, valueX, 6 * sizeof(float), OH_NNCORE_FORMAT_NONE};
    OHNNOperandTest k = {OH_NNCORE_INT8, OH_NNBACKEND_TENSOR, {}, &valueK, sizeof(int8_t), OH_NNCORE_FORMAT_NONE};
    OHNNOperandTest sorted = {OH_NNCORE_BOOL, OH_NNBACKEND_TOP_K_SORTED, {}, &valueSorted, sizeof(bool), OH_NNCORE_FORMAT_NONE};
    OHNNOperandTest output1 = {OH_NNCORE_FLOAT32, OH_NNBACKEND_TENSOR, {1, 2}, valueOutput1, 2 * sizeof(float), OH_NNCORE_FORMAT_NONE};
    OHNNOperandTest output2 = {OH_NNCORE_INT32, OH_NNBACKEND_TENSOR, {1, 2}, valueOutput2, 2 * sizeof(int32_t), OH_NNCORE_FORMAT_NONE};

    OHNNGraphArgs graphArgs = {.operationType = OH_NNBACKEND_OPS_TOP_K,
                               .operands = {x, k, sorted, output1, output2},
                               .paramIndices = {2},
                               .inputIndices = {0, 1},
                               .outputIndices = {3, 4}};
};

class AddTopKModel {
    // Build two ops Model
private:
    AddModel addModel;
    TopKModel topKModel;

public:
    OHNNGraphArgsMulti graphArgs = {
        .operationTypes = {OH_NNBACKEND_OPS_ADD, OH_NNBACKEND_OPS_TOP_K},
        .operands = {{addModel.input0, addModel.input1, addModel.activation, addModel.output},
            {topKModel.k, topKModel.sorted, topKModel.output1, topKModel.output2}},
        .paramIndices = {{2}, {5}},
        .inputIndices = {{0, 1}, {3, 4}},
        .outputIndices = {{3}, {6, 7}},
        .graphInput = {0, 1, 4},
        .graphOutput = {6, 7}};
};

OH_NNCore_ReturnCode CreateTensorDesc(OH_NNCore_TensorDesc** tensorDesc, const int32_t* shape, size_t shapeNum, 
                                                   OH_NNCore_DataType dataType, OH_NNCore_Format format);

OH_NNCore_ReturnCode BuildSingleOpGraph(OH_NNBackend_Model *model, const OHNNGraphArgs &graphArgs);
OH_NNCore_ReturnCode BuildMultiOpGraph(OH_NNBackend_Model *model, const OHNNGraphArgsMulti &graphArgs);
void Free(OH_NNBackend_Model *model = nullptr, OH_NNCore_Compilation *compilation = nullptr,OH_NNCore_Compiled *compiled = nullptr, OH_NNExecutor *executor = nullptr);

OH_NNBackend_Array GetUInt32Array(std::vector<uint32_t> indices);
void RegisterBackend();
void TestGetBackendNum(bool isNull = false);
void TestGetBackendName(char** backendName, bool isNull = false);
void TestConstructCompilationWithNNModel(OH_NNCore_Compilation** compilation);
void SetCompilationBackendName(OH_NNCore_Compilation** compilation);
void TestCreateOptions(OH_NNCore_Options** options, const char* backendName);
void TestSetCompilationPriority(OH_NNCore_Priority priority);
void TestSetCompilationPerformanceMode(OH_NNCore_PerformanceMode performanceMode);
void TestSetCompilationEnableFloat16(bool enableFloat16, bool isSupport);
void TestSetCompilationOptions(OH_NNCore_Options **option);
void TestBuildCompiled(OH_NNCore_Compiled** compiled);
void TestConstructTensorDesc(OH_NNCore_TensorDesc** tensorDesc);
void TestExecutor(OH_NNCore_Executor** executor);
} // namespace OHOS::NeuralNetworkCore

#endif // HDI_NNCORE_UTILS_H
