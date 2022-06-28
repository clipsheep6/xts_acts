/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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
#define CELLULAR_DATA_NETWORSEARCH_SETPREFERREDNETWORK_TEST
#include <gtest/gtest.h>

#include "cellular_data_constant.h"
#include "cellular_data_state.h"
#include "cellular_data_types.h"
#include "i_cellular_data_manager.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace Telephony;

namespace OHOS {
namespace Telephony {
/**
 * @tc.number   Telephony_CellularData_ActivationDeactivation_0300
 * @tc.name     Switch network from WCDMA to LTE, verify cellular data disconnection and reconnection
 * @tc.desc     Function test
 */
HWTEST_F(CelluarDataStateTest, Telephony_CellularData_ActivationDeactivation_0300, Function | MediumTest | Level3)
{
    if (operatorName == CUCC) {
        bool setPreferredMode = GetProxy_()->SetPreferredNetwork(
            SLOT_ID, static_cast<int32_t>(PreferredNetwork::CORE_NETWORK_MODE_WCDMA), g_callback);
        ASSERT_TRUE(setPreferredMode);
        LockNumWHhileNe(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        LockNumWHhileNe(static_cast<RadioTech>(GetProxy_()->GetNetworkState(SLOT_ID)->GetPsRadioTech()) ==
            RadioTech::RADIO_TECHNOLOGY_WCDMA ||
            static_cast<RadioTech>(GetProxy_()->GetNetworkState(SLOT_ID)->GetCsRadioTech()) ==
            RadioTech::RADIO_TECHNOLOGY_WCDMA, true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        LockNumWHhileNe(g_telephonyService->GetCellularDataState(),
            (int)DataConnectionStatus::DATA_STATE_DISCONNECTED, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        LockNumWHhileNe(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED,
            LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        hasNewData[SET_PREFERRED_NETWORK_MODE] = false;
        setPreferredMode = GetProxy_()->SetPreferredNetwork(
            SLOT_ID, static_cast<int32_t>(PreferredNetwork::CORE_NETWORK_MODE_LTE), g_callback);
        ASSERT_TRUE(setPreferredMode);
        LockNumWHhileNe(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        LockNumWHhileNe(static_cast<RadioTech>(GetProxy_()->GetNetworkState(SLOT_ID)->GetPsRadioTech()) ==
            RadioTech::RADIO_TECHNOLOGY_LTE ||
            static_cast<RadioTech>(GetProxy_()->GetNetworkState(SLOT_ID)->GetCsRadioTech()) ==
            RadioTech::RADIO_TECHNOLOGY_LTE, true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        LockNumWHhileNe(g_telephonyService->GetCellularDataState(),
            (int)DataConnectionStatus::DATA_STATE_DISCONNECTED, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        LockNumWHhileNe(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED,
            LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    }
}

/**
 * @tc.number   Telephony_CellularData_ActivationDeactivation_0400
 * @tc.name     Switching from LTE to WCDMA verifies that cellular data is disconnected and reconnected
 * @tc.desc     Function test
 */
HWTEST_F(CelluarDataStateTest, Telephony_CellularData_ActivationDeactivation_0400, Function | MediumTest | Level3)
{
    if (operatorName == CUCC) {
        bool setPreferredMode = GetProxy_()->SetPreferredNetwork(
            SLOT_ID, static_cast<int32_t>(PreferredNetwork::CORE_NETWORK_MODE_LTE), g_callback);
        ASSERT_TRUE(setPreferredMode);
        LockNumWHhileNe(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        LockNumWHhileNe(static_cast<RadioTech>(GetProxy_()->GetNetworkState(SLOT_ID)->GetPsRadioTech()) ==
            RadioTech::RADIO_TECHNOLOGY_LTE ||
            static_cast<RadioTech>(GetProxy_()->GetNetworkState(SLOT_ID)->GetCsRadioTech()) ==
            RadioTech::RADIO_TECHNOLOGY_LTE, true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        LockNumWHhileNe(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED,
            LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        hasNewData[SET_PREFERRED_NETWORK_MODE] = false;
        setPreferredMode = GetProxy_()->SetPreferredNetwork(
            SLOT_ID, static_cast<int32_t>(PreferredNetwork::CORE_NETWORK_MODE_WCDMA), g_callback);
        ASSERT_TRUE(setPreferredMode);
        LockNumWHhileNe(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        LockNumWHhileNe(static_cast<RadioTech>(GetProxy_()->GetNetworkState(SLOT_ID)->GetPsRadioTech()) ==
            RadioTech::RADIO_TECHNOLOGY_WCDMA ||
            static_cast<RadioTech>(GetProxy_()->GetNetworkState(SLOT_ID)->GetCsRadioTech()) ==
            RadioTech::RADIO_TECHNOLOGY_WCDMA, true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        LockNumWHhileNe(g_telephonyService->GetCellularDataState(),
            (int)DataConnectionStatus::DATA_STATE_DISCONNECTED, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        LockNumWHhileNe(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED,
            LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    }
}

/**
 * @tc.number   Telephony_CellularData_ActivationDeactivation_0700
 * @tc.name     In WCDMA network, call and hang up the phone to verify the cellular data status change
 * @tc.desc     Function test
 */
HWTEST_F(CelluarDataStateTest, Telephony_CellularData_ActivationDeactivation_0700, Function | MediumTest | Level3)
{
    if (operatorName == CUCC) {
        ASSERT_TRUE(GetProxy_()->SetPreferredNetwork(
            SLOT_ID, static_cast<int32_t>(PreferredNetwork::CORE_NETWORK_MODE_WCDMA), g_callback));
        LockNumWHhileNe(static_cast<RadioTech>(GetProxy_()->GetNetworkState(SLOT_ID)->GetPsRadioTech()) ==
            RadioTech::RADIO_TECHNOLOGY_WCDMA ||
            static_cast<RadioTech>(GetProxy_()->GetNetworkState(SLOT_ID)->GetCsRadioTech()) ==
            RadioTech::RADIO_TECHNOLOGY_WCDMA, true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        LockNumWHhileNe(g_telephonyService->GetCellularDataState(),
            (int)DataConnectionStatus::DATA_STATE_DISCONNECTED, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        LockNumWHhileNe(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED,
            LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        int ret = Dial(Str8ToStr16(CUCC_TEST_PHONE));
        ASSERT_EQ(ret, CelluarDataStateTest::SUCCESSFUL);
        LockNumWHhileNe(
            HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        EXPECT_EQ(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED);
        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        EXPECT_EQ(hangUpRet, CelluarDataStateTest::SUCCESSFUL);
        EXPECT_EQ(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED);
    }
}
} // namespace Telephony
} // namespace OHOS