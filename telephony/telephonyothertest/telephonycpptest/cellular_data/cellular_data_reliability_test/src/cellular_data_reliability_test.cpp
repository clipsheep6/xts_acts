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
HWTEST_F(CellularDataReliabilityTest, Telephony_CellularData_IsCellularDataEnabled_0200,
         Reliability | MediumTest | Level3)
{
    bool enable = false;
    int32_t result = g_telephonyService->EnableCellularData(SLOT_ID, enable);
    EXPECT_EQ(result, 1);
    for (int32_t i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_EQ(g_telephonyService->IsCellularDataEnabled(SLOT_ID), false);
    }
}

/**
 * @tc.number   Telephony_CellularData_EnableCellularData_0400
 * @tc.name     Turn off cellular data switch for 1000 queries
 * @tc.desc     Reliability test
 */
HWTEST_F(CellularDataReliabilityTest, Telephony_CellularData_EnableCellularData_0400, Reliability | MediumTest | Level3)
{
    bool enable = false;
    for (int32_t i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_EQ(g_telephonyService->EnableCellularData(SLOT_ID, enable), 1);
        ASSERT_EQ(g_telephonyService->IsCellularDataEnabled(SLOT_ID), false);
    }

}

/**
 * @tc.number   Telephony_CellularData_GetCellularDataState_0400
 * @tc.name     Cellular data access has been disconnected 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CellularDataReliabilityTest, Telephony_CellularData_GetCellularDataState_0400,
         Reliability | MediumTest | Level3)
{
    bool enable = false;
    EXPECT_EQ(g_telephonyService->EnableCellularData(SLOT_ID, enable), 1);
    for (int32_t i = 0; i < TEST_RUN_TIME_1000; i++) {
        int32_t result = g_telephonyService->GetCellularDataState(SLOT_ID);
        ASSERT_TRUE(result == (int32_t)OHOS::Telephony::CellularData::DATA_STATE_DISCONNECTED ||
                    result == (int32_t)OHOS::Telephony::CellularData::DATA_STATE_CONNECTED);
    }
}
