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
#include <vector>
#include <fstream>
#include <dirent.h>
#include <sys/stat.h>
#include <iostream>
#include <memory>

#include <gtest/gtest.h>
#include "common/log.h"
#include "nncore_const.h"
#include "frameworks/native/backend_registrar.h"
#include "frameworks/native/backend_manager.h"
#include "interfaces/kits/c/v2_0/neural_network_core.h"
#include "interfaces/kits/c/v2_0/neural_network_runtime.h"


namespace OHOS::NeuralNetworkCore {

struct OHNNOperandTest {
    NNCore_DataType dataType;
    NNBackend_TensorType type;
    std::vector<int32_t> shape;
    void *data{nullptr};
    int32_t length{0};
    NNCore_Format format;
};

struct OHNNGraphArgs {
    NNBackend_OperationType operationType;
    std::vector<OHNNOperandTest> operands;
    std::vector<uint32_t> paramIndices;
    std::vector<uint32_t> inputIndices;
    std::vector<uint32_t> outputIndices;
    bool build = true;
    bool specifyIO = true;
    bool addOperation = true;
};

struct OHNNGraphArgsMulti {
    std::vector<NNBackend_OperationType> operationTypes;
    std::vector<std::vector<OHNNOperandTest>> operands;
    std::vector<std::vector<uint32_t>> paramIndices;
    std::vector<std::vector<uint32_t>> inputIndices;
    std::vector<std::vector<uint32_t>> outputIndices;
    std::vector<uint32_t> graphInput;
    std::vector<uint32_t> graphOutput;
};

struct OHNNcompilationParam {
    uint32_t cacheVersion = 0;
    NNCore_PerformanceMode performanceMode = NNCORE_PERFORMANCE_NONE;
    NNCore_Priority priority = NNCORE_PRIORITY_NONE;
    bool enableFp16 = false;
};

struct AddModel {
// ADD MODEL
float inputValue0[4] = {0, 1, 2, 3};
float inputValue1[4] = {0, 1, 2, 3};
int8_t activationValue = OH_NN_FUSED_NONE;
float outputValue[4] = {0};
float expectValue[4] = {0, 2, 4, 6};

OHNNOperandTest input0 = {NNCORE_FLOAT32, NNBACKEND_TENSOR, {1, 2, 2, 1}, inputValue0, sizeof(inputValue0), NNCORE_FORMAT_NONE};
OHNNOperandTest input1 = {NNCORE_FLOAT32, NNBACKEND_TENSOR, {1, 2, 2, 1}, inputValue1, sizeof(inputValue1), NNCORE_FORMAT_NONE};
OHNNOperandTest activation = {NNCORE_INT8, NNBACKEND_ADD_ACTIVATIONTYPE, {}, &activationValue, sizeof(int8_t), NNCORE_FORMAT_NONE};
OHNNOperandTest output = {NNCORE_FLOAT32, NNBACKEND_TENSOR, {1, 2, 2, 1}, outputValue, sizeof(outputValue), NNCORE_FORMAT_NONE};
OHNNGraphArgs graphArgs = {.operationType = NNBACKEND_OPS_ADD,
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
    int8_t activationValue = NNBACKEND_FUSED_NONE;
    float outputValue[4] = {0};
    float expectValue[4] = {2, 3, 5, 6};

    OHNNOperandTest dynamicInput = {NNCORE_FLOAT32, NNBACKEND_TENSOR, {-1, -1, -1, -1}, inputValue, sizeof(inputValue), NNCORE_FORMAT_NONE};
    OHNNOperandTest kernel = {NNCORE_INT64, NNBACKEND_AVG_POOL_KERNEL_SIZE, {2}, kernelValue, sizeof(kernelValue), NNCORE_FORMAT_NONE};
    OHNNOperandTest strides = {NNCORE_INT64, NNBACKEND_AVG_POOL_STRIDE, {2}, strideValue, sizeof(strideValue), NNCORE_FORMAT_NONE};
    OHNNOperandTest padMode = {NNCORE_INT8, NNBACKEND_AVG_POOL_PAD_MODE, {}, &padValue, sizeof(padValue), NNCORE_FORMAT_NONE};
    OHNNOperandTest activation = {NNCORE_INT8, NNBACKEND_AVG_POOL_ACTIVATION_TYPE, {}, &activationValue, sizeof(int8_t), NNCORE_FORMAT_NONE};
    OHNNOperandTest output = {NNCORE_FLOAT32, NNBACKEND_TENSOR, {-1, -1, -1, -1}, outputValue, sizeof(outputValue), NNCORE_FORMAT_NONE};

    OHNNGraphArgs graphArgs = {.operationType = NNBACKEND_OPS_AVG_POOL,
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

    OHNNOperandTest x = {NNCORE_FLOAT32, NNBACKEND_TENSOR, {1, 6}, valueX, 6 * sizeof(float), NNCORE_FORMAT_NONE};
    OHNNOperandTest k = {NNCORE_INT8, NNBACKEND_TENSOR, {}, &valueK, sizeof(int8_t), NNCORE_FORMAT_NONE};
    OHNNOperandTest sorted = {NNCORE_BOOL, NNBACKEND_TOP_K_SORTED, {}, &valueSorted, sizeof(bool), NNCORE_FORMAT_NONE};
    OHNNOperandTest output1 = {NNCORE_FLOAT32, NNBACKEND_TENSOR, {1, 2}, valueOutput1, 2 * sizeof(float), NNCORE_FORMAT_NONE};
    OHNNOperandTest output2 = {NNCORE_INT32, NNBACKEND_TENSOR, {1, 2}, valueOutput2, 2 * sizeof(int32_t), NNCORE_FORMAT_NONE};

    OHNNGraphArgs graphArgs = {.operationType = NNBACKEND_OPS_TOP_K,
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
        .operationTypes = {NNBACKEND_OPS_ADD, NNBACKEND_OPS_TOP_K},
        .operands = {{addModel.input0, addModel.input1, addModel.activation, addModel.output},
            {topKModel.k, topKModel.sorted, topKModel.output1, topKModel.output2}},
        .paramIndices = {{2}, {5}},
        .inputIndices = {{0, 1}, {3, 4}},
        .outputIndices = {{3}, {6, 7}},
        .graphInput = {0, 1, 4},
        .graphOutput = {6, 7}};
};

NNCore_ReturnCode CreateTensorDesc(NNCore_TensorDesc** tensorDesc, const int32_t* shape, size_t shapeNum, 
                                                   NNCore_DataType dataType, NNCore_Format format);

NNCore_ReturnCode BuildSingleOpGraph(NNBackend_Model *model, const OHNNGraphArgs &graphArgs);
NNCore_ReturnCode BuildMultiOpGraph(NNBackend_Model *model, const OHNNGraphArgsMulti &graphArgs);
void Free(NNBackend_Model *model = nullptr, NNCore_Compilation *compilation = nullptr, NNCore_Compiled *compiled = nullptr, NNCore_Executor *executor = nullptr);
NNBackend_Array GetUInt32Array(std::vector<uint32_t> indices);
//nncore接口相关
void TestGetBackendNum(bool isNull = false);
void TestGetBackendName(const char** backendName, bool isNull = false);
void TestConstructModel(NNBackend_Model** model);
void TestConstructCompilationWithNNModel(NNCore_Compilation** compilation);
void TestConstructCompilationWithDynamicNNModel(NNCore_Compilation** compilation);
void SetCompilationBackendName(NNCore_Compilation** compilation);
void TestCreateOptions(NNCore_Options** options, const char* backendName);
void SetbackendNameOptions(NNCore_Compilation* compilation, bool isTrue = true);
void TestSetPriority(NNCore_Priority priority);
void TestPerformanceMode(NNCore_PerformanceMode performanceMode);
void TestSetEnableFloat16(bool enableFloat16);
void TestSetAllOptions(NNCore_Options **option);
void TestBuildCompiled(NNCore_Compiled** compiled);
void TestConstructTensorDesc(NNCore_TensorDesc** tensorDesc);
void TestExecutor(NNCore_Executor** executor);
void TestGetInputOutputTensor(NNCore_Executor* executor, std::vector<NNCore_Tensor*>& inputTensor, size_t& inputSize, 
                              std::vector<NNCore_Tensor*>& outputTensor, size_t& outputSize);
//文件相关
enum class PathType { FILE, DIR, UNKNOWN, NOT_FOUND };
PathType CheckPath(const std::string &path);
bool DeleteFile(const std::string &path);
void CopyFile(const std::string &srcPath, const std::string &dstPath);
std::string ConcatPath(const std::string &str1, const std::string &str2);
void DeleteFolder(const std::string &path);
bool CreateFolder(const std::string &path);
bool CheckOutput(const float* output, const float* expect);
} // namespace OHOS::NeuralNetworkCore

#endif // HDI_NNCORE_UTILS_H
