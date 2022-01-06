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
#include <algorithm>
#include "uid_policy_test.h"
#include "network_manager_test.h"
#include "interface_configuration.h"
#include "ethernet_client.h"
#include "dns_resolver_client.h"
#include "inet_addr.h"

using namespace OHOS;
using namespace OHOS::NetManagerStandard;

static const int TEST_COUNTS_1000 = 1000;
static const int UID_NUM_1 = 1;

namespace OHOS {
namespace NetManagerStandard {
using namespace testing::ext;

/*
 * @tc.number  Telephony_NetworkManager_SetUidPolicy_1100
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_SetUidPolicy_1100, Function | MediumTest | Level3)
{
    int count;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(
            1, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
        EXPECT_EQ(result, NetPolicyResultCode::ERR_NONE);
    }
}

/*
 * @tc.number  Telephony_NetworkManager_GetUidPolicy_0600
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_GetUidPolicy_0600, Function | MediumTest | Level3)
{
    int count;
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(5, NetUidPolicy::NET_POLICY_ALLOW_ALL);
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        NetUidPolicy policyResult = DelayedSingleton<NetPolicyClient>::GetInstance()->GetUidPolicy(5);
        EXPECT_EQ(policyResult, NetUidPolicy::NET_POLICY_ALLOW_ALL);
    }
}

/*
 * @tc.number  Telephony_NetworkManager_GetUids_0800
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_GetUids_0800, Function | MediumTest | Level3)
{
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(
        1, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
    int count;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        std::vector<uint32_t> result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetUids(
            NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
        ASSERT_EQ(result.size(), 1);
        EXPECT_EQ(result[0], 1);
    }
}

/*
 * @tc.number  Telephony_NetworkManager_IsUidNetAccess_1000
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_IsUidNetAccess_1000, Function | MediumTest | Level3)
{
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(
        UID_NUM_1, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
    int count;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        bool ret = DelayedSingleton<NetPolicyClient>::GetInstance()->IsUidNetAccess(UID_NUM_1, true);
        ASSERT_TRUE(ret);
    }
}

/*
 * @tc.number  Telephony_NetworkManager_IsUidNetAccess_1200
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_IsUidNetAccess_1200, Function | MediumTest | Level3)
{
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(
        UID_NUM_1, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
    int count;
    std::string ifacename = "test";
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        bool ret = DelayedSingleton<NetPolicyClient>::GetInstance()->IsUidNetAccess(UID_NUM_1, ifacename);
        ASSERT_TRUE(ret);
    }
}

/*
 * @tc.number  Telephony_NetworkManager_SetIfaceConfig_0200
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_SetIfaceConfig_0200, Function | MediumTest | Level3)
{
    std::string iface = "eth0";
    sptr<InterfaceConfiguration> ic = std::make_unique<InterfaceConfiguration>().release();
    int32_t mode = DHCP;
    ic->mode_ = static_cast<IPSetMode>(mode);
    int count;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        int32_t result = DelayedSingleton<EthernetClient>::GetInstance()->SetIfaceConfig(iface, ic);
        ASSERT_TRUE(result == 0);
    }
}

/*
 * @tc.number  Telephony_NetworkManager_GetIfaceConfig_0300
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_GetIfaceConfig_0300, Function | MediumTest | Level3)
{
    std::string iface = "eth0";
    int count;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        sptr<InterfaceConfiguration> icNew = DelayedSingleton<EthernetClient>::GetInstance()->GetIfaceConfig(iface);
        ASSERT_NE(icNew, nullptr);
    }
}

/*
 * @tc.number  Telephony_NetworkManager_IsActivate_0300
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_IsActivate_0300, Function | MediumTest | Level3)
{
    std::string iface = "eth0";
    int count;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        int32_t  result = DelayedSingleton<EthernetClient>::GetInstance()->IsActivate(iface);
        ASSERT_NE(result, -1);
    }
}

/*
 * @tc.number  Telephony_NetworkManager_GetActivateInterfaces_0200
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_GetActivateInterfaces_0200, Function | MediumTest | Level3)
{
    std::string iface = "eth0";
    int count;
    bool flag = false;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        flag = false;
        std::vector<std::string> result = DelayedSingleton<EthernetClient>::GetInstance()->GetActivateInterfaces();
        int size = std::count(result.begin(), result.end(), iface);
        if (size > 0) {
            flag = true;
            continue;
        }
        if (!flag) {
            break;
        }
    }
    ASSERT_TRUE(flag);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressesByName_0300
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_GetAddressesByName_0300, Function | MediumTest | Level3)
{
    std::string server = "www.baidu.com";
    int count;
    bool flag = true;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        std::vector<struct INetAddr> addrInfo;
        int32_t result = DelayedSingleton<DnsResolverClient>::GetInstance()->GetAddressesByName(server, addrInfo);
        if (result != NETMANAGER_SUCCESS) {
            flag = false;
            break;
        }
    }
    ASSERT_TRUE(flag);
}
}
}