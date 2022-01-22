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

#include "stability_test_phase7.h"
#include <vector>
#include "netmanager_utils.h"
#include "net_stat_callback_test.h"

namespace OHOS {
namespace NetManagerStandard {
using namespace testing::ext;
static const int TEST_COUNTS_1000 = 1000;
/*
 * @tc.number       Telephony_NetworkManager_GetIfaceStatsDetail_0300
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(StabilityTestPhase7, Telephony_NetworkManager_GetIfaceStatsDetail_0300, Function | MediumTest | Level3)
{
    std::string  iface =  "test";
    int32_t start = time(NULL);
    int32_t end = time(NULL) - 60 * 60;
    NetStatsInfo statsInfo ;
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->GetIfaceStatsDetail(iface,
            start, end, statsInfo);
        ASSERT_EQ(result, NetStatsResultCode::ERR_INVALID_PARAMETER);
        ASSERT_EQ(statsInfo.rxBytes_, 0);
        ASSERT_EQ(statsInfo.txBytes_, 0);
    }
}

/*
 * @tc.number       Telephony_NetworkManager_GetUidStatsDetail_0300
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(StabilityTestPhase7, Telephony_NetworkManager_GetUidStatsDetail_0300, Function | MediumTest | Level3)
{
    std::string  iface = "test";
    int32_t uid = 1001;
    int32_t start = time(NULL) - 60 * 60;
    int32_t end = time(NULL);
    NetStatsInfo statsInfo ;
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->GetUidStatsDetail(iface,
        uid, start, end, statsInfo);
        ASSERT_EQ(result, NetStatsResultCode::ERR_INVALID_PARAMETER);
        ASSERT_EQ(statsInfo.rxBytes_, 0);
        ASSERT_EQ(statsInfo.txBytes_, 0);
    }
}

/*
 * @tc.number       Telephony_NetworkManager_UpdateStatsData_0200
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(StabilityTestPhase7, Telephony_NetworkManager_UpdateStatsData_0200, Function | MediumTest | Level3)
{
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->UpdateStatsData();
        ASSERT_EQ(result, NetStatsResultCode::ERR_NONE);
    }
}

/*
 * @tc.number       Telephony_NetworkManager_UpdateIfacesStats_0400
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(StabilityTestPhase7, Telephony_NetworkManager_UpdateIfacesStats_0400, Function | MediumTest | Level3)
{
    std::string  iface =  "eth0";
    NetStatsInfo stats;
    stats.rxBytes_ = 2048;
    stats.txBytes_ = 1024;
	int32_t start = time(NULL) - 60 * 60 * 24 * 30;
    int32_t end = time(NULL);
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->UpdateIfacesStats(iface,
            start, end, stats);
        ASSERT_EQ(result, NetStatsResultCode::ERR_NONE);
        result = DelayedSingleton<NetStatsClient>::GetInstance()->GetIfaceStatsDetail(iface,
            start, end, stats);
        ASSERT_EQ(result, NetStatsResultCode::ERR_NONE);
        ASSERT_EQ(stats.rxBytes_, 2048);
        ASSERT_EQ(stats.txBytes_, 1024);
    }
}

/**
 * @tc.name:    Telephony_NetworkManager_SetNetQuotaPolicies_1800
 * @tc.desc: Test NetPolicyManager SetNetQuotaPolicies.
 * @tc.type: FUNC
 */
HWTEST_F(StabilityTestPhase7, Telephony_NetworkManager_SetNetQuotaPolicies_1800, Function | MediumTest | Level3)
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
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetQuotaPolicies(quotaPolicys);
        ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    }
}

/**
 * @tc.name:    Telephony_NetworkManager_GetNetQuotaPolicies_0500
 * @tc.desc: Test NetPolicyManager SetNetQuotaPolicies.
 * @tc.type: FUNC
 */
HWTEST_F(StabilityTestPhase7, Telephony_NetworkManager_GetNetQuotaPolicies_0500, Function | MediumTest | Level3)
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
    int count;
    NetPolicyResultCode result;
    std::vector<NetPolicyQuotaPolicy> getPolicys;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetQuotaPolicies(quotaPolicys);
        ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
        result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetNetQuotaPolicies(getPolicys);
        ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
        ASSERT_FALSE(getPolicys.empty());
        ASSERT_TRUE(EqualsNetPolicy(quotaPolicy, getPolicys[0]));
    }
}

