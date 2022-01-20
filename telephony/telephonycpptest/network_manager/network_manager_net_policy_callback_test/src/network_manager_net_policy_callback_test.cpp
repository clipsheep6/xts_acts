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

#include <stdio.h>
#include <vector>
#include <iostream>

#include "i_net_policy_callback.h"
#include "i_net_policy_service.h"
#include "net_policy_cellular_policy.h"
#include "net_policy_constants.h"
#include "net_policy_client.h"
#include "net_policy_quota_policy.h"
#include "net_policy_callback_test.h"

#include "network_manager_test.h"
#include "ethernet_client.h"
#include "dns_resolver_client.h"
#include "static_configuration.h"
#include "inet_addr.h"

#include "uid_policy_test.h"

#include <gtest/gtest.h>
#include <thread>
#include <cstring>
#include "net_policy_service.h"
#include "interface_configuration.h"
#include "log.h"
#include "time_count_helper.h"
#include "condition_lock.h"

// static const int UID_NUM_1 = 1;
// static const int UID_NUM_2 = 2;
// static const int UID_NUM_3 = 3;
// static const int UID_NUM_4 = 4;
// static const int UID_NUM_5 = 5;
// static const int UID_NUM_6 = 6;

// static const int  TEST_COUNTS_1000 = 1000;
// static const int TIME_USEC = 500;

