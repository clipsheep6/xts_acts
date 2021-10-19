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

#include "cellular_data_function_test.h"
#include <gtest/gtest.h>

#include "cellular_data_constant.h"
#include "i_cellular_data_manager.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace Telephony;

/**
 * @tc.number   Telephony_CellularData_IsCellularDataEnabled_0300
 * @tc.name     Call the EnableCellularData interface and pass in the enable parameter as true.
 *              Call the IsCellularDataEnabled interface and pass in the slotId parameter as 0. The result is 1
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_IsCellularDataEnabled_0300    , Function | MediumTest | Level3)
{
    int32_t result = g_telephonyService->EnableCellularData(true);
    EXPECT_EQ(result, H_CODE_SUCCESS);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(),
                        DATA_STATE_CONNECTED, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(g_telephonyService->IsCellularDataEnabled(), H_CODE_SUCCESS);
}

/**
 * @tc.number   Telephony_CellularData_IsCellularDataEnabled_0200
 * @tc.name     The IsCellularDataEnabled interface is called. SlotId is 0. The result is 0
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_IsCellularDataEnabled_0200, Function | MediumTest | Level3)
{
    int32_t result = g_telephonyService->EnableCellularData(false);
    EXPECT_EQ(result, H_CODE_SUCCESS);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(),
                        DATA_STATE_DISCONNECTED, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(g_telephonyService->IsCellularDataEnabled(), H_CODE_FAILED);
}

/**
 * @tc.number   Telephony_CellularData_GetCellularDataState_0100
 * @tc.name     Call the EnableCellularData interface and pass in the enable parameter as true.
 *              Call the GetCellularDataState interface and pass in the slotId parameter as 0. Get the result 12 or 13
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_GetCellularDataState_0100, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_telephonyService->EnableCellularData(true), H_CODE_SUCCESS);
    EXPECT_TRUE(g_telephonyService->GetCellularDataState() == DATA_STATE_CONNECTING);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), DATA_STATE_CONNECTED,
                        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_TRUE(g_telephonyService->GetCellularDataState() == DATA_STATE_CONNECTED);
}

/**
 * @tc.number   Telephony_CellularData_GetCellularDataState_0200
 * @tc.name     Call the EnableCellularData interface with the enable parameter set to false, call the
 *              GetCellularDataState interface with the slotId parameter set to 0, and get the result 11
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_GetCellularDataState_0200, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_telephonyService->EnableCellularData(false), H_CODE_SUCCESS);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), DATA_STATE_DISCONNECTED,
                        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(g_telephonyService->GetCellularDataState(), DATA_STATE_DISCONNECTED);
}

/**
 * @tc.number   Telephony_CellularData_IsDataRoamingEnabled_0100
 * @tc.name     Call the enableDataroamingEnabled interface, pass the enable parameter to true,
 *              call IsDataRoamingEnabled, set slotId to 0, and return 1
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_IsDataRoamingEnabled_0100, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_telephonyService->EnableDataRoaming(SLOT_ID, true), H_CODE_SUCCESS);
    EXPECT_EQ(g_telephonyService->IsDataRoamingEnabled(SLOT_ID), H_CODE_SUCCESS);
    EXPECT_EQ(g_telephonyService->EnableDataRoaming(SLOT_ID, false), H_CODE_SUCCESS);
}

/**
 * @tc.number   Telephony_CellularData_IsDataRoamingEnabled_0200
 * @tc.name     Call the EnableDataRoaming interface, pass enable to true,
 *              call IsDataRoamingEnabled, set slotId to the error value (3), and return -1
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_IsDataRoamingEnabled_0200, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_telephonyService->EnableDataRoaming(SLOT_ID, true), H_CODE_SUCCESS);
    EXPECT_EQ(g_telephonyService->IsDataRoamingEnabled(ERR_SLOT_ID), H_CODE_INVALID_PARAM);
    EXPECT_EQ(g_telephonyService->EnableDataRoaming(SLOT_ID, false), H_CODE_SUCCESS);
}

/**
 * @tc.number   Telephony_CellularData_IsDataRoamingEnabled_0300
 * @tc.name     Call the enableDataroamingEnabled interface, pass the enable parameter to false,
 *              call IsDataRoamingEnabled, set slotId to 0, and return 0
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_IsDataRoamingEnabled_0300, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_telephonyService->EnableDataRoaming(SLOT_ID, false), H_CODE_SUCCESS);
    EXPECT_EQ(g_telephonyService->IsDataRoamingEnabled(ERR_SLOT_ID), H_CODE_INVALID_PARAM);
}

/**
 * @tc.number   Telephony_CellularData_EnableDataRoaming_0100
 * @tc.name     IsDataRoamingEnabled is called. The EnableDataRoaming interface is called.
 *              SlotId is passed with an error value (3) and -1 is returned
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_EnableDataRoaming_0100, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_telephonyService->IsDataRoamingEnabled(SLOT_ID), H_CODE_FAILED);
    EXPECT_EQ(g_telephonyService->EnableDataRoaming(ERR_SLOT_ID, true), H_CODE_INVALID_PARAM);
}
