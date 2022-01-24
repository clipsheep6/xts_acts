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
#include "cellular_data_test.h"

#include "cellular_data_types.h"
#include "cellular_data_constant.h"
#include "i_cellular_data_manager.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace Telephony;

/**
 * @tc.number   Telephony_CellularData_SetDefaultCellularDataSlotId_0100
 * @tc.name     Call the SetDefaultCellularDataSlotId() interface, set the default card slot to 0, and verify that the
 *              default card slot is 0
 * @tc.desc     Function test
 */
HWTEST_F(
    CellularDataSlotIdTest, Telephony_CellularData_SetDefaultCellularDataSlotId_0100, Function | MediumTest | Level3)
{
    int32_t result = g_telephonyService->EnableCellularData(true);
    EXPECT_EQ(result, (int)DataRespondCode::SET_SUCCESS);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(g_telephonyService->SetDefaultCellularDataSlotId(SLOTID_1), (int)DataRespondCode::SET_SUCCESS);
    EXPECT_EQ(g_telephonyService->GetDefaultCellularDataSlotId(), SLOTID_1);
    EXPECT_EQ(g_telephonyService->SetDefaultCellularDataSlotId(SLOTID), (int)DataRespondCode::SET_SUCCESS);
    EXPECT_EQ(g_telephonyService->GetDefaultCellularDataSlotId(), SLOTID);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
}

/**
 * @tc.number   Telephony_CellularData_SetDefaultCellularDataSlotId_0200
 * @tc.name     Call the SetDefaultCellularDataSlotId() interface, repeatedly set the default card slot to 0, and verify
 *              that the default card slot is 0
 * @tc.desc     Function test
 */
HWTEST_F(
    CellularDataSlotIdTest, Telephony_CellularData_SetDefaultCellularDataSlotId_0200, Function | MediumTest | Level3)
{
    int32_t result = g_telephonyService->EnableCellularData(true);
    EXPECT_EQ(result, (int)DataRespondCode::SET_SUCCESS);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(g_telephonyService->SetDefaultCellularDataSlotId(SLOTID_1), (int)DataRespondCode::SET_SUCCESS);
    EXPECT_EQ(g_telephonyService->GetDefaultCellularDataSlotId(), SLOTID_1);
    EXPECT_EQ(g_telephonyService->SetDefaultCellularDataSlotId(SLOTID), (int)DataRespondCode::SET_SUCCESS);
    EXPECT_EQ(g_telephonyService->GetDefaultCellularDataSlotId(), SLOTID);
    EXPECT_EQ(g_telephonyService->SetDefaultCellularDataSlotId(SLOTID), (int)DataRespondCode::SET_SUCCESS);
    EXPECT_EQ(g_telephonyService->GetDefaultCellularDataSlotId(), SLOTID);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
}

/**
 * @tc.number   Telephony_CellularData_SetDefaultCellularDataSlotId_0300
 * @tc.name     Call the SetDefaultCellularDataSlotId() interface, set the default card slot to 1, and verify that the
 *              default card slot is 1
 * @tc.desc     Function test
 */
HWTEST_F(
    CellularDataSlotIdTest, Telephony_CellularData_SetDefaultCellularDataSlotId_0300, Function | MediumTest | Level3)
{
    int32_t result = g_telephonyService->EnableCellularData(true);
    EXPECT_EQ(result, (int)DataRespondCode::SET_SUCCESS);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(g_telephonyService->GetDefaultCellularDataSlotId(), SLOTID);
    EXPECT_EQ(g_telephonyService->SetDefaultCellularDataSlotId(SLOTID_1), (int)DataRespondCode::SET_SUCCESS);
    EXPECT_EQ(g_telephonyService->GetDefaultCellularDataSlotId(), SLOTID_1);
}

/**
 * @tc.number   Telephony_CellularData_SetDefaultCellularDataSlotId_0400
 * @tc.name     Call the SetDefaultCellularDataSlotId() interface, repeatedly set the default card slot to 1, and verify
 *              that the default card slot is 1
 * @tc.desc     Function test
 */
HWTEST_F(
    CellularDataSlotIdTest, Telephony_CellularData_SetDefaultCellularDataSlotId_0400, Function | MediumTest | Level3)
{
    int32_t result = g_telephonyService->EnableCellularData(true);
    EXPECT_EQ(result, (int)DataRespondCode::SET_SUCCESS);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(g_telephonyService->GetDefaultCellularDataSlotId(), SLOTID);
    EXPECT_EQ(g_telephonyService->SetDefaultCellularDataSlotId(SLOTID_1), (int)DataRespondCode::SET_SUCCESS);
    EXPECT_EQ(g_telephonyService->GetDefaultCellularDataSlotId(), SLOTID_1);
    EXPECT_EQ(g_telephonyService->SetDefaultCellularDataSlotId(SLOTID_1), (int)DataRespondCode::SET_SUCCESS);
    EXPECT_EQ(g_telephonyService->GetDefaultCellularDataSlotId(), SLOTID_1);
}

/**
 * @tc.number   Telephony_CellularData_SetDefaultCellularDataSlotId_0500
 * @tc.name     Call the SetDefaultCellularDataSlotId() interface, set the default card slot to the number of
 *              exceptions (-1), and verify whether the setting failed
 * @tc.desc     Function test
 */
HWTEST_F(
    CellularDataSlotIdTest, Telephony_CellularData_SetDefaultCellularDataSlotId_0500, Function | MediumTest | Level3)
{
    int32_t result = g_telephonyService->EnableCellularData(true);
    EXPECT_EQ(result, (int)DataRespondCode::SET_SUCCESS);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(g_telephonyService->GetDefaultCellularDataSlotId(), SLOTID);
    EXPECT_EQ(g_telephonyService->SetDefaultCellularDataSlotId(SLOTID_ERR), SET_ERR);
    EXPECT_EQ(g_telephonyService->GetDefaultCellularDataSlotId(), SLOTID);
}
/**
 * @tc.number   Telephony_CellularData_SetDefaultCellularDataSlotId_0600
 * @tc.name     Call the SetDefaultCellularDataSlotId() interface, set the default card slot to the number of
 *              exceptions (2), and verify whether the setting failed
 * @tc.desc     Function test
 */
HWTEST_F(
    CellularDataSlotIdTest, Telephony_CellularData_SetDefaultCellularDataSlotId_0600, Function | MediumTest | Level3)
{
    int32_t result = g_telephonyService->EnableCellularData(true);
    EXPECT_EQ(result, (int)DataRespondCode::SET_SUCCESS);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_CONNECTED,
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(g_telephonyService->GetDefaultCellularDataSlotId(), SLOTID);
    EXPECT_EQ(g_telephonyService->SetDefaultCellularDataSlotId(SLOTID_2), SET_ERR);
    EXPECT_EQ(g_telephonyService->GetDefaultCellularDataSlotId(), SLOTID);
}