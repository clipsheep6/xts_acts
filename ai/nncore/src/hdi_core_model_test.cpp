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

#include "../nncore_common/hdi_nncore_utils.h"

using namespace testing::ext;

namespace {

class HdiNNCoreModel : public testing::Test {
protected:
    AddModel addModel;
    OHNNGraphArgs graphArgs = addModel.graphArgs;
    OHNNcompilationParam compilationParam;
};

void BuildModel(OH_NNBackend_Model *model, const OHNNGraphArgs &graphArgs)
{
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));
}

} // namespace

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_CreateModel_0100
 * @tc.name   : 创建模型实例，指针校验
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_CreateModel_0100, Function | MediumTest | Level0)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_CreateModel_0200
 * @tc.name   : 创建多个模型实例，指针校验
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_CreateModel_0200, Function | MediumTest | Level2)
{
    OH_NNBackend_Model *model_first = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model_first);

    OH_NNBackend_Model *model_second = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model_second);

    OH_NNBackend_Model *model_third = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model_third);

    ASSERT_NE(model_first, model_second);
    ASSERT_NE(model_first, model_third);
    ASSERT_NE(model_second, model_third);
    Free(model_first);
    Free(model_second);
    Free(model_third);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_Destroy_0100
 * @tc.name   : 释放模型，model为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_Destroy_0100, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = nullptr;
    ASSERT_NO_THROW(OH_NNBackend_DestroyModel(&model));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_Destroy_0200
 * @tc.name   : 释放模型，model未构图
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_Destroy_0200, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    graphArgs.build = false;
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));
    OH_NNBackend_DestroyModel(&model);
    ASSERT_EQ(nullptr, model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_AddOperand_0100
 * @tc.name   : 添加操作数值，model为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_AddOperand_0100, Function | MediumTest | Level3)
{
    int32_t dimensions[3]{3, 2, 2};
    char* backendName = nullptr;
    OH_NNCore_GetBackendName(0, &backendName);
    OH_NNCore_TensorDesc* operand = OH_NNCore_CreateTensorDesc(backendName);
    EXPECT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&operand, dimensions, 3, OH_NNCORE_FLOAT32,
                                                  OH_NNCORE_FORMAT_NONE, OH_NNCore_TensorDesc));
    OH_NNCore_ReturnCode ret = OH_NNBackend_AddTensorToModel(nullptr, &operand);
    EXPECT_EQ(OH_NNCore_INVALID_PARAMETER, ret);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_AddOperand_0200
 * @tc.name   : 添加操作数，operand为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_AddOperand_0200, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);

    OH_NNCore_ReturnCode ret = OH_NNBackend_AddTensorToModel(model, nullptr);
    EXPECT_EQ(OH_NNCore_INVALID_PARAMETER, ret);
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_AddOperand_0300
 * @tc.name   : 添加操作数，operand中dataType为100000
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_AddOperand_0300, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);

    int32_t dimensions[3]{3, 2, 2};
    char* backendName = nullptr;
    OH_NNCore_GetBackendName(0, &backendName);
    OH_NNCore_TensorDesc* operand = OH_NNCore_CreateTensorDesc(backendName);
    EXPECT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&operand, dimensions, 3, static_cast<OH_NNCore_DataType>(100000),
                                                OH_NNCORE_FORMAT_NONE, OH_NNBACKEND_TENSOR));
    EXPECT_EQ(OH_NNCORE_INVALID_PARAMETER, OH_NNBackend_AddTensorToModel(model, &operand));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_AddOperand_0400
 * @tc.name   : 添加操作数，operand中type为100000
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_AddOperand_0400, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);

    int32_t dimensions[3]{3, 2, 2};
    char* backendName = nullptr;
    OH_NNCore_GetBackendName(0, &backendName);
    OH_NNCore_TensorDesc* operand = OH_NNCore_CreateTensorDesc(backendName);
    EXPECT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&operand, dimensions, 3, OH_NNCORE_FLOAT32,
                                                  OH_NNCORE_FORMAT_NONE, static_cast<OH_NNCore_TensorDescType>(100000)));
    EXPECT_EQ(OH_NNCORE_INVALID_PARAMETER, OH_NNBackend_AddTensorToModel(model, &operand));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_SetOperandValue_0100
 * @tc.name   : 设置操作数值，model为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_SetOperandValue_0100, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);

    int8_t activationValue{0};
    int32_t dimensions[3]{3, 2, 2};
    char* backendName = nullptr;
    OH_NNCore_GetBackendName(0, &backendName);
    OH_NNCore_TensorDesc* operand = OH_NNCore_CreateTensorDesc(backendName);
    EXPECT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&operand, dimensions, 3, OH_NNCORE_FLOAT32,
                                                  OH_NNCORE_FORMAT_NONE, OH_NNCore_TensorDesc));
    ASSERT_EQ(OH_NNCore_SUCCESS, OH_NNBackend_AddTensorToModel(model, &operand));

    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER,
              OH_NNBackend_SetModelTensorData(nullptr, 1, (void *)&activationValue, sizeof(int8_t)));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_SetOperandValue_0200
 * @tc.name   : 设置操作数值，操作数不存在
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_SetOperandValue_0200, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);

    int8_t activationValue{0};
    int32_t dimensions[3]{3, 2, 2};
    char* backendName = nullptr;
    OH_NNCore_GetBackendName(0, &backendName);
    OH_NNCore_TensorDesc* operand = OH_NNCore_CreateTensorDesc(backendName);
    EXPECT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&operand, dimensions, 3, OH_NNCORE_FLOAT32,
                                                  OH_NNCORE_FORMAT_NONE, OH_NNCore_TensorDesc));
    ASSERT_EQ(OH_NNCore_SUCCESS, OH_NNBackend_AddTensorToModel(model, &operand));

    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER,
              OH_NNBackend_SetModelTensorData(model, 1000, (void *)&activationValue, sizeof(int8_t)));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_SetOperandValue_0300
 * @tc.name   : 设置操作数值，buffer为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_SetOperandValue_0300, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);

    int32_t dimensions[3]{3, 2, 2};
    char* backendName = nullptr;
    OH_NNCore_GetBackendName(0, &backendName);
    OH_NNCore_TensorDesc* operand = OH_NNCore_CreateTensorDesc(backendName);
    EXPECT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&operand, dimensions, 3, OH_NNCORE_FLOAT32,
                                                  OH_NNCORE_FORMAT_NONE, OH_NNCore_TensorDesc));
    ASSERT_EQ(OH_NNCore_SUCCESS, OH_NNBackend_AddTensorToModel(model, &operand));

    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER, OH_NNBackend_SetModelTensorData(model, 1, nullptr, sizeof(int8_t)));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_SetOperandValue_0400
 * @tc.name   : 设置操作数值，length为0
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_SetOperandValue_0400, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);

    int8_t activationValue{0};
    int32_t dimensions[3]{3, 2, 2};
    char* backendName = nullptr;
    OH_NNCore_GetBackendName(0, &backendName);
    OH_NNCore_TensorDesc* operand = OH_NNCore_CreateTensorDesc(backendName);
    EXPECT_EQ(OH_NNCORE_SUCCESS, CreateTensorDesc(&operand, dimensions, 3, OH_NNCORE_FLOAT32,
                                                  OH_NNCORE_FORMAT_NONE, OH_NNCore_TensorDesc));
    ASSERT_EQ(OH_NNCore_SUCCESS, OH_NNBackend_AddTensorToModel(model, &operand));

    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER, OH_NNBackend_SetModelTensorData(model, 1, (void *)&activationValue, 0));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_AddOperation_0100
 * @tc.name   : 添加算子，model为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_AddOperation_0100, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    graphArgs.specifyIO = false;
    graphArgs.build = false;
    graphArgs.addOperation = false;
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));
    OH_NNCORE_UINT32Array paramIndices{const_cast<uint32_t *>(graphArgs.paramIndices.data()),
                                       graphArgs.paramIndices.size()};
    OH_NNCORE_UINT32Array inputIndices{const_cast<uint32_t *>(graphArgs.inputIndices.data()),
                                       graphArgs.inputIndices.size()};
    OH_NNCORE_UINT32Array outputIndices{const_cast<uint32_t *>(graphArgs.outputIndices.data()),
                                        graphArgs.outputIndices.size()};
    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER,
              OH_NNBackend_AddOperationToModel(nullptr, graphArgs.operationType, &paramIndices, &inputIndices, &outputIndices));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_AddOperation_0200
 * @tc.name   : 添加算子，paramIndices为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_AddOperation_0200, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    graphArgs.specifyIO = false;
    graphArgs.build = false;
    graphArgs.addOperation = false;
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));

    OH_NNCORE_UINT32Array inputIndices{const_cast<uint32_t *>(graphArgs.inputIndices.data()),
                                       graphArgs.inputIndices.size()};
    OH_NNCORE_UINT32Array outputIndices{const_cast<uint32_t *>(graphArgs.outputIndices.data()),
                                        graphArgs.outputIndices.size()};
    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER,
              OH_NNBackend_AddOperationToModel(model, graphArgs.operationType, nullptr, &inputIndices, &outputIndices));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_AddOperation_0300
 * @tc.name   : 添加算子，paramIndices中data为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_AddOperation_0300, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    graphArgs.specifyIO = false;
    graphArgs.build = false;
    graphArgs.addOperation = false;
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));
    OH_NNCORE_UINT32Array paramIndices{nullptr, graphArgs.paramIndices.size()};
    OH_NNCORE_UINT32Array inputIndices{const_cast<uint32_t *>(graphArgs.inputIndices.data()),
                                       graphArgs.inputIndices.size()};
    OH_NNCORE_UINT32Array outputIndices{const_cast<uint32_t *>(graphArgs.outputIndices.data()),
                                        graphArgs.outputIndices.size()};
    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER,
              OH_NNBackend_AddOperationToModel(model, graphArgs.operationType, &paramIndices, &inputIndices, &outputIndices));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_AddOperation_0400
 * @tc.name   : 添加算子，paramIndices中data对应序号不存在
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_AddOperation_0400, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    graphArgs.specifyIO = false;
    graphArgs.build = false;
    graphArgs.addOperation = false;
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));
    uint32_t paramIndicesValue{10};
    OH_NNCORE_UINT32Array paramIndices{&paramIndicesValue, graphArgs.paramIndices.size()};
    OH_NNCORE_UINT32Array inputIndices{const_cast<uint32_t *>(graphArgs.inputIndices.data()),
                                       graphArgs.inputIndices.size()};
    OH_NNCORE_UINT32Array outputIndices{const_cast<uint32_t *>(graphArgs.outputIndices.data()),
                                        graphArgs.outputIndices.size()};
    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER,
              OH_NNBackend_AddOperationToModel(model, graphArgs.operationType, &paramIndices, &inputIndices, &outputIndices));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_AddOperation_0500
 * @tc.name   : 添加算子，paramIndices中size为0
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_AddOperation_0500, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    graphArgs.specifyIO = false;
    graphArgs.build = false;
    graphArgs.addOperation = false;
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));
    OH_NNCORE_UINT32Array paramIndices{const_cast<uint32_t *>(graphArgs.paramIndices.data()), 0};
    OH_NNCORE_UINT32Array inputIndices{const_cast<uint32_t *>(graphArgs.inputIndices.data()),
                                       graphArgs.inputIndices.size()};
    OH_NNCORE_UINT32Array outputIndices{const_cast<uint32_t *>(graphArgs.outputIndices.data()),
                                        graphArgs.outputIndices.size()};
    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER,
              OH_NNBackend_AddOperationToModel(model, graphArgs.operationType, &paramIndices, &inputIndices, &outputIndices));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_AddOperation_0600
 * @tc.name   : 添加算子，inputIndices为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_AddOperation_0600, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    graphArgs.specifyIO = false;
    graphArgs.build = false;
    graphArgs.addOperation = false;
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));
    OH_NNCORE_UINT32Array paramIndices{const_cast<uint32_t *>(graphArgs.paramIndices.data()),
                                       graphArgs.paramIndices.size()};
    OH_NNCORE_UINT32Array outputIndices{const_cast<uint32_t *>(graphArgs.outputIndices.data()),
                                        graphArgs.outputIndices.size()};
    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER,
              OH_NNBackend_AddOperationToModel(model, graphArgs.operationType, &paramIndices, nullptr, &outputIndices));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_AddOperation_0700
 * @tc.name   : 添加算子，inputIndices中data为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_AddOperation_0700, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    graphArgs.specifyIO = false;
    graphArgs.build = false;
    graphArgs.addOperation = false;
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));
    OH_NNCORE_UINT32Array paramIndices{const_cast<uint32_t *>(graphArgs.paramIndices.data()),
                                       graphArgs.paramIndices.size()};
    OH_NNCORE_UINT32Array inputIndices{nullptr, graphArgs.inputIndices.size()};
    OH_NNCORE_UINT32Array outputIndices{const_cast<uint32_t *>(graphArgs.outputIndices.data()),
                                        graphArgs.outputIndices.size()};
    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER,
              OH_NNBackend_AddOperationToModel(model, graphArgs.operationType, &paramIndices, &inputIndices, &outputIndices));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_AddOperation_0800
 * @tc.name   : 添加算子，inputIndices中data对应序号不存在
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_AddOperation_0800, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    graphArgs.specifyIO = false;
    graphArgs.build = false;
    graphArgs.addOperation = false;
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));
    OH_NNCORE_UINT32Array paramIndices{const_cast<uint32_t *>(graphArgs.paramIndices.data()),
                                       graphArgs.paramIndices.size()};
    uint32_t inputIndicesValue{10};
    OH_NNCORE_UINT32Array inputIndices{&inputIndicesValue, graphArgs.inputIndices.size()};
    OH_NNCORE_UINT32Array outputIndices{const_cast<uint32_t *>(graphArgs.outputIndices.data()),
                                        graphArgs.outputIndices.size()};
    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER,
              OH_NNBackend_AddOperationToModel(model, graphArgs.operationType, &paramIndices, &inputIndices, &outputIndices));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_AddOperation_0900
 * @tc.name   : 添加算子，inputIndices中size为0
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_AddOperation_0900, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    graphArgs.specifyIO = false;
    graphArgs.build = false;
    graphArgs.addOperation = false;
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));
    OH_NNCORE_UINT32Array paramIndices{const_cast<uint32_t *>(graphArgs.paramIndices.data()),
                                       graphArgs.paramIndices.size()};
    OH_NNCORE_UINT32Array inputIndices{const_cast<uint32_t *>(graphArgs.inputIndices.data()), 0};
    OH_NNCORE_UINT32Array outputIndices{const_cast<uint32_t *>(graphArgs.outputIndices.data()),
                                        graphArgs.outputIndices.size()};
    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER,
              OH_NNBackend_AddOperationToModel(model, graphArgs.operationType, &paramIndices, &inputIndices, &outputIndices));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_AddOperation_1000
 * @tc.name   : 添加算子，outputIndices为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_AddOperation_1000, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    graphArgs.specifyIO = false;
    graphArgs.build = false;
    graphArgs.addOperation = false;
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));
    OH_NNCORE_UINT32Array paramIndices{const_cast<uint32_t *>(graphArgs.paramIndices.data()),
                                       graphArgs.paramIndices.size()};
    OH_NNCORE_UINT32Array inputIndices{const_cast<uint32_t *>(graphArgs.inputIndices.data()), 0};
    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER,
              OH_NNBackend_AddOperationToModel(model, graphArgs.operationType, &paramIndices, &inputIndices, nullptr));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_AddOperation_1100
 * @tc.name   : 添加算子，outputIndices中data为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_AddOperation_1100, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    graphArgs.specifyIO = false;
    graphArgs.build = false;
    graphArgs.addOperation = false;
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));
    OH_NNCORE_UINT32Array paramIndices{const_cast<uint32_t *>(graphArgs.paramIndices.data()),
                                       graphArgs.paramIndices.size()};
    OH_NNCORE_UINT32Array inputIndices{const_cast<uint32_t *>(graphArgs.inputIndices.data()),
                                       graphArgs.inputIndices.size()};
    OH_NNCORE_UINT32Array outputIndices{nullptr, graphArgs.outputIndices.size()};
    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER,
              OH_NNBackend_AddOperationToModel(model, graphArgs.operationType, &paramIndices, &inputIndices, &outputIndices));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_AddOperation_1200
 * @tc.name   : 添加算子，outputIndices中data对应序号不存在
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_AddOperation_1200, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    graphArgs.specifyIO = false;
    graphArgs.build = false;
    graphArgs.addOperation = false;
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));
    OH_NNCORE_UINT32Array paramIndices{const_cast<uint32_t *>(graphArgs.paramIndices.data()),
                                       graphArgs.paramIndices.size()};
    OH_NNCORE_UINT32Array inputIndices{const_cast<uint32_t *>(graphArgs.inputIndices.data()),
                                       graphArgs.inputIndices.size()};
    uint32_t outputIndicesValue{10};
    OH_NNCORE_UINT32Array outputIndices{&outputIndicesValue, graphArgs.outputIndices.size()};
    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER,
              OH_NNBackend_AddOperationToModel(model, graphArgs.operationType, &paramIndices, &inputIndices, &outputIndices));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_AddOperation_1300
 * @tc.name   : 添加算子，outputIndices中size为0
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_AddOperation_1300, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    graphArgs.specifyIO = false;
    graphArgs.build = false;
    graphArgs.addOperation = false;
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));
    OH_NNCORE_UINT32Array paramIndices{const_cast<uint32_t *>(graphArgs.paramIndices.data()),
                                       graphArgs.paramIndices.size()};
    OH_NNCORE_UINT32Array inputIndices{const_cast<uint32_t *>(graphArgs.inputIndices.data()),
                                       graphArgs.inputIndices.size()};
    OH_NNCORE_UINT32Array outputIndices{const_cast<uint32_t *>(graphArgs.outputIndices.data()), 0};
    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER,
              OH_NNBackend_AddOperationToModel(model, graphArgs.operationType, &paramIndices, &inputIndices, &outputIndices));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_SpecifyInputsAndOutputs_0100
 * @tc.name   : 设置输入输出，model为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_SpecifyInputsAndOutputs_0100, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    graphArgs.specifyIO = false;
    graphArgs.build = false;
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));

    OH_NNCORE_UINT32Array inputIndices{const_cast<uint32_t *>(graphArgs.inputIndices.data()),
                                       graphArgs.inputIndices.size()};
    OH_NNCORE_UINT32Array outputIndices{const_cast<uint32_t *>(graphArgs.outputIndices.data()),
                                        graphArgs.outputIndices.size()};
    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER, OH_NNBackend_SpecifyModelInputsAndOutputs(nullptr, &inputIndices, &outputIndices));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_SpecifyInputsAndOutputs_0200
 * @tc.name   : 设置输入输出，inputIndices为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_SpecifyInputsAndOutputs_0200, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    graphArgs.specifyIO = false;
    graphArgs.build = false;
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));
    OH_NNCORE_UINT32Array outputIndices{const_cast<uint32_t *>(graphArgs.outputIndices.data()),
                                        graphArgs.outputIndices.size()};
    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER, OH_NNBackend_SpecifyModelInputsAndOutputs(model, nullptr, &outputIndices));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_SpecifyInputsAndOutputs_0300
 * @tc.name   : 设置输入输出，inputIndices中data为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_SpecifyInputsAndOutputs_0300, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    graphArgs.specifyIO = false;
    graphArgs.build = false;
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));
    OH_NNCORE_UINT32Array inputIndices{nullptr, 2};
    OH_NNCORE_UINT32Array outputIndices{const_cast<uint32_t *>(graphArgs.outputIndices.data()),
                                        graphArgs.outputIndices.size()};
    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER, OH_NNBackend_SpecifyModelInputsAndOutputs(model, &inputIndices, &outputIndices));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_SpecifyInputsAndOutputs_0400
 * @tc.name   : 设置输入输出，inputIndices中data对应序号不存在
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_SpecifyInputsAndOutputs_0400, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    graphArgs.specifyIO = false;
    graphArgs.build = false;
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));
    uint32_t modelInputIndicesValue{5};
    OH_NNCORE_UINT32Array inputIndices{&modelInputIndicesValue, 1};

    OH_NNCORE_UINT32Array outputIndices{const_cast<uint32_t *>(graphArgs.outputIndices.data()),
                                        graphArgs.outputIndices.size()};
    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER, OH_NNBackend_SpecifyModelInputsAndOutputs(model, &inputIndices, &outputIndices));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_SpecifyInputsAndOutputs_0500
 * @tc.name   : 设置输入输出，inputIndices中size为0
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_SpecifyInputsAndOutputs_0500, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    graphArgs.specifyIO = false;
    graphArgs.build = false;
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));
    OH_NNCORE_UINT32Array inputIndices{const_cast<uint32_t *>(graphArgs.inputIndices.data()), 0};
    OH_NNCORE_UINT32Array outputIndices{const_cast<uint32_t *>(graphArgs.outputIndices.data()),
                                        graphArgs.outputIndices.size()};

    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER, OH_NNBackend_SpecifyModelInputsAndOutputs(model, &inputIndices, &outputIndices));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_SpecifyInputsAndOutputs_0600
 * @tc.name   : 设置输入输出，outputIndices为空指针
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_SpecifyInputsAndOutputs_0600, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    graphArgs.specifyIO = false;
    graphArgs.build = false;
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));

    OH_NNCORE_UINT32Array inputIndices{const_cast<uint32_t *>(graphArgs.inputIndices.data()),
                                       graphArgs.inputIndices.size()};
    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER, OH_NNBackend_SpecifyModelInputsAndOutputs(model, &inputIndices, nullptr));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_SpecifyInputsAndOutputs_0700
 * @tc.name   : 设置输入输出，outputIndices中data为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_SpecifyInputsAndOutputs_0700, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    graphArgs.specifyIO = false;
    graphArgs.build = false;
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));

    OH_NNCORE_UINT32Array inputIndices{const_cast<uint32_t *>(graphArgs.inputIndices.data()),
                                   graphArgs.inputIndices.size()};
    OH_NNCORE_UINT32Array outputIndices{nullptr, 1};
    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER, OH_NNBackend_SpecifyModelInputsAndOutputs(model, &inputIndices, &outputIndices));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_SpecifyInputsAndOutputs_0800
 * @tc.name   : 设置输入输出，outputIndices中data对应序号不存在
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_SpecifyInputsAndOutputs_0800, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    graphArgs.specifyIO = false;
    graphArgs.build = false;
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));

    OH_NNCORE_UINT32Array inputIndices{const_cast<uint32_t *>(graphArgs.inputIndices.data()),
                                   graphArgs.inputIndices.size()};
    uint32_t modelOutputIndicesValue{5};
    OH_NNCORE_UINT32Array outputIndices{&modelOutputIndicesValue, 1};
    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER, OH_NNBackend_SpecifyModelInputsAndOutputs(model, &inputIndices, &outputIndices));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_SpecifyInputsAndOutputs_0900
 * @tc.name   : 设置输入输出，outputIndices中size为0
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_SpecifyInputsAndOutputs_0900, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    graphArgs.specifyIO = false;
    graphArgs.build = false;
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));

    OH_NNCORE_UINT32Array inputIndices{const_cast<uint32_t *>(graphArgs.inputIndices.data()),
                                   graphArgs.inputIndices.size()};
    OH_NNCORE_UINT32Array outputIndices{const_cast<uint32_t *>(graphArgs.outputIndices.data()), 0};
    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER, OH_NNBackend_SpecifyModelInputsAndOutputs(model, &inputIndices, &outputIndices));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_Finish_0100
 * @tc.name   : 模型构图，model为空指针
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_Finish_0100, Function | MediumTest | Level3)
{
    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER, OH_NNBackend_BuildModel(nullptr));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_Finish_0200
 * @tc.name   : 模型构图，未添加操作数
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_Finish_0200, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    ASSERT_EQ(OH_NNCore_OPERATION_FORBIDDEN, OH_NNBackend_BuildModel(model));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_Finish_0300
 * @tc.name   : 模型构图，未设置输入输出
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_Finish_0300, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    graphArgs.specifyIO = false;
    ASSERT_EQ(OH_NNCore_OPERATION_FORBIDDEN, BuildSingleOpGraph(model, graphArgs));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_Finish_0400
 * @tc.name   : 模型构图，设置输入输出，构图成功
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_Finish_0400, Function | MediumTest | Level1)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_GetSupportedOperation_0100
 * @tc.name   : 查询算子支持，model为空指针
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_GetSupportedOperation_0100, Function | MediumTest | Level3)
{
    const size_t *devicesID{nullptr};
    const bool *isSupported{nullptr};
    uint32_t opCount{0};
    uint32_t devicesCount{0};
    ASSERT_EQ(OH_NNCore_SUCCESS, OH_NNDevice_GetAllDevicesID(&devicesID, &devicesCount));
    size_t targetDevice = devicesID[0];
    OH_NNCore_ReturnCode ret = OH_NNBackend_GetModelAvailableOperations(nullptr, targetDevice, &isSupported, &opCount);
    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER, ret);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_GetSupportedOperation_0200
 * @tc.name   : 查询算子支持，deviceID不存在
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_GetSupportedOperation_0200, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));

    size_t targetDevice{100000};
    const bool *isSupported{nullptr};
    uint32_t opCount{0};
    ASSERT_EQ(OH_NNCORE_FAILED, OH_NNBackend_GetModelAvailableOperations(model, targetDevice, &isSupported, &opCount));

    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_GetSupportedOperation_0300
 * @tc.name   : 查询算子支持，*isSupported为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_GetSupportedOperation_0300, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));

    const size_t *devicesID{nullptr};
    uint32_t opCount{0};
    uint32_t devicesCount{0};
    ASSERT_EQ(OH_NNCore_SUCCESS, OH_NNDevice_GetAllDevicesID(&devicesID, &devicesCount));
    size_t targetDevice = devicesID[0];

    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER, OH_NNBackend_GetModelAvailableOperations(model, targetDevice, nullptr, &opCount));

    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_GetSupportedOperation_0400
 * @tc.name   : 查询算子支持，**isSupported非nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_GetSupportedOperation_0400, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));

    const size_t *devicesID{nullptr};
    const bool isSupported = true;
    const bool *realSupported = &isSupported;
    uint32_t opCount{0};
    uint32_t devicesCount{0};
    ASSERT_EQ(OH_NNCore_SUCCESS, OH_NNDevice_GetAllDevicesID(&devicesID, &devicesCount));
    size_t targetDevice = devicesID[0];
    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER, OH_NNBackend_GetModelAvailableOperations(model, targetDevice,
                                                                                    &realSupported, &opCount));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_GetSupportedOperation_0500
 * @tc.name   : 查询算子支持，*opCount为nullptr
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_GetSupportedOperation_0500, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));

    const size_t *devicesID{nullptr};
    const bool *isSupported{nullptr};
    uint32_t devicesCount{0};
    ASSERT_EQ(OH_NNCore_SUCCESS, OH_NNDevice_GetAllDevicesID(&devicesID, &devicesCount));
    size_t targetDevice = devicesID[0];
    ASSERT_EQ(OH_NNCore_INVALID_PARAMETER, OH_NNBackend_GetModelAvailableOperations(model, targetDevice,
                                                                                    &isSupported, nullptr));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_GetSupportedOperation_0600
 * @tc.name   : 查询算子支持，model未完成构图
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_GetSupportedOperation_0600, Function | MediumTest | Level3)
{
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    graphArgs.build = false;
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model, graphArgs));

    const size_t *devicesID{nullptr};
    const bool *isSupported{nullptr};
    uint32_t opCount{0};
    uint32_t devicesCount{0};
    ASSERT_EQ(OH_NNCore_SUCCESS, OH_NNDevice_GetAllDevicesID(&devicesID, &devicesCount));
    size_t targetDevice = devicesID[0];
    ASSERT_EQ(OH_NNCore_OPERATION_FORBIDDEN, OH_NNBackend_GetModelAvailableOperations(model, targetDevice,
                                                                                      &isSupported, &opCount));
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_GetSupportedOperation_0700
 * @tc.name   : 查询算子支持，算子均支持
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_GetSupportedOperation_0700, Function | MediumTest | Level1)
{
    OHOS::sptr<V2_0::MockIDevice> device = V2_0::MockIDevice::GetInstance();
    std::vector<bool> isSupported{true, true};
    device->SetOperationsSupported(isSupported);
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    BuildAddTopKGraph(model);
    
    const size_t *devicesID{nullptr};
    const bool *realSupported{nullptr};
    uint32_t opCount;
    uint32_t devicesCount;
    ASSERT_EQ(OH_NNCore_SUCCESS, OH_NNDevice_GetAllDevicesID(&devicesID, &devicesCount));
    
    uint32_t count = 1;
    EXPECT_LE(devicesCount, count);
    const char *name = nullptr;
    std::string m_deviceName{"Device-CPU_TestVendor_v2_0"};
    OH_NNCore_ReturnCode ret = OH_NNCORE_FAILED;
    bool isHaveDevice = false;
    uint32_t deviceId = 0;
    for (uint32_t i = 0; i < devicesCount; i++) {
        name = nullptr;
        ret = OH_NNDevice_GetName(devicesID[i], &name);
        EXPECT_EQ(OH_NNCore_SUCCESS, ret);
        std::string sName(name);
        if (m_deviceName == sName) {
            isHaveDevice = true;
            deviceId = i;
        }  
    }
    ASSERT_EQ(isHaveDevice, true);
    size_t targetDevice = devicesID[deviceId];

    ret = OH_NNBackend_GetModelAvailableOperations(model, targetDevice, &realSupported, &opCount);
    ASSERT_EQ(OH_NNCore_SUCCESS, ret);
    for (uint32_t i = 0; i < opCount; i++) {
        EXPECT_EQ(realSupported[i], isSupported[i]);
    }
    Free(model);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Model_GetSupportedOperation_0800
 * @tc.name   : 查询算子支持，算子部分支持
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNRt_Func_North_Model_GetSupportedOperation_0800, Function | MediumTest | Level2)
{
    OHOS::sptr<V2_0::MockIDevice> device = V2_0::MockIDevice::GetInstance();
    std::vector<bool> isSupported{true, false};
    device->SetOperationsSupported(isSupported);
    OH_NNBackend_Model *model = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    BuildAddTopKGraph(model);

    const size_t *devicesID{nullptr};
    const bool *realSupported{nullptr};
    uint32_t opCount;
    uint32_t devicesCount;
    ASSERT_EQ(OH_NNCore_SUCCESS, OH_NNDevice_GetAllDevicesID(&devicesID, &devicesCount));
    size_t targetDevice = devicesID[0];

    OH_NNCore_ReturnCode ret = OH_NNBackend_GetModelAvailableOperations(model, targetDevice, &realSupported, &opCount);
    ASSERT_EQ(OH_NNCore_SUCCESS, ret);
    for (uint32_t i = 0; i < opCount; i++) {
        EXPECT_EQ(realSupported[i], isSupported[i]);
    }
    Free(model);
    device->SetOperationsSupported({true});
}

