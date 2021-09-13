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

#include "cellular_data_performance_test.h"
#include <gtest/gtest.h>

#include "cellular_data_constant.h"
#include "i_cellular_data_manager.h"
#include "log.h"
#include "time_count_helper.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace Telephony;

/**
 * @tc.number   Telephony_CellularData_IsCellularDataEnabled_0300
 * @tc.name     IsCellularDataEnabled Perform an average of 1000 Performance test
 * @tc.desc     Performance test
 */
HWTEST_F(CellularDataPerformanceTest, Telephony_CellularData_IsCellularDataEnabled_0300,
         Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t i = 0; i < TEST_RUN_TIME_1000; i++) {
        g_telephonyService->IsCellularDataEnabled(SLOT_ID);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOGE("use %d us", useTimeUs);
    EXPECT_GE(TEST_USEC_500, useTimeUs);
}

/**
 * @tc.number   Telephony_CellularData_EnableCellularData_0400
 * @tc.name     EnableCellularData Perform an average of 1000 Performance test
 * @tc.desc     Performance test
 */
HWTEST_F(CellularDataPerformanceTest, Telephony_CellularData_EnableCellularData_0400, Performance | MediumTest | Level3)
{
    bool enable = true;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t i = 0; i < TEST_RUN_TIME_1000; i++) {
        g_telephonyService->EnableCellularData(SLOT_ID, enable);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOGE("use %d us", useTimeUs);
    EXPECT_GE(TEST_USEC_500, useTimeUs);
}

/**
 * @tc.number   Telephony_CellularData_GetCellularDataState_0500
 * @tc.name     GetCellularDataState Perform an average of 1000 Performance test
 * @tc.desc     Performance test
 */
HWTEST_F(CellularDataPerformanceTest, Telephony_CellularData_GetCellularDataState_0500,
         Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t i = 0; i < TEST_RUN_TIME_1000; i++) {
        g_telephonyService->GetCellularDataState(SLOT_ID);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOGE("use %d us", useTimeUs);
    EXPECT_GE(TEST_USEC_500, useTimeUs);
}

