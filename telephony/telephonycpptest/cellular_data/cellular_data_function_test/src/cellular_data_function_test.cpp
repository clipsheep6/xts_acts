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
 * @tc.number   Telephony_CellularData_IsCellularDataEnabled_0100
 * @tc.name     The IsCellularDataEnabled interface is called. SlotId is 0. The result is 0
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_IsCellularDataEnabled_0100, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_telephonyService->IsCellularDataEnabled(SLOT_ID), H_CODE_FAILED);
}

/**
 * @tc.number   Telephony_CellularData_IsCellularDataEnabled_0200
 * @tc.name     The IsCellularDataEnabled interface is called. SlotId is passed in with an error
 *              value (3) and -1 is returned
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_IsCellularDataEnabled_0100, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_telephonyService->IsCellularDataEnabled(ERR_SLOT_ID), H_CODE_INVALID_PARAM);
}

/**
 * @tc.number   Telephony_CellularData_IsCellularDataEnabled_0300
 * @tc.name     Call the EnableCellularData interface and pass in the enable parameter as true.
 *              Call the IsCellularDataEnabled interface and pass in the slotId parameter as 0. The result is 1
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_IsCellularDataEnabled_0100, Function | MediumTest | Level3)
{
    int32_t result = g_telephonyService->EnableCellularData(SLOT_ID, true);
    EXPECT_EQ(g_telephonyService->IsCellularDataEnabled(SLOT_ID), H_CODE_SUCCESS);
}

/**
 * @tc.number   Telephony_CellularData_EnableCellularData_0100
 * @tc.name     The IsCellularDataEnabled interface is called, the EnableCellularData interface is called,
 *              slotId=0 is passed in, enable is true, and the IsCellularDataEnabled interface is called,
 *              and the return value is 1
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_EnableCellularData_0100, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_telephonyService->IsCellularDataEnabled(SLOT_ID), H_CODE_FAILED);
    int32_t result = g_telephonyService->EnableCellularData(SLOT_ID, true);
    EXPECT_EQ(result, H_CODE_SUCCESS);
    EXPECT_EQ(g_telephonyService->IsCellularDataEnabled(SLOT_ID), H_CODE_SUCCESS);
}

/**
 * @tc.number   Telephony_CellularData_EnableCellularData_0200
 * @tc.name     Call the EnableCellularData interface. SlotId is passed with an error value (3),
 *              enable is true, and -1 is returned
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_EnableCellularData_0100, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_telephonyService->EnableCellularData(ERR_SLOT_ID, true), H_CODE_INVALID_PARAM);
}

/**
 * @tc.number   Telephony_CellularData_EnableCellularData_0300
 * @tc.name     Call the IsCellularDataEnabled interface, call the EnableCellularData interface, pass in slotId=0,
 *              enable is false, and then call the IsCellularDataEnabled interface, which returns 0
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_EnableCellularData_0100, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_telephonyService->IsCellularDataEnabled(SLOT_ID), H_CODE_FAILED);
    EXPECT_EQ(g_telephonyService->EnableCellularData(SLOT_ID, false), H_CODE_SUCCESS);
    EXPECT_EQ(g_telephonyService->IsCellularDataEnabled(SLOT_ID), H_CODE_FAILED);
}

/**
 * @tc.number   Telephony_CellularData_GetCellularDataState_0100
 * @tc.name     Call the EnableCellularData interface and pass in the enable parameter as true.
 *              Call the GetCellularDataState interface and pass in the slotId parameter as 0. Get the result 12 or 13
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_GetCellularDataState_0100, Function | MediumTest | Level3)
{
    EXPECT_TRUE(g_telephonyService->EnableCellularData(SLOT_ID, true), H_CODE_SUCCESS);
    int result = g_telephonyService->GetCellularDataState(SLOT_ID);
    EXPECT_TRUE(result == (int32_t)OHOS::Telephony::CellularData::DATA_STATE_CONNECTING ||
                result == (int32_t)OHOS::Telephony::CellularData::DATA_STATE_CONNECTED);

}

/**
 * @tc.number   Telephony_CellularData_GetCellularDataState_0200
 * @tc.name     Call the EnableCellularData interface, pass enable as true, call the GetCellularDataState interface,
 *              pass slotId as error (3), get the result -1
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_GetCellularDataState_0200, Function | MediumTest | Level3)
{
    EXPECT_TRUE(g_telephonyService->EnableCellularData(SLOT_ID, true), H_CODE_SUCCESS);
    EXPECT_TRUE(g_telephonyService->GetCellularDataState(ERR_SLOT_ID), H_CODE_INVALID_PARAM);
}

/**
 * @tc.number   Telephony_CellularData_GetCellularDataState_0300
 * @tc.name     Call the EnableCellularData interface with the enable parameter set to false, call the
 *              GetCellularDataState interface with the slotId parameter set to 0, and get the result 11
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_GetCellularDataState_0200, Function | MediumTest | Level3)
{
    EXPECT_TRUE(g_telephonyService->EnableCellularData(SLOT_ID, false), H_CODE_SUCCESS);
    EXPECT_TRUE(g_telephonyService->GetCellularDataState(SLOT_ID),
                (int32_t)OHOS::Telephony::CellularData::DATA_STATE_DISCONNECTED);
}

/**
 * @tc.number   Telephony_CellularData_IsDataRoamingEnabled_0100
 * @tc.name     Call the enableDataroamingEnabled interface, pass the enable parameter to true,
 *              call IsDataRoamingEnabled, set slotId to 0, and return 1
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_IsDataRoamingEnabled_0100, Function | MediumTest | Level3)
{
    EXPECT_TRUE(g_telephonyService->EnableDataRoaming(SLOT_ID, true), H_CODE_SUCCESS);
    EXPECT_TRUE(g_telephonyService->IsDataRoamingEnabled(SLOT_ID), H_CODE_SUCCESS);
    EXPECT_TRUE(g_telephonyService->EnableDataRoaming(SLOT_ID, false), H_CODE_SUCCESS);
}

/**
 * @tc.number   Telephony_CellularData_IsDataRoamingEnabled_0200
 * @tc.name     Call the EnableDataRoaming interface, pass enable to true,
 *              call IsDataRoamingEnabled, set slotId to the error value (3), and return -1
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_IsDataRoamingEnabled_0200, Function | MediumTest | Level3)
{
    EXPECT_TRUE(g_telephonyService->EnableDataRoaming(SLOT_ID, true), H_CODE_SUCCESS);
    EXPECT_TRUE(g_telephonyService->IsDataRoamingEnabled(ERR_SLOT_ID), H_CODE_INVALID_PARAM);
    EXPECT_TRUE(g_telephonyService->EnableDataRoaming(SLOT_ID, false), H_CODE_SUCCESS);
}

/**
 * @tc.number   Telephony_CellularData_IsDataRoamingEnabled_0300
 * @tc.name     Call the enableDataroamingEnabled interface, pass the enable parameter to false,
 *              call IsDataRoamingEnabled, set slotId to 0, and return 0
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_IsDataRoamingEnabled_0300, Function | MediumTest | Level3)
{
    EXPECT_TRUE(g_telephonyService->EnableDataRoaming(SLOT_ID, false), H_CODE_SUCCESS);
    EXPECT_TRUE(g_telephonyService->IsDataRoamingEnabled(ERR_SLOT_ID), H_CODE_FAILED);
}

/**
 * @tc.number   Telephony_CellularData_EnableDataRoaming_0100
 * @tc.name     IsDataRoamingEnabled is called and the enableDataroaminginterface is called. Pass in the enable
 *              parameter as true and slotId as 0. Then call IsDataRoamingEnabled and set slotId to 0 and return 1
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_EnableDataRoaming_0100, Function | MediumTest | Level3)
{
    EXPECT_TRUE(g_telephonyService->IsDataRoamingEnabled(SLOT_ID), H_CODE_FAILED);
    EXPECT_TRUE(g_telephonyService->EnableDataRoaming(SLOT_ID, true), H_CODE_SUCCESS);
    EXPECT_TRUE(g_telephonyService->IsDataRoamingEnabled(SLOT_ID), H_CODE_SUCCESS);
    EXPECT_TRUE(g_telephonyService->EnableDataRoaming(SLOT_ID, false), H_CODE_SUCCESS);
}

/**
 * @tc.number   Telephony_CellularData_EnableDataRoaming_0200
 * @tc.name     IsDataRoamingEnabled is called. The EnableDataRoaming interface is called.
 *              SlotId is passed with an error value (3) and -1 is returned
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_EnableDataRoaming_0100, Function | MediumTest | Level3)
{
    EXPECT_TRUE(g_telephonyService->IsDataRoamingEnabled(SLOT_ID), H_CODE_FAILED);
    EXPECT_TRUE(g_telephonyService->EnableDataRoaming(ERR_SLOT_ID, true), H_CODE_INVALID_PARAM);
}

/**
 * @tc.number   Telephony_CellularData_EnableDataRoaming_0300
 * @tc.name     IsDataRoamingEnabled and the enableDataroaminginterface are called. Pass in the enable
 *              parameter as false and slotId as 0. Then call IsDataRoamingEnabled and set slotId to 0
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFunctionTest, Telephony_CellularData_EnableDataRoaming_0100, Function | MediumTest | Level3)
{
    EXPECT_TRUE(g_telephonyService->IsDataRoamingEnabled(SLOT_ID), H_CODE_FAILED);
    EXPECT_TRUE(g_telephonyService->EnableDataRoaming(SLOT_ID, false), H_CODE_SUCCESS);
    EXPECT_TRUE(g_telephonyService->IsDataRoamingEnabled(SLOT_ID), H_CODE_FAILED);
}