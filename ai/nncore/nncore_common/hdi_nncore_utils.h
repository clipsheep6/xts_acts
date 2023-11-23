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

#include "../nnrt/hdi/v2_0/common/hdi_nnrt_test_utils.h"
#include "interfaces/kits/c/neural_network_core.h"


namespace OHOS::NeuralNetworkCore {

struct AddModel {
    // ADD MODEL
    float inputValue0[4] = {0, 1, 2, 3};
    float inputValue1[4] = {0, 1, 2, 3};
    int8_t activationValue = OH_NN_FUSED_NONE;
    float outputValue[4] = {0};
    float expectValue[4] = {0, 2, 4, 6};

    OHNNOperandTest input0 = {OH_NNCORE_FLOAT32, OH_NNCore_TensorDesc, TENSOR_SHAPE, inputValue0, ADD_DATA_LENGTH, OH_NNCORE_FORMAT_NONE};
    OHNNOperandTest input1 = {OH_NNCORE_FLOAT32, OH_NNCore_TensorDesc, TENSOR_SHAPE, inputValue1, ADD_DATA_LENGTH, OH_NNCORE_FORMAT_NONE};
    OHNNOperandTest activation = {OH_NNCORE_INT8, OH_NN_ADD_ACTIVATIONTYPE, {}, &activationValue, sizeof(int8_t), OH_NNCORE_FORMAT_NONE};
    OHNNOperandTest output = {OH_NNCORE_FLOAT32, OH_NNCore_TensorDesc, TENSOR_SHAPE, outputValue, ADD_DATA_LENGTH, OH_NNCORE_FORMAT_NONE};
    OHNNGraphArgs graphArgs = {.operationType = OH_NN_OPS_ADD,
                               .operands = {input0, input1, activation, output},
                               .paramIndices = {2},
                               .inputIndices = {0, 1},
                               .outputIndices = {3}};
};

struct OHNNOperandTest {
    OH_NNCore_DataType* dataType;
    OH_NNBackend_TensorType type;
    std::vector<int32_t> shape;
    void *data{nullptr};
    int32_t length{0};
    OH_NNCore_Format format;
};

struct OHNNGraphArgs {
    OH_NN_OperationType operationType;
    std::vector<OHNNOperandTest> operands;
    std::vector<uint32_t> paramIndices;
    std::vector<uint32_t> inputIndices;
    std::vector<uint32_t> outputIndices;
    bool build = true;
    bool specifyIO = true;
    bool addOperation = true;
};

struct OHNNcompilationParam {
    uint32_t cacheVersion = 0;
    OH_NN_PerformanceMode performanceMode = OH_NNBACKEND_PERFORMANCE_NONE;
    OH_NN_Priority priority = OH_NNBACKEND_PRIORITY_NONE;
    bool enableFp16 = false;
};

OH_NNCore_ReturnCode CreateTensorDesc(OH_NNCore_TensorDesc** tensorDesc, const int32_t* shape, size_t shapeNum, 
                                                   OH_NNCore_DataType dataType, OH_NNCore_Format format,
                                                   OH_NNBackend_TensorType tensorType)

int BuildSingleOpGraph(OH_NNBackend_Model *model, const OHNNGraphArgs &graphArgs);

void Free(OH_NNBackend_Model *model = nullptr, OH_NNCore_Compilation *compilation = nullptr,OH_NNCore_Compiled *compiled = nullptr, OH_NNExecutor *executor = nullptr);

int CompilationGraphMock(OH_NNCore_Compilation *compilation, const OHNNcompilationParam &compilationParam);

OH_NNCORE_UINT32Array GetUInt32Array(std::vector<uint32_t> indices);

void RegisterBackend();
void TestGetBackendNum(bool isNull = false);
void TestGetBackendName(char** backendName, bool isNull = false);
void TestConstructCompilationWithNNModel(OH_NNCore_Compilation** compilation);
void SetCompilationBackendName(OH_NNCore_Compilation** compilation);
void TestCreateCompilationOptions(OH_NNCore_CompilationOptions** options);
void TestSetCompilationPriority(OH_NNBackend_Priority priority);
void TestSetCompilationPerformanceMode(OH_NNBackend_PerformanceMode performanceMode);
void TestSetCompilationEnableFloat16(bool enableFloat16, bool isSupport);
void TestSetCompilationOptions(OH_NNCore_CompilationOptions **option);
void TestBuildCompiled(OH_NNCore_Compilation** compilation, OH_NNCore_Compiled** compiled);
void TestConstructTensorDesc(OH_NNCore_TensorDesc** tensorDesc);
void TestExecutor(OH_NNCore_Executor** executor);
} // namespace OHOS::NeuralNetworkCore

#endif // HDI_NNCORE_UTILS_H