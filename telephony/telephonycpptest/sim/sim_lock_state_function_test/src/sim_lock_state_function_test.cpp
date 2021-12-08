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
#include <vector>
#include <map>
#include <set>
#include <fstream>
#include "sim_test.h"
#include "sim_lock_state_test.h"

using namespace testing::ext;
using namespace OHOS;

const int32_t SimTest::SLOTID_2 = 2;
const int32_t SimTest::SLOTID_1 = 1;
const int32_t SimTest::SLOTID_0 = 0;
const int32_t SimTest::SLOTID_MINUS = -1;
const int32_t SimTest::PASSWORD_ERR = -1;
const int32_t SimTest::OTHER_ABNORMAL = -2;
const int32_t SimTest::UNLOCKED = 0;
const int32_t SimTest::REMAIN_0 = 0;
const int32_t SimTest::REMAIN_1 = 1;
const int32_t SimTest::REMAIN_2 = 2;
const int32_t SimTest::INVALID_VALUE = -1;

/**************************************************Phase six*****************************************************/

/*
 * @tc.number  Telephony_Sim_SetLockState_0100
 * @tc.name    The card is in ready state and tests the SetLockState interface to enable PIN lock.
 * @tc.desc    Function test
 */
HWTEST_F(SimLockStateTest, Telephony_Sim_SetLockState_0100, Function | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::LockInfo options = {
        OHOS::Telephony::LockType::PIN_LOCK,
        OHOS::Str8ToStr16(CORRECT_PIN),
        OHOS::Telephony::LockState::LOCK_ON,
    };

    bool retValue = g_proxy.GetHandler()->SetLockState(SimTest::SLOTID_0, options, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::UNLOCKED);
    int32_t result = g_proxy.GetHandler()->GetLockState(SimTest::SLOTID_0, OHOS::Telephony::LockType::PIN_LOCK);
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::LockState::LOCK_ON);
}

/*
 * @tc.number  Telephony_Sim_SetLockState_0200
 * @tc.name    The card is in ready state and tests SetLockState to turn off the PIN lock.
 * @tc.desc    Function test
 */
HWTEST_F(SimLockStateTest, Telephony_Sim_SetLockState_0200, Function | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::LockInfo options = {
        OHOS::Telephony::LockType::PIN_LOCK,
        OHOS::Str8ToStr16(CORRECT_PIN),
        OHOS::Telephony::LockState::LOCK_OFF,
    };

    lockInfo->EnablePinLockState(SimTest::SLOTID_0);

    bool retValue = g_proxy.GetHandler()->SetLockState(SimTest::SLOTID_0, options, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::UNLOCKED);
    int32_t result = g_proxy.GetHandler()->GetLockState(SimTest::SLOTID_0, OHOS::Telephony::LockType::PIN_LOCK);
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::LockState::LOCK_OFF);
}

/*
 * @tc.number  Telephony_Sim_SetLockState_0300
 * @tc.name    Test SetLockState interface to enable PIN lock repeatedly.
 * @tc.desc    Function test
 */
HWTEST_F(SimLockStateTest, Telephony_Sim_SetLockState_0300, Function | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::LockInfo options = {
        OHOS::Telephony::LockType::PIN_LOCK,
        OHOS::Str8ToStr16(CORRECT_PIN),
        OHOS::Telephony::LockState::LOCK_ON,
    };

    lockInfo->EnablePinLockState(SimTest::SLOTID_0);

    bool retValue = g_proxy.GetHandler()->SetLockState(SimTest::SLOTID_0, options, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::OTHER_ABNORMAL);
    int32_t result = g_proxy.GetHandler()->GetLockState(SimTest::SLOTID_0, OHOS::Telephony::LockType::PIN_LOCK);
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::LockState::LOCK_ON);
}

/*
 * @tc.number  Telephony_Sim_SetLockState_0400
 * @tc.name    Test SetLockState interface to repeatedly turn off PIN locks.
 * @tc.desc    Function test
 */
HWTEST_F(SimLockStateTest, Telephony_Sim_SetLockState_0400, Function | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::LockInfo options = {
        OHOS::Telephony::LockType::PIN_LOCK,
        OHOS::Str8ToStr16(CORRECT_PIN),
        OHOS::Telephony::LockState::LOCK_OFF,
    };

    lockInfo->DisablePinLockState(SimTest::SLOTID_0);

    bool retValue = g_proxy.GetHandler()->SetLockState(SimTest::SLOTID_0, options, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::OTHER_ABNORMAL);
    int32_t result = g_proxy.GetHandler()->GetLockState(SimTest::SLOTID_0, OHOS::Telephony::LockType::PIN_LOCK);
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::LockState::LOCK_OFF);
}

