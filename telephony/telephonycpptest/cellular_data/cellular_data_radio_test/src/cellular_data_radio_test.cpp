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
 * @tc.number   Telephony_CellularData_ActivationDeactivation_0100
 * @tc.name     Set Radio off to verify that cellular data is disconnected
 * @tc.desc     Function test
 */
HWTEST_F(CelluarDataStateTest, Telephony_CellularData_ActivationDeactivation_0100, Function | MediumTest | Level3)
{
    ASSERT_TRUE(GetProxy_()->SetRadioState(false, g_callback));
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    sleep(TIME);
    EXPECT_EQ(g_telephonyService->EnableCellularData(true), SET_SUCCESS);
    EXPECT_EQ(g_telephonyService->GetCellularDataState(), (int)HDataConnectionState::DATA_STATE_CONNECTED);
    ASSERT_TRUE(GetProxy_()->SetRadioState(true, g_callback));
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    sleep(TIME);
    EXPECT_EQ(g_telephonyService->GetCellularDataState(), (int)HDataConnectionState::DATA_STATE_DISCONNECTED);
}

/**
 * @tc.number   Telephony_CellularData_ActivationDeactivation_0200
 * @tc.name     Set Radio on to verify successful cellular data connection
 * @tc.desc     Function test
 */
HWTEST_F(CelluarDataStateTest, Telephony_CellularData_ActivationDeactivation_0200, Function | MediumTest | Level3)
{
    ASSERT_TRUE(GetProxy_()->SetRadioState(true, g_callback));
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    sleep(TIME);
    EXPECT_EQ(g_telephonyService->EnableCellularData(true), SET_SUCCESS);
    EXPECT_EQ(g_telephonyService->GetCellularDataState(), (int)HDataConnectionState::DATA_STATE_DISCONNECTED);
    ASSERT_TRUE(GetProxy_()->SetRadioState(false, g_callback));
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    sleep(TIME);
    EXPECT_EQ(g_telephonyService->GetCellularDataState(), (int)HDataConnectionState::DATA_STATE_CONNECTED);
}
