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
#include "data_flow_statistics.h"
#include "net_stats_constants.h"
#include "net_stats_client.h"
#include "net_policy_constants.h"
#include "net_policy_define.h"
#include "net_policy_client.h"

using namespace OHOS;
using namespace OHOS::NetManagerStandard;

namespace OHOS {
namespace NetManagerStandard {
using namespace testing::ext;

/*
 * @tc.number       Telephony_NetworkManager_GetIfaceStatsDetail_0600
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(NetMgrStabilityTestPhase7, Telephony_NetworkManager_GetIfaceStatsDetail_0600, Function | MediumTest | Level3)
{
    std::string  iface =  "eth0";
    uint32_t start = time(NULL);
    uint32_t end = time(NULL) - 60 * 60;
    NetStatsInfo statsInfo ;
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->GetIfaceStatsDetail(iface,
            start, end, statsInfo);
        ASSERT_EQ(result, NetStatsResultCode::ERR_INTERNAL_ERROR);
        ASSERT_EQ(statsInfo.rxBytes_, 0);
        ASSERT_EQ(statsInfo.txBytes_, 0);
    }
}

/*
 * @tc.number       Telephony_NetworkManager_GetUidStatsDetail_0600
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(NetMgrStabilityTestPhase7, Telephony_NetworkManager_GetUidStatsDetail_0600, Function | MediumTest | Level3)
{
    std::vector<std::string>  iface = {"eth0"} ;
    uint32_t uid = 1001;
    uint32_t start = time(NULL) - 60 * 60;
    uint32_t end = time(NULL);
    std::vector<NetStatsInfo> statsInfo ;
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->GetUidStatsDetail(iface,
        uid, start, end, statsInfo);
        ASSERT_EQ(result, NetStatsResultCode::ERR_NONE);
        ASSERT_TRUE(!statsInfo.empty());
        ASSERT_EQ(statsInfo[0].rxBytes_, 0);
        ASSERT_EQ(statsInfo[0].txBytes_, 0);
    }
}

/*
 * @tc.number       Telephony_NetworkManager_UpdateStatsData_0200
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(NetMgrStabilityTestPhase7, Telephony_NetworkManager_UpdateStatsData_0200, Function | MediumTest | Level3)
{
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->UpdateStatsData();
        ASSERT_EQ(result, NetStatsResultCode::ERR_NONE);
    }
}

/*
 * @tc.number       Telephony_NetworkManager_UpdateIfacesStats_0700
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(NetMgrStabilityTestPhase7, Telephony_NetworkManager_UpdateIfacesStats_0700, Function | MediumTest | Level3)
{
    std::string  iface =  "eth0";
    NetStatsInfo stats;
    stats.rxBytes_ = 2048;
    stats.txBytes_ = 1024;
	uint32_t start = time(NULL) - 60 * 60 * 24 * 30;
    uint32_t end = time(NULL);
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
 * @tc.name:    Telephony_NetworkManager_SetNetPolicys_1800
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(NetMgrStabilityTestPhase7, Telephony_NetworkManager_SetNetPolicys_1800, Function | MediumTest | Level3)
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
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetPolicys(quotaPolicys);
        ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    }
}

/**
 * @tc.name:    Telephony_NetworkManager_GetNetPolicys_0500
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(NetMgrStabilityTestPhase7, Telephony_NetworkManager_GetNetPolicys_0500, Function | MediumTest | Level3)
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
    int count;
    NetPolicyResultCode result;
    std::vector<NetPolicyQuotaPolicy> getPolicys;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetPolicys(quotaPolicys);
        ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
        result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetNetPolicys(getPolicys);
        ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
        ASSERT_FLASE(getPolicys.empty());
        ASSERT_TRUE(equals(quotaPolicy, getPolicys[0]));
    }
    
}

/**
 * @tc.name:    Telephony_NetworkManager_SetCellularPolicys_0100
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(NetMgrStabilityTestPhase7, Telephony_NetworkManager_SetCellularPolicys_0100, Function | MediumTest | Level3)
{
    std::vector<NetPolicyCellularPolicy> cellularPolicys;
    NetPolicyCellularPolicy cellularPolicy;
    cellularPolicy.subscriberId_ = "0";
    cellularPolicy.periodStartTime_ = time(null);
    cellularPolicy.periodDuration_ = "M1";
    cellularPolicy.title_ = "test_title";
    cellularPolicy.summary_ = "test_summary";
    cellularPolicy.limitBytes_ = 100000;
    cellularPolicy.limitAction_ = 1;
    cellularPolicy.usedBytes_ = 0;
    cellularPolicy.usedTimeDuration_ = time(null);
    cellularPolicy.possessor_ = "test_possessor"
    cellularPolicys.push_back(cellularPolicy);
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetCellularPolicys(cellularPolicys);
        ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    }
}

/**
 * @tc.name:    Telephony_NetworkManager_GetCellularPolicys_0500
 * @tc.desc: Test NetPolicyManager SetNetPolicys.
 * @tc.type: FUNC
 */
HWTEST_F(NetMgrStabilityTestPhase7, Telephony_NetworkManager_GetCellularPolicys_0500, Function | MediumTest | Level3)
{
    std::vector<NetPolicyCellularPolicy> setPolicys;
    NetPolicyCellularPolicy cellularPolicy;
    cellularPolicy.subscriberId_ = "0";
    cellularPolicy.periodStartTime_ = time(null);
    cellularPolicy.periodDuration_ = "M1";
    cellularPolicy.title_ = "test_title";
    cellularPolicy.summary_ = "test_summary";
    cellularPolicy.limitBytes_ = 100000;
    cellularPolicy.limitAction_ = 1;
    cellularPolicy.usedBytes_ = 0;
    cellularPolicy.usedTimeDuration_ = time(null);
    cellularPolicy.possessor_ = "test_possessor"
    setPolicys.push_back(cellularPolicy);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetCellularPolicys(setPolicys);
    ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    std::vector<NetPolicyCellularPolicy> getPolicys;
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetCellularPolicys(getPolicys);
        ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
        ASSERT_EQ(setPolicys.size(), getPolicys.size());
        ASSERT_TRUE(EqualsCellularPolicy(cellularPolicy, getPolicys[0]));
    }
}

/**
 * @tc.name:    Telephony_NetworkManager_SnoozePolicy_0700
 * @tc.desc: Test NetPolicyManager SnoozePolicy.
 * @tc.type: FUNC
 */
HWTEST_F(NetMgrStabilityTestPhase7, Telephony_NetworkManager_SnoozePolicy_0700, Function | MediumTest | Level3)
{
    std::vector<NetPolicyQuotaPolicy> quotaPolicys;
    NetPolicyQuotaPolicy quotaPolicy;
    quotaPolicy.netType_ = static_cast<uint8_t>(NetQuotaPolicyType::NET_POLICY_MOBILE);
    quotaPolicy.subscriberId_ = "0";
    quotaPolicy.periodStartTime_ = time(null);
    quotaPolicy.periodDuration_ = "M1"
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
    snoozePolicy.subscriberId_ = "0";
    NetPolicyResultCode result;
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        result = DelayedSingleton<NetPolicyClient>::GetInstance()->SnoozePolicy(snoozePolicy);
        ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    }
}

