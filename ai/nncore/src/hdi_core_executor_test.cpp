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

#include "../nncore_common/hdi_nncore_utils.h"

using namespace testing::ext;

namespace OHOS::NeuralNetworkCore {

void runDone(void *OH_NNCore_ReturnCode, void* pointArray, int32_t intNum)
{
    return;
}

void onServiceDied(void* point)
{
    return;
}
class HdiNNCoreExecutor : public testing::Test {};

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Construct_Executor_0100
 * @tc.desc: compiled为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreExecutor, SUB_AI_NNRt_Core_Func_North_Device_Construct_Executor_0100, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    ASSERT_EQ(nullptr, OH_NNCore_ConstructExecutor(compiled));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Destroy_Executor_0100
 * @tc.desc: 重复释放executor，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreExecutor, SUB_AI_NNRt_Core_Func_North_Device_Destroy_Executor_0100, Function | MediumTest | Level1)
{
    OH_NNCore_Executor* executor = nullptr;
    TestExecutor(&executor);

    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyExecutor(&executor));
    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_DestroyExecutor(&executor));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Destroy_Executor_0200
 * @tc.desc: 正常释放，检查executor为空
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreExecutor, SUB_AI_NNRt_Core_Func_North_Device_Destroy_Executor_0200, Function | MediumTest | Level1)
{
    OH_NNCore_Executor* executor = nullptr;
    TestExecutor(&executor);

    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyExecutor(&executor));
    ASSERT_NE(nullptr, executor);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Set_Executor_OnRunDone_0100
 * @tc.desc: 在推理完成时设置executor，executor为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreExecutor, SUB_AI_NNRt_Core_Func_North_Device_Set_Executor_OnRunDone_0100, Function | MediumTest | Level1)
{
    OH_NNCore_OnRunDone onRunDone = runDone;
    OH_NNCore_Executor* executor = nullptr;
    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_SetExecutorOnRunDone(executor, onRunDone));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Set_Executor_OnRunDone_0200
 * @tc.desc: 在推理完成时设置executor，合法参数返回不支持
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreExecutor, SUB_AI_NNRt_Core_Func_North_Device_Set_Executor_OnRunDone_0200, Function | MediumTest | Level1)
{
    OH_NNCore_OnRunDone onRunDone= runDone;
    OH_NNCore_Executor* executor = nullptr;
    TestExecutor(&executor);
    ASSERT_EQ(OH_NNCORE_UNSUPPORTED, OH_NNCore_SetExecutorOnRunDone(executor, onRunDone));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Set_Executor_Service_Died_0100
 * @tc.desc: executor为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreExecutor, SUB_AI_NNRt_Core_Func_North_Device_Destroy_Executor_0200, Function | MediumTest | Level1)
{
    OH_NNCore_OnServiceDied onServiceDied = onServiceDied;
    OH_NNCore_Executor* executor = nullptr;

    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_SetExecutorOnServiceDied(executor, onServiceDied));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Set_Executor_Service_Died_0200
 * @tc.desc: 合法参数，返回不支持
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreExecutor, SUB_AI_NNRt_Core_Func_North_Device_Destroy_Executor_0200, Function | MediumTest | Level1)
{
    OH_NNCore_OnServiceDied onServiceDied = onServiceDied;
    OH_NNCore_Executor* executor = nullptr;
    TestExecutor(&executor);

    ASSERT_EQ(OH_NNCORE_UNSUPPORTED, OH_NNCore_SetExecutorOnServiceDied(executor, onServiceDied));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Set_Executor_Options_0100
 * @tc.desc: 设置executor选项，executor为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreExecutor, SUB_AI_NNRt_Core_Func_North_Device_Set_Executor_Options_0100, Function | MediumTest | Level1)
{
    OH_NNCore_Executor* executor = nullptr;
    OH_NNCore_CompilationOptions* option;
    TestSetCompilationOptions(&option);

    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_SetExecutorOptions(executor, reinterpret_cast<OH_NNCore_ExecutorOptions*>(option)));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Set_Executor_Options_0200
 * @tc.desc: 遍历设置executor options，返回不支持
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreExecutor, SUB_AI_NNRt_Core_Func_North_Device_Set_Executor_Options_0200, Function | MediumTest | Level1)
{
    OH_NNCore_Executor* executor = nullptr;
    TestExecutor(&executor);

    OH_NNCore_CompilationOptions* option;
    TestSetCompilationOptions(&option);
    ASSERT_EQ(OH_NNCORE_UNSUPPORTED, OH_NNCore_SetExecutorOptions(executor, reinterpret_cast<OH_NNCore_ExecutorOptions*>(option)));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Executor_RunSync_0100
 * @tc.desc: executor sync推理，executor为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreExecutor, SUB_AI_NNRt_Core_Func_North_Device_Set_Executor_Options_0200, Function | MediumTest | Level1)
{
    OH_NNCore_Tensor inputTensor[] = {};
    OH_NNCore_Tensor outputTensor[] = {};
    size_t inputSize = 0;
    size_t outputSize = 0;
    OH_NNCore_Executor* executor = nullptr;
    TestExecutor(&executor);
    TestGetInputOutputTensor(executor, inputTensor, inputSize, outputTensor, outputSize);

    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_ExecutorRunSync(nullptr, inputTensor, inputSize, outputTensor, outputSize));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Executor_RunSync_0200
 * @tc.desc: executor sync推理，inputSize为0，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreExecutor, SUB_AI_NNRt_Core_Func_North_Device_Executor_RunSync_0200, Function | MediumTest | Level1)
{
    OH_NNCore_Tensor inputTensor[] = {};
    OH_NNCore_Tensor outputTensor[] = {};
    size_t inputSize = 0;
    size_t outputSize = 0;
    OH_NNCore_Executor* executor = nullptr;
    TestExecutor(&executor);
    TestGetInputOutputTensor(executor, inputTensor, inputSize, outputTensor, outputSize);
    inputSize = 0;
    ASSERT_EQ(OH_NNCORE_INVALID_PARAMETER, OH_NNCore_ExecutorRunSync(executor, inputTensor, inputSize, outputTensor, outputSize));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Executor_RunSync_0300
 * @tc.desc: executor sync推理，outputSize为0，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreExecutor, SUB_AI_NNRt_Core_Func_North_Device_Executor_RunSync_0300, Function | MediumTest | Level1)
{
    OH_NNCore_Tensor inputTensor[] = {};
    OH_NNCore_Tensor outputTensor[] = {};
    size_t inputSize = 0;
    size_t outputSize = 0;
    OH_NNCore_Executor* executor = nullptr;
    TestExecutor(&executor);
    TestGetInputOutputTensor(executor, inputTensor, inputSize, outputTensor, outputSize);
    outputSize = 0;
    ASSERT_EQ(OH_NNCORE_INVALID_PARAMETER, OH_NNCore_ExecutorRunSync(executor, inputTensor, inputSize, outputTensor, outputSize));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Executor_RunSync_0400
 * @tc.desc: executor sync推理，inputTensor为空指针,返回失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreExecutor, SUB_AI_NNRt_Core_Func_North_Device_Executor_RunSync_0400, Function | MediumTest | Level1)
{
    OH_NNCore_Tensor inputTensor[] = {};
    OH_NNCore_Tensor outputTensor[] = {};
    size_t inputSize = 0;
    size_t outputSize = 0;
    OH_NNCore_Executor* executor = nullptr;
    TestExecutor(&executor);
    TestGetInputOutputTensor(executor, inputTensor, inputSize, outputTensor, outputSize);

    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_ExecutorRunSync(executor, nullptr, inputSize, outputTensor, outputSize));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Executor_RunSync_0500
 * @tc.desc: executor sync推理，outputTensor为空指针,返回失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreExecutor, SUB_AI_NNRt_Core_Func_North_Device_Executor_RunSync_0500, Function | MediumTest | Level1)
{
    OH_NNCore_Tensor inputTensor[] = {};
    OH_NNCore_Tensor outputTensor[] = {};
    size_t inputSize = 0;
    size_t outputSize = 0;
    OH_NNCore_Executor* executor = nullptr;
    TestExecutor(&executor);
    TestGetInputOutputTensor(executor, inputTensor, inputSize, outputTensor, outputSize);

    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_ExecutorRunSync(executor, inputTensor, inputSize, nullptr, outputSize));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Executor_RunSync_0600
 * @tc.desc: executor sync推理，定长模型，推理成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreExecutor, SUB_AI_NNRt_Core_Func_North_Device_Executor_RunSync_0400, Function | MediumTest | Level1)
{
    OH_NNCore_Tensor inputTensor[] = {};
    OH_NNCore_Tensor outputTensor[] = {};
    size_t inputSize = 0;
    size_t outputSize = 0;
    OH_NNCore_Executor* executor = nullptr;
    TestExecutor(&executor);
    TestGetInputOutputTensor(executor, inputTensor, inputSize, outputTensor, outputSize);

    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_ExecutorRunSync(executor, inputTensor, inputSize, nullptr, outputSize));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Executor_RunSync_0700
 * @tc.desc: executor sync推理，变长模型，推理成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreExecutor, SUB_AI_NNRt_Core_Func_North_Device_Executor_RunSync_0600, Function | MediumTest | Level1)
{

    TestGetBackendNum();

    char* backendName = nullptr;
    TestGetBackendName(&backendName);

    OH_NNCore_Compilation* compilation = nullptr;
    TestConstructCompilationWithDynamicNNModel(&compilation);

    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetCompilationBackend(*compilation, backendName));

    OH_NNCore_CompilationOptions* options = nullptr;
    TestSetCompilationOptions(&options);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetCompilationOptions(compilation, options));

    OH_NNCore_Compiled* compiled = OH_NNCore_BuildCompilation(&compilation);
    ASSERT_NE(nullptr, compiled);

    OH_NNCore_Executor* executor = OH_NNCore_ConstructExecutor(compiled);
    ASSERT_NE(nullptr, executor);

    OH_NNCore_Tensor inputTensor[] = {};
    OH_NNCore_Tensor outputTensor[] = {};
    size_t inputSize = 0;
    size_t outputSize = 0;
    TestGetInputOutputTensor(executor, inputTensor, inputSize, outputTensor, outputSize);

    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_ExecutorRunSync(executor, inputTensor, inputSize, outputTensor, outputSize));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Executor_RunASync_0100
 * @tc.desc: executor async推理，executor为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreExecutor, SUB_AI_NNRt_Core_Func_North_Device_Executor_RunASync_0100, Function | MediumTest | Level1)
{
    OH_NNCore_Tensor inputTensor[] = {};
    OH_NNCore_Tensor outputTensor[] = {};
    size_t inputSize = 0;
    size_t outputSize = 0;
    OH_NNCore_Executor* executor = nullptr;
    TestExecutor(&executor);
    int32_t timeout = 60;
    void* userData = (void*) executor;
    TestGetInputOutputTensor(executor, inputTensor, inputSize, outputTensor, outputSize);

    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_ExecutorRunAsync(nullptr, inputTensor, inputSize, outputTensor, outputSize, timeout, userData));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Executor_RunASync_0200
 * @tc.desc: executor async推理，inputSize为0，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreExecutor, SUB_AI_NNRt_Core_Func_North_Device_Executor_RunASync_0200, Function | MediumTest | Level1)
{
    OH_NNCore_Tensor inputTensor[] = {};
    OH_NNCore_Tensor outputTensor[] = {};
    size_t inputSize = 0;
    size_t outputSize = 0;
    OH_NNCore_Executor* executor = nullptr;
    TestExecutor(&executor);
    int32_t timeout = 60;
    void* userData = (void*) executor;
    TestGetInputOutputTensor(executor, inputTensor, inputSize, outputTensor, outputSize);
    inputSize = 0;

    ASSERT_EQ(OH_NNCORE_FAILED, OH_NNCore_ExecutorRunAsync(executor, inputTensor, inputSize, outputTensor, outputSize, timeout, userData));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Executor_RunASync_0300
 * @tc.desc: executor async推理，outputSize为0，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreExecutor, SUB_AI_NNRt_Core_Func_North_Device_Executor_RunASync_0300, Function | MediumTest | Level1)
{
    OH_NNCore_Tensor inputTensor[] = {};
    OH_NNCore_Tensor outputTensor[] = {};
    size_t inputSize = 0;
    size_t outputSize = 0;
    OH_NNCore_Executor* executor = nullptr;
    TestExecutor(&executor);
    int32_t timeout = 60;
    void* userData = (void*) executor;
    TestGetInputOutputTensor(executor, inputTensor, inputSize, outputTensor, outputSize);
    outputSize = 0;

    ASSERT_EQ(OH_NNCORE_FAILED, OH_NNCore_ExecutorRunAsync(executor, inputTensor, inputSize, outputTensor, outputSize, timeout, userData));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Executor_RunASync_0400
 * @tc.desc: executor async推理，inputTensor为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreExecutor, SUB_AI_NNRt_Core_Func_North_Device_Executor_RunASync_0400, Function | MediumTest | Level1)
{
    OH_NNCore_Tensor inputTensor[] = {};
    OH_NNCore_Tensor outputTensor[] = {};
    size_t inputSize = 0;
    size_t outputSize = 0;
    OH_NNCore_Executor* executor = nullptr;
    TestExecutor(&executor);
    int32_t timeout = 60;
    void* userData = (void*) executor;
    TestGetInputOutputTensor(executor, inputTensor, inputSize, outputTensor, outputSize);

    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_ExecutorRunAsync(executor, nullptr, inputSize, outputTensor, outputSize, timeout, userData));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Executor_RunASync_0500
 * @tc.desc: executor async推理，outputTensor为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreExecutor, SUB_AI_NNRt_Core_Func_North_Device_Executor_RunASync_0500, Function | MediumTest | Level1)
{
    OH_NNCore_Tensor inputTensor[] = {};
    OH_NNCore_Tensor outputTensor[] = {};
    size_t inputSize = 0;
    size_t outputSize = 0;
    OH_NNCore_Executor* executor = nullptr;
    TestExecutor(&executor);
    int32_t timeout = 60;
    void* userData = (void*) executor;
    TestGetInputOutputTensor(executor, inputTensor, inputSize, outputTensor, outputSize);

    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_ExecutorRunAsync(executor, inputTensor, inputSize, nullptr, outputSize, timeout, userData));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Executor_RunASync_0300
 * @tc.desc: executor async推理，定长模型，返回不支持
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreExecutor, SUB_AI_NNRt_Core_Func_North_Device_Executor_RunASync_0300, Function | MediumTest | Level1)
{
    OH_NNCore_Tensor inputTensor[] = {};
    OH_NNCore_Tensor outputTensor[] = {};
    size_t inputSize = 0;
    size_t outputSize = 0;
    OH_NNCore_Executor* executor = nullptr;
    TestExecutor(&executor);
    int32_t timeout = 60;
    void* userData = (void*) executor;
    TestGetInputOutputTensor(executor, inputTensor, inputSize, outputTensor, outputSize);

    ASSERT_EQ(OH_NNCORE_UNSUPPORTED, OH_NNCore_ExecutorRunAsync(executor, inputTensor, inputSize, outputTensor, outputSize, timeout, userData));
}
} // namespace OHOS::NeuralNetworkCore