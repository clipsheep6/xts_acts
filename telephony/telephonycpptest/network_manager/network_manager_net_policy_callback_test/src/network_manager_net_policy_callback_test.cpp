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

#include "network_manager_net_policy_callback_test.h"

#include <vector>
#include <gtest/gtest.h>
#include <thread>
#include <cstring>
#include <iostream>

#include "uid_policy_test.h"

static const uint32_t UID_NUM_1 = 1;
static const uint32_t UID_NUM_2 = 2;
static const uint32_t UID_NUM_3 = 3;
static const uint32_t UID_NUM_4 = 4;
static const uint32_t UID_NUM_5 = 5;
static const uint32_t UID_NUM_6 = 6;

namespace OHOS {
namespace NetManagerStandard {
using namespace testing::ext;

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetPolicyCallback_0100
 * @tc.name    Register to listen for network Policy changes and change the Policy to NET_POLICY_NONE (UID: 1).
 *             Check that the listening result is NET_POLICY_NONE (UID: 1)
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_RegisterNetPolicyCallback_0100,  Function | MediumTest | Level3)
{
    std::string caseName = "Telephony_NetworkManager_RegisterNetPolicyCallback_0100";
    int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
    if (result == ERR_NONE) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetPolicyByUid(UID_NUM_1, NetUidPolicy::NET_POLICY_NONE);
        sleep(3);
        std::cout << caseName <<NetPolicyCallbackTest::m_uid<< std::endl;
        EXPECT_EQ(NetPolicyCallbackTest::m_uid, UID_NUM_1);
        EXPECT_EQ(NetPolicyCallbackTest::netPolicy, NetUidPolicy::NET_POLICY_NONE);
    } else {
        std::cout << caseName << "RegisterNetPolicyCallback return fail" << std::endl;
        EXPECT_TRUE(false);
    }
    DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
}

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetPolicyCallback_0200
 * @tc.name    Register to listen for network Policy changes and change the Policy to
 *             NET_POLICY_ALLOW_METERED_BACKGROUND (UID: 2). Check that the listening
 *             result is NET_POLICY_ALLOW_METERED_BACKGROUND (UID: 2)
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_RegisterNetPolicyCallback_0200,  Function | MediumTest | Level3)
{
    std::string caseName = "Telephony_NetworkManager_RegisterNetPolicyCallback_0200";
    int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
    if (result == ERR_NONE) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetPolicyByUid(UID_NUM_2,
            NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
        sleep(3);
        EXPECT_EQ(NetPolicyCallbackTest::m_uid, UID_NUM_2);
        EXPECT_EQ(NetPolicyCallbackTest::netPolicy, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
    } else {
        std::cout << caseName << "RegisterNetPolicyCallback return fail" << std::endl;
        EXPECT_TRUE(false);
    }
    DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
}

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetPolicyCallback_0300
 * @tc.name    Register to listen for network Policy changes and change the Policy to
 *             NET_POLICY_TEMPORARY_ALLOW_METERED (UID: 3). Check that the listening
 *             result is NET_POLICY_TEMPORARY_ALLOW_METERED (UID: 3)
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_RegisterNetPolicyCallback_0300,  Function | MediumTest | Level3)
{
    std::string caseName = "Telephony_NetworkManager_RegisterNetPolicyCallback_0300";
    int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
    if (result == ERR_NONE) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetPolicyByUid(UID_NUM_3,
            NetUidPolicy::NET_POLICY_TEMPORARY_ALLOW_METERED);
        sleep(3);
        EXPECT_EQ(NetPolicyCallbackTest::m_uid, UID_NUM_3);
        EXPECT_EQ(NetPolicyCallbackTest::netPolicy, NetUidPolicy::NET_POLICY_TEMPORARY_ALLOW_METERED);
    } else {
        std::cout << caseName << "RegisterNetPolicyCallback return fail" << std::endl;
        EXPECT_TRUE(false);
    }
    DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
}

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetPolicyCallback_0400
 * @tc.name    Register to listen for network Policy changes and change the Policy to
 *             NET_POLICY_REJECT_METERED_BACKGROUND (UID: 4). Check that the listening
 *             result is NET_POLICY_REJECT_METERED_BACKGROUND (UID: 4)
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_RegisterNetPolicyCallback_0400,  Function | MediumTest | Level3)
{
    std::string caseName = "Telephony_NetworkManager_RegisterNetPolicyCallback_0400";
    int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
    if (result == ERR_NONE) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetPolicyByUid(UID_NUM_4,
            NetUidPolicy::NET_POLICY_REJECT_METERED_BACKGROUND);
        sleep(3);
        EXPECT_EQ(NetPolicyCallbackTest::m_uid, UID_NUM_4);
        EXPECT_EQ(NetPolicyCallbackTest::netPolicy, NetUidPolicy::NET_POLICY_REJECT_METERED_BACKGROUND);
    } else {
        std::cout << caseName << "RegisterNetPolicyCallback return fail" << std::endl;
        EXPECT_TRUE(false);
    }
    DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
}

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetPolicyCallback_0500
 * @tc.name    Register to listen for network Policy changes and change the Policy to
 *             NET_POLICY_ALLOW_ALL (UID: 5). Check that the listening
 *             result is NET_POLICY_ALLOW_ALL (UID: 5)
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_RegisterNetPolicyCallback_0500,  Function | MediumTest | Level3)
{
    std::string caseName = "Telephony_NetworkManager_RegisterNetPolicyCallback_0500";
    int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
    if (result == ERR_NONE) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetPolicyByUid(UID_NUM_5, NetUidPolicy::NET_POLICY_ALLOW_ALL);
        sleep(3);
        EXPECT_EQ(NetPolicyCallbackTest::m_uid, UID_NUM_5);
        EXPECT_EQ(NetPolicyCallbackTest::netPolicy, NetUidPolicy::NET_POLICY_ALLOW_ALL);
    } else {
        std::cout << caseName << "RegisterNetPolicyCallback return fail" << std::endl;
        EXPECT_TRUE(false);
    }
    DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
}

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetPolicyCallback_0600
 * @tc.name    Register to listen for network Policy changes and change the Policy to
 *             NET_POLICY_REJECT_ALL (UID: 6). Check that the listening
 *             result is NET_POLICY_REJECT_ALL (UID: 6)
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_RegisterNetPolicyCallback_0600,  Function | MediumTest | Level3)
{
    std::string caseName = "Telephony_NetworkManager_RegisterNetPolicyCallback_0600";
    int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
    if (result == ERR_NONE) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetPolicyByUid(UID_NUM_6,
            NetUidPolicy::NET_POLICY_REJECT_ALL);
        sleep(3);
        EXPECT_EQ(NetPolicyCallbackTest::m_uid, UID_NUM_6);
        EXPECT_EQ(NetPolicyCallbackTest::netPolicy, NetUidPolicy::NET_POLICY_REJECT_ALL);
    } else {
        std::cout << caseName << "RegisterNetPolicyCallback return fail" << std::endl;
        EXPECT_TRUE(false);
    }
    DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
}

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetPolicyCallback_0700
 * @tc.name    Call registration twice to listen for network Policy changes and change
 *             the Policy to NET_POLICY_ALLOW_METERED_BACKGROUND (UID: 1). Check that
 *             the listening result is NET_POLICY_ALLOW_METERED_BACKGROUND (UID: 1)
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_RegisterNetPolicyCallback_0700,  Function | MediumTest | Level3)
{
    std::string caseName = "Telephony_NetworkManager_RegisterNetPolicyCallback_0700";
    DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
    int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
    if (result == ERR_NONE) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetPolicyByUid(UID_NUM_1,
            NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
        sleep(3);
        EXPECT_EQ(NetPolicyCallbackTest::m_uid, UID_NUM_1);
        EXPECT_EQ(NetPolicyCallbackTest::netPolicy, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
    } else {
        std::cout << caseName << "RegisterNetPolicyCallback return fail" << std::endl;
        EXPECT_TRUE(false);
    }
    DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
}

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetPolicyCallback_0800
 * @tc.name    Register to listen for network policy changes, set the policy to
 *             NET_POLICY_ALLOW_METERED_BACKGROUND twice, and the uid is 1.
 *             Check and listen for reporting twice, and the result is policy:
 *             NET_POLICY_ALLOW_METERED_BACKGROUND，UID:1
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_RegisterNetPolicyCallback_0800,  Function | MediumTest | Level3)
{
    std::string caseName = "Telephony_NetworkManager_RegisterNetPolicyCallback_0800";
    int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
    if (result == ERR_NONE) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetPolicyByUid(UID_NUM_1,
            NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
        sleep(3);
        EXPECT_EQ(NetPolicyCallbackTest::m_uid, UID_NUM_1);
        EXPECT_EQ(NetPolicyCallbackTest::netPolicy, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetPolicyByUid(UID_NUM_1,
            NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
        sleep(3);
        EXPECT_EQ(NetPolicyCallbackTest::m_uid, UID_NUM_1);
        EXPECT_EQ(NetPolicyCallbackTest::netPolicy, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
    } else {
        std::cout << caseName << "RegisterNetPolicyCallback return fail" << std::endl;
        EXPECT_TRUE(false);
    }
    DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
}

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetPolicyCallback_0900
 * @tc.name    Call registration to listen for network policy changes. Set the policy to
 *             NET_POLICY_ALLOW_METERED_BACKGROUND and uid are 1 and 2 respectively. Check, listen and report
 *             twice, and the results are policy: NET_POLICY_ALLOW_METERED_BACKGROUND，UID:1;
 *             Policy:NET_POLICY_ALLOW_METERED_BACKGROUND，UID:2
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_RegisterNetPolicyCallback_0900,  Function | MediumTest | Level3)
{
    std::string caseName = "Telephony_NetworkManager_RegisterNetPolicyCallback_0900";
    int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
    if (result == ERR_NONE) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetPolicyByUid(UID_NUM_1,
            NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
        sleep(3);
        EXPECT_EQ(NetPolicyCallbackTest::m_uid, UID_NUM_1);
        EXPECT_EQ(NetPolicyCallbackTest::netPolicy, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetPolicyByUid(UID_NUM_2,
            NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
        sleep(3);
        EXPECT_EQ(NetPolicyCallbackTest::m_uid, UID_NUM_2);
        EXPECT_EQ(NetPolicyCallbackTest::netPolicy, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
    } else {
        std::cout << caseName << "RegisterNetPolicyCallback return fail" << std::endl;
        EXPECT_TRUE(false);
    }
    DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
}

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetPolicyCallback_1000
 * @tc.name    Call registration to listen for network policy changes, and set the two policies as
 *             NET_POLICY_ALLOW_METERED_BACKGROUND、NET_POLICY_REJECT_ALL and uid are 1 respectively.
 *             Check, listen and report twice, and the results are
 *             policy: NET_POLICY_ALLOW_METERED_BACKGROUND，UID:1;Policy:NET_POLICY_REJECT_ALL，UID:1
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_RegisterNetPolicyCallback_1000,  Function | MediumTest | Level3)
{
    std::string caseName = "Telephony_NetworkManager_RegisterNetPolicyCallback_1000";
    int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
    if (result == ERR_NONE) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetPolicyByUid(UID_NUM_1,
            NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
        sleep(3);
        EXPECT_EQ(NetPolicyCallbackTest::m_uid, UID_NUM_1);
        EXPECT_EQ(NetPolicyCallbackTest::netPolicy, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetPolicyByUid(UID_NUM_1,
            NetUidPolicy::NET_POLICY_REJECT_ALL);
        sleep(3);
        EXPECT_EQ(NetPolicyCallbackTest::m_uid, UID_NUM_1);
        EXPECT_EQ(NetPolicyCallbackTest::netPolicy, NetUidPolicy::NET_POLICY_REJECT_ALL);
    } else {
        std::cout << caseName << "RegisterNetPolicyCallback return fail" << std::endl;
        EXPECT_TRUE(false);
    }
    DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
}

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetPolicyCallback_1100
 * @tc.name    Register, cancel and register to listen for network policy changes, and then change the
 *             policy to NET_POLICY_ALLOW_METERED_BACKGROUND, uid is 1, and the check
 *             listening report result is policy:NET_POLICY_ALLOW_METERED_BACKGROUND，UID:1
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_RegisterNetPolicyCallback_1100,  Function | MediumTest | Level3)
{
    std::string caseName = "Telephony_NetworkManager_RegisterNetPolicyCallback_1100";
    DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
    DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
    int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
    if (result == ERR_NONE) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetPolicyByUid(UID_NUM_1,
            NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
        sleep(3);
        EXPECT_EQ(NetPolicyCallbackTest::m_uid, UID_NUM_1);
        EXPECT_EQ(NetPolicyCallbackTest::netPolicy, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
    } else {
        std::cout << caseName << "RegisterNetPolicyCallback return fail" << std::endl;
        EXPECT_TRUE(false);
    }
    DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
}

/*
 * @tc.number  Telephony_NetworkManager_UnregisterNetPolicyCallback_0100
 * @tc.name    APP called RegisterNetPolicyCallback(), and then call UnregisterNetPolicyCallback(),
 *             to check the return value
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_UnregisterNetPolicyCallback_0100,  Function | MediumTest | Level3)
{
    std::string caseName = "Telephony_NetworkManager_UnregisterNetPolicyCallback_0100";
    DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
    int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
    EXPECT_EQ(result, ERR_NONE);
}

/*
 * @tc.number  Telephony_NetworkManager_UnregisterNetPolicyCallback_0200
 * @tc.name    APP called RegisterNetPolicyCallback(), and then call twice UnregisterNetPolicyCallback(),
 *             to check the return value
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_UnregisterNetPolicyCallback_0200,  Function | MediumTest | Level3)
{
    std::string caseName = "Telephony_NetworkManager_UnregisterNetPolicyCallback_0200";
    DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
    int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
    EXPECT_EQ(result, ERR_NONE);
    int32_t ret = DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
    EXPECT_EQ(ret, ERR_NONE);
}
}
}

