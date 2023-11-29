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
#include<vector>

#include "../nncore_common/nncore_const.h"
#include "../nncore_common/hdi_nncore_utils.h"

using namespace testing::ext;
namespace OHOS::NeuralNetworkCore {
class HdiNNCoreTensor : public testing::Test {};

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Create_Tensor_0200
 * @tc.desc: 创建tensor，bankendName合法，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreTensor, SUB_AI_NNRt_Core_Func_North_Create_Tensor_0100, Function | MediumTest | Level1)
{
    OH_NNCore_TensorDesc* tensorDesc = nullptr;
    TestConstructTensorDesc(&tensorDesc);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Destroy_Tensor_0100
 * @tc.desc: 销毁tensor，tensorDesc为空，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreTensor, SUB_AI_NNRt_Core_Func_North_Destroy_Tensor_0100, Function | MediumTest | Level1)
{
    OH_NNCore_TensorDesc* tensorDesc = nullptr;
    ASSERT_NE(OH_NNCORE_SUCCESS, OH_NNCore_DestroyTensorDesc(&tensorDesc));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Destroy_Tensor_0200
 * @tc.desc: 销毁tensor，tensorDesc不为空，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreTensor, SUB_AI_NNRt_Core_Func_North_Destroy_Tensor_0200, Function | MediumTest | Level1)
{
    OH_NNCore_TensorDesc* tensorDesc = nullptr;
    TestConstructTensorDesc(&tensorDesc);

    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyTensorDesc(&tensorDesc));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_SetTensor_DataType_0100
 * @tc.desc: 设置tensor datatype，tensorDesc为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreTensor, SUB_AI_NNRt_Core_Func_North_SetTensor_DataType_0100, Function | MediumTest | Level1)
{
    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_SetTensorDescDataType(nullptr, OH_NNCORE_INT32));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_SetTensor_DataType_0200
 * @tc.desc: 设置tensor datatype，遍历设置支持的datatype
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreTensor, SUB_AI_NNRt_Core_Func_North_SetTensor_DataType_0200, Function | MediumTest | Level1)
{
    OH_NNCore_TensorDesc* tensorDesc = nullptr;
    TestConstructTensorDesc(&tensorDesc);
    for (int dataType = 0; dataType < 13; dataType++) {
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetTensorDescDataType(tensorDesc, static_cast<OH_NNCore_DataType>(dataType)));
    }
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_SetTensor_DataType_0300
 * @tc.desc: 设置tensor datatype，设置不支持的DataType，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreTensor, SUB_AI_NNRt_Core_Func_North_SetTensor_DataType_0300, Function | MediumTest | Level1)
{
    OH_NNCore_TensorDesc* tensorDesc = nullptr;
    TestConstructTensorDesc(&tensorDesc);
    int num = (int)OH_NNCORE_FLOAT64 + 1;

    ASSERT_EQ(OH_NNCORE_INVALID_PARAMETER, OH_NNCore_SetTensorDescDataType(tensorDesc, static_cast<OH_NNCore_DataType>(num)));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_GetTensor_DataType_0100
 * @tc.desc: 获取datatype，tensorDesc为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreTensor, SUB_AI_NNRt_Core_Func_North_GetTensor_DataType_0100, Function | MediumTest | Level1)
{
    OH_NNCore_DataType dataType ;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetTensorDescDataType(nullptr, &dataType));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_GetTensor_DataType_0200
 * @tc.desc: 获取datatype，未设置datatype，获取datatype，返回默认值
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreTensor, SUB_AI_NNRt_Core_Func_North_GetTensor_DataType_0200, Function | MediumTest | Level1)
{
    OH_NNCore_DataType dataType = OH_NNCORE_UINT8;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetTensorDescDataType(nullptr, &dataType));
    ASSERT_EQ(OH_NNCORE_OTHER_TYPES, dataType);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_SetTensor_DescShape_0100
 * @tc.desc: 设置tensorDesc shape类型，tensorDesc为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreTensor, SUB_AI_NNRt_Core_Func_North_SetTensor_DescShape_0100, Function | MediumTest | Level1)
{
    vector<int32_t> shape = {1, 2, 3, 4, 5};
    size_t size = sizeof(shape)/sizeof(int32_t);

    OH_NNCore_TensorDesc* tensorDesc = nullptr;
    TestConstructTensorDesc(&tensorDesc);
    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_SetTensorDescShape(tensorDesc, shape.data(), size));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_SetTensor_DescShape_0200
 * @tc.desc: 设置tensorDesc shape类型，设置shape为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreTensor, SUB_AI_NNRt_Core_Func_North_SetTensor_DescShape_0200, Function | MediumTest | Level1)
{
    int32_t *shape = nullptr;
    size_t size = 5;

    OH_NNCore_TensorDesc* tensorDesc = nullptr;
    TestConstructTensorDesc(&tensorDesc);
    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_SetTensorDescShape(tensorDesc, shape, size));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_SetTensor_DescShape_0300
 * @tc.desc: 设置tensorDesc shape类型，设置shapeNum为0，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreTensor, SUB_AI_NNRt_Core_Func_North_SetTensor_DescShape_0300, Function | MediumTest | Level1)
{
    vector<int32_t> shape = {1, 2, 3, 4, 5};
    size_t size = ZERO;

    OH_NNCore_TensorDesc* tensorDesc = nullptr;
    TestConstructTensorDesc(&tensorDesc);
    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_SetTensorDescShape(tensorDesc, shape.data(), size));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_GetTensor_DescShape_0100
 * @tc.desc: 获取tensorDesc shape类型，tensorDesc为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreTensor, SUB_AI_NNRt_Core_Func_North_GetTensor_DescShape_0100, Function | MediumTest | Level1)
{   
    int32_t *shape = nullptr;
    size_t size = ZERO;
    OH_NNCore_TensorDesc* tensorDesc = nullptr;
   
    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_GetTensorDescShape(tensorDesc, &shape, &size));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_GetTensor_DescShape_0200
 * @tc.desc: 获取tensorDesc shape类型，未设置DescShape，返回默认值
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreTensor, SUB_AI_NNRt_Core_Func_North_GetTensor_DescShape_0200, Function | MediumTest | Level1)
{
    int32_t *shape = nullptr;
    OH_NNCore_TensorDesc* tensorDesc = nullptr;
    TestConstructTensorDesc(&tensorDesc);
    size_t size = 0;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetTensorDescShape(tensorDesc, &shape, &size));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_GetTensor_DescShape_0300
 * @tc.desc: 获取tensorDesc shape类型，合法设置，检查返回结果正确
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreTensor, SUB_AI_NNRt_Core_Func_North_GetTensor_DescShape_0300, Function | MediumTest | Level1)
{
    int32_t *shape = nullptr;
    vector<int32_t> shapeBegin = {1, 2, 3, 4, 5};
    size_t sizeBegin = shapeBegin.size();
    size_t size = sizeBegin;

    OH_NNCore_TensorDesc* tensorDesc = nullptr;
    TestConstructTensorDesc(&tensorDesc);
    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_SetTensorDescShape(tensorDesc, shapeBegin.data(), sizeBegin));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetTensorDescShape(tensorDesc, &shape, &size));
    ASSERT_EQ(sizeBegin, size);
    for(size_t i = 0; i < size; i++) {
        ASSERT_EQ(shapeBegin[i], shape[i]);
    }
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_SetTensor_DescFormat_0100
 * @tc.desc: 设置tensorDesc format，tensorDesc为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreTensor, SUB_AI_NNRt_Core_Func_North_SetTensor_DescFormat_0100, Function | MediumTest | Level1)
{
    OH_NNCore_Format format = OH_NNCORE_FORMAT_NCHW;
    OH_NNCore_TensorDesc *tensorDesc = nullptr;
    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_SetTensorDescFormat(tensorDesc, format));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_SetTensor_DescFormat_0200
 * @tc.desc: 设置tensorDesc format，遍历设置OH_NNCore_Format，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreTensor, SUB_AI_NNRt_Core_Func_North_SetTensor_DescFormat_0200, Function | MediumTest | Level1)
{
    OH_NNCore_Format format = OH_NNCORE_FORMAT_NCHW;
    OH_NNCore_TensorDesc *tensorDesc = nullptr;
    TestConstructTensorDesc(&tensorDesc);

    ASSERT_EQ(OH_NNCORE_SUCCESS , OH_NNCore_SetTensorDescFormat(tensorDesc, format));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_GetTensor_DescFormat_0100
 * @tc.desc: 获取tensorDesc format，tensorDesc为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreTensor, SUB_AI_NNRt_Core_Func_North_GetTensor_DescFormat_0100, Function | MediumTest | Level1)
{
    OH_NNCore_Format format = OH_NNCORE_FORMAT_NONE;
    OH_NNCore_TensorDesc *tensorDesc = nullptr;

    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_GetTensorDescFormat(tensorDesc, &format));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_GetTensor_DescFormat_0200
 * @tc.desc: 获取tensorDesc format，未设置format，返回默认值
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreTensor, SUB_AI_NNRt_Core_Func_North_GetTensor_DescFormat_0200, Function | MediumTest | Level1)
{
    OH_NNCore_Format format = OH_NNCORE_FORMAT_NONE;
    OH_NNCore_TensorDesc *tensorDesc = nullptr;
    TestConstructTensorDesc(&tensorDesc);

    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_GetTensorDescFormat(tensorDesc, &format));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_GetTensor_DescFormat_0300
 * @tc.desc: 获取tensorDesc format，合法获取，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreTensor, SUB_AI_NNRt_Core_Func_North_GetTensor_DescFormat_0300, Function | MediumTest | Level1)
{
    OH_NNCore_Format formatBegin = OH_NNCORE_FORMAT_NCHW;
    OH_NNCore_Format format = OH_NNCORE_FORMAT_NONE;
    OH_NNCore_TensorDesc *tensorDesc = nullptr;
    TestConstructTensorDesc(&tensorDesc);

    ASSERT_EQ(OH_NNCORE_SUCCESS , OH_NNCore_SetTensorDescFormat(tensorDesc, formatBegin));
    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_GetTensorDescFormat(tensorDesc, &format));
    ASSERT_EQ(formatBegin, format);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_GetTensor_Element_Number_0100
 * @tc.desc: 获取tensorDesc元素个数，tensorDesc为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreTensor, SUB_AI_NNRt_Core_Func_North_GetTensor_Element_Number_0100, Function | MediumTest | Level1)
{
    OH_NNCore_TensorDesc *tensorDesc = nullptr;
    size_t elementNum = -1;
    ASSERT_EQ(OH_NNCORE_INVALID_PARAMETER, OH_NNCore_GetTensorDescElementNum(tensorDesc, &elementNum));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_GetTensor_Element_Number_0200
 * @tc.desc: 获取tensorDesc元素个数，合法获取，设置多个元素，检查元素个数正确
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreTensor, SUB_AI_NNRt_Core_Func_North_GetTensor_Element_Number_0200, Function | MediumTest | Level1)
{
    OH_NNCore_TensorDesc *tensorDesc = nullptr;
    TestConstructTensorDesc(&tensorDesc);
    vector<int32_t> shape = {1, 2, 3, 4, 5};
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetTensorDescShape(tensorDesc, shape.data(), shape.size()));
    size_t elementNum = -1;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetTensorDescElementNum(tensorDesc, &elementNum));
    ASSERT_LT(ZERO, elementNum);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_GetTensor_Element_Number_0300
 * @tc.desc: 获取tensorDesc元素个数，合法获取，不设置tensorDesc，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreTensor, SUB_AI_NNRt_Core_Func_North_GetTensor_Element_Number_0300, Function | MediumTest | Level1)
{   
    OH_NNCore_TensorDesc *tensorDesc = nullptr;
    TestConstructTensorDesc(&tensorDesc);
    size_t elementNum = -1;
    ASSERT_EQ(OH_NNCORE_INVALID_PARAMETER, OH_NNCore_GetTensorDescElementNum(tensorDesc, &elementNum));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_GetTensor_Byte_Size_0100
 * @tc.desc: 获取tensorDesc字节长度，tensorDesc为空，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreTensor, SUB_AI_NNRt_Core_Func_North_GetTensor_Byte_Size_0100, Function | MediumTest | Level1)
{
    OH_NNCore_TensorDesc *tensorDesc = nullptr;
    size_t byteSize = -1;
    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_GetTensorDescByteSize(tensorDesc, &byteSize));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_GetTensor_Byte_Size_0200
 * @tc.desc: 获取tensorDesc字节长度，合法获取，设置多个元素，检查字节长度正确
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreTensor, SUB_AI_NNRt_Core_Func_North_GetTensor_Byte_Size_0200, Function | MediumTest | Level1)
{
    size_t cycleNum = 5;
    for(size_t i = 0; i < cycleNum; i++) {
        OH_NNCore_TensorDesc *tensorDesc = nullptr;
        TestConstructTensorDesc(&tensorDesc);
        vector<int32_t> shape = {1, 2, 3, 4, 5};
        size_t size = 5;
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetTensorDescShape(tensorDesc, shape.data(), size));
        size_t byteSize = -1;
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetTensorDescByteSize(tensorDesc, &byteSize));
        ASSERT_LT(ZERO, byteSize);
    }
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_GetTensor_Byte_Size_0300
 * @tc.desc: 获取tensorDesc字节长度，合法获取，不设置tensorDesc，检查字节长度为0
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreTensor, SUB_AI_NNRt_Core_Func_North_GetTensor_Byte_Size_0300, Function | MediumTest | Level1)
{
    OH_NNCore_TensorDesc *tensorDesc = nullptr;
    TestConstructTensorDesc(&tensorDesc);
    vector<int32_t> shape = {1, 2, 3, 4, 5};
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetTensorDescShape(tensorDesc, shape.data(), shape.size()));
    size_t byteSize = 0;
    ASSERT_EQ(OH_NNCORE_INVALID_PARAMETER, OH_NNCore_GetTensorDescByteSize(tensorDesc, &byteSize));
    ASSERT_EQ(ZERO, byteSize);
}
} // namespace OHOS::NeuralNetworkCore