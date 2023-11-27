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
#include <cmath>
#include <cstdio>
#include <vector>
#include <thread>
#include <cstdlib>

#include "../nncore_common/hdi_nncore_utils.h"

using namespace testing::ext;
using namespace OHOS::NeuralNetworkCore;

namespace {

class HdiNNCoreMemory : public testing::Test {
protected:
    AddModel addModel;
    OHNNGraphArgs graphArgs = addModel.graphArgs;
    OHNNcompilationParam compilationParam;
};

} // namespace

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Executor_Memory_CreateInputMemory_0100
 * @tc.name   : 创建共享内存，executor为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreMemory, SUB_AI_NNRt_Func_North_Executor_Memory_CreateInputMemory_0100, Function | MediumTest | Level3)
{
    OH_NNBackend_Memory *memory = OH_NNBackend_AllocateMemory(nullptr, 4);
    ASSERT_EQ(nullptr, memory);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Executor_Memory_CreateInputMemory_0200
 * @tc.name   : 创建输入共享内存，length为0
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreMemory, SUB_AI_NNRt_Func_North_Executor_Memory_CreateInputMemory_0200, Function | MediumTest | Level3)
{
    OH_NNCore_Executor* executor;
    TestExecutor(&executor);
    OH_NNBackend_Memory *memory = OH_NNBackend_AllocateMemory(executor, 0);
    ASSERT_EQ(nullptr, memory);
    Free(model, compilation, compiled, executor);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Executor_Memory_DestroyInputMemory_0100
 * @tc.name   : 销毁共享内存，executor为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreMemory, SUB_AI_NNRt_Func_North_Executor_Memory_DestroyInputMemory_0100, Function | MediumTest | Level3)
{
    OH_NNCore_Executor* executor;
    TestExecutor(&executor);
    OH_NNBackend_Memory *memory = OH_NNBackend_AllocateMemory(executor, graphArgs.operands[0].length);
    ASSERT_NE(nullptr, memory);
    OH_NNBackend_ReleaseMemory(nullptr, &memory);
    ASSERT_NE(nullptr, memory);
    Free(model, compilation, compiled, executor);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Executor_Memory_DestroyInputMemory_0300
 * @tc.name   : 销毁共享内存，*memory为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreMemory, SUB_AI_NNRt_Func_North_Executor_Memory_DestroyInputMemory_0300, Function | MediumTest | Level3)
{
    OH_NNCore_Executor* executor;
    TestExecutor(&executor);
    OH_NNBackend_Memory *memory = nullptr;
    ASSERT_NO_THROW(OH_NNBackend_ReleaseMemory(executor, &memory));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Executor_Memory_GetMemoryData_0100
 * @tc.name   : 获取内存数据，memory为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreMemory, SUB_AI_NNRt_Func_North_Executor_Memory_GetMemoryData_0100, Function | MediumTest | Level3)
{
    void* data = nullptr;
    size_t length = 0;
    ASSERT_NE(OH_NNCORE_INVALID_PARAMETER, OH_NNBackend_GetMemoryData(nullptr, &data, &length));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Executor_Memory_GetMemoryData_0100
 * @tc.name   : 获取内存数据，返回正确
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreMemory, SUB_AI_NNRt_Func_North_Executor_Memory_GetMemoryData_0100, Function | MediumTest | Level3)
{
    OH_NNCore_Executor* executor;
    TestExecutor(&executor);
    OH_NNBackend_Memory *memory = OH_NNBackend_AllocateMemory(executor, graphArgs.operands[0].length);
    ASSERT_NE(nullptr, memory);
    void* data = nullptr;
    size_t length = 0;
    ASSERT_EQ(OH_NNCore_SUCCESS, OH_NNBackend_GetMemoryData(nullptr, &data, &length));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Executor_Memory_GetMemoryData_0100
 * @tc.name   : 获取内存fd，memory为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreMemory, SUB_AI_NNRt_Func_North_Executor_Memory_GetMemoryfd_0100, Function | MediumTest | Level3)
{
    int32_t fd = 0;
    ASSERT_NE(OH_NNCORE_INVALID_PARAMETER, OH_NNBackend_GetMemoryfd(nullptr, &fd));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Executor_Memory_GetMemoryData_0100
 * @tc.name   : 获取内存fd，返回正确
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreMemory, SUB_AI_NNRt_Func_North_Executor_Memory_GetMemoryfd_0100, Function | MediumTest | Level3)
{
    OH_NNCore_Executor* executor;
    TestExecutor(&executor);
    OH_NNBackend_Memory *memory = OH_NNBackend_AllocateMemory(executor, graphArgs.operands[0].length);
    ASSERT_NE(nullptr, memory);
    int32_t fd = 0;
    ASSERT_EQ(OH_NNCore_SUCCESS, OH_NNBackend_GetMemoryfd(nullptr, &fd));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_CreateTensor_0100
 * @tc.name   : 创建Tensor实例，TensorDesc为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreMemory, SUB_AI_NNRt_Func_North_Tensor_CreateTensor_0100, Function | MediumTest | Level0)
{
    OH_NNCore_Tensor* tensor = OH_NNBackend_CreateTensor(nullptr);
    ASSERT_EQ(nullptr, tensor);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_DestroyTensor_0100
 * @tc.name   : 销毁Tensor实例，Tensor为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreMemory, SUB_AI_NNRt_Func_North_Tensor_DestroyTensor_0100, Function | MediumTest | Level0)
{
    ASSERT_NE(OH_NNCORE_INVALID_PARAMETER, OH_NNBackend_DestroyTensor(nullptr));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_SetTensorData_0100
 * @tc.name   : 设置Tensor，Tensor为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreMemory, SUB_AI_NNRt_Func_North_Tensor_SetTensorData_0100, Function | MediumTest | Level0)
{
    OH_NNCore_Executor* executor;
    TestExecutor(&executor);
    OH_NNBackend_Memory *memory = OH_NNBackend_AllocateMemory(executor, graphArgs.operands[0].length);
    ASSERT_NE(nullptr, memory);
    ASSERT_NE(OH_NNCORE_INVALID_PARAMETER, OH_NNBackend_SetTensorData(nullptr, memory));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_SetTensorData_0200
 * @tc.name   : 设置Tensor，memory为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreMemory, SUB_AI_NNRt_Func_North_Tensor_SetTensorData_0200, Function | MediumTest | Level0)
{
    char *backendName = nullptr;
    RegisterBackend();
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(0, &backendName));
    OH_NNCore_TensorDesc* tensorDesc = OH_NNCore_CreateTensorDesc(backendName);
    ASSERT_NE(nullptr, tensorDesc);
    const OHNNOperandTest &operandTem = graphArgs.operands[0];
    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc, operandTem.shape.data(), operandTem.shape.size(), operandTem.dataType,
                           operandTem.format, operandTem.type));
    OH_NNCore_Tensor* tensor = OH_NNBackend_CreateTensor(tensorDesc);
    ASSERT_NE(OH_NNCORE_INVALID_PARAMETER, OH_NNBackend_SetTensorData(tensor, nullptr));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_SetTensorData_0300
 * @tc.name   : 设置Tensor，返回成功
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreMemory, SUB_AI_NNRt_Func_North_Tensor_SetTensorData_0300, Function | MediumTest | Level0)
{
    char *backendName = nullptr;
    RegisterBackend();
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(0, &backendName));
    OH_NNCore_TensorDesc* tensorDesc = OH_NNCore_CreateTensorDesc(backendName);
    ASSERT_NE(nullptr, tensorDesc);
    const OHNNOperandTest &operandTem = graphArgs.operands[0];
    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc, operandTem.shape.data(), operandTem.shape.size(), operandTem.dataType,
                           operandTem.format, operandTem.type));
    OH_NNCore_Tensor* tensor = OH_NNBackend_CreateTensor(tensorDesc);
    OH_NNCore_Executor* executor;
    TestExecutor(&executor);
    OH_NNBackend_Memory *memory = OH_NNBackend_AllocateMemory(executor, graphArgs.operands[0].length);
    ASSERT_NE(nullptr, memory);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetTensorData(tensor, memory));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_GetTensorData_0100
 * @tc.name   : 获取Tensor，Tensor为空
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreMemory, SUB_AI_NNRt_Func_North_Tensor_GetTensorData_0100, Function | MediumTest | Level0)
{
    ASSERT_EQ(nullptr, OH_NNBackend_GetTensorData(nullptr));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_GetTensorData_0200
 * @tc.name   : 获取Tensor，未设置tensorData
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreMemory, SUB_AI_NNRt_Func_North_Tensor_GetTensorData_0200, Function | MediumTest | Level0)
{
    char *backendName = nullptr;
    RegisterBackend();
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(0, &backendName));
    OH_NNCore_TensorDesc* tensorDesc = OH_NNCore_CreateTensorDesc(backendName);
    ASSERT_NE(nullptr, tensorDesc);
    const OHNNOperandTest &operandTem = graphArgs.operands[0];
    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc, operandTem.shape.data(), operandTem.shape.size(), operandTem.dataType,
                           operandTem.format, operandTem.type));
    OH_NNCore_Tensor* tensor = OH_NNBackend_CreateTensor(tensorDesc);
    ASSERT_EQ(nullptr, OH_NNBackend_GetTensorData(tensor));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_GetTensorDesc_0100
 * @tc.name   : 获取TensorDesc,tensor为空
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreMemory, SUB_AI_NNRt_Func_North_Tensor_GetTensorDesc_0100, Function | MediumTest | Level0)
{
    ASSERT_EQ(nullptr, OH_NNBackend_GetTensorDesc(nullptr));
}