/**
 * @tc.name:    Telephony_NetworkManager_SetCellularPolicies_1200
 * @tc.desc: Test NetPolicyManager SetNetQuotaPolicies.
 * @tc.type: FUNC
 */
HWTEST_F(StabilityTestPhase7, Telephony_NetworkManager_SetCellularPolicies_1200, Function | MediumTest | Level3)
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
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        NetPolicyResultCode result =
            DelayedSingleton<NetPolicyClient>::GetInstance()->SetCellularPolicies(cellularPolicys);
        ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    }
}

/**
 * @tc.name:    Telephony_NetworkManager_GetCellularPolicies_0500
 * @tc.desc: Test NetPolicyManager SetNetQuotaPolicies.
 * @tc.type: FUNC
 */
HWTEST_F(StabilityTestPhase7, Telephony_NetworkManager_GetCellularPolicies_0500, Function | MediumTest | Level3)
{
    std::vector<NetPolicyCellularPolicy> setPolicys;
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
    setPolicys.push_back(cellularPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetCellularPolicies(setPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    std::vector<NetPolicyCellularPolicy> getPolicys;
    int count;
    for (count = 0; count < 100; count++) {
        result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetCellularPolicies(getPolicys);
        ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
        ASSERT_EQ(setPolicys.size(), getPolicys.size());
        ASSERT_TRUE(EqualsCellularPolicy(cellularPolicy, getPolicys[0]));
    }
}

/**
 * @tc.name:    Telephony_NetworkManager_SetSnoozePolicy_0700
 * @tc.desc: Test NetPolicyManager SetSnoozePolicy.
 * @tc.type: FUNC
 */
HWTEST_F(StabilityTestPhase7, Telephony_NetworkManager_SetSnoozePolicy_0700, Function | MediumTest | Level3)
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

    uint8_t netType_ = static_cast<uint8_t>(NetBearType::BEARER_CELLULAR);
    uint8_t slotId_ = 0;
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetSnoozePolicy(netType_, slotId_);
        ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    }
}

/**
 * @tc.name:    Telephony_NetworkManager_SetIdleTrustlist_0400
 * @tc.desc: Test NetPolicyManager SetIdleTrustlist.
 * @tc.type: FUNC
 */
HWTEST_F(StabilityTestPhase7, Telephony_NetworkManager_SetIdleTrustlist_0400, Function | MediumTest | Level3)
{
    uint8_t uid = 1;
    NetPolicyResultCode result;
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetIdleTrustlist(uid, true);
        ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    }
}

/**
 * @tc.name:    Telephony_NetworkManager_GetIdleTrustlist_0400
 * @tc.desc: Test NetPolicyManager GetIdleTrustlist.
 * @tc.type: FUNC
 */
HWTEST_F(StabilityTestPhase7, Telephony_NetworkManager_GetIdleTrustlist_0400, Function | MediumTest | Level3)
{
    uint8_t uid = 1;
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetIdleTrustlist(uid, true);
    std::vector<uint32_t> uids;
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetIdleTrustlist(uids);
        ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
        ASSERT_EQ(uids.size(), 1);
        ASSERT_EQ(uids[0], 1);
    }
}

/**
 * @tc.name:    Telephony_NetworkManager_SetFactoryPolicy_1000
 * @tc.desc: Test NetPolicyManager SetFactoryPolicy.
 * @tc.type: FUNC
 */
HWTEST_F(StabilityTestPhase7, Telephony_NetworkManager_SetFactoryPolicy_1000, Function | MediumTest | Level3)
{
    std::string subscriberId = "0";
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetFactoryPolicy(subscriberId);
        ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    }
}

/**
 * @tc.number   Telephony_NetworkManager_SetAirplaneMode_0300
 * @tc.name     Verify state is "false" and test SetAirplaneMode() to see the return value.
 * @tc.desc     Function test
 */
HWTEST_F(StabilityTestPhase7, Telephony_NetworkManager_SetAirplaneMode_0300, Function | MediumTest | Level2)
{
    bool state = true;
    int32_t expect = 0;
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->SetAirplaneMode(state);
        EXPECT_EQ(ret, expect);
    }
}

/**
 * @tc.name:    Telephony_NetworkManager_SetBackgroundPolicy_0300
 * @tc.desc: Test NetPolicyManager SetBackgroundPolicy.
 * @tc.type: FUNC
 */
