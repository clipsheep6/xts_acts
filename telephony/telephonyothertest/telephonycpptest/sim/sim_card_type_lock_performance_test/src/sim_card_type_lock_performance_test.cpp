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
#include "log.h"
#include "time_count_helper.h"
#include "sim_test.h"
#include "sim_lock_state_test.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;

const int32_t SimTest::VAILD_SLOT_ID = 0;
const int32_t SimTest::LOOP_NUMBER = 1000;
const int32_t SimTest::TIME_USEC = 1000;

/**
 * @tc.number   Telephony_Sim_SetLockState_0800
 * @tc.name     Test the SetLockState interface query function 1000 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockStateTest, Telephony_Sim_SetLockState_0800, Function | MediumTest | Level1)
{
    if (!g_isPin2True) {
        LOG("The SIM card password is incorrect, so the use case is stopped.");
        return;
    }
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::LockInfo optionsOn = {
        OHOS::Telephony::LockType::FDN_LOCK,
        OHOS::Str8ToStr16(CORRECT_PIN2),
        OHOS::Telephony::LockState::LOCK_OFF,
    };

    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < SimTest::LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->SetLockState(SimTest::VAILD_SLOT_ID, optionsOn, response);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / SimTest::LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetLockState_0400
 * @tc.name     Test the GetLockState interface query function 1000 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockStateTest, Telephony_Sim_GetLockState_0400, Function | MediumTest | Level1)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < SimTest::LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->GetLockState(SimTest::VAILD_SLOT_ID, OHOS::Telephony::LockType::FDN_LOCK);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / SimTest::LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetCardType_0500
 * @tc.name     Test the GetCardType interface query function 1000 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetCardType_0500, Function | MediumTest | Level1)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < SimTest::LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->GetCardType(SimTest::VAILD_SLOT_ID);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / SimTest::LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}
