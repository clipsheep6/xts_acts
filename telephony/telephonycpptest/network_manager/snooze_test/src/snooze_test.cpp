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

namespace OHOS {
namespace NetManagerStandard {
using namespace testing::ext;

/**
 * @tc.name:    Telephony_NetworkManager_SetSnoozePolicy_0100
 * @tc.desc: Test NetPolicyManager SetSnoozePolicy.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_SetSnoozePolicy_0100, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyQuotaPolicy quotaPolicy;
    quotaPolicy.netType_ = static_cast<uint8_t>(NetBearType::BEARER_CELLULAR);
    quotaPolicy.slotId_ = 0;
    quotaPolicy.periodStartTime_ = time(NULL);
    quotaPolicy.periodDuration_ = "M1";
    quotaPolicy.warningBytes_ = 80000;
    quotaPolicy.limitBytes_ = 100000;
    quotaPolicy.lastLimitSnooze_ = -1;
    quotaPolicy.metered_ = 0;
    quotaPolicy.source_ = 0;
    quotaPolicys.push_back(quotaPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetQuotaPolicies(quotaPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    int8_t netType_ = static_cast<int8_t>(NetBearType::BEARER_CELLULAR);
    int32_t slotId_ = 0;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetSnoozePolicy(netType_, slotId_);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    std::vector<NetPolicyQuotaPolicy> getPolicys;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetNetQuotaPolicies(getPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_FALSE(getPolicys.empty());
    NetPolicyQuotaPolicy tempPolicy = getPolicys[0];
    EXPECT_GT(tempPolicy.lastLimitSnooze_, 0);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetSnoozePolicy_0200
 * @tc.desc: Test NetPolicyManager SetSnoozePolicy.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_SetSnoozePolicy_0200, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyQuotaPolicy quotaPolicy;
    quotaPolicy.netType_ = static_cast<uint8_t>(NetBearType::BEARER_CELLULAR);
    quotaPolicy.slotId_ = 0;
    quotaPolicy.periodStartTime_ = time(NULL);
    quotaPolicy.periodDuration_ = "M1";
    quotaPolicy.warningBytes_ = 80000;
    quotaPolicy.limitBytes_ = 100000;
    quotaPolicy.lastLimitSnooze_ = -1;
    quotaPolicy.metered_ = 0;
    quotaPolicy.source_ = 0;
    quotaPolicys.push_back(quotaPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetQuotaPolicies(quotaPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    int8_t netType_ = static_cast<int8_t>(NetBearType::BEARER_CELLULAR);
    int32_t slotId_ = 0;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetSnoozePolicy(netType_, slotId_);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    std::vector<NetPolicyQuotaPolicy> getPolicys;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetNetQuotaPolicies(getPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_FALSE(getPolicys.empty());
    NetPolicyQuotaPolicy tempPolicy = getPolicys[0];
    EXPECT_GT(tempPolicy.lastLimitSnooze_, 0);

    result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetSnoozePolicy(netType_, slotId_);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    std::vector<NetPolicyQuotaPolicy> lastPolicys;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetNetQuotaPolicies(lastPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_FALSE(lastPolicys.empty());
    tempPolicy = lastPolicys[0];
    EXPECT_GT(tempPolicy.lastLimitSnooze_, 0);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetSnoozePolicy_0300
 * @tc.desc: Test NetPolicyManager SetSnoozePolicy.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_SetSnoozePolicy_0300, Function | MediumTest | Level3)
{
    int8_t netType_ = static_cast<int8_t>(-1);
    int32_t slotId_ = 0;

    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetSnoozePolicy(netType_, slotId_);
    ASSERT_EQ(static_cast<int32_t>(result), static_cast<int32_t>(NetPolicyResultCode::ERR_QUOTA_POLICY_NOT_EXIST));
}

/**
 * @tc.name:    Telephony_NetworkManager_SetSnoozePolicy_0400
 * @tc.desc: Test NetPolicyManager SetSnoozePolicy.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_SetSnoozePolicy_0400, Function | MediumTest | Level3)
{
    int8_t netType_ = static_cast<int8_t>(6);
    int32_t slotId_ = 0;

    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetSnoozePolicy(netType_, slotId_);
    ASSERT_EQ(static_cast<int32_t>(result), static_cast<int32_t>(NetPolicyResultCode::ERR_QUOTA_POLICY_NOT_EXIST));
}

/**
 * @tc.name:    Telephony_NetworkManager_SetSnoozePolicy_0500
 * @tc.desc: Test NetPolicyManager SetSnoozePolicy.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_SetSnoozePolicy_0500, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyQuotaPolicy quotaPolicy;
    quotaPolicy.netType_ = static_cast<uint8_t>(NetBearType::BEARER_CELLULAR);
    quotaPolicy.slotId_ = 0;
    quotaPolicy.periodStartTime_ = time(NULL);
    quotaPolicy.periodDuration_ = "M1";
    quotaPolicy.warningBytes_ = 80000;
    quotaPolicy.limitBytes_ = 100000;
    quotaPolicy.lastLimitSnooze_ = -1;
    quotaPolicy.metered_ = 0;
    quotaPolicy.source_ = 0;
    quotaPolicys.push_back(quotaPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetQuotaPolicies(quotaPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    int8_t netType_ = static_cast<uint8_t>(NetBearType::BEARER_ETHERNET);
    uint32_t slotId_ = 0;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetSnoozePolicy(netType_, slotId_);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_QUOTA_POLICY_NOT_EXIST);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetSnoozePolicy_0600
 * @tc.desc: Test NetPolicyManager SetSnoozePolicy.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_SetSnoozePolicy_0600, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyQuotaPolicy quotaPolicy;
    quotaPolicy.netType_ = static_cast<uint8_t>(NetBearType::BEARER_CELLULAR);
    quotaPolicy.slotId_ = 0;
    quotaPolicy.periodStartTime_ = time(NULL);
    quotaPolicy.periodDuration_ = "M1";
    quotaPolicy.warningBytes_ = 80000;
    quotaPolicy.limitBytes_ = 100000;
    quotaPolicy.lastLimitSnooze_ = -1;
    quotaPolicy.metered_ = 0;
    quotaPolicy.source_ = 0;
    quotaPolicys.push_back(quotaPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetQuotaPolicies(quotaPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    int8_t netType_ = static_cast<uint8_t>(NetBearType::BEARER_CELLULAR);
    uint32_t slotId_ = 1;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetSnoozePolicy(netType_, slotId_);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_QUOTA_POLICY_NOT_EXIST);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetIdleTrustlist_0100
 * @tc.desc: Test NetPolicyManager SetIdleTrustlist.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_SetIdleTrustlist_0100, Function | MediumTest | Level3)
{
    uint8_t uid = 1;
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetIdleTrustlist(uid, true);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetIdleTrustlist_0200
 * @tc.desc: Test NetPolicyManager SetIdleTrustlist.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_SetIdleTrustlist_0200, Function | MediumTest | Level3)
{
    uint8_t uid = 1;
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetIdleTrustlist(uid, false);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetIdleTrustlist_0300
 * @tc.desc: Test NetPolicyManager SetIdleTrustlist.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_SetIdleTrustlist_0300, Function | MediumTest | Level3)
{
    uint8_t uid = 1;
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetIdleTrustlist(uid, true);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    DelayedSingleton<NetPolicyClient>::GetInstance()->SetIdleTrustlist(uid, false);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
}

/**
 * @tc.name:    Telephony_NetworkManager_GetIdleTrustlist_0100
 * @tc.desc: Test NetPolicyManager GetIdleTrustlist.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_GetIdleTrustlist_0100, Function | MediumTest | Level3)
{
    uint8_t uid = 1;
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetIdleTrustlist(uid, true);
    std::vector<uint32_t> uids;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetIdleTrustlist(uids);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_EQ(uids.size(), 1);
    ASSERT_EQ(uids[0], 1);
}

/**
 * @tc.name:    Telephony_NetworkManager_GetIdleTrustlist_0200
 * @tc.desc: Test NetPolicyManager GetIdleTrustlist.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_GetIdleTrustlist_0200, Function | MediumTest | Level3)
{
    uint8_t uid1 = 1;
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetIdleTrustlist(uid1, true);
    uint8_t uid2 = 2;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetIdleTrustlist(uid2, true);
    std::vector<uint32_t> uids;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetIdleTrustlist(uids);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_EQ(uids.size(), 2);
    ASSERT_EQ(uids[0], uid1);
    ASSERT_EQ(uids[1], uid2);
}

/**
 * @tc.name:    Telephony_NetworkManager_GetIdleTrustlist_0300
 * @tc.desc: Test NetPolicyManager GetIdleTrustlist.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_GetIdleTrustlist_0300, Function | MediumTest | Level3)
{
    uint8_t uid1 = 1;
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetIdleTrustlist(uid1, true);
    uint8_t uid2 = 2;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetIdleTrustlist(uid2, false);
    std::vector<uint32_t> uids;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetIdleTrustlist(uids);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_EQ(uids.size(), 1);
    ASSERT_EQ(uids[0], uid1);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetFactoryPolicy_0100
 * @tc.desc: Test NetPolicyManager SetFactoryPolicy.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_SetFactoryPolicy_0100, Function | MediumTest | Level3)
{
    uint8_t uid1 = 1;
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetPolicyByUid(uid1,
        NetUidPolicy::NET_POLICY_ALLOW_ALL);
    std::string subscriberId = "";

    result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetFactoryPolicy(subscriberId);
    ASSERT_EQ(static_cast<uint32_t>(result), static_cast<uint32_t>(NetPolicyResultCode::ERR_NONE));

    NetUidPolicy ret = DelayedSingleton<NetPolicyClient>::GetInstance()->GetPolicyByUid(uid1);
    ASSERT_EQ(static_cast<uint32_t>(ret), static_cast<uint32_t>(NetUidPolicy::NET_POLICY_NONE));
}

/**
 * @tc.name:    Telephony_NetworkManager_SetFactoryPolicy_0200
 * @tc.desc: Test NetPolicyManager SetFactoryPolicy.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_SetFactoryPolicy_0200, Function | MediumTest | Level3)
{
    uint8_t uid1 = 1;
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetIdleTrustlist(uid1, true);

     std::string subscriberId = "";
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetFactoryPolicy(subscriberId);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    std::vector<uint32_t> uids;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetIdleTrustlist(uids);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_TRUE(uids.empty());
}

/**
 * @tc.name:    Telephony_NetworkManager_SetFactoryPolicy_0300
 * @tc.desc: Test NetPolicyManager SetFactoryPolicy.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_SetFactoryPolicy_0300, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyQuotaPolicy quotaPolicy;
    quotaPolicy.netType_ = static_cast<uint8_t>(NetBearType::BEARER_CELLULAR);
    quotaPolicy.slotId_ = 0;
    quotaPolicy.periodStartTime_ = time(NULL);
    quotaPolicy.periodDuration_ = "M1";
    quotaPolicy.warningBytes_ = 80000;
    quotaPolicy.limitBytes_ = 100000;
    quotaPolicy.lastLimitSnooze_ = -1;
    quotaPolicy.metered_ = 0;
    quotaPolicy.source_ = 0;
    quotaPolicys.push_back(quotaPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetQuotaPolicies(quotaPolicys);

    std::string subscriberId = "0";
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetFactoryPolicy(subscriberId);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    std::vector<NetPolicyQuotaPolicy> getPolicys;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetNetQuotaPolicies(getPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_TRUE(getPolicys.empty());
}

/**
 * @tc.name:    Telephony_NetworkManager_SetFactoryPolicy_0400
 * @tc.desc: Test NetPolicyManager SetFactoryPolicy.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_SetFactoryPolicy_0400, Function | MediumTest | Level3)
{
    std::vector<NetPolicyCellularPolicy> cellularPolicys;
    NetPolicyCellularPolicy cellularPolicy;
    cellularPolicy.slotId_ = 0;
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
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetCellularPolicies(cellularPolicys);

     std::string subscriberId = "0";
     result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetFactoryPolicy(subscriberId);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    std::vector<NetPolicyCellularPolicy> getPolicys;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetCellularPolicies(getPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_TRUE(getPolicys.empty());
}

/**
 * @tc.name:    Telephony_NetworkManager_SetFactoryPolicy_0500
 * @tc.desc: Test NetPolicyManager SetFactoryPolicy.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_SetFactoryPolicy_0500, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyQuotaPolicy policy1;
    policy1.netType_ = static_cast<uint8_t>(NetBearType::BEARER_CELLULAR);
    policy1.slotId_ = 0;
    policy1.periodStartTime_ = time(NULL);
    policy1.periodDuration_ = "M1";
    policy1.warningBytes_ = 80000;
    policy1.limitBytes_ = 100000;
    policy1.lastLimitSnooze_ = -1;
    policy1.metered_ = 0;
    policy1.source_ = 0;
    quotaPolicys.push_back(policy1);

    NetPolicyQuotaPolicy policy2;
    policy2.netType_ = static_cast<uint8_t>(NetBearType::BEARER_ETHERNET);
    policy2.slotId_ = 1;
    policy2.periodStartTime_ = time(NULL);
    policy2.periodDuration_ = "M1";
    policy2.warningBytes_ = 80000;
    policy2.limitBytes_ = 100000;
    policy2.lastLimitSnooze_ = -1;
    policy2.metered_ = 0;
    policy2.source_ = 0;
    quotaPolicys.push_back(policy2);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetQuotaPolicies(quotaPolicys);

     std::string subscriberId = "0";
     result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetFactoryPolicy(subscriberId);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    std::vector<NetPolicyQuotaPolicy> getPolicys;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetNetQuotaPolicies(getPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_EQ(getPolicys.size(), 1);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetFactoryPolicy_0600
 * @tc.desc: Test NetPolicyManager SetFactoryPolicy.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_SetFactoryPolicy_0600, Function | MediumTest | Level3)
{
    std::vector<NetPolicyCellularPolicy> cellularPolicys;
    NetPolicyCellularPolicy cellularPolicy;
    cellularPolicy.slotId_ = 0;
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
    policy2.slotId_ = 1;
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

    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetCellularPolicies(cellularPolicys);

     std::string subscriberId = "0";
     result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetFactoryPolicy(subscriberId);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    std::vector<NetPolicyCellularPolicy> getPolicys;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetCellularPolicies(getPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_EQ(getPolicys.size(), 1);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetFactoryPolicy_0700
 * @tc.desc: Test NetPolicyManager SetFactoryPolicy.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_SetFactoryPolicy_0700, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyQuotaPolicy quotaPolicy;
    quotaPolicy.netType_ = static_cast<uint8_t>(NetBearType::BEARER_CELLULAR);
    quotaPolicy.slotId_ = 0;
    quotaPolicy.periodStartTime_ = time(NULL);
    quotaPolicy.periodDuration_ = "M1";
    quotaPolicy.warningBytes_ = 80000;
    quotaPolicy.limitBytes_ = 100000;
    quotaPolicy.lastLimitSnooze_ = -1;
    quotaPolicy.metered_ = 0;
    quotaPolicy.source_ = 0;
    quotaPolicys.push_back(quotaPolicy);

    NetPolicyQuotaPolicy quotaPolicy2;
    quotaPolicy2.netType_ = static_cast<uint8_t>(NetBearType::BEARER_ETHERNET);
    quotaPolicy2.slotId_ = 1;
    quotaPolicy2.periodStartTime_ = time(NULL);
    quotaPolicy2.periodDuration_ = "M1";
    quotaPolicy2.warningBytes_ = 80000;
    quotaPolicy2.limitBytes_ = 100000;
    quotaPolicy2.lastLimitSnooze_ = -1;
    quotaPolicy2.metered_ = 0;
    quotaPolicy2.source_ = 0;
    quotaPolicys.push_back(quotaPolicy2);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetQuotaPolicies(quotaPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    std::string subscriberId = "";
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetFactoryPolicy(subscriberId);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    std::vector<NetPolicyQuotaPolicy> getPolicys;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetNetQuotaPolicies(getPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_TRUE(getPolicys.empty());
}

/**
 * @tc.name:    Telephony_NetworkManager_SetFactoryPolicy_0800
 * @tc.desc: Test NetPolicyManager SetFactoryPolicy.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_SetFactoryPolicy_0800, Function | MediumTest | Level3)
{
    std::vector<NetPolicyCellularPolicy> cellularPolicys;
    NetPolicyCellularPolicy cellularPolicy;
    cellularPolicy.slotId_ = 0;
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
    policy2.slotId_ = 1;
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
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetCellularPolicies(cellularPolicys);
    std::string subscriberId = "";
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetFactoryPolicy(subscriberId);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    std::vector<NetPolicyCellularPolicy> getPolicys;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetCellularPolicies(getPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    ASSERT_TRUE(getPolicys.empty());
}

/**
 * @tc.name:    Telephony_NetworkManager_SetFactoryPolicy_0900
 * @tc.desc: Test NetPolicyManager SetFactoryPolicy.
 * @tc.type: FUNC
 */
HWTEST_F(SnoozeTest, Telephony_NetworkManager_SetFactoryPolicy_0900, Function | MediumTest | Level3)
{
    bool backgroundPolicy = false;
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetBackgroundPolicy(backgroundPolicy);
    std::string subscriberId = "";
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetFactoryPolicy(subscriberId);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);

    bool ret = DelayedSingleton<NetPolicyClient>::GetInstance()->GetBackgroundPolicy();
    ASSERT_TRUE(ret);
}
}
}