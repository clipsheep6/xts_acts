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

#include <cstring>
#include "sim_test.h"

using namespace testing::ext;
using namespace OHOS;
const int32_t SimTest::SLOT_ID_2 = 2;
const int32_t SimTest::SLOT_ID_3 = 3;
const int32_t SimTest::VAILD_SLOT_ID = EFFECTIVE_SLOT_ID;
const int32_t SimTest::SLOTID_MINUS = -1;

/**
 * @tc.number   Telephony_Sim_GetMaxSimCount_0100
 * @tc.name     Test the GetMaxSimCount interface to see the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetMaxSimCount_0100, Function | MediumTest | Level2)
{
    int32_t minNumber = 0;
    int32_t numbers = g_proxy.GetHandler()->GetMaxSimCount();
    ASSERT_GT(numbers, minNumber);
}

/**
 * @tc.number   Telephony_Sim_GetPrimarySlotId_0100
 * @tc.name     Test the GetPrimarySlotId interface to see the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetPrimarySlotId_0100, Function | MediumTest | Level2)
{
    bool result = g_proxy.GetHandler()->SetPrimarySlotId(SimTest::VAILD_SLOT_ID);
    ASSERT_TRUE(result);
    int32_t defaultSlotId = g_proxy.GetHandler()->GetPrimarySlotId();
    ASSERT_EQ(defaultSlotId, SimTest::VAILD_SLOT_ID);
}

/**
 * @tc.number   Telephony_Sim_SetPrimarySlotId_0100
 * @tc.name     The SetPrimarySlotId interface is tested. SlotId is abnormal and the input parameter is -1.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetPrimarySlotId_0100, Function | MediumTest | Level1)
{
    bool result = g_proxy.GetHandler()->SetPrimarySlotId(SimTest::SLOTID_MINUS);
    ASSERT_FALSE(result);
    int32_t defaultSlotId = g_proxy.GetHandler()->GetPrimarySlotId();
    ASSERT_NE(defaultSlotId, SimTest::SLOTID_MINUS);
}

/**
 * @tc.number   Telephony_Sim_SetPrimarySlotId_0200
 * @tc.name     The SetPrimarySlotId interface is tested. SlotId is abnormal and the input parameter is 1.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetPrimarySlotId_0200, Function | MediumTest | Level1)
{
    bool result = g_proxy.GetHandler()->SetPrimarySlotId(SimTest::SLOT_ID_3);
    ASSERT_FALSE(result);
    int32_t defaultSlotId = g_proxy.GetHandler()->GetPrimarySlotId();
    ASSERT_NE(defaultSlotId, SimTest::SLOT_ID_3);
}

/**
 * @tc.number   Telephony_Sim_SetPrimarySlotId_0300
 * @tc.name     The SetPrimarySlotId interface is tested. SlotId is abnormal and the input parameter is 2.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetPrimarySlotId_0300, Function | MediumTest | Level1)
{
    bool result = g_proxy.GetHandler()->SetPrimarySlotId(SimTest::SLOT_ID_2);
    ASSERT_FALSE(result);
    int32_t defaultSlotId = g_proxy.GetHandler()->GetPrimarySlotId();
    ASSERT_NE(defaultSlotId, SimTest::SLOT_ID_2);
}
