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

#include "snooze_test.h"
#include "net_policy_constants.h"
#include "net_policy_define.h"
#include "net_policy_client.h"

namespace OHOS {
namespace NetManagerStandard {
using namespace testing::ext;

/**
 * @tc.name:    Telephony_NetworkManager_SnoozePolicy_0100
 * @tc.desc: Test NetPolicyManager SnoozePolicy.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_SnoozePolicy_0100, Function | MediumTest | Level3)
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

    NetPolicyQuotaPolicy policy;
    policy.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_MOBILE);
    policy.subscriberId_ = "0";
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->SnoozePolicy(policy);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    std::vector<NetPolicyQuotaPolicy> getPolicys;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetNetPolicys(getPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_FALSE(getPolicys.empty());
    NetPolicyQuotaPolicy tempPolicy = getPolicys[0];
    ASSERT_EQ(tempPolicy.lastLimitSnooze_, time(NULL));
}

/**
 * @tc.name:    Telephony_NetworkManager_SnoozePolicy_0200
 * @tc.desc: Test NetPolicyManager SnoozePolicy.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_SnoozePolicy_0200, Function | MediumTest | Level3)
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

    NetPolicyQuotaPolicy policy;
    policy.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_MOBILE);
    policy.subscriberId_ = "0";
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->SnoozePolicy(policy);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    std::vector<NetPolicyQuotaPolicy> getPolicys;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetNetPolicys(getPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_FALSE(getPolicys.empty());
    NetPolicyQuotaPolicy tempPolicy = getPolicys[0];
    ASSERT_EQ(tempPolicy.lastLimitSnooze_, time(NULL));

    result = DelayedSingleton<NetPolicyClient>::GetInstance()->SnoozePolicy(policy);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    std::vector<NetPolicyQuotaPolicy> lastPolicys;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetNetPolicys(lastPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_FALSE(lastPolicys.empty());
    tempPolicy = lastPolicys[0];
    ASSERT_EQ(tempPolicy.lastLimitSnooze_, time(NULL));
}

/**
 * @tc.name:    Telephony_NetworkManager_SnoozePolicy_0300
 * @tc.desc: Test NetPolicyManager SnoozePolicy.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_SnoozePolicy_0300, Function | MediumTest | Level3)
{
    NetPolicyQuotaPolicy quotaPolicy;
    quotaPolicy.netType_ = static_cast<uint8_t>(0);
    quotaPolicy.subscriberId_ = "0";

    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SnoozePolicy(quotaPolicy);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_INVALID_QUOTA_POLICY);
}

/**
 * @tc.name:    Telephony_NetworkManager_SnoozePolicy_0400
 * @tc.desc: Test NetPolicyManager SnoozePolicy.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_SnoozePolicy_0400, Function | MediumTest | Level3)
{
    NetPolicyQuotaPolicy quotaPolicy;
    quotaPolicy.netType_ = static_cast<uint8_t>(6);
    quotaPolicy.subscriberId_ = "0";

    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SnoozePolicy(quotaPolicy);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_INVALID_QUOTA_POLICY);
}

/**
 * @tc.name:    Telephony_NetworkManager_SnoozePolicy_0500
 * @tc.desc: Test NetPolicyManager SnoozePolicy.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_SnoozePolicy_0500, Function | MediumTest | Level3)
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

    NetPolicyQuotaPolicy snoozePolicy;
    snoozePolicy.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_ETHERNET);
    snoozePolicy.subscriberId_ = "0";
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->SnoozePolicy(snoozePolicy);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_QUOTA_POLICY_NOT_EXIST);
}

/**
 * @tc.name:    Telephony_NetworkManager_SnoozePolicy_0600
 * @tc.desc: Test NetPolicyManager SnoozePolicy.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_SnoozePolicy_0600, Function | MediumTest | Level3)
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

    NetPolicyQuotaPolicy snoozePolicy;
    snoozePolicy.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_MOBILE);
    snoozePolicy.subscriberId_ = "1";
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->SnoozePolicy(snoozePolicy);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_QUOTA_POLICY_NOT_EXIST);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetIdleWhitelist_0100
 * @tc.desc: Test NetPolicyManager SetIdleWhitelist.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_SetIdleWhitelist_0100, Function | MediumTest | Level3)
{
    uint8_t uid = 1;
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetIdleWhitelist(uid, true);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetIdleWhitelist_0200
 * @tc.desc: Test NetPolicyManager SetIdleWhitelist.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_SetIdleWhitelist_0200, Function | MediumTest | Level3)
{
    uint8_t uid = 1;
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetIdleWhitelist(uid, false);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetIdleWhitelist_0300
 * @tc.desc: Test NetPolicyManager SetIdleWhitelist.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_SetIdleWhitelist_0300, Function | MediumTest | Level3)
{
    uint8_t uid = 1;
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetIdleWhitelist(uid, true);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    DelayedSingleton<NetPolicyClient>::GetInstance()->SetIdleWhitelist(uid, false);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
}

/**
 * @tc.name:    Telephony_NetworkManager_GetIdleWhitelist_0100
 * @tc.desc: Test NetPolicyManager GetIdleWhitelist.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_GetIdleWhitelist_0100, Function | MediumTest | Level3)
{
    uint8_t uid = 1;
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetIdleWhitelist(uid, true);
    std::vector<uint32_t> uids;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetIdleWhitelist(uids);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_EQ(uids.size(), 1);
    ASSERT_EQ(uids[0], 1);
}

/**
 * @tc.name:    Telephony_NetworkManager_GetIdleWhitelist_0200
 * @tc.desc: Test NetPolicyManager GetIdleWhitelist.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_GetIdleWhitelist_0200, Function | MediumTest | Level3)
{
    uint8_t uid1 = 1;
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetIdleWhitelist(uid1, true);
    uint8_t uid2 = 2;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetIdleWhitelist(uid2, true);
    std::vector<uint32_t> uids;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetIdleWhitelist(uids);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_EQ(uids.size(), 2);
    ASSERT_EQ(uids[0], uid1);
    ASSERT_EQ(uids[0], uid2);
}

/**
 * @tc.name:    Telephony_NetworkManager_GetIdleWhitelist_0300
 * @tc.desc: Test NetPolicyManager GetIdleWhitelist.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_GetIdleWhitelist_0300, Function | MediumTest | Level3)
{
    uint8_t uid1 = 1;
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetIdleWhitelist(uid1, true);
    uint8_t uid2 = 2;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetIdleWhitelist(uid2, false);
    std::vector<uint32_t> uids;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetIdleWhitelist(uids);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_EQ(uids.size(), 1);
    ASSERT_EQ(uids[0], uid1);
}

/**
 * @tc.name:    Telephony_NetworkManager_ResetFactory_0100
 * @tc.desc: Test NetPolicyManager ResetFactory.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_ResetFactory_0100, Function | MediumTest | Level3)
{
    uint8_t uid1 = 1;
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(uid1,
        NetUidPolicy::NET_POLICY_ALLOW_ALL);
    std::string subscriberId = "";

    result = DelayedSingleton<NetPolicyClient>::GetInstance()->ResetFactory(subscriberId);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    NetUidPolicy ret = DelayedSingleton<NetPolicyClient>::GetInstance()->GetUidPolicy(1);
    ASSERT_EQ(ret, NetUidPolicy::NET_POLICY_NONE);
}

/**
 * @tc.name:    Telephony_NetworkManager_ResetFactory_0200
 * @tc.desc: Test NetPolicyManager ResetFactory.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_ResetFactory_0200, Function | MediumTest | Level3)
{
    uint8_t uid1 = 1;
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetIdleWhitelist(uid1, true);

     std::string subscriberId = "";
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->ResetFactory(subscriberId);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    std::vector<uint32_t> uids;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetIdleWhitelist(uids);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_TRUE(uids.empty());
}

/**
 * @tc.name:    Telephony_NetworkManager_ResetFactory_0300
 * @tc.desc: Test NetPolicyManager ResetFactory.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_ResetFactory_0300, Function | MediumTest | Level3)
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

     std::string subscriberId = "0";
     result = DelayedSingleton<NetPolicyClient>::GetInstance()->ResetFactory(subscriberId);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    std::vector<NetPolicyQuotaPolicy> getPolicys;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetNetPolicys(getPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_TRUE(getPolicys.empty());
}

/**
 * @tc.name:    Telephony_NetworkManager_ResetFactory_0400
 * @tc.desc: Test NetPolicyManager ResetFactory.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_ResetFactory_0400, Function | MediumTest | Level3)
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

     std::string subscriberId = "0";
     result = DelayedSingleton<NetPolicyClient>::GetInstance()->ResetFactory(subscriberId);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    std::vector<NetPolicyCellularPolicy> getPolicys;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetCellularPolicys(getPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_TRUE(getPolicys.empty());
}

/**
 * @tc.name:    Telephony_NetworkManager_ResetFactory_0500
 * @tc.desc: Test NetPolicyManager ResetFactory.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_ResetFactory_0500, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyQuotaPolicy policy1;
    policy1.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_MOBILE);
    policy1.subscriberId_ = "0";
    policy1.periodStartTime_ = time(NULL);
    policy1.periodDuration_ = "M1";
    policy1.warningBytes_ = 80000;
    policy1.limitBytes_ = 100000;
    policy1.lastLimitSnooze_ = -1;
    policy1.metered_ = 0;
    policy1.source_ = 0;
    quotaPolicys.push_back(policy1);

    NetPolicyQuotaPolicy policy2;
    policy2.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_ETHERNET);
    policy2.subscriberId_ = "1";
    policy2.periodStartTime_ = time(NULL);
    policy2.periodDuration_ = "M1";
    policy2.warningBytes_ = 80000;
    policy2.limitBytes_ = 100000;
    policy2.lastLimitSnooze_ = -1;
    policy2.metered_ = 0;
    policy2.source_ = 0;
    quotaPolicys.push_back(policy2);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetPolicys(quotaPolicys);

     std::string subscriberId = "0";
     result = DelayedSingleton<NetPolicyClient>::GetInstance()->ResetFactory(subscriberId);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    std::vector<NetPolicyQuotaPolicy> getPolicys;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetNetPolicys(getPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_EQ(getPolicys.size(), 1);
}

/**
 * @tc.name:    Telephony_NetworkManager_ResetFactory_0600
 * @tc.desc: Test NetPolicyManager ResetFactory.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_ResetFactory_0600, Function | MediumTest | Level3)
{
    std::vector<NetPolicyCellularPolicy> cellularPolicys;
    NetPolicyCellularPolicy cellularPolicy;
    cellularPolicy.subscriberId_ = "0";
    cellularPolicy.periodStartTime_ = time(NULL);
    cellularPolicy.periodDuration_ = "M1";
    cellularPolicy.title_ = "test_title1";
    cellularPolicy.summary_ = "test_summary1";
    cellularPolicy.limitBytes_ = 100000;
    cellularPolicy.limitAction_ = 1;
    cellularPolicy.usedBytes_ = 0;
    cellularPolicy.usedTimeDuration_ = time(NULL);
    cellularPolicy.possessor_ = "test_possessor";
    cellularPolicys.push_back(cellularPolicy);

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
    cellularPolicys.push_back(policy2);

    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetCellularPolicys(cellularPolicys);

     std::string subscriberId = "0";
     result = DelayedSingleton<NetPolicyClient>::GetInstance()->ResetFactory(subscriberId);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    std::vector<NetPolicyCellularPolicy> getPolicys;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetCellularPolicys(getPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_EQ(getPolicys.size(), 1);
}

/**
 * @tc.name:    Telephony_NetworkManager_ResetFactory_0700
 * @tc.desc: Test NetPolicyManager ResetFactory.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_ResetFactory_0700, Function | MediumTest | Level3)
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

    NetPolicyQuotaPolicy quotaPolicy2;
    quotaPolicy2.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_ETHERNET);
    quotaPolicy2.subscriberId_ = "1";
    quotaPolicy2.periodStartTime_ = time(NULL);
    quotaPolicy2.periodDuration_ = "M1";
    quotaPolicy2.warningBytes_ = 80000;
    quotaPolicy2.limitBytes_ = 100000;
    quotaPolicy2.lastLimitSnooze_ = -1;
    quotaPolicy2.metered_ = 0;
    quotaPolicy2.source_ = 0;
    quotaPolicys.push_back(quotaPolicy2);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetPolicys(quotaPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    std::string subscriberId = "";
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->ResetFactory(subscriberId);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    std::vector<NetPolicyQuotaPolicy> getPolicys;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetNetPolicys(getPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_TRUE(getPolicys.empty());
}

/**
 * @tc.name:    Telephony_NetworkManager_ResetFactory_0800
 * @tc.desc: Test NetPolicyManager ResetFactory.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_ResetFactory_0800, Function | MediumTest | Level3)
{
    std::vector<NetPolicyCellularPolicy> cellularPolicys;
    NetPolicyCellularPolicy cellularPolicy;
    cellularPolicy.subscriberId_ = "0";
    cellularPolicy.periodStartTime_ = time(NULL);
    cellularPolicy.periodDuration_ = "M1";
    cellularPolicy.title_ = "test_title1";
    cellularPolicy.summary_ = "test_summary1";
    cellularPolicy.limitBytes_ = 100000;
    cellularPolicy.limitAction_ = 1;
    cellularPolicy.usedBytes_ = 0;
    cellularPolicy.usedTimeDuration_ = time(NULL);
    cellularPolicy.possessor_ = "test_possessor";
    cellularPolicys.push_back(cellularPolicy);

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
    cellularPolicys.push_back(policy2);

    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetCellularPolicys(cellularPolicys);

    std::string subscriberId = "";
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->ResetFactory(subscriberId);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    std::vector<NetPolicyCellularPolicy> getPolicys;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetCellularPolicys(getPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_TRUE(getPolicys.empty());
}

/**
 * @tc.name:    Telephony_NetworkManager_ResetFactory_0900
 * @tc.desc: Test NetPolicyManager ResetFactory.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_ResetFactory_0900, Function | MediumTest | Level3)
{
    bool backgroundPolicy = false;
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetBackgroundPolicy(backgroundPolicy);
    std::string subscriberId = "";
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->ResetFactory(subscriberId);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    bool ret = DelayedSingleton<NetPolicyClient>::GetInstance()->GetBackgroundPolicy();
    ASSERT_TRUE(ret);
}

}
}