HWTEST_F(StabilityTestPhase7, Telephony_NetworkManager_SetBackgroundPolicy_0300, Function | MediumTest | Level3)
{
    bool isBackgroundPolicyAllow = false;
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        NetPolicyResultCode ret =
            DelayedSingleton<NetPolicyClient>::GetInstance()->SetBackgroundPolicy(isBackgroundPolicyAllow);
        EXPECT_EQ(static_cast<int32_t>(ret), static_cast<int32_t>(NetPolicyResultCode::ERR_NONE));
    }
}

/**
 * @tc.name:    Telephony_NetworkManager_GetBackgroundPolicy_0300
 * @tc.desc: Test NetPolicyManager GetBackgroundPolicy.
 * @tc.type: FUNC
 */
HWTEST_F(StabilityTestPhase7, Telephony_NetworkManager_GetBackgroundPolicy_0300, Function | MediumTest | Level3)
{
    bool isBackgroundPolicyAllow = false;
    NetPolicyResultCode ret =
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetBackgroundPolicy(isBackgroundPolicyAllow);
    EXPECT_EQ(static_cast<int32_t>(ret), static_cast<int32_t>(NetPolicyResultCode::ERR_NONE));
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        bool isAllow = DelayedSingleton<NetPolicyClient>::GetInstance()->GetBackgroundPolicy();
        ASSERT_FALSE(isAllow);
    }
}

/**
 * @tc.name:    Telephony_NetworkManager_GetBackgroundPolicyByUid_1000
 * @tc.desc: Test NetPolicyManager GetBackgroundPolicyByUid.
 * @tc.type: FUNC
 */
HWTEST_F(StabilityTestPhase7, Telephony_NetworkManager_GetBackgroundPolicyByUid_1000, Function | MediumTest | Level3)
{
    uint32_t uid = 1234;
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetPolicyByUid(uid,
            NetUidPolicy::NET_POLICY_ALLOW_ALL);
        bool isAllow = DelayedSingleton<NetPolicyClient>::GetInstance()->GetBackgroundPolicyByUid(uid);
        EXPECT_TRUE(isAllow);
    }
}

/**
 * @tc.name:    Telephony_NetworkManager_GetCurrentBackgroundPolicy_0500
 * @tc.desc: Test NetPolicyManager GetCurrentBackgroundPolicy.
 * @tc.type: FUNC
 */
HWTEST_F(StabilityTestPhase7, Telephony_NetworkManager_GetCurrentBackgroundPolicy_0500, Function | MediumTest | Level3)
{
    bool isBackgroundPolicyAllow = true;
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetBackgroundPolicy(isBackgroundPolicyAllow);
        NetBackgroundPolicy ret = DelayedSingleton<NetPolicyClient>::GetInstance()->GetCurrentBackgroundPolicy();
        EXPECT_EQ(static_cast<int32_t>(ret), static_cast<int32_t>(NetBackgroundPolicy::NET_BACKGROUND_POLICY_DISABLE));
    }
}

/*
 * @tc.number       Telephony_NetworkManager_RegisterNetStatsCallback_0200
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(StabilityTestPhase7, Telephony_NetworkManager_RegisterNetStatsCallback_0200, Function | MediumTest | Level3)
{
    int count;
    for (count = 0; count < 10; count++) {
        sptr<INetStatsCallback> callback = (std::make_unique<NetStatsCallbackTest>()).release();
        int32_t ret = DelayedSingleton<NetStatsClient>::GetInstance()->RegisterNetStatsCallback(callback);
        EXPECT_EQ(ret, 0);
    }
}

/*
 * @tc.number       Telephony_NetworkManager_UnregisterNetStatsCallback_0200
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(StabilityTestPhase7, Telephony_NetworkManager_UnregisterNetStatsCallback_0200, Function | MediumTest | Level3)
{
    int count;
    for (count = 0; count < 10; count++) {
        sptr<INetStatsCallback> callback = (std::make_unique<NetStatsCallbackTest>()).release();
        int32_t ret = DelayedSingleton<NetStatsClient>::GetInstance()->RegisterNetStatsCallback(callback);
        ret = DelayedSingleton<NetStatsClient>::GetInstance()->UnregisterNetStatsCallback(callback);
        EXPECT_EQ(ret, 0);
    }
}

/**
 * @tc.number   Telephony_NetworkManager_RestoreFactoryData_0200
 * @tc.name     
 * @tc.desc     Function test
 */
HWTEST_F(StabilityTestPhase7, Telephony_NetworkManager_RestoreFactoryData_0200, Function | MediumTest | Level2)
{
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->RestoreFactoryData();
        EXPECT_EQ(ret, 0);
    }
}
}
}