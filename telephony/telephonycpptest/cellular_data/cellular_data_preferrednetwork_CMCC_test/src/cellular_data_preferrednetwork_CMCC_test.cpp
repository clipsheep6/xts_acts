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
#define CELLULAR_DATA_NETWORSEARCH_SETPREFERREDNETWORK_TEST
#include <gtest/gtest.h>
#include "cellular_data_state.h"

#include "cellular_data_types.h"
#include "cellular_data_constant.h"
#include "i_cellular_data_manager.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace Telephony;

/**
 * @tc.number   Telephony_CellularData_ActivationDeactivation_0500
 * @tc.name     Switch network from LTE to GSM, verify cellular data disconnection and reconnection
 * @tc.desc     Function test
 */
HWTEST_F(CelluarDataStateTest, Telephony_CellularData_ActivationDeactivation_0500, Function | MediumTest | Level3)
{
    if(operatorName == CMCC)
    {
    bool setPreferredMode = GetProxy_()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetwork::CORE_NETWORK_MODE_LTE), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    LOCK_NUM_WHILE_NE(static_cast<RadioTech>(GetProxy_()->GetNetworkState(SLOT_ID)->GetPsRadioTech()) ==
                              RadioTech::RADIO_TECHNOLOGY_LTE ||
                          static_cast<RadioTech>(GetProxy_()->GetNetworkState(SLOT_ID)->GetCsRadioTech()) ==
                              RadioTech::RADIO_TECHNOLOGY_LTE,
        true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    hasNewData[SET_PREFERRED_NETWORK_MODE] = false;
    setPreferredMode = GetProxy_()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetwork::CORE_NETWORK_MODE_GSM), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    LOCK_NUM_WHILE_NE(static_cast<RadioTech>(GetProxy_()->GetNetworkState(SLOT_ID)->GetPsRadioTech()) ==
                              RadioTech::RADIO_TECHNOLOGY_GSM ||
                          static_cast<RadioTech>(GetProxy_()->GetNetworkState(SLOT_ID)->GetCsRadioTech()) ==
                              RadioTech::RADIO_TECHNOLOGY_GSM,
        true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_DISCONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    }
}

/**
 * @tc.number   Telephony_CellularData_ActivationDeactivation_0600
 * @tc.name     In GSM network, call and hang up the phone to verify the cellular data status change
 * @tc.desc     Function test
 */
HWTEST_F(CelluarDataStateTest, Telephony_CellularData_ActivationDeactivation_0600, Function | MediumTest | Level3)
{
    if(operatorName == CMCC)
    {
    ASSERT_TRUE(GetProxy_()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetwork::CORE_NETWORK_MODE_GSM), g_callback));
    LOCK_NUM_WHILE_NE(static_cast<RadioTech>(GetProxy_()->GetNetworkState(SLOT_ID)->GetPsRadioTech()) ==
                              RadioTech::RADIO_TECHNOLOGY_GSM ||
                          static_cast<RadioTech>(GetProxy_()->GetNetworkState(SLOT_ID)->GetCsRadioTech()) ==
                              RadioTech::RADIO_TECHNOLOGY_GSM,
        true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_DISCONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    int ret = Dial(Str8ToStr16(CMCC_TEST_PHONE));
    ASSERT_EQ(ret, CelluarDataStateTest::SUCCESSFUL);
    LOCK_NUM_WHILE_NE(
        HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_SUSPENDED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
    EXPECT_EQ(hangUpRet, CelluarDataStateTest::SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    }
}