/**
 * @tc.number : SUB_AI_NNR_Func_North_Model_Combine_0100
 * @tc.name   : 不同model，多线程并发在线构图，构图成功
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNR_Func_North_Model_Combine_0100, Function | MediumTest | Level2)
{
    OH_NNBackend_Model *model1 = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model1);
    OH_NNBackend_Model *model2 = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model2);
    std::thread th1(BuildModel, model1, graphArgs);
    std::thread th2(BuildModel, model2, graphArgs);
    th1.join();
    th2.join();
    Free(model1);
    Free(model2);
}

/**
 * @tc.number : SUB_AI_NNR_Func_North_Model_Combine_0200
 * @tc.name   : 多模型构图，模型构图过程中释放其他模型
 * @tc.desc   : [C- SOFTWARE -0200]
 */
HWTEST_F(HdiNNCoreModel, SUB_AI_NNR_Func_North_Model_Combine_0200, Function | MediumTest | Level1)
{
    OH_NNBackend_Model *model1 = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model1);
    ASSERT_EQ(OH_NNCore_SUCCESS, BuildSingleOpGraph(model1, graphArgs));

    OH_NNBackend_Model *model2 = OH_NNbackend_ConstructModel();
    ASSERT_NE(nullptr, model2);

    std::thread th1(BuildModel, model2, graphArgs);
    std::thread th2(OH_NNBackend_DestroyModel, &model1);
    th1.join();
    th2.join();
    ASSERT_EQ(nullptr, model1);
    Free(model2);
}
