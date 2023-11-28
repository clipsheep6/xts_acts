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
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_CreateTensor_0100
 * @tc.desc: 创建Tensor实例，TensorDesc为nullptr
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreMemory, SUB_AI_NNRt_Func_North_Tensor_CreateTensor_0100, Function | MediumTest | Level0)
{
    const char* backendName = nullptr;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(0, &backendName));
    OH_NNCore_Tensor* tensor = OH_NNCore_CreateTensor(backendName, nullptr);
    ASSERT_EQ(nullptr, tensor);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_DestroyTensor_0100
 * @tc.desc: 销毁Tensor实例，Tensor为nullptr
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreMemory, SUB_AI_NNRt_Func_North_Tensor_DestroyTensor_0100, Function | MediumTest | Level0)
{
    ASSERT_NE(OH_NNCORE_INVALID_PARAMETER, OH_NNCore_DestroyTensor(nullptr));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_SetTensorData_0100
 * @tc.desc: 设置Tensor，Tensor为nullptr
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreMemory, SUB_AI_NNRt_Func_North_Tensor_SetTensorData_0100, Function | MediumTest | Level0)
{
    OH_NNCore_Executor* executor;
    TestExecutor(&executor);
    ASSERT_NE(OH_NNCORE_INVALID_PARAMETER, OH_NNCore_SetTensorData(nullptr, memory));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_SetTensorData_0200
 * @tc.desc: 设置Tensor，memory为nullptr
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreMemory, SUB_AI_NNRt_Func_North_Tensor_SetTensorData_0200, Function | MediumTest | Level0)
{
    OH_NNCore_TensorDesc* tensorDesc = OH_NNCore_CreateTensorDesc();
    ASSERT_NE(nullptr, tensorDesc);
    const OHNNOperandTest &operandTem = graphArgs.operands[0];
    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc, operandTem.shape.data(), operandTem.shape.size(), operandTem.dataType,
                           operandTem.format, operandTem.type));
    OH_NNCore_Tensor* tensor = OH_NNCore_CreateTensor(tensorDesc);
    ASSERT_NE(OH_NNCORE_INVALID_PARAMETER, OH_NNBackend_SetTensorData(tensor, nullptr));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_SetTensorData_0300
 * @tc.desc: 设置Tensor，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreMemory, SUB_AI_NNRt_Func_North_Tensor_SetTensorData_0300, Function | MediumTest | Level0)
{
    OH_NNCore_TensorDesc* tensorDesc = OH_NNCore_CreateTensorDesc();
    ASSERT_NE(nullptr, tensorDesc);
    const OHNNOperandTest &operandTem = graphArgs.operands[0];
    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc, operandTem.shape.data(), operandTem.shape.size(), operandTem.dataType,
                           operandTem.format, operandTem.type));
    OH_NNCore_Tensor* tensor = OH_NNCore_CreateTensor(tensorDesc);
    OH_NNCore_Executor* executor;
    TestExecutor(&executor);
    ASSERT_NE(nullptr, memory);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetTensorData(tensor, memory));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_GetTensorData_0100
 * @tc.desc: 获取Tensor，Tensor为空
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreMemory, SUB_AI_NNRt_Func_North_Tensor_GetTensorData_0100, Function | MediumTest | Level0)
{
    ASSERT_EQ(nullptr, OH_NNCore_GetDataBuffer(nullptr));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_GetTensorData_0200
 * @tc.desc: 获取Tensor，未设置tensorData
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreMemory, SUB_AI_NNRt_Func_North_Tensor_GetTensorData_0200, Function | MediumTest | Level0)
{
    OH_NNCore_TensorDesc* tensorDesc = OH_NNCore_CreateTensorDesc();
    ASSERT_NE(nullptr, tensorDesc);
    const OHNNOperandTest &operandTem = graphArgs.operands[0];
    ASSERT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&tensorDesc, operandTem.shape.data(), operandTem.shape.size(), operandTem.dataType,
                           operandTem.format, operandTem.type));
    OH_NNCore_Tensor* tensor = OH_NNCore_CreateTensor(tensorDesc);
    ASSERT_EQ(nullptr, OH_NNCore_GetDataBuffer(tensor));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_GetTensorDesc_0100
 * @tc.desc: 获取TensorDesc,tensor为空
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreMemory, SUB_AI_NNRt_Func_North_Tensor_GetTensorDesc_0100, Function | MediumTest | Level0)
{
    ASSERT_EQ(nullptr, OH_NNBackend_GetTensorDesc(nullptr));
}
