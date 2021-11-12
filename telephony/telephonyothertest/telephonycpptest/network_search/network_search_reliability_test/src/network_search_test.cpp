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

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;
using namespace OHOS::Telephony::NetworkSearch;
using namespace NetworkSearch;

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_1100
 * @tc.name    Test the  GetPreferredNetwork interface query function executed 1000 times, each time the data is not
 * false
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_1100, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        hasNewData[GET_PREFERRED_NETWORK_MODE] = false;
        bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_0, g_callback);
        ASSERT_TRUE(getPreferredMode);
        LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        ASSERT_EQ(getPreferredNetworkModeResult, CORE_NETWORK_MODE_AUTO);
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_0700
 * @tc.name    Test the  SetPreferredNetwork interface query function executed 1000 times, each time the data is not
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_0700, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        hasNewData[SET_PREFERRED_NETWORK_MODE] = false;
        bool setPreferredMode = GetProxy()->SetPreferredNetwork(SLOT_0, CORE_NETWORK_MODE_LTE, g_callback);
        ASSERT_TRUE(setPreferredMode);
        LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        ASSERT_TRUE(setPreferredNetworkModeResult);
    }
}