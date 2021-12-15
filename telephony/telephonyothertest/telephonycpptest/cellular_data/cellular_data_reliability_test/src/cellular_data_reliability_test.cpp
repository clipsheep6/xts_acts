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

#include <gtest/gtest.h>
#include "cellular_data_test.h"

#include "cellular_data_types.h"
#include "cellular_data_constant.h"
#include "i_cellular_data_manager.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace Telephony;

/**
 * @tc.number   Telephony_CellularData_IsCellularDataEnabled_0300
 * @tc.name     Loop through the IsCellularDataEnabled() interface 1000 times and check the result
 * @tc.desc     Reliability test
 */
HWTEST_F(CellularDataTest, Telephony_CellularData_IsCellularDataEnabled_0300, Reliability | MediumTest | Level3)
{
    for (int32_t i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_EQ(g_telephonyService->IsCellularDataEnabled(), CELLULAR_DATA_DISABLED);
    }
}

/**
 * @tc.number   Telephony_CellularData_EnableCellularData_0300
 * @tc.name     Loop through the EnableCellularData() interface 1000 times and check the result
 * @tc.desc     Reliability test
 */
HWTEST_F(CellularDataTest, Telephony_CellularData_EnableCellularData_0300, Reliability | MediumTest | Level3)
{
    bool enable = false;
    for (int32_t i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_EQ(g_telephonyService->EnableCellularData(enable), SET_SUCCESS);
    }

}

/**
 * @tc.number   Telephony_CellularData_GetCellularDataState_0300
 * @tc.name     Loop through the GetCellularDataState() interface 1000 times and check the result
 * @tc.desc     Reliability test
 */
HWTEST_F(CellularDataTest, Telephony_CellularData_GetCellularDataState_0300, Reliability | MediumTest | Level3)
{
    for (int32_t i = 0; i < TEST_RUN_TIME_1000; i++) {
        int32_t result = g_telephonyService->GetCellularDataState();
        ASSERT_EQ(result, (int)HDataConnectionState::DATA_STATE_DISCONNECTED);
    }
}

/**
 * @tc.number   Telephony_CellularData_IsCellularDataRoamingEnabled_0400
 * @tc.name     Loop through the IsDataRoamingEnabled() interface 1000 times and check the result
 * @tc.desc     Function test
 */
HWTEST_F(
    CellularDataRoamingTest, Telephony_CellularData_IsCellularDataRoamingEnabled_0400, Function | MediumTest | Level3)
{
    for (int32_t i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_EQ(g_telephonyService->IsCellularDataRoamingEnabled(SLOT_ID), CELLULAR_DATA_ROAMING_DISABLED);
    }
}

/**
 * @tc.number   Telephony_CellularData_EnableCellularDataRoaming_0400
 * @tc.name     Loop through the IsDataRoamingEnabled() interface 1000 times and check the result
 * @tc.desc     Function test
 */
HWTEST_F(
    CellularDataRoamingTest, Telephony_CellularData_EnableCellularDataRoaming_0400, Function | MediumTest | Level3)
{
    for (int32_t i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_EQ(g_telephonyService->EnableCellularDataRoaming(SLOT_ID, false), SET_SUCCESS);
    }
}