/**
 * @tc.name:    Telephony_NetworkManager_SetIdleWhitelist_0400
 * @tc.desc: Test NetPolicyManager SetIdleWhitelist.
 * @tc.type: FUNC
 */
HWTEST_F(NetMgrStabilityTestPhase7, Telephony_NetworkManager_SetIdleWhitelist_0400, Function | MediumTest | Level3)
{
    uint8_t uid = 1;
    NetPolicyResultCode result;
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetIdleWhitelist(uid, true);
        ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    }
}

/**
 * @tc.name:    Telephony_NetworkManager_GetIdleWhitelist_0400
 * @tc.desc: Test NetPolicyManager GetIdleWhitelist.
 * @tc.type: FUNC
 */
HWTEST_F(NetMgrStabilityTestPhase7, Telephony_NetworkManager_GetIdleWhitelist_0400, Function | MediumTest | Level3)
{
    uint8_t uid = 1;
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetIdleWhitelist(uid, true);
    std::vector<uint32_t> uids;
    NetPolicyResultCode result;
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetIdleWhitelist(uids);
        ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
        ASSERT_EQ(uids.size(), 1);
        ASSERT_EQ(uids[0], 1);
    }
}

/**
 * @tc.name:    Telephony_NetworkManager_ResetFactory_1000
 * @tc.desc: Test NetPolicyManager ResetFactory.
 * @tc.type: FUNC
 */
HWTEST_F(NetMgrStabilityTestPhase7, Telephony_NetworkManager_ResetFactory_1000, Function | MediumTest | Level3)
{
    std::string subscriberId = "0";
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->ResetFactory(subscriberId);
        ASSERT_EQ(result, NetPolicyResultCode::ERR_NONE);
    }
}

