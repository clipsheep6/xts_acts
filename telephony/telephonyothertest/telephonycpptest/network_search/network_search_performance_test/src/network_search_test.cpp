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

#define NETWORSEARCH_FUNCTION_TEST
#include "network_search_test.h"
#include "network_search_state.h"
#include "time_count_helper.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;
using namespace OHOS::Telephony::NetworkSearch;
using namespace NetworkSearch;

/*
 * @tc.number  Telephony_NetworkSearch_GetCellInfoList_0700
 * @tc.name    Test GetCellInfoList interface query function is executed 1000 times, the output delay is less than 500ms
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCellInfoList_0700, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        GetProxy()->GetCellInfoList(SLOT_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/*
 * @tc.number  Telephony_NetworkSearch_SendUpdateCellLocationRequest_0400
 * @tc.name    Test SendUpdateCellLocationRequest interface query function is executed 1000 times, the output delay is
 *             less than 500ms
 * @tc.desc    Performance test
 */
HWTEST_F(
    NetworkSearchTest, Telephony_NetworkSearch_SendUpdateCellLocationRequest_0400, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        GetProxy()->SendUpdateCellLocationRequest();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}