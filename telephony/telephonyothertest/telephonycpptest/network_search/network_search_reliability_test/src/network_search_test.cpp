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
 * @tc.number  Telephony_NetworkSearch_GetImei_0600
 * @tc.name    Test the  GetImei interface query function executed 1000 times, each time the data is not false
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetImei_0600, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        std::u16string getImei = GetProxy()->GetImei(SLOT_0);
        std::string str = Str16ToStr8(getImei);
        ASSERT_STRNE(str.c_str(), "");
        int size = str.size();
        ASSERT_EQ(size, NetworkSearchTest::IMEI_SIZE);
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetMeid_0600
 * @tc.name    Test the  GetMeid interface query function executed 1000 times, each time the data is not false
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetMeid_0600, Reliability | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetwork::CORE_NETWORK_MODE_CDMA);
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        std::u16string getMeid = GetProxy()->GetMeid(SLOT_0);
        std::string str = Str16ToStr8(getMeid);
        ASSERT_STRNE(str.c_str(), "");
        int size = str.size();
        ASSERT_EQ(size, NetworkSearchTest::MEID_SIZE);
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetUniqueDeviceId_0600
 * @tc.name    Test the  GetUniqueDeviceId interface query function executed 1000 times, each time the data is not false
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetUniqueDeviceId_0600, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        std::u16string getDeviceId = GetProxy()->GetUniqueDeviceId(SLOT_0);
        std::string str = Str16ToStr8(getDeviceId);
        ASSERT_STRNE(str.c_str(), "");
        int size = str.size();
        ASSERT_TRUE(size == NetworkSearchTest::IMEI_SIZE || size == NetworkSearchTest::MEID_SIZE);
    }
}