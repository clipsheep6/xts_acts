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

#include <vector>
#include "sim_test.h"

using namespace testing::ext;
using namespace OHOS;
const int32_t SimTest::SLOTID_0 = 0;
const int32_t SimTest::INVALID_VALUE = -1;
const int32_t SimTest::OTHER_ABNORMAL = -2;
const std::string SimTest::RESPONSE_CMD = "81030125000202828";
const std::string SimTest::STK_CMD = "D30781020181900101";

/**************************************************Phase six*****************************************************/
/*
 * @tc.number  Telephony_Sim_SetLockState_2000
 * @tc.name    When there is no card, test the SetLockState interface to see the return value.
 * @tc.desc    Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetLockState_2000, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::LockInfo options = {
        OHOS::Telephony::LockType::FDN_LOCK,
        OHOS::Str8ToStr16(CORRECT_PIN2),
        OHOS::Telephony::LockState::LOCK_ON,
    };

    bool retValue = g_proxy.GetHandler()->SetLockState(SimTest::SLOTID_0, options, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::OTHER_ABNORMAL);
}

/*
 * @tc.number  Telephony_Sim_GetLockState_0600
 * @tc.name    When there is no card, test the GetLockState interface.
 * @tc.desc    Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetLockState_0600, Function | MediumTest | Level2)
{
    int32_t result = g_proxy.GetHandler()->GetLockState(SimTest::SLOTID_0, OHOS::Telephony::LockType::PIN_LOCK);
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::LockState::LOCK_ERROR);
}

/**
 * @tc.number   Telephony_Sim_GetCardType_0700
 * @tc.name     If there is no card, verify the return value of the slotId input parameter of GetCardType.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetCardType_0700, Function | MediumTest | Level3)
{
    int32_t result = g_proxy.GetHandler()->GetCardType(SimTest::SLOTID_0);
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::CardType::UNKNOWN_CARD);
}