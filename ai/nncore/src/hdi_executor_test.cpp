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
#include <vector>

#include "nncore_utils.h"

using namespace testing::ext;

namespace OHOS::NeuralNetworkCore {

void runDone(void *pointer, NNCore_ReturnCode returnCode, void* pointerArray[], int32_t intNum)
{
    return;
}

void onServiceDied(void* point)
{
    return;
}
class ExecutorTest : public testing::Test {};

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Construct_Executor_0100
 * @tc.desc: compilation为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Construct_Executor_0100, Function | MediumTest | Level1)
{
    OH_NNCompilation *compilation = nullptr;
    ASSERT_EQ(nullptr, OH_NNCore_ConstructExecutor(compilation));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Destroy_Executor_0100
 * @tc.desc: 重复释放executor，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Destroy_Executor_0100, Function | MediumTest | Level1)
{
    OH_NNExecutor *executor = nullptr;
    CreateExecutor(&executor);

    ASSERT_EQ(OH_NN_SUCCESS, OH_NNCore_DestroyExecutor(&executor));
    ASSERT_EQ(OH_NN_NULL_PTR, OH_NNCore_DestroyExecutor(&executor));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Destroy_Executor_0200
 * @tc.desc: 正常释放，检查executor为空
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Destroy_Executor_0200, Function | MediumTest | Level1)
{
    OH_NNExecutor *executor = nullptr;
    CreateExecutor(&executor);

    ASSERT_EQ(NNCORE_SUCCESS, OH_NNCore_DestroyExecutor(&executor));
    ASSERT_NE(nullptr, executor);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Set_Executor_OnRunDone_0100
 * @tc.desc: 在推理完成时设置executor，executor为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Set_Executor_OnRunDone_0100, Function | MediumTest | Level1)
{
    NN_OnRunDone onRunDone = runDone;
    OH_NNExecutor *executor = nullptr;
    ASSERT_EQ(OH_NN_NULL_PTR, OH_NNExecutor_SetOnRunDone(executor, onRunDone));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Set_Executor_OnRunDone_0200
 * @tc.desc: 在推理完成时设置executor，合法参数返回不支持
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Set_Executor_OnRunDone_0200, Function | MediumTest | Level1)
{
    NN_OnRunDone onRunDone= runDone;
    OH_NNExecutor *executor = nullptr;
    CreateExecutor(&executor);
    ASSERT_EQ(OH_NN_UNSUPPORTED, OH_NNExecutor_SetOnRunDone(executor, onRunDone));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Set_Executor_Service_Died_0100
 * @tc.desc: executor为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Set_Executor_Service_Died_0100, Function | MediumTest | Level1)
{
    NN_OnServiceDied onServiceDied = onServiceDied;
    OH_NNExecutor *executor = nullptr;

    ASSERT_EQ(OH_NN_NULL_PTR, OH_NNExecutor_SetOnServiceDied(executor, onServiceDied));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Set_Executor_Service_Died_0200
 * @tc.desc: 合法参数，返回不支持
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Set_Executor_Service_Died_0200, Function | MediumTest | Level1)
{
    NN_OnServiceDied onServiceDied = onServiceDied;
    OH_NNExecutor *executor = nullptr;
    CreateExecutor(&executor);

    ASSERT_EQ(OH_NN_UNSUPPORTED, OH_NNExecutor_SetOnServiceDied(executor, onServiceDied));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_RunSync_0100
 * @tc.desc: executor为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_RunSync_0100, Function | MediumTest | Level1)
{
    vector<NN_Tensor*>inputTensors, outputTensors;
    size_t inputCount = 0;
    size_t outputCount = 0;
    OH_NNExecutor* executor = nullptr;
    CreateExecutor(&executor);
    GetExecutorInputOutputTensor(executor, inputTensors, inputCount, outputTensors, outputCount);
    executor = nullptr;
    ASSERT_EQ(OH_NN_NULL_PTR, OH_NNCore_ExecutorRunSync(executor, inputTensors.data(), inputCount, outputTensors.data(), outputCount));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_RunSync_0200
 * @tc.desc: executor sync推理，inputTensor数组为空,返回失败
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_RunSync_0400, Function | MediumTest | Level1)
{
    vector<NN_Tensor*> inputTensors, outputTensors;
    size_t inputCount = 0;
    size_t outputCount = 0;
    OH_NNExecutor* executor = nullptr;
    CreateExecutor(&executor);
    GetExecutorInputOutputTensor(executor, inputTensors, inputCount, outputTensors, outputCount);
    inputTensors.clear();
    ASSERT_EQ(OH_NN_INVALID_PARAMETER, OH_NNCore_ExecutorRunSync(executor, inputTensors.data(), inputCount, outputTensors.data(), outputCount));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_RunSync_0300
 * @tc.desc: executor sync推理，outputTensor数组为空,返回失败
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_RunSync_0500, Function | MediumTest | Level1)
{
    vector<NN_Tensor*> inputTensors, outputTensors;
    size_t inputCount = 0;
    size_t outputCount = 0;
    OH_NNExecutor* executor = nullptr;
    CreateExecutor(&executor);
    GetExecutorInputOutputTensor(executor, inputTensors, inputCount, outputTensors, outputCount);
    outputTensors.clear();
    ASSERT_EQ(OH_NN_INVALID_PARAMETER, OH_NNCore_ExecutorRunSync(executor, inputTensors.data(), inputCount, outputTensors.data(), outputCount));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_RunSync_0400
 * @tc.desc: executor sync推理，inputCount为0，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_RunSync_0400, Function | MediumTest | Level1)
{
    vector<NN_Tensor*> inputTensors, outputTensors;
    size_t inputCount = 0;
    size_t outputCount = 0;
    OH_NNExecutor* executor = nullptr;
    CreateExecutor(&executor);
    GetExecutorInputOutputTensor(executor, inputTensors, inputCount, outputTensors, outputCount);
    inputCount = 0;
    ASSERT_EQ(OH_NN_INVALID_PARAMETER, OH_NNCore_ExecutorRunSync(executor, inputTensors.data(), inputCount, outputTensors.data(), outputCount));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_RunSync_0500
 * @tc.desc: executor sync推理，outputCount为0，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_RunSync_0500, Function | MediumTest | Level1)
{
    vector<NN_Tensor*> inputTensors, outputTensors;
    size_t inputCount = 0;
    size_t outputCount = 0;
    OH_NNExecutor* executor = nullptr;
    CreateExecutor(&executor);
    GetExecutorInputOutputTensor(executor, inputTensors, inputCount, outputTensors, outputCount);
    outputCount = 0;
    ASSERT_EQ(OH_NN_INVALID_PARAMETER, OH_NNCore_ExecutorRunSync(executor, inputTensors.data(), inputCount, outputTensors.data(), outputCount));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_RunSync_0500
 * @tc.desc: executor sync推理，outputSize为0，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_RunSync_0500, Function | MediumTest | Level1)
{
    vector<NN_Tensor*> inputTensors, outputTensors;
    size_t inputCount = 0;
    size_t outputCount = 0;
    OH_NNExecutor* executor = nullptr;
    CreateExecutor(&executor);
    GetExecutorInputOutputTensor(executor, inputTensors, inputCount, outputTensors, outputCount);
    outputCount = 0;
    ASSERT_EQ(OH_NN_INVALID_PARAMETER, OH_NNCore_ExecutorRunSync(executor, inputTensors.data(), inputCount, outputTensors.data(), outputCount));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_RunSync_0600
 * @tc.desc: executor sync推理，inputTensor个数不足，小于正确的输入数量，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_RunSync_0600, Function | MediumTest | Level1)
{
    vector<NN_Tensor*> inputTensors, outputTensors;
    size_t inputCount = 0;
    size_t outputCount = 0;
    OH_NNExecutor* executor = nullptr;
    CreateExecutor(&executor);
    GetExecutorInputOutputTensor(executor, inputTensors, inputCount, outputTensors, outputCount);
    if (inputTensors.size() > 1) {
        inputTensors.resize(inputTensors.size() - 1);
    }
    ASSERT_EQ(OH_NN_INVALID_PARAMETER, OH_NNCore_ExecutorRunSync(executor, inputTensors.data(), inputCount, outputTensors.data(), outputCount));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_RunSync_0700
 * @tc.desc: executor sync推理，inputTensor数组个数超过inputNum，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_RunSync_0700, Function | MediumTest | Level1)
{
    vector<NN_Tensor*> inputTensors, outputTensors;
    size_t inputCount = 0;
    size_t outputCount = 0;
    OH_NNExecutor* executor = nullptr;
    CreateExecutor(&executor);
    GetExecutorInputOutputTensor(executor, inputTensors, inputCount, outputTensors, outputCount);
    if (inputTensors.size() > 1) {
        inputTensors.emplace_back(inputTensors[0]);
    }
    ASSERT_EQ(OH_NN_INVALID_PARAMETER, OH_NNCore_ExecutorRunSync(executor, inputTensors.data(), inputCount, outputTensors.data(), outputCount));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_RunSync_0800
 * @tc.desc: executor sync推理，outputTensor个数不足，小于正确的输入数量，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_RunSync_0800, Function | MediumTest | Level1)
{
    vector<NN_Tensor*> inputTensors, outputTensors;
    size_t inputCount = 0;
    size_t outputCount = 0;
    OH_NNExecutor* executor = nullptr;
    CreateExecutor(&executor);
    GetExecutorInputOutputTensor(executor, inputTensors, inputCount, outputTensors, outputCount);
    if (outputTensor.size() > 1) {
        outputTensor.resize(outputTensor.size() - 1);
    }
    ASSERT_EQ(OH_NN_INVALID_PARAMETER, OH_NNCore_ExecutorRunSync(executor, inputTensors.data(), inputCount, outputTensors.data(), outputCount));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_RunSync_0900
 * @tc.desc: executor sync推理，outputTensor数组个数超过outputNum，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_RunSync_0900, Function | MediumTest | Level1)
{
    vector<NN_Tensor*> inputTensors, outputTensors;
    size_t inputCount = 0;
    size_t outputCount = 0;
    OH_NNExecutor* executor = nullptr;
    CreateExecutor(&executor);
    GetExecutorInputOutputTensor(executor, inputTensors, inputCount, outputTensors, outputCount);
    if (outputTensor.size() > 1) {
        outputTensor.emplace_back(outputTensor[0]);
    }
    ASSERT_EQ(OH_NN_INVALID_PARAMETER, OH_NNCore_ExecutorRunSync(executor, inputTensors.data(), inputCount, outputTensors.data(), outputCount));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_RunASync_0100
 * @tc.desc: executor async推理，executor为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_RunASync_0100, Function | MediumTest | Level1)
{
    vector<NN_Tensor*> inputTensors, outputTensors;
    size_t inputCount = 0;
    size_t outputCount = 0;
    OH_NNExecutor* executor = nullptr;
    CreateExecutor(&executor);
    int32_t timeout = 60;
    void* userData = (void*) executor;
    GetExecutorInputOutputTensor(executor, inputTensors, inputCount, outputTensors, outputCount);

    ASSERT_EQ(OH_NN_NULL_PTR, OH_NNExecutor_RunAsync(executor, inputTensors.data(), inputCount, outputTensors.data(), outputCount, timeout, userData));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_RunASync_0200
 * @tc.desc: executor async推理，inputCount为0，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_RunASync_0200, Function | MediumTest | Level1)
{
    vector<NN_Tensor*> inputTensors, outputTensors;
    size_t inputCount = 0;
    size_t outputCount = 0;
    OH_NNExecutor* executor = nullptr;
    CreateExecutor(&executor);
    int32_t timeout = 60;
    void* userData = (void*) executor;
    GetExecutorInputOutputTensor(executor, inputTensors, inputCount, outputTensors, outputCount);
    inputCount = 0;
    ASSERT_EQ(OH_NN_INVALID_PARAMETER, OH_NNExecutor_RunAsync(executor, inputTensors.data(), inputCount, outputTensors.data(), outputCount, timeout, userData));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_RunASync_0300
 * @tc.desc: executor async推理，outputCount为0，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_RunASync_0300, Function | MediumTest | Level1)
{
    vector<NN_Tensor*> inputTensors, outputTensors;
    size_t inputCount = 0;
    size_t outputCount = 0;
    OH_NNExecutor* executor = nullptr;
    CreateExecutor(&executor);
    int32_t timeout = 60;
    void* userData = (void*) executor;
    GetExecutorInputOutputTensor(executor, inputTensors, inputCount, outputTensors, outputCount);
    outputCount = 0;
    ASSERT_EQ(OH_NN_INVALID_PARAMETER, OH_NNExecutor_RunAsync(executor, inputTensors.data(), inputCount, outputTensors.data(), outputCount, timeout, userData));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_RunASync_0400
 * @tc.desc: executor async推理，inputTensor为空指针
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_RunASync_0300, Function | MediumTest | Level1)
{
    vector<NN_Tensor*> inputTensors, outputTensors;
    size_t inputCount = 0;
    size_t outputCount = 0;
    OH_NNExecutor* executor = nullptr;
    CreateExecutor(&executor);
    int32_t timeout = 60;
    void* userData = (void*) executor;
    GetExecutorInputOutputTensor(executor, inputTensors, inputCount, outputTensors, outputCount);
    ASSERT_EQ(OH_NN_NULL_PTR, OH_NNExecutor_RunAsync(executor, nullptr, inputCount, outputTensors.data(), outputCount, timeout, userData));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_RunASync_0500
 * @tc.desc: executor async推理，outputTensor为空指针
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_RunASync_0500, Function | MediumTest | Level1)
{
    vector<NN_Tensor*> inputTensors, outputTensors;
    size_t inputCount = 0;
    size_t outputCount = 0;
    OH_NNExecutor* executor = nullptr;
    CreateExecutor(&executor);
    int32_t timeout = 60;
    void* userData = (void*) executor;
    GetExecutorInputOutputTensor(executor, inputTensors, inputCount, outputTensors, outputCount);
    ASSERT_EQ(OH_NN_NULL_PTR, OH_NNExecutor_RunAsync(executor, inputTensors.data(), inputCount, nullptr, outputCount, timeout, userData));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_RunASync_0600
 * @tc.desc: executor async推理，定长模型返回不支持
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_RunASync_0600, Function | MediumTest | Level1)
{
    vector<NN_Tensor*> inputTensors, outputTensors;
    size_t inputCount = 0;
    size_t outputCount = 0;
    OH_NNExecutor* executor = nullptr;
    CreateExecutor(&executor);
    int32_t timeout = 60;
    void* userData = (void*) executor;
    GetExecutorInputOutputTensor(executor, inputTensors, inputCount, outputTensors, outputCount);
    ASSERT_EQ(OH_NN_UNSUPPORTED, OH_NNExecutor_RunAsync(executor, inputTensors.data(), inputCount, outputTensors.data(), outputCount, timeout, userData));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_Get_Output_Shape_0100
 * @tc.desc: executor为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_Get_Output_Shape_0100, Function | MediumTest | Level1)
{
    int32_t *outputDimensions = nullptr;
    uint32_t outputDimensionCount = 0;
    uint32_t outputIndex = 0
    ASSERT_EQ(OH_NN_INVALID_PARAMETER, OH_NNExecutor_GetOutputShape(nullptr, outputIndex, &outputDimensions, &outputDimensionCount));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_Get_Output_Shape_0200
 * @tc.desc: outputindex不存在，等于输出个数，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_Get_Output_Shape_0200, Function | MediumTest | Level1)
{
    OH_NNExecutor* executor = nullptr;
    CreateExecutor(&executor);
    ASSERT_EQ(OH_NN_SUCCESS, ExecuteGraphMock(executor, graphArgs, addModel.expectValue));

    int32_t *outputDimensions = nullptr;
    uint32_t outputDimensionCount = 0;
    uint32_t addOutputIndex = outputCount;
    ASSERT_EQ(OH_NN_INVALID_PARAMETER, OH_NNExecutor_GetOutputShape(executor, addOutputIndex, &outputDimensions, &outputDimensionCount));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_Get_Output_Shape_0300
 * @tc.desc: 变长模型推理成功，获取输出维度成功
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_Get_Output_Shape_0300, Function | MediumTest | Level1)
{
    OH_NNExecutor* executor = nullptr;
    CreateExecutor(&executor);

    ASSERT_EQ(OH_NN_SUCCESS, ExecuteGraphMock(executor, graphArgs, addModel.expectValue));
    int32_t *outputDimensions = nullptr;
    uint32_t outputDimensionCount = 0;
    uint32_t addOutputIndex = 0;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNExecutor_GetOutputShape(executor, addOutputIndex, &outputDimensions, &outputDimensionCount));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_Get_Output_Shape_0400
 * @tc.desc: 变长模型推理成功，获取输出维度成功
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_Get_Output_Shape_0400, Function | MediumTest | Level1)
{
    OH_NNExecutor* executor = nullptr;
    CreateDynamicExecutor(&executor);

    AvgPoolDynamicModel avgModel;
    graphArgs = avgModel.graphArgs;
    avgModel.dynamicInput.shape = {1, 3, 3, 1};
    avgModel.output.shape = {1, 2, 2, 1};
    graphArgs.operands = {avgModel.dynamicInput, avgModel.kernel,     avgModel.strides,
                          avgModel.padMode,      avgModel.activation, avgModel.output};
    ASSERT_EQ(OH_NN_SUCCESS, ExecuteGraphMock(executor, graphArgs, avgModel.expectValue));

    int32_t *outputDimensions = nullptr;
    uint32_t outputDimensionCount = 0;
    uint32_t addOutputIndex = 0;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNExecutor_GetOutputShape(executor, addOutputIndex, &outputDimensions, &outputDimensionCount));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_Get_Input_Count_0100
 * @tc.desc: executor为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_Get_Input_Count_0100, Function | MediumTest | Level1)
{
    ASSERT_EQ(OH_NN_NULL_PTR, OH_NNExecutor_GetInputCount(nullptr, &inputCount));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_Get_Input_Count_0200
 * @tc.desc: inputCount为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_Get_Input_Count_0200, Function | MediumTest | Level1)
{
    ASSERT_EQ(OH_NN_NULL_PTR, OH_NNExecutor_GetInputCount(executor, nullptr));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_Get_Input_Count_0300
 * @tc.desc: 获取输入个数，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_Get_Input_Count_0300, Function | MediumTest | Level1)
{
    OH_NNExecutor* executor = nullptr;
    CreateExecutor(&executor);

    ASSERT_EQ(OH_NN_SUCCESS, ExecuteGraphMock(executor, graphArgs, addModel.expectValue));
    size_t inputCount = 0;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNExecutor_GetOutputCount(executor, &inputCount));
    ASSERT_LT(ZERO, inputCount);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_Get_Output_Count_0100
 * @tc.desc: executor为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_Get_Output_Count_0100, Function | MediumTest | Level1)
{
    size_t outputCount = 0;
    ASSERT_EQ(OH_NN_NULL_PTR, OH_NNExecutor_GetOutputCount(nullptr, &outputCount));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_Get_Output_Count_0200
 * @tc.desc: outputCount为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_Get_Output_Count_0200, Function | MediumTest | Level1)
{
    OH_NNExecutor* executor = nullptr;
    CreateExecutor(&executor);

    ASSERT_EQ(OH_NN_NULL_PTR, OH_NNExecutor_GetOutputCount(executor, nullptr));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_Get_Output_Count_0300
 * @tc.desc: 获取输出个数，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_Get_Output_Count_0300, Function | MediumTest | Level1)
{
    OH_NNExecutor* executor = nullptr;
    CreateExecutor(&executor);

    size_t outputCount = 0
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNExecutor_GetInputCount(executor, &outputCount));
    ASSERT_LT(ZERO, outputCount);
}

