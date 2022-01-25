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

#define CELLULAR_DATA_MOCK_TEST
#include <gtest/gtest.h>
#include "cellular_data_state.h"

#include "cellular_data_types.h"
#include "network_state.h"
#include "cellular_data_constant.h"
#include "i_cellular_data_manager.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace Telephony;

/**
 * @tc.number   Telephony_CellularData_CellularDataRoaming_0100
 * @tc.name     When the roaming switch is turned off, non-roaming changes to roaming, check the cellular data status
 * @tc.desc     Function test
 */
HWTEST_F(CelluarDataStateTest, Telephony_CellularData_CellularDataRoaming_0100, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_telephonyService->EnableCellularDataRoaming(SLOT_ID, false), (int)DataRespondCode::SET_SUCCESS);
    g_mockVender.MockVendorSetRawReg(DOMAIN_TYPE_PS, NON_ROAMING);
    RoamingType roamingType = static_cast<RoamingType>(GetProxy_()->GetNetworkState(SLOT_ID)->GetPsRoamingStatus());
    EXPECT_EQ(roamingType, RoamingType::ROAMING_STATE_UNKNOWN);
    EXPECT_EQ(g_telephonyService->EnableCellularData(true), (int)DataRespondCode::SET_SUCCESS);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    g_mockVender.MockVendorSetRawReg(DOMAIN_TYPE_PS, ROAMING);
    roamingType = static_cast<RoamingType>(GetProxy_()->GetNetworkState(SLOT_ID)->GetPsRoamingStatus());
    EXPECT_EQ(roamingType, RoamingType::ROAMING_STATE_UNSPEC);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_DISCONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
}

/**
 * @tc.number   Telephony_CellularData_CellularDataRoaming_0200
 * @tc.name     When the roaming switch is turned off, the roaming changes to non-roaming, check the cellular data
 *              status
 * @tc.desc     Function test
 */
HWTEST_F(CelluarDataStateTest, Telephony_CellularData_CellularDataRoaming_0200, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_telephonyService->EnableCellularDataRoaming(SLOT_ID, false), (int)DataRespondCode::SET_SUCCESS);
    g_mockVender.MockVendorSetRawReg(DOMAIN_TYPE_PS, ROAMING);
    RoamingType roamingType = static_cast<RoamingType>(GetProxy_()->GetNetworkState(SLOT_ID)->GetPsRoamingStatus());
    EXPECT_EQ(roamingType, RoamingType::ROAMING_STATE_UNSPEC);
    EXPECT_EQ(g_telephonyService->EnableCellularData(true), (int)DataRespondCode::SET_SUCCESS);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_DISCONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    g_mockVender.MockVendorSetRawReg(DOMAIN_TYPE_PS, NON_ROAMING);
    roamingType = static_cast<RoamingType>(GetProxy_()->GetNetworkState(SLOT_ID)->GetPsRoamingStatus());
    EXPECT_EQ(roamingType, RoamingType::ROAMING_STATE_UNKNOWN);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
}

/**
 * @tc.number   Telephony_CellularData_CellularDataRoaming_0300
 * @tc.name     When the roaming switch is turned on, the non-roaming changes to roaming, check the cellular data status
 * @tc.desc     Function test
 */
HWTEST_F(CelluarDataStateTest, Telephony_CellularData_CellularDataRoaming_0300, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_telephonyService->EnableCellularDataRoaming(SLOT_ID, true), (int)DataRespondCode::SET_SUCCESS);
    g_mockVender.MockVendorSetRawReg(DOMAIN_TYPE_PS, NON_ROAMING);
    RoamingType roamingType = static_cast<RoamingType>(GetProxy_()->GetNetworkState(SLOT_ID)->GetPsRoamingStatus());
    EXPECT_EQ(roamingType, RoamingType::ROAMING_STATE_UNKNOWN);
    EXPECT_EQ(g_telephonyService->EnableCellularData(true), (int)DataRespondCode::SET_SUCCESS);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    g_mockVender.MockVendorSetRawReg(DOMAIN_TYPE_PS, ROAMING);
    roamingType = static_cast<RoamingType>(GetProxy_()->GetNetworkState(SLOT_ID)->GetPsRoamingStatus());
    EXPECT_EQ(roamingType, RoamingType::ROAMING_STATE_UNSPEC);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
}

/**
 * @tc.number   Telephony_CellularData_CellularDataRoaming_0400
 * @tc.name     When the roaming switch is turned on, the roaming changes to non-roaming, check the cellular data status
 * @tc.desc     Function test
 */
