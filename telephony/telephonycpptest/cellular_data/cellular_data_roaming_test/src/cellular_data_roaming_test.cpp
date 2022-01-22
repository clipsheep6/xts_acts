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
 * @tc.number   Telephony_CellularData_IsCellularDataRoamingEnabled_0100
 * @tc.name     Call the EnableCellularDataRoamingEnabled interface, pass the enable parameter to true,
 *              call IsCellularDataRoamingEnabled, set slotId to 0, and return 1
 * @tc.desc     Function test
 */
HWTEST_F(
    CellularDataRoamingTest, Telephony_CellularData_IsCellularDataRoamingEnabled_0100, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_telephonyService->EnableCellularDataRoaming(SLOT_ID, true), (int)DataRespondCode::SET_SUCCESS);
    EXPECT_EQ(
        g_telephonyService->IsCellularDataRoamingEnabled(SLOT_ID), (int)RoamingSwitchCode::CELLULAR_DATA_ROAMING_ENABLED);
    EXPECT_EQ(g_telephonyService->EnableCellularDataRoaming(SLOT_ID, false), (int)DataRespondCode::SET_SUCCESS);
}

/**
 * @tc.number   Telephony_CellularData_IsCellularDataRoamingEnabled_0200
 * @tc.name     Call the EnableCellularDataRoaming interface, pass enable to true,
 *              call IsCellularDataRoamingEnabled, set slotId to the error value (-1), and return (84082688)
 * @tc.desc     Function test
 */
HWTEST_F(
    CellularDataRoamingTest, Telephony_CellularData_IsCellularDataRoamingEnabled_0200, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_telephonyService->IsCellularDataRoamingEnabled(ERR_SLOT_ID_MINUS_1), H_CODE_INVALID_PARAM);
}

/**
 * @tc.number   Telephony_CellularData_IsCellularDataRoamingEnabled_0300
 * @tc.name     Call the EnableCellularDataRoamingEnabled interface, pass the enable parameter to false,
 *              call IsCellularDataRoamingEnabled, set slotId to 0, and return 0
 * @tc.desc     Function test
 */
HWTEST_F(
    CellularDataRoamingTest, Telephony_CellularData_IsCellularDataRoamingEnabled_0300, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_telephonyService->EnableCellularDataRoaming(SLOT_ID, false), (int)DataRespondCode::SET_SUCCESS);
    EXPECT_EQ(
        g_telephonyService->IsCellularDataRoamingEnabled(SLOT_ID), (int)RoamingSwitchCode::CELLULAR_DATA_ROAMING_DISABLED);
}

/**
 * @tc.number   Telephony_CellularData_IsCellularDataRoamingEnabled_0600
 * @tc.name     Call the EnableCellularDataRoaming interface, pass enable to true,
 *              call IsCellularDataRoamingEnabled, set slotId to the error value (1), and return (84082688)
 * @tc.desc     Function test
 */
HWTEST_F(
    CellularDataRoamingTest, Telephony_CellularData_IsCellularDataRoamingEnabled_0600, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_telephonyService->IsCellularDataRoamingEnabled(ERR_SLOT_ID_1), H_CODE_INVALID_PARAM);
}

/**
 * @tc.number   Telephony_CellularData_IsCellularDataRoamingEnabled_0700
 * @tc.name     Call the EnableCellularDataRoaming interface, pass enable to true,
 *              call IsCellularDataRoamingEnabled, set slotId to the error value (2), and return (84082688)
 * @tc.desc     Function test
 */
HWTEST_F(
    CellularDataRoamingTest, Telephony_CellularData_IsCellularDataRoamingEnabled_0700, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_telephonyService->IsCellularDataRoamingEnabled(ERR_SLOT_ID_2), H_CODE_INVALID_PARAM);
}

/**
 * @tc.number   Telephony_CellularData_EnableCellularDataRoaming_0100
 * @tc.name     Data roaming in open state, called again EnableCellularDataRoaming () interface, view the results
 *              returned
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataRoamingTest, Telephony_CellularData_EnableCellularDataRoaming_0100, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_telephonyService->EnableCellularDataRoaming(SLOT_ID, true), (int)DataRespondCode::SET_SUCCESS);
    EXPECT_EQ(
        g_telephonyService->IsCellularDataRoamingEnabled(SLOT_ID), (int)RoamingSwitchCode::CELLULAR_DATA_ROAMING_ENABLED);
    EXPECT_EQ(g_telephonyService->EnableCellularDataRoaming(SLOT_ID, true), (int)DataRespondCode::SET_SUCCESS);
    EXPECT_EQ(
        g_telephonyService->IsCellularDataRoamingEnabled(SLOT_ID), (int)RoamingSwitchCode::CELLULAR_DATA_ROAMING_ENABLED);
    EXPECT_EQ(g_telephonyService->EnableCellularDataRoaming(SLOT_ID, false), (int)DataRespondCode::SET_SUCCESS);
}

/**
 * @tc.number   Telephony_CellularData_EnableCellularDataRoaming_0200
 * @tc.name     Data roaming in closed state, called again EnableCellularDataRoaming close () interface, view the
 *              results returned
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataRoamingTest, Telephony_CellularData_EnableCellularDataRoaming_0200, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_telephonyService->EnableCellularDataRoaming(SLOT_ID, false), (int)DataRespondCode::SET_SUCCESS);
    EXPECT_EQ(
        g_telephonyService->IsCellularDataRoamingEnabled(SLOT_ID), (int)RoamingSwitchCode::CELLULAR_DATA_ROAMING_DISABLED);
    EXPECT_EQ(g_telephonyService->EnableCellularDataRoaming(SLOT_ID, false), (int)DataRespondCode::SET_SUCCESS);
    EXPECT_EQ(
        g_telephonyService->IsCellularDataRoamingEnabled(SLOT_ID), (int)RoamingSwitchCode::CELLULAR_DATA_ROAMING_DISABLED);
}

/**
 * @tc.number   Telephony_CellularData_EnableCellularDataRoaming_0300
 * @tc.name     IsCellularDataRoamingEnabled is called. The EnableCellularDataRoaming interface is called.
 *              SlotId is passed with an error value (-1) and (84082688) is returned
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataRoamingTest, Telephony_CellularData_EnableCellularDataRoaming_0300, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_telephonyService->EnableCellularDataRoaming(ERR_SLOT_ID_MINUS_1, true), H_CODE_INVALID_PARAM);
}

/**
 * @tc.number   Telephony_CellularData_EnableCellularDataRoaming_0600
 * @tc.name     IsCellularDataRoamingEnabled is called. The EnableCellularDataRoaming interface is called.
 *              SlotId is passed with an error value (1) and (84082688) is returned
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataRoamingTest, Telephony_CellularData_EnableCellularDataRoaming_0600, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_telephonyService->EnableCellularDataRoaming(ERR_SLOT_ID_1, true), H_CODE_INVALID_PARAM);
}

/**
 * @tc.number   Telephony_CellularData_EnableCellularDataRoaming_0700
 * @tc.name     IsCellularDataRoamingEnabled is called. The EnableCellularDataRoaming interface is called.
 *              SlotId is passed with an error value (2) and (84082688) is returned
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataRoamingTest, Telephony_CellularData_EnableCellularDataRoaming_0700, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_telephonyService->EnableCellularDataRoaming(ERR_SLOT_ID_2, true), H_CODE_INVALID_PARAM);
}