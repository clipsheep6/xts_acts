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

#include "traffic_policy_test.h"
#include "utils.h"
#include "net_policy_constants.h"
#include "net_policy_define.h"
#include "net_policy_client.h"

namespace OHOS {
namespace NetManagerStandard {
using namespace testing::ext;

/**
 * @tc.name:    Telephony_NetworkManager_SetNetPolicys_0100
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_SetNetPolicys_0100, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyQuotaPolicy quotaPolicy;
    quotaPolicy.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_MOBILE);
    quotaPolicy.subscriberId_ = "0";
    quotaPolicy.periodStartTime_ = time(NULL);
    quotaPolicy.periodDuration_ = "M1";
    quotaPolicy.warningBytes_ = 80000;
    quotaPolicy.limitBytes_ = 100000;
    quotaPolicy.lastLimitSnooze_ = -1;
    quotaPolicy.metered_ = 0;
    quotaPolicy.source_ = 0;
    quotaPolicys.push_back(quotaPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetPolicys(quotaPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetNetPolicys_0200
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_SetNetPolicys_0200, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyQuotaPolicy quotaPolicy;
    quotaPolicy.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_ETHERNET);
    quotaPolicy.subscriberId_ = "0";
    quotaPolicy.periodStartTime_ = time(NULL);
    quotaPolicy.periodDuration_ = "M1";
    quotaPolicy.warningBytes_ = 80000;
    quotaPolicy.limitBytes_ = 100000;
    quotaPolicy.lastLimitSnooze_ = -1;
    quotaPolicy.metered_ = 0;
    quotaPolicy.source_ = 0;
    quotaPolicys.push_back(quotaPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetPolicys(quotaPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetNetPolicys_0300
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_SetNetPolicys_0300, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyQuotaPolicy quotaPolicy;
    quotaPolicy.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_WIFI);
    quotaPolicy.subscriberId_ = "0";
    quotaPolicy.periodStartTime_ = time(NULL);
    quotaPolicy.periodDuration_ = "M1";
    quotaPolicy.warningBytes_ = 80000;
    quotaPolicy.limitBytes_ = 100000;
    quotaPolicy.lastLimitSnooze_ = -1;
    quotaPolicy.metered_ = 0;
    quotaPolicy.source_ = 0;
    quotaPolicys.push_back(quotaPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetPolicys(quotaPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetNetPolicys_0400
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_SetNetPolicys_0400, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyQuotaPolicy quotaPolicy;
    quotaPolicy.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_BLUETOOTH);
    quotaPolicy.subscriberId_ = "0";
    quotaPolicy.periodStartTime_ = time(NULL);
    quotaPolicy.periodDuration_ = "M1";
    quotaPolicy.warningBytes_ = 80000;
    quotaPolicy.limitBytes_ = 100000;
    quotaPolicy.lastLimitSnooze_ = -1;
    quotaPolicy.metered_ = 0;
    quotaPolicy.source_ = 0;
    quotaPolicys.push_back(quotaPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetPolicys(quotaPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetNetPolicys_0500
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_SetNetPolicys_0500, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyQuotaPolicy quotaPolicy;
    quotaPolicy.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_PROXY);
    quotaPolicy.subscriberId_ = "0";
    quotaPolicy.periodStartTime_ = time(NULL);
    quotaPolicy.periodDuration_ = "M1";
    quotaPolicy.warningBytes_ = 80000;
    quotaPolicy.limitBytes_ = 100000;
    quotaPolicy.lastLimitSnooze_ = -1;
    quotaPolicy.metered_ = 0;
    quotaPolicy.source_ = 0;
    quotaPolicys.push_back(quotaPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetPolicys(quotaPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetNetPolicys_0600
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_SetNetPolicys_0600, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyQuotaPolicy quotaPolicy;
    quotaPolicy.netType_ = static_cast<uint8_t>(0);
    quotaPolicy.subscriberId_ = "0";
    quotaPolicy.periodStartTime_ = time(NULL);
    quotaPolicy.periodDuration_ = "M1";
    quotaPolicy.warningBytes_ = 80000;
    quotaPolicy.limitBytes_ = 100000;
    quotaPolicy.lastLimitSnooze_ = -1;
    quotaPolicy.metered_ = 0;
    quotaPolicy.source_ = 0;
    quotaPolicys.push_back(quotaPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetPolicys(quotaPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_INVALID_QUOTA_POLICY);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetNetPolicys_0700
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_SetNetPolicys_0700, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyQuotaPolicy quotaPolicy;
    quotaPolicy.netType_ = static_cast<uint8_t>(6);
    quotaPolicy.subscriberId_ = "0";
    quotaPolicy.periodStartTime_ = time(NULL);
    quotaPolicy.periodDuration_ = "M1";
    quotaPolicy.warningBytes_ = 80000;
    quotaPolicy.limitBytes_ = 100000;
    quotaPolicy.lastLimitSnooze_ = -1;
    quotaPolicy.metered_ = 0;
    quotaPolicy.source_ = 0;
    quotaPolicys.push_back(quotaPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetPolicys(quotaPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_INVALID_QUOTA_POLICY);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetNetPolicys_0800
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_SetNetPolicys_0800, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyQuotaPolicy quotaPolicy;
    quotaPolicy.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_MOBILE);
    quotaPolicy.subscriberId_ = "0";
    quotaPolicy.periodStartTime_ = time(NULL);
    quotaPolicy.periodDuration_ = "M31";
    quotaPolicy.warningBytes_ = 80000;
    quotaPolicy.limitBytes_ = 100000;
    quotaPolicy.lastLimitSnooze_ = -1;
    quotaPolicy.metered_ = 0;
    quotaPolicy.source_ = 0;
    quotaPolicys.push_back(quotaPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetPolicys(quotaPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetNetPolicys_0900
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_SetNetPolicys_0900, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyQuotaPolicy quotaPolicy;
    quotaPolicy.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_MOBILE);
    quotaPolicy.subscriberId_ = "0";
    quotaPolicy.periodStartTime_ = time(NULL);
    quotaPolicy.periodDuration_ = "M0";
    quotaPolicy.warningBytes_ = 80000;
    quotaPolicy.limitBytes_ = 100000;
    quotaPolicy.lastLimitSnooze_ = -1;
    quotaPolicy.metered_ = 0;
    quotaPolicy.source_ = 0;
    quotaPolicys.push_back(quotaPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetPolicys(quotaPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_INVALID_QUOTA_POLICY);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetNetPolicys_1000
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_SetNetPolicys_1000, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyQuotaPolicy quotaPolicy;
    quotaPolicy.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_MOBILE);
    quotaPolicy.subscriberId_ = "0";
    quotaPolicy.periodStartTime_ = time(NULL);
    quotaPolicy.periodDuration_ = "M32";
    quotaPolicy.warningBytes_ = 80000;
    quotaPolicy.limitBytes_ = 100000;
    quotaPolicy.lastLimitSnooze_ = -1;
    quotaPolicy.metered_ = 0;
    quotaPolicy.source_ = 0;
    quotaPolicys.push_back(quotaPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetPolicys(quotaPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_INVALID_QUOTA_POLICY);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetNetPolicys_1100
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_SetNetPolicys_1100, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyQuotaPolicy quotaPolicy;
    quotaPolicy.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_MOBILE);
    quotaPolicy.subscriberId_ = "0";
    quotaPolicy.periodStartTime_ = time(NULL);
    quotaPolicy.periodDuration_ = "M1";
    quotaPolicy.warningBytes_ = -1;
    quotaPolicy.limitBytes_ = 100000;
    quotaPolicy.lastLimitSnooze_ = -1;
    quotaPolicy.metered_ = 0;
    quotaPolicy.source_ = 0;
    quotaPolicys.push_back(quotaPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetPolicys(quotaPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetNetPolicys_1200
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_SetNetPolicys_1200, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyQuotaPolicy quotaPolicy;
    quotaPolicy.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_MOBILE);
    quotaPolicy.subscriberId_ = "0";
    quotaPolicy.periodStartTime_ = time(NULL);
    quotaPolicy.periodDuration_ = "M1";
    quotaPolicy.warningBytes_ = 80000;
    quotaPolicy.limitBytes_ = -1;
    quotaPolicy.lastLimitSnooze_ = -1;
    quotaPolicy.metered_ = 0;
    quotaPolicy.source_ = 0;
    quotaPolicys.push_back(quotaPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetPolicys(quotaPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetNetPolicys_1300
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_SetNetPolicys_1300, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyQuotaPolicy quotaPolicy;
    quotaPolicy.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_MOBILE);
    quotaPolicy.subscriberId_ = "0";
    quotaPolicy.periodStartTime_ = time(NULL);
    quotaPolicy.periodDuration_ = "M1";
    quotaPolicy.warningBytes_ = 80000;
    quotaPolicy.limitBytes_ = 100000;
    quotaPolicy.lastLimitSnooze_ =  time(NULL);
    quotaPolicy.metered_ = 0;
    quotaPolicy.source_ = 0;
    quotaPolicys.push_back(quotaPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetPolicys(quotaPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetNetPolicys_1400
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_SetNetPolicys_1400, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyQuotaPolicy quotaPolicy;
    quotaPolicy.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_MOBILE);
    quotaPolicy.subscriberId_ = "0";
    quotaPolicy.periodStartTime_ = time(NULL);
    quotaPolicy.periodDuration_ = "M1";
    quotaPolicy.warningBytes_ = 80000;
    quotaPolicy.limitBytes_ = 100000;
    quotaPolicy.lastLimitSnooze_ =  -1;
    quotaPolicy.metered_ = 1;
    quotaPolicy.source_ = 0;
    quotaPolicys.push_back(quotaPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetPolicys(quotaPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetNetPolicys_1500
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_SetNetPolicys_1500, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyQuotaPolicy quotaPolicy;
    quotaPolicy.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_MOBILE);
    quotaPolicy.subscriberId_ = "0";
    quotaPolicy.periodStartTime_ = time(NULL);
    quotaPolicy.periodDuration_ = "M1";
    quotaPolicy.warningBytes_ = 80000;
    quotaPolicy.limitBytes_ = 100000;
    quotaPolicy.lastLimitSnooze_ =  -1;
    quotaPolicy.metered_ = 0;
    quotaPolicy.source_ = 1;
    quotaPolicys.push_back(quotaPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetPolicys(quotaPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetNetPolicys_1600
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_SetNetPolicys_1600, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyQuotaPolicy quotaPolicy1;
    quotaPolicy1.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_MOBILE);
    quotaPolicy1.subscriberId_ = "0";
    quotaPolicy1.periodStartTime_ = time(NULL);
    quotaPolicy1.periodDuration_ = "M1";
    quotaPolicy1.warningBytes_ = 80000;
    quotaPolicy1.limitBytes_ = 100000;
    quotaPolicy1.lastLimitSnooze_ =  -1;
    quotaPolicy1.metered_ = 0;
    quotaPolicy1.source_ = 0;
    quotaPolicys.push_back(quotaPolicy1);
    NetPolicyQuotaPolicy quotaPolicy2;
    quotaPolicy2.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_ETHERNET);
    quotaPolicy2.subscriberId_ = "1";
    quotaPolicy2.periodStartTime_ = time(NULL);
    quotaPolicy2.periodDuration_ = "M1";
    quotaPolicy2.warningBytes_ = 80000;
    quotaPolicy2.limitBytes_ = 100000;
    quotaPolicy2.lastLimitSnooze_ =  -1;
    quotaPolicy2.metered_ = 0;
    quotaPolicy2.source_ = 0;
    quotaPolicys.push_back(quotaPolicy2);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetPolicys(quotaPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetNetPolicys_1700
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_SetNetPolicys_1700, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyQuotaPolicy quotaPolicy1;
    quotaPolicy1.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_MOBILE);
    quotaPolicy1.subscriberId_ = "0";
    quotaPolicy1.periodStartTime_ = time(NULL);
    quotaPolicy1.periodDuration_ = "M1";
    quotaPolicy1.warningBytes_ = 80000;
    quotaPolicy1.limitBytes_ = 100000;
    quotaPolicy1.lastLimitSnooze_ =  -1;
    quotaPolicy1.metered_ = 0;
    quotaPolicy1.source_ = 0;
    quotaPolicys.push_back(quotaPolicy1);
    NetPolicyQuotaPolicy quotaPolicy2;
    quotaPolicy2.netType_ = static_cast<uint8_t>(6);
    quotaPolicy2.subscriberId_ = "1";
    quotaPolicy2.periodStartTime_ = time(NULL);
    quotaPolicy2.periodDuration_ = "M1";
    quotaPolicy2.warningBytes_ = 80000;
    quotaPolicy2.limitBytes_ = 100000;
    quotaPolicy2.lastLimitSnooze_ =  -1;
    quotaPolicy2.metered_ = 0;
    quotaPolicy2.source_ = 0;
    quotaPolicys.push_back(quotaPolicy2);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetPolicys(quotaPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_INVALID_QUOTA_POLICY);
}

/**
 * @tc.name:    Telephony_NetworkManager_GetNetPolicys_0100
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_GetNetPolicys_0100, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyQuotaPolicy quotaPolicy;
    quotaPolicy.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_MOBILE);
    quotaPolicy.subscriberId_ = "0";
    quotaPolicy.periodStartTime_ = time(NULL);
    quotaPolicy.periodDuration_ = "M1";
    quotaPolicy.warningBytes_ = 80000;
    quotaPolicy.limitBytes_ = 100000;
    quotaPolicy.lastLimitSnooze_ = -1;
    quotaPolicy.metered_ = 0;
    quotaPolicy.source_ = 0;
    quotaPolicys.push_back(quotaPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetPolicys(quotaPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    std::vector<NetPolicyQuotaPolicy> getPolicys;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetNetPolicys(getPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_FALSE(getPolicys.empty());
    ASSERT_TRUE(EqualsNetPolicy(quotaPolicy, getPolicys[0]));
}

/**
 * @tc.name:    Telephony_NetworkManager_GetNetPolicys_0200
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_GetNetPolicys_0200, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> setPolicys;
    NetPolicyQuotaPolicy quotaPolicy1;
    quotaPolicy1.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_MOBILE);
    quotaPolicy1.subscriberId_ = "0";
    quotaPolicy1.periodStartTime_ = time(NULL);
    quotaPolicy1.periodDuration_ = "M1";
    quotaPolicy1.warningBytes_ = 80000;
    quotaPolicy1.limitBytes_ = 100000;
    quotaPolicy1.lastLimitSnooze_ = -1;
    quotaPolicy1.metered_ = 0;
    quotaPolicy1.source_ = 0;
    setPolicys.push_back(quotaPolicy1);

    NetPolicyQuotaPolicy quotaPolicy2;
    quotaPolicy2.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_ETHERNET);
    quotaPolicy2.subscriberId_ = "0";
    quotaPolicy2.periodStartTime_ = time(NULL);
    quotaPolicy2.periodDuration_ = "M1";
    quotaPolicy2.warningBytes_ = 80000;
    quotaPolicy2.limitBytes_ = 100000;
    quotaPolicy2.lastLimitSnooze_ = -1;
    quotaPolicy2.metered_ = 0;
    quotaPolicy2.source_ = 0;
    setPolicys.push_back(quotaPolicy2);

    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetPolicys(setPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    std::vector<NetPolicyQuotaPolicy> getPolicys;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetNetPolicys(getPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_FALSE(getPolicys.empty());
    ASSERT_EQ(setPolicys.size(), getPolicys.size());
    int index;
    for (index = 0; index < getPolicys.size(); index++) {
        PrintlnPolicyInfo(setPolicys[index]);
        PrintlnPolicyInfo(getPolicys[index]);
        ASSERT_TRUE(EqualsNetPolicy(setPolicys[index], getPolicys[index]));
    }
}

/**
 * @tc.name:    Telephony_NetworkManager_GetNetPolicys_0300
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_GetNetPolicys_0300, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetNetPolicys(quotaPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_TRUE(quotaPolicys.empty());
}

/**
 * @tc.name:    Telephony_NetworkManager_GetNetPolicys_0400
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_GetNetPolicys_0400, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyQuotaPolicy quotaPolicy;
    quotaPolicy.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_MOBILE);
    quotaPolicy.subscriberId_ = "0";
    quotaPolicy.periodStartTime_ = time(NULL);
    quotaPolicy.periodDuration_ = "M1";
    quotaPolicy.warningBytes_ = 80000;
    quotaPolicy.limitBytes_ = 100000;
    quotaPolicy.lastLimitSnooze_ = -1;
    quotaPolicy.metered_ = 0;
    quotaPolicy.source_ = 0;
    quotaPolicys.push_back(quotaPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetPolicys(quotaPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    quotaPolicys.clear();
    NetPolicyQuotaPolicy quotaPolicy2;
    quotaPolicy2.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_MOBILE);
    quotaPolicy2.subscriberId_ = "0";
    quotaPolicy2.periodStartTime_ = time(NULL);
    quotaPolicy2.periodDuration_ = "M2";
    quotaPolicy2.warningBytes_ = 40000;
    quotaPolicy2.limitBytes_ = 50000;
    quotaPolicy2.lastLimitSnooze_ = -1;
    quotaPolicy2.metered_ = 1;
    quotaPolicy2.source_ = 1;
    quotaPolicys.push_back(quotaPolicy2);
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetPolicys(quotaPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    std::vector<NetPolicyQuotaPolicy> getPolicys;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetNetPolicys(getPolicys);
    ASSERT_FALSE(getPolicys.empty());
    ASSERT_TRUE(EqualsNetPolicy(quotaPolicy2, getPolicys[0]));
}

/**
 * @tc.name:    Telephony_NetworkManager_SetCellularPolicys_0100
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_SetCellularPolicys_0100, Function | MediumTest | Level3)
{
    std::vector<NetPolicyCellularPolicy> cellularPolicys;
    NetPolicyCellularPolicy cellularPolicy;
    cellularPolicy.subscriberId_ = "0";
    cellularPolicy.periodStartTime_ = time(NULL);
    cellularPolicy.periodDuration_ = "M1";
    cellularPolicy.title_ = "test_title";
    cellularPolicy.summary_ = "test_summary";
    cellularPolicy.limitBytes_ = 100000;
    cellularPolicy.limitAction_ = 1;
    cellularPolicy.usedBytes_ = 0;
    cellularPolicy.usedTimeDuration_ = time(NULL);
    cellularPolicy.possessor_ = "test_possessor";
    cellularPolicys.push_back(cellularPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetCellularPolicys(cellularPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetCellularPolicys_0200
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_SetCellularPolicys_0200, Function | MediumTest | Level3)
{
    std::vector<NetPolicyCellularPolicy> cellularPolicys;
    NetPolicyCellularPolicy cellularPolicy;
    cellularPolicy.subscriberId_ = "0";
    cellularPolicy.periodStartTime_ = time(NULL);
    cellularPolicy.periodDuration_ = "M1";
    cellularPolicy.title_ = "test_title";
    cellularPolicy.summary_ = "test_summary";
    cellularPolicy.limitBytes_ = 100000;
    cellularPolicy.limitAction_ = 2;
    cellularPolicy.usedBytes_ = 0;
    cellularPolicy.usedTimeDuration_ = time(NULL);
    cellularPolicy.possessor_ = "test_possessor";
    cellularPolicys.push_back(cellularPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetCellularPolicys(cellularPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetCellularPolicys_0300
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_SetCellularPolicys_0300, Function | MediumTest | Level3)
{
    std::vector<NetPolicyCellularPolicy> cellularPolicys;
    NetPolicyCellularPolicy cellularPolicy;
    cellularPolicy.subscriberId_ = "0";
    cellularPolicy.periodStartTime_ = time(NULL);
    cellularPolicy.periodDuration_ = "M1";
    cellularPolicy.title_ = "test_title";
    cellularPolicy.summary_ = "test_summary";
    cellularPolicy.limitBytes_ = 100000;
    cellularPolicy.limitAction_ = 3;
    cellularPolicy.usedBytes_ = 0;
    cellularPolicy.usedTimeDuration_ = time(NULL);
    cellularPolicy.possessor_ = "test_possessor";
    cellularPolicys.push_back(cellularPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetCellularPolicys(cellularPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetCellularPolicys_0400
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_SetCellularPolicys_0400, Function | MediumTest | Level3)
{
    std::vector<NetPolicyCellularPolicy> cellularPolicys;
    NetPolicyCellularPolicy cellularPolicy;
    cellularPolicy.subscriberId_ = "0";
    cellularPolicy.periodStartTime_ = time(NULL);
    cellularPolicy.periodDuration_ = "M1";
    cellularPolicy.title_ = "test_title";
    cellularPolicy.summary_ = "test_summary";
    cellularPolicy.limitBytes_ = 100000;
    cellularPolicy.limitAction_ = 0;
    cellularPolicy.usedBytes_ = 0;
    cellularPolicy.usedTimeDuration_ = time(NULL);
    cellularPolicy.possessor_ = "test_possessor";
    cellularPolicys.push_back(cellularPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetCellularPolicys(cellularPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_INVALID_QUOTA_POLICY);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetCellularPolicys_0500
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_SetCellularPolicys_0500, Function | MediumTest | Level3)
{
    std::vector<NetPolicyCellularPolicy> cellularPolicys;
    NetPolicyCellularPolicy cellularPolicy;
    cellularPolicy.subscriberId_ = "0";
    cellularPolicy.periodStartTime_ = time(NULL);
    cellularPolicy.periodDuration_ = "M1";
    cellularPolicy.title_ = "test_title";
    cellularPolicy.summary_ = "test_summary";
    cellularPolicy.limitBytes_ = 100000;
    cellularPolicy.limitAction_ = 4;
    cellularPolicy.usedBytes_ = 0;
    cellularPolicy.usedTimeDuration_ = time(NULL);
    cellularPolicy.possessor_ = "test_possessor";
    cellularPolicys.push_back(cellularPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetCellularPolicys(cellularPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_INVALID_QUOTA_POLICY);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetCellularPolicys_0600
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_SetCellularPolicys_0600, Function | MediumTest | Level3)
{
    std::vector<NetPolicyCellularPolicy> cellularPolicys;
    NetPolicyCellularPolicy cellularPolicy;
    cellularPolicy.subscriberId_ = "0";
    cellularPolicy.periodStartTime_ = time(NULL);
    cellularPolicy.periodDuration_ = "M1";
    cellularPolicy.title_ = "test_title";
    cellularPolicy.summary_ = "test_summary";
    cellularPolicy.limitBytes_ = 100000;
    cellularPolicy.limitAction_ = -1;
    cellularPolicy.usedBytes_ = 0;
    cellularPolicy.usedTimeDuration_ = time(NULL);
    cellularPolicy.possessor_ = "test_possessor";
    cellularPolicys.push_back(cellularPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetCellularPolicys(cellularPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetCellularPolicys_0700
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_SetCellularPolicys_0700, Function | MediumTest | Level3)
{
    std::vector<NetPolicyCellularPolicy> cellularPolicys;
    NetPolicyCellularPolicy cellularPolicy;
    cellularPolicy.subscriberId_ = "0";
    cellularPolicy.periodStartTime_ = time(NULL);
    cellularPolicy.periodDuration_ = "M31";
    cellularPolicy.title_ = "test_title";
    cellularPolicy.summary_ = "test_summary";
    cellularPolicy.limitBytes_ = 100000;
    cellularPolicy.limitAction_ = 1;
    cellularPolicy.usedBytes_ = 0;
    cellularPolicy.usedTimeDuration_ = time(NULL);
    cellularPolicy.possessor_ = "test_possessor";
    cellularPolicys.push_back(cellularPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetCellularPolicys(cellularPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetCellularPolicys_0800
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_SetCellularPolicys_0800, Function | MediumTest | Level3)
{
    std::vector<NetPolicyCellularPolicy> cellularPolicys;
    NetPolicyCellularPolicy cellularPolicy;
    cellularPolicy.subscriberId_ = "0";
    cellularPolicy.periodStartTime_ = time(NULL);
    cellularPolicy.periodDuration_ = "M0";
    cellularPolicy.title_ = "test_title";
    cellularPolicy.summary_ = "test_summary";
    cellularPolicy.limitBytes_ = 100000;
    cellularPolicy.limitAction_ = 1;
    cellularPolicy.usedBytes_ = 0;
    cellularPolicy.usedTimeDuration_ = time(NULL);
    cellularPolicy.possessor_ = "test_possessor";
    cellularPolicys.push_back(cellularPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetCellularPolicys(cellularPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_INVALID_QUOTA_POLICY);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetCellularPolicys_0900
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_SetCellularPolicys_0900, Function | MediumTest | Level3)
{
    std::vector<NetPolicyCellularPolicy> cellularPolicys;
    NetPolicyCellularPolicy cellularPolicy;
    cellularPolicy.subscriberId_ = "0";
    cellularPolicy.periodStartTime_ = time(NULL);
    cellularPolicy.periodDuration_ = "M32";
    cellularPolicy.title_ = "test_title";
    cellularPolicy.summary_ = "test_summary";
    cellularPolicy.limitBytes_ = 100000;
    cellularPolicy.limitAction_ = 1;
    cellularPolicy.usedBytes_ = 0;
    cellularPolicy.usedTimeDuration_ = time(NULL);
    cellularPolicy.possessor_ = "test_possessor";
    cellularPolicys.push_back(cellularPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetCellularPolicys(cellularPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_INVALID_QUOTA_POLICY);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetCellularPolicys_1000
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_SetCellularPolicys_1000, Function | MediumTest | Level3)
{
    std::vector<NetPolicyCellularPolicy> setPolicys;
    NetPolicyCellularPolicy policy1;
    policy1.subscriberId_ = "0";
    policy1.periodStartTime_ = time(NULL);
    policy1.periodDuration_ = "M1";
    policy1.title_ = "test_title1";
    policy1.summary_ = "test_summary1";
    policy1.limitBytes_ = 100000;
    policy1.limitAction_ = 1;
    policy1.usedBytes_ = 0;
    policy1.usedTimeDuration_ = time(NULL);
    policy1.possessor_ = "test_possessor";
    setPolicys.push_back(policy1);
    NetPolicyCellularPolicy policy2;
    policy2.subscriberId_ = "1";
    policy2.periodStartTime_ = time(NULL);
    policy2.periodDuration_ = "M1";
    policy2.title_ = "test_title2";
    policy2.summary_ = "test_summary2";
    policy2.limitBytes_ = 100000;
    policy2.limitAction_ = 1;
    policy2.usedBytes_ = 0;
    policy2.usedTimeDuration_ = time(NULL);
    policy2.possessor_ = "test_possessor";
    setPolicys.push_back(policy2);

    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetCellularPolicys(setPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetCellularPolicys_1100
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_SetCellularPolicys_1100, Function | MediumTest | Level3)
{
    std::vector<NetPolicyCellularPolicy> setPolicys;
    NetPolicyCellularPolicy policy1;
    policy1.subscriberId_ = "0";
    policy1.periodStartTime_ = time(NULL);
    policy1.periodDuration_ = "M1";
    policy1.title_ = "test_title1";
    policy1.summary_ = "test_summary1";
    policy1.limitBytes_ = 100000;
    policy1.limitAction_ = 1;
    policy1.usedBytes_ = 0;
    policy1.usedTimeDuration_ = time(NULL);
    policy1.possessor_ = "test_possessor";
    setPolicys.push_back(policy1);
    NetPolicyCellularPolicy policy2;
    policy2.subscriberId_ = "1";
    policy2.periodStartTime_ = time(NULL);
    policy2.periodDuration_ = "M1";
    policy2.title_ = "test_title2";
    policy2.summary_ = "test_summary2";
    policy2.limitBytes_ = 100000;
    policy2.limitAction_ = 4;
    policy2.usedBytes_ = 0;
    policy2.usedTimeDuration_ = time(NULL);
    policy2.possessor_ = "test_possessor";
    setPolicys.push_back(policy2);

    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetCellularPolicys(setPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_INVALID_QUOTA_POLICY);
}

/**
 * @tc.name:    Telephony_NetworkManager_GetCellularPolicys_0100
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_GetCellularPolicys_0100, Function | MediumTest | Level3)
{
    std::vector<NetPolicyCellularPolicy> setPolicys;
    NetPolicyCellularPolicy cellularPolicy;
    cellularPolicy.subscriberId_ = "0";
    cellularPolicy.periodStartTime_ = time(NULL);
    cellularPolicy.periodDuration_ = "M1";
    cellularPolicy.title_ = "test_title";
    cellularPolicy.summary_ = "test_summary";
    cellularPolicy.limitBytes_ = 100000;
    cellularPolicy.limitAction_ = 1;
    cellularPolicy.usedBytes_ = 0;
    cellularPolicy.usedTimeDuration_ = time(NULL);
    cellularPolicy.possessor_ = "test_possessor";
    setPolicys.push_back(cellularPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetCellularPolicys(setPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    std::vector<NetPolicyCellularPolicy> getPolicys;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetCellularPolicys(getPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_EQ(setPolicys.size(), getPolicys.size());
    ASSERT_TRUE(EqualsCellularPolicy(cellularPolicy, getPolicys[0]));
}

/**
 * @tc.name:    Telephony_NetworkManager_GetCellularPolicys_0200
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_GetCellularPolicys_0200, Function | MediumTest | Level3)
{
    std::vector<NetPolicyCellularPolicy> setPolicys;
    NetPolicyCellularPolicy cellularPolicy1;
    cellularPolicy1.subscriberId_ = "0";
    cellularPolicy1.periodStartTime_ = time(NULL);
    cellularPolicy1.periodDuration_ = "M1";
    cellularPolicy1.title_ = "test_title1";
    cellularPolicy1.summary_ = "test_summary1";
    cellularPolicy1.limitBytes_ = 100000;
    cellularPolicy1.limitAction_ = 1;
    cellularPolicy1.usedBytes_ = 0;
    cellularPolicy1.usedTimeDuration_ = time(NULL);
    cellularPolicy1.possessor_ = "test_possessor";
    setPolicys.push_back(cellularPolicy1);

    NetPolicyCellularPolicy cellularPolicy2;
    cellularPolicy2.subscriberId_ = "0";
    cellularPolicy2.periodStartTime_ = time(NULL);
    cellularPolicy2.periodDuration_ = "M1";
    cellularPolicy2.title_ = "test_title1";
    cellularPolicy2.summary_ = "test_summary1";
    cellularPolicy2.limitBytes_ = 100000;
    cellularPolicy2.limitAction_ = 1;
    cellularPolicy2.usedBytes_ = 0;
    cellularPolicy2.usedTimeDuration_ = time(NULL);
    cellularPolicy2.possessor_ = "test_possessor";
    setPolicys.push_back(cellularPolicy2);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetCellularPolicys(setPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    std::vector<NetPolicyCellularPolicy> getPolicys;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetCellularPolicys(getPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_EQ(setPolicys.size(), getPolicys.size());
    ASSERT_TRUE(EqualsCellularPolicy(cellularPolicy1, getPolicys[0]));
    ASSERT_TRUE(EqualsCellularPolicy(cellularPolicy2, getPolicys[1]));
}

/**
 * @tc.name:    Telephony_NetworkManager_GetCellularPolicys_0300
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_GetCellularPolicys_0300, Function | MediumTest | Level3)
{
    std::vector<NetPolicyCellularPolicy> getPolicys;
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetCellularPolicys(getPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_TRUE(getPolicys.empty());
}

/**
 * @tc.name:    Telephony_NetworkManager_GetCellularPolicys_0400
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(TrafficPolicyTest, Telephony_NetworkManager_GetCellularPolicys_0400, Function | MediumTest | Level3)
{
    std::vector<NetPolicyCellularPolicy> setPolicys;
    NetPolicyCellularPolicy cellularPolicy1;
    cellularPolicy1.subscriberId_ = "0";
    cellularPolicy1.periodStartTime_ = time(NULL);
    cellularPolicy1.periodDuration_ = "M1";
    cellularPolicy1.title_ = "test_title";
    cellularPolicy1.summary_ = "test_summary";
    cellularPolicy1.limitBytes_ = 100000;
    cellularPolicy1.limitAction_ = 1;
    cellularPolicy1.usedBytes_ = 0;
    cellularPolicy1.usedTimeDuration_ = time(NULL);
    cellularPolicy1.possessor_ = "test_possessor";
    setPolicys.push_back(cellularPolicy1);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetCellularPolicys(setPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    setPolicys.clear();
    NetPolicyCellularPolicy cellularPolicy2;
    cellularPolicy2.subscriberId_ = "0";
    cellularPolicy2.periodStartTime_ = time(NULL);
    cellularPolicy2.periodDuration_ = "M2";
    cellularPolicy2.title_ = "test_title";
    cellularPolicy2.summary_ = "test_summary";
    cellularPolicy2.limitBytes_ = 50000;
    cellularPolicy2.limitAction_ = 2;
    cellularPolicy2.usedBytes_ = 20000;
    cellularPolicy2.usedTimeDuration_ = time(NULL);
    cellularPolicy2.possessor_ = "test_possessor";
    setPolicys.push_back(cellularPolicy2);
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetCellularPolicys(setPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    std::vector<NetPolicyCellularPolicy> getPolicys;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetCellularPolicys(getPolicys);
    ASSERT_TRUE(EqualsCellularPolicy(cellularPolicy2, getPolicys[0]));
}
}
}