namespace OHOS {
namespace NetManagerStandard {
using namespace testing::ext;

//sptr<INetPolicyCallback> callback = (std::make_unique<NetPolicyCallbackTest>()).release();

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetPolicyCallback_0100
 * @tc.name    APP called RegisterNetPolicyCallback (), call SetUidPolicy () sets the Policy to:
 *                          NET_POLICY_NONE, UID is 1, trigger NetUidPolicyChanged, check the return value  
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_RegisterNetPolicyCallback_0100,  Function | MediumTest | Level3)
{
    std::string caseName= "Telephony_NetworkManager_RegisterNetPolicyCallback_0100";
    int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
     if (result == ERR_NONE) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy( UID_NUM_1, NetUidPolicy::NET_POLICY_NONE);
        sleep(3);
        std::cout <<  caseName <<NetPolicyCallbackTest::m_uid<< std::endl;
        EXPECT_EQ(NetPolicyCallbackTest::m_uid, UID_NUM_1);
        EXPECT_EQ(NetPolicyCallbackTest::netPolicy, NetUidPolicy::NET_POLICY_NONE);
    } else {
        std::cout <<  caseName << "RegisterNetPolicyCallback return fail" << std::endl;
        EXPECT_TRUE(false);
    }
    DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
}

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetPolicyCallback_0200
 * @tc.name    APP called RegisterNetPolicyCallback (), call SetUidPolicy () sets the Policy to:      
 *                          NET_POLICY_ALLOW_METERED_BACKGROUND, UID is 2, trigger NetUidPolicyChanged, check the return value 
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_RegisterNetPolicyCallback_0200,  Function | MediumTest | Level3)
{
    std::string caseName=  "Telephony_NetworkManager_RegisterNetPolicyCallback_0200";
    int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
     if (result == ERR_NONE) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy( UID_NUM_2, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
        sleep(3);
        EXPECT_EQ(NetPolicyCallbackTest::m_uid, UID_NUM_2);
        EXPECT_EQ(NetPolicyCallbackTest::netPolicy, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
    } else {
        std::cout <<  caseName << "RegisterNetPolicyCallback return fail" << std::endl;
        EXPECT_TRUE(false);
    }
    DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
}

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetPolicyCallback_0300
 * @tc.name    APP called RegisterNetPolicyCallback (), call SetUidPolicy () sets the Policy to:            
 *                          NET_POLICY_TEMPORARY_ALLOW_METERED, UID is 3, trigger NetUidPolicyChanged, check the return value 
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_RegisterNetPolicyCallback_0300,  Function | MediumTest | Level3)
{
    std::string caseName=  "Telephony_NetworkManager_RegisterNetPolicyCallback_0300";
    int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
     if (result == ERR_NONE) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy( UID_NUM_3, NetUidPolicy:: NET_POLICY_TEMPORARY_ALLOW_METERED);
        sleep(3);
        EXPECT_EQ(NetPolicyCallbackTest::m_uid, UID_NUM_3);
        EXPECT_EQ(NetPolicyCallbackTest::netPolicy, NetUidPolicy::NET_POLICY_TEMPORARY_ALLOW_METERED);
    } else {
        std::cout <<  caseName << "RegisterNetPolicyCallback return fail" << std::endl;
        EXPECT_TRUE(false);
    }
    DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
}

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetPolicyCallback_0400
 * @tc.name    APP called RegisterNetPolicyCallback (), call SetUidPolicy () sets the Policy to:   
 *                          NET_POLICY_REJECT_METERED_BACKGROUND, UID is 4, trigger NetUidPolicyChanged, check the return value 
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_RegisterNetPolicyCallback_0400,  Function | MediumTest | Level3)
{
    std::string caseName=  "Telephony_NetworkManager_RegisterNetPolicyCallback_0400";
    int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
     if (result == ERR_NONE) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy( UID_NUM_4, NetUidPolicy::NET_POLICY_REJECT_METERED_BACKGROUND);
        sleep(3);
        EXPECT_EQ(NetPolicyCallbackTest::m_uid, UID_NUM_4);
        EXPECT_EQ(NetPolicyCallbackTest::netPolicy, NetUidPolicy::NET_POLICY_REJECT_METERED_BACKGROUND);
    } else {
        std::cout <<  caseName << "RegisterNetPolicyCallback return fail" << std::endl;
        EXPECT_TRUE(false);
    }
    DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
}

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetPolicyCallback_0500
 * @tc.name    APP called RegisterNetPolicyCallback (), call SetUidPolicy () sets the Policy to:        
 *                          NET_POLICY_ALLOW_ALL, UID is 5, trigger NetUidPolicyChanged, check the return value 
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_RegisterNetPolicyCallback_0500,  Function | MediumTest | Level3)
{
    std::string caseName=  "Telephony_NetworkManager_RegisterNetPolicyCallback_0500";
    int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
     if (result == ERR_NONE) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy( UID_NUM_5, NetUidPolicy::NET_POLICY_ALLOW_ALL);
        sleep(3);
        EXPECT_EQ(NetPolicyCallbackTest::m_uid, UID_NUM_5);
        EXPECT_EQ(NetPolicyCallbackTest::netPolicy, NetUidPolicy::NET_POLICY_ALLOW_ALL);
    } else {
        std::cout <<  caseName << "RegisterNetPolicyCallback return fail" << std::endl;
        EXPECT_TRUE(false);
    }
    DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
}

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetPolicyCallback_0600
 * @tc.name    APP called RegisterNetPolicyCallback (), call SetUidPolicy () sets the Policy to:             
 *                          NET_POLICY_REJECT_ALL, UID is 6, trigger NetUidPolicyChanged, check the return value 
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_RegisterNetPolicyCallback_0600,  Function | MediumTest | Level3)
{
    std::string caseName=  "Telephony_NetworkManager_RegisterNetPolicyCallback_0600";
    int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
     if (result == ERR_NONE) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy( UID_NUM_6, NetUidPolicy::NET_POLICY_REJECT_ALL);
        sleep(3);
        EXPECT_EQ(NetPolicyCallbackTest::m_uid, UID_NUM_6);
        EXPECT_EQ(NetPolicyCallbackTest::netPolicy, NetUidPolicy::NET_POLICY_REJECT_ALL);
    } else {
        std::cout <<  caseName << "RegisterNetPolicyCallback return fail" << std::endl;
        EXPECT_TRUE(false);
    }
    DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
}

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetPolicyCallback_0700
 * @tc.name    APP called twice RegisterNetPolicyCallback (), call SetUidPolicy () sets the Policy to:  
 *                          NET_POLICY_ALLOW_METERED_BACKGROUND, UID is 1,  Trigger NetUidPolicyChanged to check the return value  
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_RegisterNetPolicyCallback_0700,  Function | MediumTest | Level3)
{
    std::string caseName=  "Telephony_NetworkManager_RegisterNetPolicyCallback_0700";
    DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
    int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
     if (result == ERR_NONE) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy( UID_NUM_1, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
        sleep(3);
        EXPECT_EQ(NetPolicyCallbackTest::m_uid, UID_NUM_1);
        EXPECT_EQ(NetPolicyCallbackTest::netPolicy, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
    } else {
        std::cout <<  caseName << "RegisterNetPolicyCallback return fail" << std::endl;
        EXPECT_TRUE(false);
    }
    DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
}

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetPolicyCallback_0800
 * @tc.name    APP called RegisterNetPolicyCallback (), call twice SetUidPolicy () sets the Policy to: 
 *                         NET_POLICY_ALLOW_METERED_BACKGROUND, UID is 1,  Both times NetUidPolicyChanged is triggered to check the 
 *                          return value
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_RegisterNetPolicyCallback_0800,  Function | MediumTest | Level3)
{
    std::string caseName=  "Telephony_NetworkManager_RegisterNetPolicyCallback_0800";
    int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
     if (result == ERR_NONE) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy( UID_NUM_1, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
        sleep(3);
        EXPECT_EQ(NetPolicyCallbackTest::m_uid, UID_NUM_1);
        EXPECT_EQ(NetPolicyCallbackTest::netPolicy, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy( UID_NUM_1, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
        sleep(3);
        EXPECT_EQ(NetPolicyCallbackTest::m_uid, UID_NUM_1);
        EXPECT_EQ(NetPolicyCallbackTest::netPolicy, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
    } else {
        std::cout <<  caseName << "RegisterNetPolicyCallback return fail" << std::endl;
        EXPECT_TRUE(false);
    }
    DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
}

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetPolicyCallback_0900
 * @tc.name    APP called RegisterNetPolicyCallback (), call twice SetUidPolicy () sets the Policy to: 
 *                          NET_POLICY_ALLOW_METERED_BACKGROUND, UID respectively 1, 2,  Both times NetUidPolicyChanged is triggered 
 *                           to check the return value
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_RegisterNetPolicyCallback_0900,  Function | MediumTest | Level3)
{
    std::string caseName=  "Telephony_NetworkManager_RegisterNetPolicyCallback_0900";
    int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
     if (result == ERR_NONE) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy( UID_NUM_1, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
        sleep(3);
        EXPECT_EQ(NetPolicyCallbackTest::m_uid, UID_NUM_1);
        EXPECT_EQ(NetPolicyCallbackTest::netPolicy, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy( UID_NUM_2, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
        sleep(3);
        EXPECT_EQ(NetPolicyCallbackTest::m_uid, UID_NUM_2);
        EXPECT_EQ(NetPolicyCallbackTest::netPolicy, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
    } else {
        std::cout <<  caseName << "RegisterNetPolicyCallback return fail" << std::endl;
        EXPECT_TRUE(false);
    }
    DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
}

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetPolicyCallback_1000
 * @tc.name    APP called RegisterNetPolicyCallback (),  Call SetUidPolicy() twice and set the Policy to
 *                          NET_POLICY_ALLOW_METERED_BACKGROUND and NET_POLICY_REJECT_ALL. UID is 1.  Both times 
 *                          NetUidPolicyChanged is triggered to check the return value
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_RegisterNetPolicyCallback_1000,  Function | MediumTest | Level3)
{
    std::string caseName=  "Telephony_NetworkManager_RegisterNetPolicyCallback_1000";
    int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
     if (result == ERR_NONE) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy( UID_NUM_1, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
         sleep(3);
        EXPECT_EQ(NetPolicyCallbackTest::m_uid, UID_NUM_1);
        EXPECT_EQ(NetPolicyCallbackTest::netPolicy, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy( UID_NUM_1, NetUidPolicy::NET_POLICY_REJECT_ALL);
        sleep(3);
        EXPECT_EQ(NetPolicyCallbackTest::m_uid, UID_NUM_1);
        EXPECT_EQ(NetPolicyCallbackTest::netPolicy, NetUidPolicy::NET_POLICY_REJECT_ALL);
    } else {
        std::cout <<  caseName << "RegisterNetPolicyCallback return fail" << std::endl;
        EXPECT_TRUE(false);
    }
    DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
}

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetPolicyCallback_1100
 * @tc.name    APP called RegisterNetPolicyCallback (), UnregisterNetPolicyCallback () call again 
 *                          RegisterNetPolicyCallback (),  Call SetUidPolicy() to set Policy to NET_POLICY_ALLOW_METERED_BACKGROUND, 
 *                          UID to 1, and trigger NetUidPolicyChanged to check the return value  
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_RegisterNetPolicyCallback_1100,  Function | MediumTest | Level3)
{
    std::string caseName=  "Telephony_NetworkManager_RegisterNetPolicyCallback_1100";
    DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
    DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
    int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
     if (result == ERR_NONE) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy( UID_NUM_1, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
         sleep(3);
        EXPECT_EQ(NetPolicyCallbackTest::m_uid, UID_NUM_1);
        EXPECT_EQ(NetPolicyCallbackTest::netPolicy, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
    } else {
        std::cout <<  caseName << "RegisterNetPolicyCallback return fail" << std::endl;
        EXPECT_TRUE(false);
    }
    DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
}

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetPolicyCallback_1200
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_RegisterNetPolicyCallback_1200, Function | MediumTest | Level3)
{
    int count;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
         int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
        EXPECT_EQ(result, ERR_NONE);
    }
}

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetPolicyCallback_1300
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest,Telephony_NetworkManager_RegisterNetPolicyCallback_1300, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    int count;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number  Telephony_NetworkManager_UnregisterNetPolicyCallback_0100
 * @tc.name    APP called RegisterNetPolicyCallback (), and then call UnregisterNetPolicyCallback (), to check the return value
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_UnregisterNetPolicyCallback_0100,  Function | MediumTest | Level3)
{
    std::string caseName=  "Telephony_NetworkManager_UnregisterNetPolicyCallback_0100";
    DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
    int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
    EXPECT_EQ(result, ERR_NONE);
}

/*
 * @tc.number  Telephony_NetworkManager_UnregisterNetPolicyCallback_0200
 * @tc.name    APP called RegisterNetPolicyCallback (), and then call twice UnregisterNetPolicyCallback (), to check the return value
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_UnregisterNetPolicyCallback_0200,  Function | MediumTest | Level3)
{
    std::string caseName=  "Telephony_NetworkManager_UnregisterNetPolicyCallback_0200";
    DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
    int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
    EXPECT_EQ(result, ERR_NONE);
    int32_t ret = DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
    EXPECT_EQ(ret, ERR_NONE);
}

/*
 * @tc.number  Telephony_NetworkManager_UnregisterNetPolicyCallback_0300
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_UnregisterNetPolicyCallback_0300, Function | MediumTest | Level3)
{
    int count;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
         int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
        EXPECT_EQ(result, ERR_NONE);
    }
}

/*
 * @tc.number  Telephony_NetworkManager_UnregisterNetPolicyCallback_0400
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest,Telephony_NetworkManager_UnregisterNetPolicyCallback_0400, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    int count;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}
}
}