OH_NNExecutor_CreateInputTensorDesc(const OH_NNExecutor *executor, size_t index);

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_Create_Input_TensorDesc_0100
 * @tc.desc: excutor为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_Create_Input_TensorDesc_0100, Function | MediumTest | Level1)
{
    OH_NNExecutor* executor = nullptr;
    CreateExecutor(&executor);

    size_t index = 0;
    ASSERT_EQ(nullptr, OH_NNExecutor_CreateInputTensorDesc(nullptr, index));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_Create_Input_TensorDesc_0200
 * @tc.desc: 遍历创建输入tensorDesc，index小于输出个数，成功
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_Create_Input_TensorDesc_0200, Function | MediumTest | Level1)
{
    OH_NNExecutor* executor = nullptr;
    CreateExecutor(&executor);
    size_t inputCount = 0;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNExecutor_GetInputCount(executor, &inputCount));
    NN_TensorDesc* tensorDesc = nullptr;
    for (size_t i = 0; i < inputCount; i++) {
        tensorDesc = OH_NNExecutor_CreateInputTensorDesc(executor, i);
        ASSERT_NE(nullptr, tensorDesc);
    }
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_Create_Input_TensorDesc_0300
 * @tc.desc: index等于输出个数，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_Create_Input_TensorDesc_0300, Function | MediumTest | Level1)
{
    OH_NNExecutor* executor = nullptr;
    CreateExecutor(&executor);
    size_t inputCount = 0;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNExecutor_GetInputCount(executor, &inputCount));

    ASSERT_EQ(nullptr, OH_NNExecutor_CreateInputTensorDesc(executor, inputCount));
    
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_Create_Output_TensorDesc_0100
 * @tc.desc: excutor为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_Create_Output_TensorDesc_0100, Function | MediumTest | Level1)
{
    OH_NNExecutor* executor = nullptr;
    CreateExecutor(&executor);

    size_t index = 0;
    ASSERT_EQ(nullptr, OH_NNExecutor_CreateInputTensorDesc(nullptr, index));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_Get_Output_TensorDesc_0200
 * @tc.desc: 遍历创建输入tensorDesc，index小于输出个数，成功
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_Get_Output_TensorDesc_0200, Function | MediumTest | Level1)
{
    OH_NNExecutor* executor = nullptr;
    CreateExecutor(&executor);
    size_t outputCount = 0;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNExecutor_GetOutputCount(executor, &outputCount));
    NN_TensorDesc* tensorDesc = nullptr;
    for (size_t i = 0; i < outputCount; i++) {
        tensorDesc = OH_NNExecutor_CreateInputTensorDesc(executor, i);
        ASSERT_NE(nullptr, tensorDesc);
    }
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_Get_Output_TensorDesc_0300
 * @tc.desc: index等于输出个数，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_Get_Output_TensorDesc_0300, Function | MediumTest | Level1)
{
    OH_NNExecutor* executor = nullptr;
    CreateExecutor(&executor);
    size_t outputCount = 0;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNExecutor_GetOutputCount(executor, &outputCount));
    ASSERT_EQ(nullptr, OH_NNExecutor_CreateInputTensorDesc(executor, outputCount)); 
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_Get_Input_Dim_Range_0100
 * @tc.desc: excutor为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_Get_Input_Dim_Range_0100, Function | MediumTest | Level1)
{
    OH_NNExecutor* executor = nullptr;
    size_t index = ZERO;
    size_t *minInputDims = nullptr,
    size_t *maxInputDims = nullptr,
    size_t shapeLength = 0;
    ASSERT_EQ(OH_NN_NULL_PTR, OH_NNExecutor_GetInputDimRange(executor, index, &minInputDims, &maxInputDims, &shapeLength));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_Get_Input_Dim_Range_0200
 * @tc.desc: 获取动态输入范围，设置index等于输入个数，超出限制，获取失败
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_Get_Input_Dim_Range_0200, Function | MediumTest | Level1)
{
    OH_NNExecutor* executor = nullptr;
    CreateDynamicExecutor(&executor);

    size_t index = DYNAMICMODELDIM;
    size_t *minInputDims = nullptr;
    size_t *maxInputDims = nullptr;
    size_t shapeLength = ZERO;

    ASSERT_EQ(OH_NN_INVALID_PARAMETER, OH_NNExecutor_GetInputDimRange(executor, index, &minInputDims, &maxInputDims, &shapeLength));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_Get_Input_Dim_Range_0300
 * @tc.desc: 变长模型推理，获取输入维度，获取成功，设置输入维度等于最小临界值，成功
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_Get_Input_Dim_Range_0300, Function | MediumTest | Level1)
{
    OH_NNExecutor* executor = nullptr;
    CreateDynamicExecutor(&executor);

    size_t index = ZERO;
    size_t *minInputDims = nullptr;
    size_t *maxInputDims = nullptr;
    size_t shapeLength = ZERO;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNExecutor_GetInputDimRange(executor, index, &minInputDims, &maxInputDims, &shapeLength));

    AvgPoolDynamicModel avgModel;
    graphArgs = avgModel.graphArgs;
    const OHNNOperandTest &operandTem = graphArgs.operands[0];
    auto quantParam = operandTem.quantParam;
    int32_t shape[4] = {1, 1, 1, 1};
    OH_NN_Tensor operand = {operandTem.dataType, (uint32_t)operandTem.shape.size(), shape,
                             quantParam, operandTem.type};

    size_t length = shape[0] * shape[1] * shape[2] * shape[3] * sizeof(float);
    void* data = malloc(length);
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNExecutor_SetInput(executor, ZERO, &operand, data, length));
    free(data);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_Get_Input_Dim_Range_0400
 * @tc.desc: 变长模型编推理，获取输入维度，获取成功，设置输入维度等于最大临界值，成功
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_Get_Input_Dim_Range_0400, Function | MediumTest | Level1)
{
    OH_NNExecutor* executor = nullptr;
    CreateDynamicExecutor(&executor);

    size_t index = ZERO;
    size_t *minInputDims = nullptr;
    size_t *maxInputDims = nullptr;
    size_t shapeLength = ZERO;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNExecutor_GetInputDimRange(executor, index, &minInputDims, &maxInputDims, &shapeLength));

    const OHNNOperandTest &operandTem = graphArgs.operands[0];
    auto quantParam = operandTem.quantParam;
    int32_t shape[4] = {1, 100, 100, 10};
    OH_NN_Tensor operand = {operandTem.dataType, (uint32_t)operandTem.shape.size(), shape,
                             quantParam, operandTem.type};

    size_t length = shape[0] * shape[1] * shape[2] * shape[3] * sizeof(float);
    void* data = malloc(length);
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNExecutor_SetInput(executor, ZERO, &operand, data, length));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_Get_Input_Dim_Range_0500
 * @tc.desc: 变长模型推理，获取输入维度，获取成功，设置输入维度小于最小临界值，推理失败
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_Get_Input_Dim_Range_0500, Function | MediumTest | Level1)
{
    OH_NNExecutor* executor = nullptr;
    CreateDynamicExecutor(&executor);

    size_t index = ZERO;
    size_t *minInputDims = nullptr;
    size_t *maxInputDims = nullptr;
    size_t shapeLength = ZERO;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNExecutor_GetInputDimRange(executor, index, &minInputDims, &maxInputDims, &shapeLength));

    const OHNNOperandTest &operandTem = graphArgs.operands[0];
    auto quantParam = operandTem.quantParam;
    OH_NN_Tensor operand = {operandTem.dataType, (uint32_t)operandTem.shape.size(), shape,
                             quantParam, operandTem.type};

    size_t length = 0;
    void* data = malloc(length);
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNExecutor_SetInput(executor, ZERO, &operand, data, length));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_Get_Input_Dim_Range_0600
 * @tc.desc: 变长模型推理，依次获取输入维度，获取成功，设置输入维度大于最大临界值，推理失败
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_Get_Input_Dim_Range_0600, Function | MediumTest | Level1)
{
    OH_NNExecutor* executor = nullptr;
    CreateDynamicExecutor(&executor);

    size_t index = ZERO;
    size_t *minInputDims = nullptr;
    size_t *maxInputDims = nullptr;
    size_t shapeLength = ZERO;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNExecutor_GetInputDimRange(executor, index, &minInputDims, &maxInputDims, &shapeLength));

    const OHNNOperandTest &operandTem = graphArgs.operands[0];
    auto quantParam = operandTem.quantParam;
    int32_t shape[4] = {1, 100, 100, 11};
    OH_NN_Tensor operand = {operandTem.dataType, (uint32_t)operandTem.shape.size(), shape,
                             quantParam, operandTem.type};

    size_t length = shape[0] * shape[1] * shape[2] * shape[3] * sizeof(float);
    void* data = malloc(length);
    ASSERT_EQ(OH_NN_INVALID_PARAMETER, OH_NNExecutor_SetInput(executor, ZERO, &operand, data, length));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_Get_Input_Dim_Range_0700
 * @tc.desc: 变长模型推理，依次获取输入维度，获取成功，设置输入shape个数超过shapeNum,推理失败
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_Get_Input_Dim_Range_0700, Function | MediumTest | Level1)
{
    OH_NNExecutor* executor = nullptr;
    CreateDynamicExecutor(&executor);

    size_t index = ZERO;
    size_t *minInputDims = nullptr;
    size_t *maxInputDims = nullptr;
    size_t shapeLength = ZERO;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNExecutor_GetInputDimRange(executor, index, &minInputDims, &maxInputDims, &shapeLength));

    const OHNNOperandTest &operandTem = graphArgs.operands[0];
    auto quantParam = operandTem.quantParam;
    int32_t shape[5] = {1, 1, 1, 1, 1};
    OH_NN_Tensor operand = {operandTem.dataType, (uint32_t)operandTem.shape.size(), shape,
                             quantParam, operandTem.type};

    size_t length = shape[0] * shape[1] * shape[2] * shape[3] * sizeof(float);
    void* data = malloc(length);
    ASSERT_EQ(OH_NN_INVALID_PARAMETER, OH_NNExecutor_SetInput(executor, ZERO, &operand, data, length));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Executor_Get_Input_Dim_Range_0800
 * @tc.desc: 定长模型推理调用，返回mininputDims等于maxinputDims
 * @tc.type: FUNC
 */
HWTEST_F(ExecutorTest, SUB_AI_NNRt_Core_Func_North_Executor_Get_Input_Dim_Range_0800, Function | MediumTest | Level1)
{
    OH_NNExecutor* executor = nullptr;
    CreateExecutor(&executor);

    size_t index = ZERO;
    size_t *minInputDims = nullptr;
    size_t *maxInputDims = nullptr;
    size_t shapeLength = ZERO;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNExecutor_GetInputDimRange(executor, index, &minInputDims, &maxInputDims, &shapeLength));
    ASSERT_EQ(minInputDims, maxInputDims);
}
} // namespace OHOS::NeuralNetworkCore