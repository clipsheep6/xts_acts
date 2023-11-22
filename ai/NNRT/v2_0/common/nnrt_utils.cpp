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
#include "nnrt_utils.h"
#include "const.h"
#include <fstream>

namespace OHOS {
namespace NeuralNetworkRuntime {
namespace Test {

OH_NNCORE_UINT32Array TransformUInt32Array(const std::vector<uint32_t>& vector)
{
    uint32_t* data = (vector.empty()) ? nullptr : const_cast<uint32_t*>(vector.data());
    return {data, vector.size()};
}

OH_NNCore_ReturnCode CreateTensorDesc(OH_NNCore_TensorDesc** tensorDesc, const int32_t* shape, size_t shapeNum, 
                                                   OH_NNCore_DataType dataType, OH_NNCore_Format format,
                                                   OH_NNBackend_TensorType tensorType)
{
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

OH_NNCore_ReturnCode BuildSingleOpGraph(OH_NNBackend_Model *model, const OHNNGraphArgs &graphArgs)
{
    OH_NNCore_ReturnCode ret;
    for (int i = 0; i < graphArgs.operands.size(); i++) {
        const OHNNOperandTest &operandTem = graphArgs.operands[i];
        char* backendName = nullptr;
        OH_NNCore_GetBackendName(i, &backendName);
        OH_NNCore_TensorDesc* operand = OH_NNCore_CreateTensorDesc(backendName);
        ret = CreateTensorDesc(&operand, operandTem.shape.data(), operandTem.shape.size(), operandTem.dataType,
                               operandTem.format, operandTem.type);
        ret = OH_NNBackend_AddTensorToModel(model, operand);
        if (ret != OH_NNCore_SUCCESS) {
            LOGE("[NNRtTest] OH_NNBackend_AddTensorToModel failed! ret=%d\n", ret);
            return ret;
        }

        if (std::find(graphArgs.paramIndices.begin(), graphArgs.paramIndices.end(), i) !=
            graphArgs.paramIndices.end()) {
            ret = OH_NNBackend_SetModelTensorData(model, i, operandTem.data, operandTem.length);
            if (ret != OH_NNCore_SUCCESS) {
                LOGE("[NNRtTest] OH_NNBackend_SetModelTensorData failed! ret=%d\n", ret);
                return ret;
            }
        }
    }
    auto paramIndices = TransformUInt32Array(graphArgs.paramIndices);
    auto inputIndices = TransformUInt32Array(graphArgs.inputIndices);
    auto outputIndices = TransformUInt32Array(graphArgs.outputIndices);
    if (graphArgs.addOperation) {
        ret = OH_NNBackend_AddOperationToModel(model, graphArgs.operationType, &paramIndices, &inputIndices,
                                               &outputIndices);
        if (ret != OH_NNCore_SUCCESS) {
            LOGE("[NNRtTest] OH_NNBackend_AddOperationToModel failed! ret=%d\n", ret);
            return ret;
        }
    }
    if (graphArgs.specifyIO) {
        ret = OH_NNBackend_SpecifyModelInputsAndOutputs(model, &inputIndices, &outputIndices);
        if (ret != OH_NNCore_SUCCESS) {
            LOGE("[NNRtTest] OH_NNBackend_SpecifyModelInputsAndOutputs failed! ret=%d\n", ret);
            return ret;
        }
    }
    if (graphArgs.build) {
        ret = OH_NNBackend_BuildModel(model);
        if (ret != OH_NNCore_SUCCESS) {
            LOGE("[NNRtTest] OH_NNBackend_BuildModel failed! ret=%d\n", ret);
            return ret;
        }
    }
    return OH_NNCore_SUCCESS;
}

OH_NNCore_ReturnCode CompilationGraphMock(OH_NNCore_Compilation *compilation, const OHNNcompilationParam &compilationParam)
{
    OH_NNCore_ReturnCode ret;
    OH_NNCore_CompilationOptions* compilationOptions = OH_NNBackend_CreateCompilationOptions();
    if (compilationOptions == nullptr) {
        LOGE("OH_NNBackend_CreateCompilationOptions failed.");
        return ret;
    }
    // set performance//sth wrong here
    if (compilationParam.performanceMode != OH_NNBACKEND_PERFORMANCE_NONE) {
        ret = OH_NNBackend_SetCompilationPerformanceMode(compilationOptions, compilationParam.performanceMode);
        if (ret != OH_NNCore_SUCCESS) {
            LOGE("[NNRtTest] OH_NNBackend_SetCompilationPerformanceMode failed! ret=%d\n", ret);
            return ret;
        }
    }
    // set priority//sth wrong here
    if (compilationParam.priority != OH_NNBACKEND_PRIORITY_NONE) {
        ret = OH_NNBackend_SetCompilationPriority(compilationOptions, compilationParam.priority);
        if (ret != OH_NNCore_SUCCESS) {
            LOGE("[NNRtTest] OH_NNBackend_SetCompilationPriority failed! ret=%d\n", ret);
            return ret;
        }
    }
    // enable fp16
    if (compilationParam.enableFp16) {
        ret = OH_NNBackend_SetCompilationEnableFloat16(compilationOptions, compilationParam.enableFp16);
        if (ret != OH_NNCore_SUCCESS) {
            LOGE("[NNRtTest] OH_NNBackend_SetCompilationEnableFloat16 failed! ret=%d\n", ret);
            return ret;
        }
    }
    //set compilationOptions
    ret = OH_NNCore_SetCompilationOptions(compilation, compilationOptions);
    if (ret != OH_NNCore_SUCCESS) {
        LOGE("[NNRtTest] OH_NNCore_SetCompilationOptions failed! ret=%d\n", ret);
        return ret;
    }
    return ret;
}

void Free(OH_NNBackend_Model *model, OH_NNCore_Compilation *compilation, OH_NNCore_Compiled* compiled, OH_NNExecutor *executor)
{
    if (model != nullptr) {
        OH_NNBackend_DestroyModel(&model);
        ASSERT_EQ(nullptr, model);
    }
    if (compilation != nullptr) {
        OH_NNCore_DestroyCompilation(&compilation);
        ASSERT_EQ(nullptr, compilation);
    }
    if (compiled != nullptr) {
        OH_NNCore_DestroyCompiled(&compiled);
        ASSERT_EQ(nullptr, compiled);
    }
    if (executor != nullptr) {
        OH_NNCore_DestroyExecutor(&executor);
        ASSERT_EQ(nullptr, executor);
    }
}

} // namespace Test
} // namespace NeuralNetworkRuntime
} // namespace OHOS
