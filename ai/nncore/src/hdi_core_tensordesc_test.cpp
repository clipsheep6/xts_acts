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

#include "../nncore_common/nncore_const.h"
#include "../nncore_common/hdi_nncore_utils.h"

using namespace testing::ext;
namespace OHOS::NeuralNetworkCore {
class HdiNNTessorDesc : public testing::Test {};

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Set_NNTensor_Desc_Datatype_0100
 * @tc.desc: dataType + 1
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNTessorDesc, SUB_AI_NNRt_Core_Func_North_Set_NNTensor_Desc_Datatype_0100, Function | MediumTest | Level1)
{
    OH_NNCore_TensorDesc* tensorDesc = nullptr;
    TestConstructTensorDesc(&tensorDesc);

    int dataType = static_cast<int>(OH_NNCORE_OTHER_TYPES) + 1;
    ASSERT_EQ(OH_NNCORE_INVALID_PARAMETER, OH_NNCore_SetTensorDescDataType(tensorDesc, static_cast<OH_NNCore_DataType>(dataType)));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Set_NNTensor_Desc_Datatype_0200
 * @tc.desc: dataType - 1
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNTessorDesc, SUB_AI_NNRt_Core_Func_North_Set_NNTensor_Desc_Datatype_0200, Function | MediumTest | Level1)
{
    OH_NNCore_TensorDesc* tensorDesc = nullptr;
    TestConstructTensorDesc(&tensorDesc);

    int dataType = static_cast<int>(OH_NNCORE_UINT8) - 1;
    ASSERT_EQ(OH_NNCORE_INVALID_PARAMETER, OH_NNCore_SetTensorDescDataType(tensorDesc, static_cast<OH_NNCore_DataType>(dataType)));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Set_NNTensor_Desc_format_0100
 * @tc.desc: format - 1
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNTessorDesc, SUB_AI_NNRt_Core_Func_North_Set_NNTensor_Desc_format_0100, Function | MediumTest | Level1)
{
    OH_NNCore_TensorDesc* tensorDesc = nullptr;
    TestConstructTensorDesc(&tensorDesc);

    int format = static_cast<int>(OH_NNCORE_FORMAT_NCHW) - 1;
    ASSERT_EQ(OH_NNCORE_INVALID_PARAMETER, OH_NNCore_SetTensorDescFormat(tensorDesc, static_cast<OH_NNCore_Format>(format)));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Set_NNTensor_Desc_format_0200
 * @tc.desc: format + 1
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNTessorDesc, SUB_AI_NNRt_Core_Func_North_Set_NNTensor_Desc_format_0200, Function | MediumTest | Level1)
{
    OH_NNCore_TensorDesc* tensorDesc = nullptr;
    TestConstructTensorDesc(&tensorDesc);

    int format = static_cast<int>(OH_NNCORE_ND) + 1;
    ASSERT_EQ(OH_NNCORE_INVALID_PARAMETER, OH_NNCore_SetTensorDescFormat(tensorDesc, static_cast<OH_NNCore_Format>(format)));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Get_NNTensor_Desc_Byte_Size_0100
 * @tc.desc: 不设置，shape为空，OH_NNCore_GetTensorDescByteSize报错
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNTessorDesc, SUB_AI_NNRt_Core_Func_North_Get_NNTensor_Desc_Byte_Size_0100, Function | MediumTest | Level1)
{
    OH_NNCore_TensorDesc *tensorDesc = nullptr;
    TestConstructTensorDesc(&tensorDesc);

    size_t byteSize = -1;
    ASSERT_EQ(OH_NNCORE_INVALID_PARAMETER, OH_NNCore_GetTensorDescByteSize(tensorDesc, &byteSize));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Set_NNTensor_Desc_Type_0100
 * @tc.desc: 设置tensor type
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNTessorDesc, SUB_AI_NNRt_Core_Func_North_Set_NNTensor_Desc_Type_0100, Function | MediumTest | Level1)
{
    OH_NNCore_TensorDesc *tensorDesc = nullptr;
    TestConstructTensorDesc(&tensorDesc);

    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetTensorDescDataType(tensorDesc, OH_NNCORE_INT32));
}
} // namespace OHOS::NeuralNetworkCore