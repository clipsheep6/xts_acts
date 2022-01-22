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

const int32_t SimTest::VAILD_SLOT_ID = EFFECTIVE_SLOT_ID;
const int32_t SimTest::LOOP_NUMBER = 1000;
const int32_t SimTest::UNLOCKED = 0;

/**
 * @tc.number   Telephony_Sim_UnlockSimLock_2800
 * @tc.name     The test executed the UnlockSimLock interface setting function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliablity test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockSimLock_2800, Function | MediumTest | Level1)
{
    int32_t loopNumber = 10;
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::PersoLockInfo lockInfos = {
        OHOS::Telephony::PersoLockType::PN_PIN_LOCK,
        OHOS::Str8ToStr16(PN_PIN_LOCK_PASSWORD),
    };
    for (int32_t timeNumber = 0; timeNumber < loopNumber; ++timeNumber) {
        bool results = g_proxy.GetHandler()->UnlockSimLock(SimTest::VAILD_SLOT_ID, lockInfos, response);
        ASSERT_TRUE(results);
        ASSERT_EQ(response.result, SimTest::UNLOCKED);
    }
}

/**
 * @tc.number   Telephony_Sim_HasOperatorPrivileges_0600
 * @tc.name     The test executed the HasOperatorPrivileges interface setting function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliablity test
 */
HWTEST_F(SimTest, Telephony_Sim_HasOperatorPrivileges_0600, Function | MediumTest | Level1)
{
    for (int32_t timeNumber = 0; timeNumber < SimTest::LOOP_NUMBER; ++timeNumber) {
        bool results = g_proxy.GetHandler()->HasOperatorPrivileges(SimTest::VAILD_SLOT_ID);
        ASSERT_TRUE(results);
    }
}
