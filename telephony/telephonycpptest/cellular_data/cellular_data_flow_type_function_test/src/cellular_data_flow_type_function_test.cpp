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
#include "cellular_data_flow_type_function_test.h"

#include "cellular_data_types.h"
#include "cellular_data_constant.h"
#include "i_cellular_data_manager.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace Telephony;

/**
 * @tc.number   Telephony_CellularData_GetCellularDataFlowType_0100
 * @tc.name     When cellular data is turned on, call GetCellularDataFlowType() to obtain the data flow type,
 *              and verify that the return value is within the enumeration value range
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFlowTypeFunctionTest, Telephony_CellularData_GetCellularDataFlowType_0100,
    Function | MediumTest | Level3)
{
    EXPECT_EQ(g_telephonyService->EnableCellularData(true), (int)DataRespondCode::SET_SUCCESS);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(),
        (int)DataConnectionStatus::DATA_STATE_CONNECTED, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    int32_t result = g_telephonyService->GetCellularDataFlowType();
    ASSERT_TRUE(
        result == (int)CellDataFlowType::DATA_FLOW_TYPE_NONE ||
        result == (int)CellDataFlowType::DATA_FLOW_TYPE_DOWN ||
        result == (int)CellDataFlowType::DATA_FLOW_TYPE_UP ||
        result == (int)CellDataFlowType::DATA_FLOW_TYPE_UP_DOWN);
}

/**
 * @tc.number   Telephony_CellularData_GetCellularDataFlowType_0300
 * @tc.name     When the cellular data is closed, call GetCellularDataFlowType() to obtain the data flow type,
 *              and verify that the return value is no packet type
 * @tc.desc     Function test
 */
HWTEST_F(CellularDataFlowTypeFunctionTest, Telephony_CellularData_GetCellularDataFlowType_0300,
    Function | MediumTest | Level3)
{
    EXPECT_EQ(g_telephonyService->EnableCellularData(false), (int)DataRespondCode::SET_SUCCESS);
    LOCK_NUM_WHILE_NE(g_telephonyService->GetCellularDataState(), (int)DataConnectionStatus::DATA_STATE_DISCONNECTED,
                        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(g_telephonyService->GetCellularDataFlowType(), (int)CellDataFlowType::DATA_FLOW_TYPE_NONE);
}