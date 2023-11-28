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
#include "../nncore_common/nncore_const.h"
#include "../nncore_common/hdi_nncore_utils.h"

using namespace testing::ext;
namespace OHOS::NeuralNetworkCore {
class HdiNNCoreCompilation : public testing::Test {};

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Get_Backend_Number_0100
 * @tc.desc: 获取设备数量，传入参数为空指针，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HDINNCORECOMPILATION, SUB_AI_NNRt_Core_Func_North_Get_Backend_Number_0100, Function | MediumTest | Level1)
{
    TestGetBackendNum(true);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Get_Backend_Number_0200
 * @tc.desc: 获取设备数量，传入参数非空，检查数量
 * @tc.type: FUNC
 */
HWTEST_F(HDINNCORECOMPILATION, SUB_AI_NNRt_Core_Func_North_Get_Backend_Number_0200, Function | MediumTest | Level1)
{
    TestGetBackendNum(false);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Get_Backend_Name_0100
 * @tc.desc: 获取设备名字，未注册backend，获取backend名字，检查size=0，backendName为空
 * @tc.type: FUNC
 */
HWTEST_F(HDINNCORECOMPILATION, SUB_AI_NNRt_Core_Func_North_Get_Backend_Name_0100, Function | MediumTest | Level1)
{
    //未注册，数量为0
    size_t backendNum = -1;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendNum(&backendNum));
    ASSERT_EQ(ZERO, backendNum);
    
    //获取为空
    char* backendName = nullptr;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(ZERO, &backendName));
    ASSERT_EQ(nullptr, backendName);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Get_Backend_Name_0200
 * @tc.desc: 获取设备名字，已注册backend，获取backend名字，检查size>0，backend名字非空
 * @tc.type: FUNC
 */
HWTEST_F(HDINNCORECOMPILATION, SUB_AI_NNRt_Core_Func_North_Get_Backend_Name_0200, Function | MediumTest | Level1)
{
    TestGetBackendNum();

    char* backendName = nullptr;
    TestGetBackendName(&backendName);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Get_Backend_Name_0300
 * @tc.desc: 获取设备名字，传入参数为空指针，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HDINNCORECOMPILATION, SUB_AI_NNRt_Core_Func_North_Get_Backend_Name_0300, Function | MediumTest | Level1)
{
    char* backendName = nullptr;
    TestGetBackendName(&backendName, true);
}
} // namespace OHOS::NeuralNetworkCore