/**
 * @tc.number   Telephony_NetworkManager_RegisterTetheringEventCallback_0100
 * @tc.name     test RegisterTetheringEventCallback
 * @tc.desc     Function test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_RegisterTetheringEventCallback_0100, Function | MediumTest | Level2)
{
    int count;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        DelayedSingleton<NetTetherClient>::GetInstance()->RegisterTetheringEventCallback(callback);
        TetheringType type = TetheringType::TETHERING_WIFI;
        int32_t ret = NetTetherService->TetherByType(type);
    }
}

/**
 * @tc.number   Telephony_NetworkManager_TetherByIface_0500
 * @tc.name     TetherByIface() set up a wifi shared cellular data network for 10 times
 *              and returned data successfully each time.
 * @tc.desc     Reliablity test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_TetherByIface_0500, Function | MediumTest | Level3)
{
    std::string iface = "wlan0";
    OHOS::Wifi::ApService *apService;
    int32_t enableResult = apService->EnableHotspot();
    EXPECT_EQ(enableResult, OHOS::Wifi::ErrCode::WIFI_OPT_SUCCESS);

    for (int32_t timeNumber = 0; timeNumber < TEST_RUN_TIME; ++timeNumber) {
        int32_t result = DelayedSingleton<NetTetherClient>::GetInstance()->TetherByIface(iface);
        ASSERT_EQ(result, TetherResultCode::TETHERING_NO_ERR);
    }

    // Restore
    int32_t disableResult = apService->DisableHotspot();
    EXPECT_EQ(disableResult, OHOS::Wifi::ErrCode::WIFI_OPT_SUCCESS);
}

/**
 * @tc.number   Telephony_NetworkManager_UntetherByIface_0400
 * @tc.name     UntetherByIface() was tested to turn off wifi network AP10 times, and successfully returned data each
 *              time.
 * @tc.desc     Reliablity test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_UntetherByIface_0400, Function | MediumTest | Level3)
{
    std::string iface = "wlan0";
    for (int32_t timeNumber = 0; timeNumber < TEST_RUN_TIME; ++timeNumber) {
        int32_t enableResult =
            DelayedSingleton<NetTetherClient>::GetInstance()->TetherByType(TetheringType::TETHERING_WIFI);
        EXPECT_EQ(enableResult, TetherResultCode::TETHERING_NO_ERR);
        int32_t result = DelayedSingleton<NetTetherClient>::GetInstance()->UntetherByIface(iface);
        ASSERT_EQ(result, TetherResultCode::TETHERING_NO_ERR);
    }

    // Restore
}

/**
 * @tc.number   Telephony_NetworkManager_TetherByType_0600
 * @tc.name     Test TetherByType() to enable wifi sharing for 10 times, and successfully return data each time.
 * @tc.desc     Reliablity test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_TetherByType_0600, Function | MediumTest | Level3)
{
    std::string iface = "wlan0";
    for (int32_t timeNumber = 0; timeNumber < TEST_RUN_TIME; ++timeNumber) {
        int32_t enableResult =
            DelayedSingleton<NetTetherClient>::GetInstance()->TetherByType(TetheringType::TETHERING_WIFI);
        ASSERT_EQ(enableResult, TetherResultCode::TETHERING_NO_ERR);
        int32_t result = DelayedSingleton<NetTetherClient>::GetInstance()->UntetherByIface(iface);
        EXPECT_EQ(result, TetherResultCode::TETHERING_NO_ERR);
    }

    // Restore
}

/**
 * @tc.number   Telephony_NetworkManager_UntetherByType_0600
 * @tc.name     Test UntetherByType() to stop wifi sharing for 10 times, and return data successfully each time.
 * @tc.desc     Reliablity test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_UntetherByType_0600, Function | MediumTest | Level3)
{
    for (int32_t timeNumber = 0; timeNumber < TEST_RUN_TIME; ++timeNumber) {
        int32_t ret =
            DelayedSingleton<NetTetherClient>::GetInstance()->TetherByType(TetheringType::TETHERING_WIFI);
        EXPECT_EQ(ret, TetherResultCode::TETHERING_NO_ERR);
        int32_t result =
            DelayedSingleton<NetTetherClient>::GetInstance()->UntetherByType(TetheringType::TETHERING_WIFI);
        ASSERT_EQ(result, TetherResultCode::TETHERING_NO_ERR);
    }
}
/**
 * @tc.number   Telephony_NetworkManager_SetAirplaneMode_0300
 * @tc.name     SetAirplaneMode() was tested to set flight mode for 10 times, and data was returned successfully each
 *              time.
 * @tc.desc     Reliablity test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_SetAirplaneMode_0300, Function | MediumTest | Level3)
{
    bool state = true;
    int32_t expect = 0;
    for (int32_t timeNumber = 0; timeNumber < TEST_RUN_TIME; ++timeNumber) {
        int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->SetAirplaneMode(state);
        ASSERT_EQ(ret, expect);
    }
}
}
}