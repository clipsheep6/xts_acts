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
#include <fstream>
#include "sim_test.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;

const int32_t SimTest::VAILD_SLOT_ID = 0;
const int32_t SimTest::LOOP_NUMBER = 1000;

/**
 * @tc.number   Telephony_Sim_GetMaxSimCount_0300
 * @tc.name     The test executed the GetMaxSimCount interface setting function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliablity test
 */
HWTEST_F(SimTest, Telephony_Sim_GetMaxSimCount_0300, Function | MediumTest | Level1)
{
    int32_t minNumber = 0;
    for (int32_t timeNumber = 0; timeNumber < SimTest::LOOP_NUMBER; ++timeNumber) {
        int32_t numbers = g_proxy.GetHandler()->GetMaxSimCount();
        ASSERT_GT(numbers, minNumber);
    }
}

/**
 * @tc.number   Telephony_Sim_GetPrimarySlotId_0300
 * @tc.name     The test executed the GetPrimarySlotId interface setting function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliablity test
 */
HWTEST_F(SimTest, Telephony_Sim_GetPrimarySlotId_0300, Function | MediumTest | Level1)
{
    bool result = g_proxy.GetHandler()->SetPrimarySlotId(SimTest::VAILD_SLOT_ID);
    ASSERT_TRUE(result);
    for (int32_t timeNumber = 0; timeNumber < SimTest::LOOP_NUMBER; ++timeNumber) {
        int32_t defaultSlotId = g_proxy.GetHandler()->GetPrimarySlotId();
        ASSERT_EQ(defaultSlotId, SimTest::VAILD_SLOT_ID);
    }
}

/**
 * @tc.number   Telephony_Sim_SetPrimarySlotId_0600
 * @tc.name     The test executed the SetPrimarySlotId interface setting function 10 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliablity test
 */
HWTEST_F(SimTest, Telephony_Sim_SetPrimarySlotId_0600, Function | MediumTest | Level1)
{
    int32_t loopNumber = 10;
    for (int32_t timeNumber = 0; timeNumber < loopNumber; ++timeNumber) {
        bool result = g_proxy.GetHandler()->SetPrimarySlotId(SimTest::VAILD_SLOT_ID);
        ASSERT_TRUE(result);
        int32_t defaultSlotId = g_proxy.GetHandler()->GetPrimarySlotId();
        ASSERT_EQ(defaultSlotId, SimTest::VAILD_SLOT_ID);
    }
}
