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
#include "sim_lock_state_test.h"
#include "sim_stk_test.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;

const int32_t SimTest::VAILD_SLOT_ID = 0;
const int32_t SimTest::LOOP_NUMBER = 1000;
const int32_t SimTest::OTHER_ABNORMAL = -2;
const int32_t SimTest::UNLOCKED = 0;

/**
 * @tc.number   Telephony_Sim_SetLockState_0900
 * @tc.name     The test executed the SetLockState interface setting function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockStateTest, Telephony_Sim_SetLockState_0900, Function | MediumTest | Level1)
{
    if (!g_isPin2True) {
        LOG("The SIM card password is incorrect, so the use case is stopped.");
        return;
    }
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::LockInfo optionsOff = {
        OHOS::Telephony::LockType::FDN_LOCK,
        OHOS::Str8ToStr16(CORRECT_PIN2),
        OHOS::Telephony::LockState::LOCK_OFF,
    };

    for (int32_t timeNumber = 0; timeNumber < SimTest::LOOP_NUMBER / 2; ++timeNumber) {
        bool retValue = g_proxy.GetHandler()->SetLockState(SimTest::VAILD_SLOT_ID, optionsOff, response);
        ASSERT_TRUE(retValue);
        ASSERT_EQ(response.result, SimTest::UNLOCKED);
    }
}

/**
 * @tc.number   Telephony_Sim_GetLockState_0400
 * @tc.name     The test executed the GetLockState interface setting function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockStateTest, Telephony_Sim_GetLockState_0400, Function | MediumTest | Level1)
{
    if (!g_isPin2True) {
        LOG("The SIM card password is incorrect, so the use case is stopped.");
        return;
    }
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::LockInfo optionsOff = {
        OHOS::Telephony::LockType::FDN_LOCK,
        OHOS::Str8ToStr16(CORRECT_PIN2),
        OHOS::Telephony::LockState::LOCK_OFF,
    };

    bool retValue = g_proxy.GetHandler()->SetLockState(SimTest::VAILD_SLOT_ID, optionsOff, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::UNLOCKED);

    for (int32_t timeNumber = 0; timeNumber < SimTest::LOOP_NUMBER; ++timeNumber) {
        int32_t result =
            g_proxy.GetHandler()->GetLockState(SimTest::VAILD_SLOT_ID, OHOS::Telephony::LockType::FDN_LOCK);
        ASSERT_EQ(result, (int32_t)OHOS::Telephony::LockState::LOCK_OFF);
    }
}

/**
 * @tc.number   Telephony_Sim_GetCardType_0600
 * @tc.name     The test executed the GetCardType interface setting function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetCardType_0600, Function | MediumTest | Level1)
{
    for (int32_t timeNumber = 0; timeNumber < SimTest::LOOP_NUMBER; ++timeNumber) {
        int32_t result = static_cast<int32_t>(g_proxy.GetHandler()->GetCardType(SimTest::VAILD_SLOT_ID));
        ASSERT_EQ(result, (int32_t)OHOS::Telephony::CardType::SINGLE_MODE_USIM_CARD);
    }
}