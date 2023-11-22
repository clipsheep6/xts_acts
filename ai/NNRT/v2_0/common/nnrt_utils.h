/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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
#ifndef NNRT_UTILS_H
#define NNRT_UTILS_H

#include <dirent.h>
#include <sys/stat.h>
#include <gtest/gtest.h>

#include "interfaces/kits/c/neural_network_runtime.h"
#include "common/log.h"
#include "mock_idevice.h"
#include "const.h"

namespace OHOS {
namespace NeuralNetworkRuntime {
namespace Test {
namespace V2_0 = OHOS::HDI::Nnrt::V2_0;
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

} // namespace Test
} // namespace NeuralNetworkRuntime
} // namespace OHOS

#endif // NNRT_UTILS_H