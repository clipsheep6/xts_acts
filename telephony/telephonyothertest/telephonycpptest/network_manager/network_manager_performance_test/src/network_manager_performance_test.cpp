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
#include "ethernet_constants.h"
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
static const int32_t TIME_USEC = 1000;
static const int UID_NUM_1 = 1;

namespace OHOS {
namespace NetManagerStandard {
using namespace testing::ext;


/*
 * @tc.number  Telephony_NetworkManager_SetPolicyByUid_1200
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_SetPolicyByUid_1200, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    int count;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetPolicyByUid(
            1, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number  Telephony_NetworkManager_GetPolicyByUid_0700
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_GetPolicyByUid_0700, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    int count;
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetPolicyByUid(5, NetUidPolicy::NET_POLICY_ALLOW_ALL);
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->GetPolicyByUid(5);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number  Telephony_NetworkManager_GetUids_0900
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_GetUids_0900, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();

    DelayedSingleton<NetPolicyClient>::GetInstance()->SetPolicyByUid(UID_NUM_1,
        NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
    int count;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->GetUidsByPolicy(NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number  Telephony_NetworkManager_IsUidNetAccess_1100
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_IsUidNetAccess_1100, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetPolicyByUid(
        UID_NUM_1, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
    int count;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->IsUidNetAccess(UID_NUM_1, true);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number  Telephony_NetworkManager_IsUidNetAccess_1300
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_IsUidNetAccess_1300, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetPolicyByUid(
        UID_NUM_1, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
    int count;
    std::string ifacename = "test";
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->IsUidNetAccess(UID_NUM_1, ifacename);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number  Telephony_NetworkManager_SetIfaceConfig_0300
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_SetIfaceConfig_0300, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    std::string iface = "eth0";
    sptr<InterfaceConfiguration> ic = std::make_unique<InterfaceConfiguration>().release();
    int32_t mode = DHCP;
    ic->mode_ = static_cast<IPSetMode>(mode);
    int count;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        DelayedSingleton<EthernetClient>::GetInstance()->SetIfaceConfig(iface, ic);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number  Telephony_NetworkManager_GetIfaceConfig_0400
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_GetIfaceConfig_0400, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    std::string iface = "eth0";
    int count;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        DelayedSingleton<EthernetClient>::GetInstance()->GetIfaceConfig(iface);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number  Telephony_NetworkManager_IsIfaceActive_0400
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_IsIfaceActive_0400, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    std::string iface = "eth0";
    int count;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        DelayedSingleton<EthernetClient>::GetInstance()->IsIfaceActive(iface);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAllActiveIfaces_0300
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_GetAllActiveIfaces_0300, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    std::string iface = "eth0";
    int count;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        DelayedSingleton<EthernetClient>::GetInstance()->GetAllActiveIfaces();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressesByName_0400
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_GetAddressesByName_0400, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    std::string server = "www.baidu.com";
    std::vector<INetAddr> addrInfo;
    int count;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        DelayedSingleton<DnsResolverClient>::GetInstance()->GetAddressesByName(server, addrInfo);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}
}
}