/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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

#include "cellular_data_function_test.h"
#include <gtest/gtest.h>

#include "cellular_data_constant.h"
#include "i_cellular_data_manager.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace Telephony;

/**
 * @tc.number   Telephony_CellularData_IsCellularDataEnabled_0100
 * @tc.name     Query the default state of the data switch
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_IsCellularDataEnabled_0100, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_telephonyService->IsCellularDataEnabled(SLOT_ID), false);
}

/**
 * @tc.number   Telephony_CellularData_GetCellularDataState_0100
 * @tc.name     Query the default state of cellular data
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_GetCellularDataState_0100, Function | MediumTest | Level3)
{
    int result = g_telephonyService->GetCellularDataState(SLOT_ID);
    EXPECT_TRUE(result == (int32_t)OHOS::Telephony::CellularData::DATA_STATE_DISCONNECTED ||
                result == (int32_t)OHOS::Telephony::CellularData::DATA_STATE_CONNECTED);

}

/**
 * @tc.number   Telephony_CellularData_EnableCellularData_0100
 * @tc.name     The state of the cellular data switch when the user data switch is turned on
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_EnableCellularData_0100, Function | MediumTest | Level3)
{
    bool enable = true;
    int32_t result = g_telephonyService->EnableCellularData(SLOT_ID, enable);
    EXPECT_EQ(result, 1);
    EXPECT_EQ(g_telephonyService->IsCellularDataEnabled(SLOT_ID), true);
}

/**
 * @tc.number   Telephony_CellularData_GetCellularDataState_0200
 * @tc.name     Verify cellular data status when data switch is on
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_GetCellularDataState_0200, Function | MediumTest | Level3)
{
    bool enable = true;
    EXPECT_EQ(g_telephonyService->EnableCellularData(SLOT_ID, enable), 1);
    int32_t result = g_telephonyService->GetCellularDataState(SLOT_ID);
    EXPECT_TRUE(result == (int32_t)OHOS::Telephony::CellularData::DATA_STATE_DISCONNECTED ||
                result == (int32_t)OHOS::Telephony::CellularData::DATA_STATE_CONNECTED ||
                result == (int32_t)OHOS::Telephony::CellularData::DATA_STATE_CONNECTING);
}

/**
 * @tc.number   Telephony_CellularData_GetCellularDataState_0200
 * @tc.name     Turn off cellular data switch status after opening
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_EnableCellularData_0200, Function | MediumTest | Level3)
{
    bool enable = true;
    int32_t result = g_telephonyService->EnableCellularData(SLOT_ID, enable);
    EXPECT_EQ(result, 1);
    enable = false;
    EXPECT_EQ(g_telephonyService->EnableCellularData(SLOT_ID, enable), 1);
    EXPECT_EQ(g_telephonyService->IsCellularDataEnabled(SLOT_ID), false);
}

/**
 * @tc.number   Telephony_CellularData_GetCellularDataState_0300
 * @tc.name     Turn off the cellular data state after being turned on
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_GetCellularDataState_0300, Function | MediumTest | Level3)
{
    bool enable = true;
    EXPECT_EQ(g_telephonyService->EnableCellularData(SLOT_ID, enable), 1);
    enable = false;
    EXPECT_EQ(g_telephonyService->EnableCellularData(SLOT_ID, enable), 1);
    int32_t result = g_telephonyService->GetCellularDataState(SLOT_ID);
    EXPECT_TRUE(result == (int32_t)OHOS::Telephony::CellularData::DATA_STATE_CONNECTED ||
                result == (int32_t)OHOS::Telephony::CellularData::DATA_STATE_CONNECTING);
}