/*
 * @tc.number  Telephony_Sim_SetLockState_0500
 * @tc.name    Test SetLockState interface, PIN code entry error, open PIN lock.
 * @tc.desc    Function test
 */
HWTEST_F(SimLockStateTest, Telephony_Sim_SetLockState_0500, Function | MediumTest | Level3)
{
    std::u16string errPin = OHOS::Str8ToStr16("2021");
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::LockInfo options = {
        OHOS::Telephony::LockType::PIN_LOCK,
        errPin,
        OHOS::Telephony::LockState::LOCK_ON,
    };

    bool retValue = g_proxy.GetHandler()->SetLockState(SimTest::SLOTID_0, options, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::PASSWORD_ERR);
    ASSERT_EQ(response.remain, SimTest::REMAIN_2);
    int32_t result = g_proxy.GetHandler()->GetLockState(SimTest::SLOTID_0, OHOS::Telephony::LockType::PIN_LOCK);
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::LockState::LOCK_OFF);
}

/*
 * @tc.number  Telephony_Sim_SetLockState_0600
 * @tc.name    Test SetLockState interface, PIN code entry error, close PIN lock.
 * @tc.desc    Function test
 */
HWTEST_F(SimLockStateTest, Telephony_Sim_SetLockState_0600, Function | MediumTest | Level3)
{
    std::u16string errPin = OHOS::Str8ToStr16("2021");
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::LockInfo options = {
        OHOS::Telephony::LockType::PIN_LOCK,
        errPin,
        OHOS::Telephony::LockState::LOCK_OFF,
    };

    lockInfo->EnablePinLockState(SimTest::SLOTID_0);

    bool retValue = g_proxy.GetHandler()->SetLockState(SimTest::SLOTID_0, options, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::PASSWORD_ERR);
    ASSERT_EQ(response.remain, SimTest::REMAIN_2);
    int32_t result = g_proxy.GetHandler()->GetLockState(SimTest::SLOTID_0, OHOS::Telephony::LockType::PIN_LOCK);
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::LockState::LOCK_ON);
}

/*
 * @tc.number  Telephony_Sim_SetLockState_0700
 * @tc.name    Test SetLockState interface, PIN code abnormal entry parameter, open PIN lock.
 * @tc.desc    Function test
 */
HWTEST_F(SimLockStateTest, Telephony_Sim_SetLockState_0700, Function | MediumTest | Level3)
{
    std::u16string errPin = OHOS::Str8ToStr16("123");
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::LockInfo options = {
        OHOS::Telephony::LockType::PIN_LOCK,
        errPin,
        OHOS::Telephony::LockState::LOCK_ON,
    };

    bool retValue = g_proxy.GetHandler()->SetLockState(SimTest::SLOTID_0, options, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::OTHER_ABNORMAL);
    int32_t result = g_proxy.GetHandler()->GetLockState(SimTest::SLOTID_0, OHOS::Telephony::LockType::PIN_LOCK);
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::LockState::LOCK_OFF);
}

/*
 * @tc.number  Telephony_Sim_SetLockState_1000
 * @tc.name    The card is in ready state, and the SetLockState interface slotId is abnormal input parameter -1.
 * @tc.desc    Function test
 */
HWTEST_F(SimLockStateTest, Telephony_Sim_SetLockState_1000, Function | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::LockInfo options = {
        OHOS::Telephony::LockType::PIN_LOCK,
        OHOS::Str8ToStr16(CORRECT_PIN),
        OHOS::Telephony::LockState::LOCK_ON,
    };

    bool retValue = g_proxy.GetHandler()->SetLockState(SimTest::SLOTID_MINUS, options, response);
    ASSERT_FALSE(retValue);
}

/*
 * @tc.number  Telephony_Sim_SetLockState_1100
 * @tc.name    The card is in ready state, and the SetLockState interface slotId is abnormal input parameter 1.
 * @tc.desc    Function test
 */
HWTEST_F(SimLockStateTest, Telephony_Sim_SetLockState_1100, Function | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::LockInfo options = {
        OHOS::Telephony::LockType::PIN_LOCK,
        OHOS::Str8ToStr16(CORRECT_PIN),
        OHOS::Telephony::LockState::LOCK_ON,
    };

    bool retValue = g_proxy.GetHandler()->SetLockState(SimTest::SLOTID_1, options, response);
    ASSERT_FALSE(retValue);
}

