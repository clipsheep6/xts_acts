#include <cmath>
#include <cstdio>
#include <vector>
#include <thread>
#include <cstdlib>

#include "nnrt_utils.h"
#include "model.h"

using namespace testing::ext;
using namespace OHOS::NeuralNetworkRuntime;
using namespace OHOS::NeuralNetworkRuntime::Test;
using namespace OHOS::HDI::Nnrt::V2_0;

namespace {

class MemoryTest : public testing::Test {
protected:
    AddModel addModel;
    OHNNGraphArgs graphArgs = addModel.graphArgs;
    OHNNCompileParam compileParam;
};

} // namespace

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_CreateTensor_0100
 * @tc.name   : 创建Tensor实例，TensorDesc为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_CreateTensor_0100, Function | MediumTest | Level0)
{
    OH_NNCore_Tensor* tensor = OH_NNBackend_CreateTensor(nullptr);
    ASSERT_EQ(nullptr, tensor);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_DestroyTensor_0100
 * @tc.name   : 销毁Tensor实例，Tensor为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_DestroyTensor_0100, Function | MediumTest | Level0)
{
    ASSERT_NE(OH_NNCORE_INVALID_PARAMETER, OH_NNBackend_DestroyTensor(nullptr));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_SetTensorData_0100
 * @tc.name   : 设置Tensor，Tensor为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_SetTensorData_0100, Function | MediumTest | Level0)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));
    OH_NNCore_Compilation *compilation = OH_NNCore_ConstructCompilationWithNNModel(model);
    ASSERT_NE(nullptr, compilation);
    ASSERT_EQ(OH_NNCore_SUCCESS, CompilationGraphMock(compilation, compileParam));
    OH_NNCore_Compiled* compiled = OH_NNCore_BuildCompilation(compilation);
    ASSERT_NE(nullptr, compiled);
    OH_NNCore_Executor* executor = OH_NNCore_ConstructExecutor(compiled);
    ASSERT_NE(nullptr, executor);
    OH_NNBackend_Memory *memory = OH_NNBackend_AllocateMemory(executor, graphArgs.operands[0].length);
    ASSERT_NE(nullptr, memory);
    ASSERT_NE(OH_NNCORE_INVALID_PARAMETER, OH_NNBackend_SetTensorData(nullptr, memory));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_SetTensorData_0200
 * @tc.name   : 设置Tensor，memory为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_SetTensorData_0200, Function | MediumTest | Level0)
{
    char *backendName = nullptr;
    RegisterBackend();
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(0, &backendName));
    OH_NNCore_TensorDesc* tensorDesc = OH_NNCore_CreateTensorDesc(backendName);
    ASSERT_NE(nullptr, tensorDesc);
    OH_NNCore_Tensor* tensor = OH_NNBackend_CreateTensor(tensorDesc);
    ASSERT_NE(OH_NNCORE_INVALID_PARAMETER, OH_NNBackend_SetTensorData(tensor, nullptr));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_SetTensorData_0300
 * @tc.name   : 设置Tensor，返回成功
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_SetTensorData_0300, Function | MediumTest | Level0)
{
    char *backendName = nullptr;
    RegisterBackend();
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(0, &backendName));
    OH_NNCore_TensorDesc* tensorDesc = OH_NNCore_CreateTensorDesc(backendName);
    ASSERT_NE(nullptr, tensorDesc);
    OH_NNCore_Tensor* tensor = OH_NNBackend_CreateTensor(tensorDesc);
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));
    OH_NNCore_Compilation *compilation = OH_NNCore_ConstructCompilationWithNNModel(model);
    ASSERT_NE(nullptr, compilation);
    ASSERT_EQ(OH_NNCore_SUCCESS, CompilationGraphMock(compilation, compileParam));
    OH_NNCore_Compiled* compiled = OH_NNCore_BuildCompilation(compilation);
    ASSERT_NE(nullptr, compiled);
    OH_NNCore_Executor* executor = OH_NNCore_ConstructExecutor(compiled);
    ASSERT_NE(nullptr, executor);
    OH_NNBackend_Memory *memory = OH_NNBackend_AllocateMemory(executor, graphArgs.operands[0].length);
    ASSERT_NE(nullptr, memory);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetTensorData(tensor, memory));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_GetTensorData_0100
 * @tc.name   : 获取Tensor，Tensor为空
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_GetTensorData_0100, Function | MediumTest | Level0)
{
    ASSERT_EQ(nullptr, OH_NNBackend_GetTensorData(nullptr));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_GetTensorData_0200
 * @tc.name   : 获取Tensor，未设置tensorData
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_GetTensorData_0200, Function | MediumTest | Level0)
{
    char *backendName = nullptr;
    RegisterBackend();
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(0, &backendName));
    OH_NNCore_TensorDesc* tensorDesc = OH_NNCore_CreateTensorDesc(backendName);
    ASSERT_NE(nullptr, tensorDesc);
    OH_NNCore_Tensor* tensor = OH_NNBackend_CreateTensor(tensorDesc);
    ASSERT_EQ(nullptr, OH_NNBackend_GetTensorData(tensor));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_GetTensorDesc_0100
 * @tc.name   : 获取TensorDesc,tensor为空
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_GetTensorDesc_0100, Function | MediumTest | Level0)
{
    ASSERT_EQ(nullptr, OH_NNBackend_GetTensorDesc(nullptr));
}


