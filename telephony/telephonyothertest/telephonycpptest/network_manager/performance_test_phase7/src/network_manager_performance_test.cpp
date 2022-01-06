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
#include <thread>
#include <vector>
#include <cstring>
#include "net_policy_client.h"
#include "net_policy_service.h"
#include "uid_policy_test.h"
#include "network_manager_test.h"
#include "interface_configuration.h"
#include "ethernet_client.h"
#include "dns_resolver_client.h"
#include "inet_addr.h"
#include "time_count_helper.h"
#include "condition_lock.h"

using namespace OHOS;
using namespace OHOS::NetManagerStandard;

static const int TEST_COUNTS_1000 = 1000;
static const int32_t TIME_USEC = 500;
static const int UID_NUM_1 = 1;

namespace OHOS {
namespace NetManagerStandard {
using namespace testing::ext;


/*
 * @tc.number  Telephony_NetworkSearch_GetNrOptionMode_0600
 * @tc.name    The TetherByIface() test was executed for 10 times, and the average output delay was less than 500us.
 * @tc.desc    Performance test
 */
HWTEST_F(WIFITest, Telephony_NetworkSearch_GetNrOptionMode_0600, Performance | MediumTest | Level3)
{
    std::string iface = "wlan0";
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < TEST_RUN_TIME; ++timeNumber) {
        DelayedSingleton<NetTetherClient>::GetInstance()->TetherByIface(iface);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}


/*
 * @tc.number  Telephony_NetworkManager_UntetherByIface_0500
 * @tc.name    The test UntetherByIface() was executed for 10 times, and the average output delay was less than 500us.
 * @tc.desc    Performance test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_UntetherByIface_0500, Performance | MediumTest | Level3)
{
    std::string iface = "wlan0";
    int32_t totalTime = 0;
    for (int32_t timeNumber = 0; timeNumber < TEST_RUN_TIME; ++timeNumber) {
        DelayedSingleton<NetTetherClient>::GetInstance()->TetherByType(TetheringType::TETHERING_WIFI);
        TimeCountHelper timeHelper;
        timeHelper.StartCountUs();
        DelayedSingleton<NetTetherClient>::GetInstance()->UntetherByIface(iface);
        totalTime += timeHelper.GetUseTimeUs();
    }
    int32_t useTimeUs = totalTime / TEST_RUN_TIME;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/*
 * @tc.number  Telephony_NetworkManager_TetherByType_0700
 * @tc.name    The test TetherByType() is executed for 10 times, and the average output delay is less than 500us.
 * @tc.desc    Performance test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_TetherByType_0700, Performance | MediumTest | Level3)
{
    std::string iface = "wlan0";
    int32_t totalTime = 0;
    for (int32_t timeNumber = 0; timeNumber < TEST_RUN_TIME; ++timeNumber) {
        TimeCountHelper timeHelper;
        timeHelper.StartCountUs();
        DelayedSingleton<NetTetherClient>::GetInstance()->TetherByType(TetheringType::TETHERING_WIFI);
        totalTime += timeHelper.GetUseTimeUs();
        DelayedSingleton<NetTetherClient>::GetInstance()->UntetherByIface(iface);
    }
    int32_t useTimeUs = totalTime / TEST_RUN_TIME;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/*
 * @tc.number  Telephony_NetworkManager_UntetherByType_0700
 * @tc.name    The UntetherByType() test is executed for 10 times, and the average output delay is less than 500us.
 * @tc.desc    Performance test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_UntetherByType_0700, Performance | MediumTest | Level3)
{
    int32_t totalTime = 0;
    for (int32_t timeNumber = 0; timeNumber < TEST_RUN_TIME; ++timeNumber) {
        int32_t ret =
            DelayedSingleton<NetTetherClient>::GetInstance()->TetherByType(TetheringType::TETHERING_WIFI);
        EXPECT_EQ(ret, TetherResultCode::TETHERING_NO_ERR);

        TimeCountHelper timeHelper;
        timeHelper.StartCountUs();
        totalTime += timeHelper.GetUseTimeUs();
        int32_t result =
            DelayedSingleton<NetTetherClient>::GetInstance()->UntetherByType(TetheringType::TETHERING_WIFI);
        ASSERT_EQ(result, TetherResultCode::TETHERING_NO_ERR);
    }
    int32_t useTimeUs = totalTime / TEST_RUN_TIME;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/*
 * @tc.number  Telephony_NetworkManager_SetAirplaneMode_0400
 * @tc.name    The test SetAirplaneMode() was executed 10 times with an average output delay of less than 500us.
 * @tc.desc    Performance test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_SetAirplaneMode_0400, Performance | MediumTest | Level3)
{
    bool state = true;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < TEST_RUN_TIME; ++timeNumber) {
        DelayedSingleton<NetConnClient>::GetInstance()->SetAirplaneMode(state);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}
}
}