/*
 * @tc.number  Telephony_Sim_SetLockState_1200
 * @tc.name    The card is in ready state, and the SetLockState interface slotId is abnormal input parameter 2.
 * @tc.desc    Function test
 */
HWTEST_F(SimLockStateTest, Telephony_Sim_SetLockState_1200, Function | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::LockInfo options = {
        OHOS::Telephony::LockType::PIN_LOCK,
        OHOS::Str8ToStr16(CORRECT_PIN),
        OHOS::Telephony::LockState::LOCK_ON,
    };

    bool retValue = g_proxy.GetHandler()->SetLockState(SimTest::SLOTID_2, options, response);
    ASSERT_FALSE(retValue);
}

/*
 * @tc.number  Telephony_Sim_SetLockState_1300
 * @tc.name    Test SetLockState interface to enable FDN lock.
 * @tc.desc    Function test
 */
HWTEST_F(SimLockStateTest, Telephony_Sim_SetLockState_1300, Function | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::LockInfo options = {
        OHOS::Telephony::LockType::FDN_LOCK,
        OHOS::Str8ToStr16(CORRECT_PIN2),
        OHOS::Telephony::LockState::LOCK_ON,
    };

    bool retValue = g_proxy.GetHandler()->SetLockState(SimTest::SLOTID_0, options, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::UNLOCKED);
    int32_t result = g_proxy.GetHandler()->GetLockState(SimTest::SLOTID_0, OHOS::Telephony::LockType::FDN_LOCK);
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::LockState::LOCK_ON);
}

/*
 * @tc.number  Telephony_Sim_SetLockState_1400
 * @tc.name    Test SetLockState interface to repeatedly close FDN locks.
 * @tc.desc    Function test
 */
HWTEST_F(SimLockStateTest, Telephony_Sim_SetLockState_1400, Function | MediumTest | Level3)
{
    std::u16string errPin2 = OHOS::Str8ToStr16("2021");
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::LockInfo options = {
        OHOS::Telephony::LockType::FDN_LOCK,
        OHOS::Str8ToStr16(CORRECT_PIN2),
        OHOS::Telephony::LockState::LOCK_OFF,
    };

    lockInfo->DisableFDNLockState(SimTest::SLOTID_0);

    bool retValue = g_proxy.GetHandler()->SetLockState(SimTest::SLOTID_0, options, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::UNLOCKED);
    int32_t result = g_proxy.GetHandler()->GetLockState(SimTest::SLOTID_0, OHOS::Telephony::LockType::FDN_LOCK);
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::LockState::LOCK_OFF);
}

/*
 * @tc.number  Telephony_Sim_SetLockState_1500
 * @tc.name    Test the SetLockState interface to repeatedly enable FDN locks.
 * @tc.desc    Function test
 */
HWTEST_F(SimLockStateTest, Telephony_Sim_SetLockState_1500, Function | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::LockInfo options = {
        OHOS::Telephony::LockType::FDN_LOCK,
        OHOS::Str8ToStr16(CORRECT_PIN2),
        OHOS::Telephony::LockState::LOCK_ON,
    };

    lockInfo->EnableFDNLockState(SimTest::SLOTID_0);

    bool retValue = g_proxy.GetHandler()->SetLockState(SimTest::SLOTID_0, options, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::UNLOCKED);
    int32_t result = g_proxy.GetHandler()->GetLockState(SimTest::SLOTID_0, OHOS::Telephony::LockType::FDN_LOCK);
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::LockState::LOCK_ON);
}

/*
 * @tc.number  Telephony_Sim_SetLockState_1600
 * @tc.name    Test SetLockState interface to turn off FDN lock.
 * @tc.desc    Function test
 */
HWTEST_F(SimLockStateTest, Telephony_Sim_SetLockState_1600, Function | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::LockInfo options = {
        OHOS::Telephony::LockType::FDN_LOCK,
        OHOS::Str8ToStr16(CORRECT_PIN2),
        OHOS::Telephony::LockState::LOCK_OFF,
    };

    bool retValue = g_proxy.GetHandler()->SetLockState(SimTest::SLOTID_0, options, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::UNLOCKED);
    int32_t result = g_proxy.GetHandler()->GetLockState(SimTest::SLOTID_0, OHOS::Telephony::LockType::FDN_LOCK);
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::LockState::LOCK_OFF);
}

/*
 * @tc.number  Telephony_Sim_SetLockState_1700
 * @tc.name    Test SetLockState interface, PIN2 code entry error, open FDN lock.
 * @tc.desc    Function test
 */
