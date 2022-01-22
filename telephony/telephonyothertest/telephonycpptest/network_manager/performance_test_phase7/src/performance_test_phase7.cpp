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

#include "performance_test_phase7.h"
#include <vector>
#include "netmanager_utils.h"
#include "condition_lock.h"
#include "time_count_helper.h"
#include "net_stat_callback_test.h"

namespace OHOS {
namespace NetManagerStandard {
using namespace testing::ext;
static const int TEST_COUNTS_1000 = 1000;
static const int32_t TIME_USEC = 1000;

/*
 * @tc.number       Telephony_NetworkManager_GetIfaceStatsDetail_0400
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(PerformanceTestPhase7, Telephony_NetworkManager_GetIfaceStatsDetail_0400, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    std::string  iface =  "test";
    int32_t start = time(NULL);
    int32_t end = time(NULL) - 60 * 60;
    NetStatsInfo statsInfo ;
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        DelayedSingleton<NetStatsClient>::GetInstance()->GetIfaceStatsDetail(iface,
            start, end, statsInfo);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number       Telephony_NetworkManager_GetUidStatsDetail_0400
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(PerformanceTestPhase7, Telephony_NetworkManager_GetUidStatsDetail_0400, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    std::string  iface = "test";
    int32_t uid = 1001;
    int32_t start = time(NULL) - 60 * 60;
    int32_t end = time(NULL);
    NetStatsInfo statsInfo ;
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        DelayedSingleton<NetStatsClient>::GetInstance()->GetUidStatsDetail(iface,
        uid, start, end, statsInfo);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number       Telephony_NetworkManager_UpdateStatsData_0300
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(PerformanceTestPhase7, Telephony_NetworkManager_UpdateStatsData_0300, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        DelayedSingleton<NetStatsClient>::GetInstance()->UpdateStatsData();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number       Telephony_NetworkManager_UpdateIfacesStats_0500
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(PerformanceTestPhase7, Telephony_NetworkManager_UpdateIfacesStats_0500, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    std::string  iface =  "eth0";
    NetStatsInfo stats;
    stats.rxBytes_ = 2048;
    stats.txBytes_ = 1024;
	int32_t start = time(NULL) - 60 * 60 * 24 * 30;
    int32_t end = time(NULL);
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        DelayedSingleton<NetStatsClient>::GetInstance()->UpdateIfacesStats(iface,
            start, end, stats);
        DelayedSingleton<NetStatsClient>::GetInstance()->GetIfaceStatsDetail(iface,
            start, end, stats);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetNetQuotaPolicies_1900
 * @tc.desc: Test NetPolicyManager SetNetQuotaPolicies.
 * @tc.type: FUNC
 */
HWTEST_F(PerformanceTestPhase7, Telephony_NetworkManager_SetNetQuotaPolicies_1900, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
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
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetQuotaPolicies(quotaPolicys);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/**
 * @tc.name:    Telephony_NetworkManager_GetNetQuotaPolicies_0600
 * @tc.desc: Test NetPolicyManager SetNetQuotaPolicies.
 * @tc.type: FUNC
 */
HWTEST_F(PerformanceTestPhase7, Telephony_NetworkManager_GetNetQuotaPolicies_0600, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
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
    std::vector<NetPolicyQuotaPolicy> getPolicys;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetQuotaPolicies(quotaPolicys);
        DelayedSingleton<NetPolicyClient>::GetInstance()->GetNetQuotaPolicies(getPolicys);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetCellularPolicies_1300
 * @tc.desc: Test NetPolicyManager SetNetQuotaPolicies.
 * @tc.type: FUNC
 */
HWTEST_F(PerformanceTestPhase7, Telephony_NetworkManager_SetCellularPolicies_1300, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
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
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetCellularPolicies(cellularPolicys);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/**
 * @tc.name:    Telephony_NetworkManager_GetCellularPolicies_0600
 * @tc.desc: Test NetPolicyManager SetNetQuotaPolicies.
 * @tc.type: FUNC
 */
HWTEST_F(PerformanceTestPhase7, Telephony_NetworkManager_GetCellularPolicies_0600, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
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
    DelayedSingleton<NetPolicyClient>::GetInstance()->GetCellularPolicies(setPolicys);
    std::vector<NetPolicyCellularPolicy> getPolicys;
    int count;
    for (count = 0; count < 100; count++) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->GetCellularPolicies(getPolicys);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetSnoozePolicy_0800
 * @tc.desc: Test NetPolicyManager SetSnoozePolicy.
 * @tc.type: FUNC
 */
HWTEST_F(PerformanceTestPhase7, Telephony_NetworkManager_SetSnoozePolicy_0800, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
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
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetQuotaPolicies(quotaPolicys);
    uint8_t netType_ = static_cast<uint8_t>(NetBearType::BEARER_CELLULAR);
    uint8_t slotId_ = 0;
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetSnoozePolicy(netType_, slotId_);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetIdleTrustlist_0500
 * @tc.desc: Test NetPolicyManager SetIdleTrustlist.
 * @tc.type: FUNC
 */
HWTEST_F(PerformanceTestPhase7, Telephony_NetworkManager_SetIdleTrustlist_0500, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    uint8_t uid = 1;
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetIdleTrustlist(uid, true);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/**
 * @tc.name:    Telephony_NetworkManager_GetIdleTrustlist_0500
 * @tc.desc: Test NetPolicyManager GetIdleTrustlist.
 * @tc.type: FUNC
 */
HWTEST_F(PerformanceTestPhase7, Telephony_NetworkManager_GetIdleTrustlist_0500, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    uint8_t uid = 1;
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetIdleTrustlist(uid, true);
    std::vector<uint32_t> uids;
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->GetIdleTrustlist(uids);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetFactoryPolicy_1100
 * @tc.desc: Test NetPolicyManager SetFactoryPolicy.
 * @tc.type: FUNC
 */
HWTEST_F(PerformanceTestPhase7, Telephony_NetworkManager_SetFactoryPolicy_1100, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    std::string subscriberId = "0";
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetFactoryPolicy(subscriberId);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/**
 * @tc.number   Telephony_NetworkManager_SetAirplaneMode_0400
 * @tc.name     Verify state is "false" and test SetAirplaneMode() to see the return value.
 * @tc.desc     Function test
 */
HWTEST_F(PerformanceTestPhase7, Telephony_NetworkManager_SetAirplaneMode_0400, Function | MediumTest | Level2)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    bool state = true;
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        DelayedSingleton<NetConnClient>::GetInstance()->SetAirplaneMode(state);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/**
 * @tc.name:    Telephony_NetworkManager_SetBackgroundPolicy_0400
 * @tc.desc: Test NetPolicyManager SetBackgroundPolicy.
 * @tc.type: FUNC
 */
HWTEST_F(PerformanceTestPhase7, Telephony_NetworkManager_SetBackgroundPolicy_0400, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    bool isBackgroundPolicyAllow = false;
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetBackgroundPolicy(isBackgroundPolicyAllow);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/**
 * @tc.name:    Telephony_NetworkManager_GetBackgroundPolicy_0400
 * @tc.desc: Test NetPolicyManager GetBackgroundPolicy.
 * @tc.type: FUNC
 */
HWTEST_F(PerformanceTestPhase7, Telephony_NetworkManager_GetBackgroundPolicy_0400, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    bool isBackgroundPolicyAllow = false;
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetBackgroundPolicy(isBackgroundPolicyAllow);
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->GetBackgroundPolicy();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/**
 * @tc.name:    Telephony_NetworkManager_GetBackgroundPolicyByUid_1100
 * @tc.desc: Test NetPolicyManager GetBackgroundPolicyByUid.
 * @tc.type: FUNC
 */
HWTEST_F(PerformanceTestPhase7, Telephony_NetworkManager_GetBackgroundPolicyByUid_1100, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    uint32_t uid = 1234;
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetPolicyByUid(uid,
            NetUidPolicy::NET_POLICY_ALLOW_ALL);
        DelayedSingleton<NetPolicyClient>::GetInstance()->GetBackgroundPolicyByUid(uid);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/**
 * @tc.name:    Telephony_NetworkManager_GetCurrentBackgroundPolicy_0600
 * @tc.desc: Test NetPolicyManager GetCurrentBackgroundPolicy.
 * @tc.type: FUNC
 */
HWTEST_F(PerformanceTestPhase7, Telephony_NetworkManager_GetCurrentBackgroundPolicy_0600, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    bool isBackgroundPolicyAllow = true;
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetBackgroundPolicy(isBackgroundPolicyAllow);
        DelayedSingleton<NetPolicyClient>::GetInstance()->GetCurrentBackgroundPolicy();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number       Telephony_NetworkManager_RegisterNetStatsCallback_0300
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(PerformanceTestPhase7, Telephony_NetworkManager_RegisterNetStatsCallback_0300, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    sptr<INetStatsCallback> callback = (std::make_unique<NetStatsCallbackTest>()).release();
    int count;
    for (count = 0; count < 10; count++) {
        DelayedSingleton<NetStatsClient>::GetInstance()->RegisterNetStatsCallback(callback);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number       Telephony_NetworkManager_UnregisterNetStatsCallback_0300
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(PerformanceTestPhase7, Telephony_NetworkManager_UnregisterNetStatsCallback_0300, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    int count;
    sptr<INetStatsCallback> callback = (std::make_unique<NetStatsCallbackTest>()).release();
    for (count = 0; count < 10; count++) {
        DelayedSingleton<NetStatsClient>::GetInstance()->RegisterNetStatsCallback(callback);
        DelayedSingleton<NetStatsClient>::GetInstance()->UnregisterNetStatsCallback(callback);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/**
 * @tc.number   Telephony_NetworkManager_RestoreFactoryData_0300
 * @tc.name     
 * @tc.desc     Function test
 */
HWTEST_F(PerformanceTestPhase7, Telephony_NetworkManager_RestoreFactoryData_0300, Function | MediumTest | Level2)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    int count;
    for (count = 0; count < 10; count++) {
        DelayedSingleton<NetConnClient>::GetInstance()->RestoreFactoryData();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}
}
}