HWTEST_F(CelluarDataStateTest, Telephony_CellularData_CellularDataRoaming_0400, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_telephonyService->EnableCellularDataRoaming(SLOT_ID, true), (int)DataRespondCode::SET_SUCCESS);
    g_mockVender.MockVendorSetRawReg(DOMAIN_TYPE_PS, ROAMING);
    RoamingType roamingType = static_cast<RoamingType>(GetProxy_()->GetNetworkState(SLOT_ID)->GetPsRoamingStatus());
    EXPECT_EQ(roamingType, RoamingType::ROAMING_STATE_UNSPEC);
    EXPECT_EQ(g_telephonyService->EnableCellularData(true), (int)DataRespondCode::SET_SUCCESS);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    g_mockVender.MockVendorSetRawReg(DOMAIN_TYPE_PS, NON_ROAMING);
    roamingType = static_cast<RoamingType>(GetProxy_()->GetNetworkState(SLOT_ID)->GetPsRoamingStatus());
    EXPECT_EQ(roamingType, RoamingType::ROAMING_STATE_UNKNOWN);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_DISCONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
}

/**
 * @tc.number   Telephony_CellularData_CellularDataSwitch_0100
 * @tc.name     In the non-roaming state, the roaming switch is changed from off to on to check the cellular data status
 * @tc.desc     Function test
 */
HWTEST_F(CelluarDataStateTest, Telephony_CellularData_CellularDataSwitch_0100, Function | MediumTest | Level3)
{
    g_mockVender.MockVendorSetRawReg(DOMAIN_TYPE_PS, NON_ROAMING);
    EXPECT_EQ(g_telephonyService->EnableCellularDataRoaming(SLOT_ID, false), (int)DataRespondCode::SET_SUCCESS);
    EXPECT_EQ(g_telephonyService->EnableCellularData(true), (int)DataRespondCode::SET_SUCCESS);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(g_telephonyService->EnableCellularDataRoaming(SLOT_ID, true), (int)DataRespondCode::SET_SUCCESS);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
}

/**
 * @tc.number   Telephony_CellularData_CellularDataSwitch_0200
 * @tc.name     In the non-roaming state, the roaming switch is changed from on to off to check the cellular data status
 * @tc.desc     Function test
 */
HWTEST_F(CelluarDataStateTest, Telephony_CellularData_CellularDataSwitch_0200, Function | MediumTest | Level3)
{
    g_mockVender.MockVendorSetRawReg(DOMAIN_TYPE_PS, NON_ROAMING);
    EXPECT_EQ(g_telephonyService->EnableCellularDataRoaming(SLOT_ID, true), (int)DataRespondCode::SET_SUCCESS);
    EXPECT_EQ(g_telephonyService->EnableCellularData(true), (int)DataRespondCode::SET_SUCCESS);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(g_telephonyService->EnableCellularDataRoaming(SLOT_ID, false), (int)DataRespondCode::SET_SUCCESS);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
}

/**
 * @tc.number   Telephony_CellularData_CellularDataSwitch_0300
 * @tc.name     In the roaming state, the roaming switch is changed from off to on to check the cellular data status
 * @tc.desc     Function test
 */
HWTEST_F(CelluarDataStateTest, Telephony_CellularData_CellularDataSwitch_0300, Function | MediumTest | Level3)
{
    g_mockVender.MockVendorSetRawReg(DOMAIN_TYPE_PS, ROAMING);
    EXPECT_EQ(g_telephonyService->EnableCellularDataRoaming(SLOT_ID, false), (int)DataRespondCode::SET_SUCCESS);
    EXPECT_EQ(g_telephonyService->EnableCellularData(true), (int)DataRespondCode::SET_SUCCESS);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_DISCONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(g_telephonyService->EnableCellularDataRoaming(SLOT_ID, true), (int)DataRespondCode::SET_SUCCESS);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
}

/**
 * @tc.number   Telephony_CellularData_CellularDataSwitch_0400
 * @tc.name     In the roaming state, the roaming switch is changed from on to off to check the cellular data status
 * @tc.desc     Function test
 */
HWTEST_F(CelluarDataStateTest, Telephony_CellularData_CellularDataSwitch_0400, Function | MediumTest | Level3)
{
    g_mockVender.MockVendorSetRawReg(DOMAIN_TYPE_PS, ROAMING);
    EXPECT_EQ(g_telephonyService->EnableCellularDataRoaming(SLOT_ID, true), (int)DataRespondCode::SET_SUCCESS);
    EXPECT_EQ(g_telephonyService->EnableCellularData(true), (int)DataRespondCode::SET_SUCCESS);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(g_telephonyService->EnableCellularDataRoaming(SLOT_ID, false), (int)DataRespondCode::SET_SUCCESS);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_DISCONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
}