HWTEST_F(SimLockStateTest, Telephony_Sim_SetLockState_1700, Function | MediumTest | Level3)
{
    std::u16string errPin2 = OHOS::Str8ToStr16("2021");
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::LockInfo options = {
        OHOS::Telephony::LockType::FDN_LOCK,
        errPin2,
        OHOS::Telephony::LockState::LOCK_ON,
    };

    bool retValue = g_proxy.GetHandler()->SetLockState(SimTest::SLOTID_0, options, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::PASSWORD_ERR);
    ASSERT_EQ(response.remain, SimTest::REMAIN_2);
    int32_t result = g_proxy.GetHandler()->GetLockState(SimTest::SLOTID_0, OHOS::Telephony::LockType::FDN_LOCK);
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::LockState::LOCK_OFF);
}

/*
 * @tc.number  Telephony_Sim_SetLockState_1800
 * @tc.name    Test SetLockState interface, PIN2 code entry error, close FDN lock.
 * @tc.desc    Function test
 */
HWTEST_F(SimLockStateTest, Telephony_Sim_SetLockState_1800, Function | MediumTest | Level3)
{
    std::u16string errPin2 = OHOS::Str8ToStr16("2021");
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::LockInfo options = {
        OHOS::Telephony::LockType::FDN_LOCK,
        errPin2,
        OHOS::Telephony::LockState::LOCK_OFF,
    };

    lockInfo->EnableFDNLockState(SimTest::SLOTID_0);

    bool retValue = g_proxy.GetHandler()->SetLockState(SimTest::SLOTID_0, options, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::PASSWORD_ERR);
    ASSERT_EQ(response.remain, SimTest::REMAIN_2);
    int32_t result = g_proxy.GetHandler()->GetLockState(SimTest::SLOTID_0, OHOS::Telephony::LockType::FDN_LOCK);
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::LockState::LOCK_ON);
}

/*
 * @tc.number  Telephony_Sim_SetLockState_1900
 * @tc.name    Test SetLockState interface, PIN2 code abnormal entry parameter, open FDN lock.
 * @tc.desc    Function test
 */
HWTEST_F(SimLockStateTest, Telephony_Sim_SetLockState_1900, Function | MediumTest | Level3)
{
    std::u16string errPin2 = OHOS::Str8ToStr16("123456789");
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::LockInfo options = {
        OHOS::Telephony::LockType::FDN_LOCK,
        errPin2,
        OHOS::Telephony::LockState::LOCK_ON,
    };

    bool retValue = g_proxy.GetHandler()->SetLockState(SimTest::SLOTID_0, options, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::OTHER_ABNORMAL);
    int32_t result = g_proxy.GetHandler()->GetLockState(SimTest::SLOTID_0, OHOS::Telephony::LockType::FDN_LOCK);
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::LockState::LOCK_OFF);
}

/*
 * @tc.number  Telephony_Sim_GetLockState_0100
 * @tc.name    Test GetLockState interface, slotId exception entry parameter -1.
 * @tc.desc    Function test
 */
HWTEST_F(SimLockStateTest, Telephony_Sim_GetLockState_0100, Function | MediumTest | Level3)
{
    int32_t result = g_proxy.GetHandler()->GetLockState(SimTest::SLOTID_MINUS, OHOS::Telephony::LockType::PIN_LOCK);
    ASSERT_EQ(result, SimTest::INVALID_VALUE);
}

/*
 * @tc.number  Telephony_Sim_GetLockState_0200
 * @tc.name    Test GetLockState interface, slotId exception entry parameter 1.
 * @tc.desc    Function test
 */
HWTEST_F(SimLockStateTest, Telephony_Sim_GetLockState_0200, Function | MediumTest | Level3)
{
    int32_t result = g_proxy.GetHandler()->GetLockState(SimTest::SLOTID_1, OHOS::Telephony::LockType::PIN_LOCK);
    ASSERT_EQ(result, SimTest::INVALID_VALUE);
}

/*
 * @tc.number  Telephony_Sim_GetLockState_0300
 * @tc.name    Test GetLockState interface, slotId exception entry parameter 2.
 * @tc.desc    Function test
 */
HWTEST_F(SimLockStateTest, Telephony_Sim_GetLockState_0300, Function | MediumTest | Level3)
{
    int32_t result = g_proxy.GetHandler()->GetLockState(SimTest::SLOTID_2, OHOS::Telephony::LockType::PIN_LOCK);
    ASSERT_EQ(result, SimTest::INVALID_VALUE);
}
