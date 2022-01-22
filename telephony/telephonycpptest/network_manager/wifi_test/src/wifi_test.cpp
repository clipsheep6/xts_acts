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

#include "wifi_test.h"
#include <iostream>
#include "log.h"
#include "time_count_helper.h"
#include "ipc_skeleton.h"

namespace OHOS {
namespace NetManagerStandard {
using namespace testing::ext;

/**
 * @tc.number   Telephony_NetworkManager_SetAirplaneMode_0100
 * @tc.name     Verify state is "true" and test SetAirplaneMode() to see the return value.
 * @tc.desc     Function test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_SetAirplaneMode_0100, Function | MediumTest | Level2)
{
    bool state = true;
    int32_t expect = 0;
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->SetAirplaneMode(state);
    EXPECT_EQ(ret, expect);
}

/**
 * @tc.number   Telephony_NetworkManager_SetAirplaneMode_0200
 * @tc.name     Verify state is "false" and test SetAirplaneMode() to see the return value.
 * @tc.desc     Function test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_SetAirplaneMode_0200, Function | MediumTest | Level2)
{
    bool state = false;
    int32_t expect = 0;
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->SetAirplaneMode(state);
    EXPECT_EQ(ret, expect);
}

/**
 * @tc.number   Telephony_NetworkManager_RestoreFactoryData_0100
 * @tc.name     
 * @tc.desc     Function test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_RestoreFactoryData_0100, Function | MediumTest | Level2)
{
    int32_t uid = 1;
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetPolicyByUid(
        uid, NetUidPolicy::NET_POLICY_ALLOW_ALL);
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetIdleTrustlist(uid, true);

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
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetNetQuotaPolicies(quotaPolicys);

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
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetCellularPolicies(cellularPolicys);

    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->RestoreFactoryData();
    EXPECT_EQ(ret, 0);

    NetUidPolicy policyResult = DelayedSingleton<NetPolicyClient>::GetInstance()->GetPolicyByUid(uid);
    EXPECT_EQ(policyResult, NetUidPolicy::NET_POLICY_NONE);

    std::vector<uint32_t> uids;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetIdleTrustlist(uids);
    EXPECT_EQ(result, NetPolicyResultCode::ERR_NONE);
    EXPECT_TRUE(uids.empty());

    std::vector<NetPolicyQuotaPolicy> getPolicys;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetNetQuotaPolicies(getPolicys);
    EXPECT_EQ(result, NetPolicyResultCode::ERR_NONE);
    EXPECT_TRUE(getPolicys.empty());

    std::vector<NetPolicyCellularPolicy> policys;
    result = DelayedSingleton<NetPolicyClient>::GetInstance()->GetCellularPolicies(policys);
    EXPECT_EQ(result, NetPolicyResultCode::ERR_NONE);
    EXPECT_TRUE(policys.empty());
}
} // namespace NetManagerStandard
} // namespace OHOS