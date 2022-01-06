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

#include "cellular_data_reliability_test.h"
#include <gtest/gtest.h>

#include "cellular_data_constant.h"
#include "i_cellular_data_manager.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace Telephony;

/**
 * @tc.number   Telephony_CellularData_IsCellularDataEnabled_0200
 * @tc.name     CellularData Close state for TEST_RUN_TIME_1000 queries
 * @tc.desc     Reliability test
 */
HWTEST_F(CellularDataReliabilityTest, Telephony_CellularData_IsCellularDataEnabled_0400,
        Reliability | MediumTest | Level3)
{
    for (int32_t i = 0; i < TEST_RUN_TIME_10; i++) {
        ASSERT_EQ(g_telephonyService->IsCellularDataEnabled(SLOT_ID), H_CODE_FAILED);
    }
}

/**
 * @tc.number   Telephony_CellularData_EnableCellularData_0400
 * @tc.name     Turn off cellular data switch for 1000 queries
 * @tc.desc     Reliability test
 */
HWTEST_F(CellularDataReliabilityTest, Telephony_CellularData_EnableCellularData_0400, Reliability | MediumTest | Level3)
{
    bool enable = true;
    for (int32_t i = 0; i < TEST_RUN_TIME_10; i++) {
        ASSERT_EQ(g_telephonyService->EnableCellularData(SLOT_ID, enable), H_CODE_SUCCESS);
        ASSERT_EQ(g_telephonyService->IsCellularDataEnabled(SLOT_ID), H_CODE_SUCCESS);
    }

}

/**
 * @tc.number   Telephony_CellularData_GetCellularDataState_0400
 * @tc.name     Cellular data access has been disconnected 10 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CellularDataReliabilityTest, Telephony_CellularData_GetCellularDataState_0400,
         Reliability | MediumTest | Level3)
{
    ASSERT_EQ(g_telephonyService->EnableCellularData(SLOT_ID, enable), H_CODE_SUCCESS);
    for (int32_t i = 0; i < TEST_RUN_TIME_10; i++) {
        int32_t result = g_telephonyService->GetCellularDataState(SLOT_ID);
        ASSERT_TRUE(result == (int32_t)OHOS::Telephony::CellularData::DATA_STATE_DISCONNECTED ||
                    result == (int32_t)OHOS::Telephony::CellularData::DATA_STATE_CONNECTED);
    }
}

/**
 * @tc.number   Telephony_CellularData_GetCellularDataState_0400
 * @tc.name     Call the enableDataroamingEnabled interface, pass the enable parameter to true,
 *              call IsDataRoamingEnabled, and set slotId to 0. The two interfaces are repeatedly called.
 *              The return value of IsDataRoamingEnabled is 1
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_IsDataRoamingEnabled_0100, Function | MediumTest | Level3)
{
    EXPECT_TRUE(g_telephonyService->EnableDataRoaming(SLOT_ID, true), H_CODE_SUCCESS);
    for (int32_t i = 0; i < TEST_RUN_TIME_10; i++) {
        EXPECT_TRUE(g_telephonyService->IsDataRoamingEnabled(SLOT_ID), H_CODE_SUCCESS);
    }
    EXPECT_TRUE(g_telephonyService->EnableDataRoaming(SLOT_ID, false), H_CODE_SUCCESS);
}

/**
 * @tc.number   Telephony_CellularData_EnableDataRoaming_0400
 * @tc.name     The EnableDataRoaming interface is called. The parameter enable is true and slotId is 0 are passed in.
 *              The two interfaces are called repeatedly for 10 times, and the return value is 1
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_EnableDataRoaming_0100, Function | MediumTest | Level3)
{
    for (int32_t i = 0; i < TEST_RUN_TIME_10; i++) {
        EXPECT_TRUE(g_telephonyService->IsDataRoamingEnabled(SLOT_ID), H_CODE_FAILED);
    }
    EXPECT_TRUE(g_telephonyService->EnableDataRoaming(SLOT_ID, false), H_CODE_SUCCESS);
}