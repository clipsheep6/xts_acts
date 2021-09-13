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

#define SIM_MOCK_TEST
#include "log.h"
#include "sim_test.h"
#include "time_count_helper.h"
#include <cstring>

using namespace testing::ext;
using namespace OHOS;
const int32_t SimTest::LOOP_NUMBER = 1000;
const int32_t SimTest::TIME_USEC = 500;
const int32_t SimTest::DATA_LENGTH = 0;
const int32_t SimTest::INVALID_VALUE = -1;
const int32_t SimTest::OTHER_ABNORMAL = -2;
const int32_t SimTest::PASSWORD_ERR = -1;
const int32_t SimTest::UNLOCKED = 0;
const int32_t SimTest::SLOTID_4 = 4;
const int32_t SimTest::SLOTID_2 = 2;
const int32_t SimTest::SLOTID_1 = 1;
const int32_t SimTest::SLOTID_0 = 0;
const int32_t SimTest::OPEN = 1;
const int32_t SimTest::CLOSE = 0;

/**
 * @tc.number   Telephony_Sim_GetSimState_0500
 * @tc.name     Test calling the GetSimState interface when the card state is EX_UNKNOWN.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimState_0500, Function | MediumTest | Level3)
{
    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_UNKNOWN
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_UNKNOWN);
    int32_t result = g_proxy.GetHandler()->GetSimState(SLOTID_0);
    ASSERT_EQ(result, OHOS::Telephony::ExternalState::EX_UNKNOWN);
}

/**
 * @tc.number   Telephony_Sim_GetSimState_0600
 * @tc.name     Test calling the GetSimState interface when the card state is EX_ABSENT.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimState_0600, Function | MediumTest | Level3)
{
    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_ABSENT
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_ABSENT);
    int32_t result = g_proxy.GetHandler()->GetSimState(SLOTID_0);
    ASSERT_EQ(result, OHOS::Telephony::ExternalState::EX_ABSENT);
}

/**
 * @tc.number   Telephony_Sim_GetSimState_0700
 * @tc.name     Test calling the GetSimState interface when the card state is EX_PIN_LOCKED.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimState_0700, Function | MediumTest | Level3)
{
    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_PIN_LOCKED
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_PIN_LOCKED);
    int32_t result = g_proxy.GetHandler()->GetSimState(SLOTID_0);
    ASSERT_EQ(result, OHOS::Telephony::ExternalState::EX_PIN_LOCKED);
}

/**
 * @tc.number   Telephony_Sim_GetSimState_0800
 * @tc.name     Test calling the GetSimState interface when the card state is EX_PUK_LOCKED.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimState_0800, Function | MediumTest | Level3)
{
    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_PUK_LOCKED
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_PUK_LOCKED);
    int32_t result = g_proxy.GetHandler()->GetSimState(SLOTID_0);
    ASSERT_EQ(result, OHOS::Telephony::ExternalState::EX_PUK_LOCKED);
}

/**
 * @tc.number   Telephony_Sim_HasSimCard_0500
 * @tc.name     Test calling the HasSimCard interface when the card state is EX_ABSENT.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_HasSimCard_0500, Function | MediumTest | Level3)
{
    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_ABSENT
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_ABSENT);
    bool result = g_proxy.GetHandler()->HasSimCard(SLOTID_0);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin_0100
 * @tc.name     Test that the UnlockPin interface is called when PIN locking is not enabled.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin_0100, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1234");
    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    bool retValue = g_proxy.GetHandler()->UnlockPin(pin, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin_0200
 * @tc.name     The test calls the UnlockPin interface when an incorrect PIN code
 *              and a normal SIM card ID parameter are entered.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin_0200, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("11111111");
    std::string defaultPin = "1234";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_PIN_LOCKED
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_PIN_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->UnlockPin(pin, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, PASSWORD_ERR);
    ASSERT_EQ(response.remain, REMAIN_2);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin_0300
 * @tc.name     The test calls the UnlockPin interface when the abnormal PIN code
 *              and normal SIM card ID parameters are entered.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin_0300, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("123");
    std::string defaultPin = "1234";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_PIN_LOCKED
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_PIN_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->UnlockPin(pin, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin_0400
 * @tc.name     The test calls the UnlockPin interface when the correct PIN code
 *              and normal SIM card ID parameters are entered.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin_0400, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1234");
    std::string defaultPin = "1234";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_PIN_LOCKED
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_PIN_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->UnlockPin(pin, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, UNLOCKED);
    ASSERT_EQ(response.remain, REMAIN_0);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin_0500
 * @tc.name     The test calls the UnlockPin interface when the abnormal PIN code
 *              and normal SIM card ID parameters are entered.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin_0500, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("AT+CPIN=\"1234\"");
    std::string defaultPin = "1234";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_PIN_LOCKED
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_PIN_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->UnlockPin(pin, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin_0600
 * @tc.name     Test input PIN code error more than the number of times,trigger PUK lock.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin_0600, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1111");
    std::string defaultPin = "1234";
    std::string defaultPuk = "12345678";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_PIN_LOCKED
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_PIN_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);
    // Use the analog vendor library to set the PUK to 12345678
    g_proxy.MockPukCodeSet(defaultPuk);

    bool retValue = g_proxy.GetHandler()->UnlockPin(pin, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, PASSWORD_ERR);
    ASSERT_EQ(response.remain, REMAIN_2);
    retValue = g_proxy.GetHandler()->UnlockPin(pin, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, PASSWORD_ERR);
    ASSERT_EQ(response.remain, REMAIN_1);
    retValue = g_proxy.GetHandler()->UnlockPin(pin, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, PASSWORD_ERR);
    ASSERT_EQ(response.remain, REMAIN_0);
    retValue = g_proxy.GetHandler()->UnlockPin(pin, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin_0700
 * @tc.name     When PUK is locked, the test calls the UnlockPin interface.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin_0700, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1234");
    std::string defaultPin = "1234";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_PUK_LOCKED
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_PUK_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->UnlockPin(pin, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin_0800
 * @tc.name     Test the SetDefaultSmsSlotId interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin_0800, Performance | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    TimeCountHelper timeHelper;
    std::string defaultPin = "1234";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_PIN_LOCKED
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_PIN_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);

    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->UnlockPin(Str8ToStr16(defaultPin), response, SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    ASSERT_LE(useTimeUs, SimTest::TIME_USEC);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin_0900
 * @tc.name     Loop to call SetDefaultSmsSlotId interface for 1000 times and get the retValueurn value,
 *              and count the number of failures.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin_0900, Reliability | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    std::string defaultPin = "1234";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_PIN_LOCKED
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_PIN_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);

    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool retValue = g_proxy.GetHandler()->UnlockPin(Str8ToStr16(defaultPin), response, SLOTID_0);
        ASSERT_TRUE(retValue);
        ASSERT_EQ(response.result, UNLOCKED);
        ASSERT_EQ(response.remain, REMAIN_0);
    }

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin_1000
 * @tc.name     When the card status is EX_READY, test the Unlockpin interface phoneId exception parameter.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin_1000, Reliability | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    std::string defaultPin = "1234";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->UnlockPin(Str8ToStr16(defaultPin), response, SLOTID_4);
    ASSERT_FALSE(retValue);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}


/**
 * @tc.number   Telephony_Sim_UnlockPuk_0100
 * @tc.name     Enter the correct PIN code, PUK code and SIM card ID parameters to test the UnlockPUK interface.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk_0100, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1234");
    std::u16string puk = Str8ToStr16("12345678");
    std::string defaultPin = "1234";
    std::string defaultPuk = "12345678";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_PUK_LOCKED
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_PUK_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);
    // Use the analog vendor library to set the PUK to 12345678
    g_proxy.MockPukCodeSet(defaultPuk);

    bool retValue = g_proxy.GetHandler()->UnlockPuk(pin, puk, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, UNLOCKED);
    ASSERT_EQ(response.remain, REMAIN_0);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk_0200
 * @tc.name     Test the UnlockPUK interface by entering the correct PIN code,
 *              the wrong PUK code,and the SIM card ID parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk_0200, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1234");
    std::u16string puk = Str8ToStr16("@qQ1");
    std::string defaultPin = "1234";
    std::string defaultPuk = "12345678";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_PUK_LOCKED
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_PUK_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);
    // Use the analog vendor library to set the PUK to 12345678
    g_proxy.MockPukCodeSet(defaultPuk);

    bool retValue = g_proxy.GetHandler()->UnlockPuk(pin, puk, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk_0300
 * @tc.name     Test the UnlockPUK interface by entering the wrong PIN code,
 *              correct PUK code and correct SIM card ID parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk_0300, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("@qQ1");
    std::u16string puk = Str8ToStr16("12345678");
    std::string defaultPin = "1234";
    std::string defaultPuk = "12345678";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_PUK_LOCKED
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_PUK_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);
    // Use the analog vendor library to set the PUK to 12345678
    g_proxy.MockPukCodeSet(defaultPuk);

    bool retValue = g_proxy.GetHandler()->UnlockPuk(pin, puk, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk_0400
 * @tc.name     Test the UnlockPUK interface by entering the wrong PIN code,
 *              wrong PUK code and correct SIM card ID parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk_0400, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1234");
    std::u16string puk = Str8ToStr16("99999999");
    std::string defaultPin = "1234";
    std::string defaultPuk = "12345678";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_PUK_LOCKED
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_PUK_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);
    // Use the analog vendor library to set the PUK to 12345678
    g_proxy.MockPukCodeSet(defaultPuk);

    bool retValue = g_proxy.GetHandler()->UnlockPuk(pin, puk, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, PASSWORD_ERR);
    ASSERT_EQ(response.remain, REMAIN_9);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk_0500
 * @tc.name     Test the UnlockPuk interface when entering a PUK parameter of length 3.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk_0500, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1234");
    std::u16string puk = Str8ToStr16("123");
    std::string defaultPin = "1234";
    std::string defaultPuk = "12345678";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_PUK_LOCKED
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_PUK_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);
    // Use the analog vendor library to set the PUK to 12345678
    g_proxy.MockPukCodeSet(defaultPuk);

    bool retValue = g_proxy.GetHandler()->UnlockPuk(pin, puk, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk_0600
 * @tc.name     Test the UnlockPuk interface when entering a PUK parameter of length greater than 9.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk_0600, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1234");
    std::u16string puk = Str8ToStr16("AT+CPIN=\"1234\"");
    std::string defaultPin = "1234";
    std::string defaultPuk = "12345678";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_PUK_LOCKED
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_PUK_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);
    // Use the analog vendor library to set the PUK to 12345678
    g_proxy.MockPukCodeSet(defaultPuk);

    bool retValue = g_proxy.GetHandler()->UnlockPuk(pin, puk, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk_0700
 * @tc.name     Test when incorrect PUK code parameters are entered to call the unlockPUK interface,
 *              failing more than 10 times resulting in the SIM card being disabled.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk_0700, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    int32_t callTimes = 10;
    bool retValue = false;
    std::u16string pin = Str8ToStr16("1234");
    std::u16string puk = Str8ToStr16("99999999");
    std::string defaultPin = "1234";
    std::string defaultPuk = "12345678";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_PUK_LOCKED
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_PUK_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);
    // Use the analog vendor library to set the PUK to 12345678
    g_proxy.MockPukCodeSet(defaultPuk);

    for (int32_t timeNumber = 0; timeNumber < callTimes; timeNumber++) {
        retValue = g_proxy.GetHandler()->UnlockPuk(pin, puk, response, SLOTID_0);
    }
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, PASSWORD_ERR);
    ASSERT_EQ(response.remain, REMAIN_0);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk_0800
 * @tc.name     Test that the UnlockPuk interface is called when the SIM card is ready.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk_0800, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1234");
    std::u16string puk = Str8ToStr16("12345678");
    std::string defaultPin = "1234";
    std::string defaultPuk = "12345678";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);
    // Use the analog vendor library to set the PUK to 12345678
    g_proxy.MockPukCodeSet(defaultPuk);

    bool retValue = g_proxy.GetHandler()->UnlockPuk(pin, puk, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk_0900
 * @tc.name     Test the UnlockPuk interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk_0900, Performance | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    TimeCountHelper timeHelper;
    std::u16string pin = Str8ToStr16("1234");
    std::u16string puk = Str8ToStr16("12345678");
    std::string defaultPin = "1234";
    std::string defaultPuk = "12345678";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_PUK_LOCKED
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_PUK_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);
    // Use the analog vendor library to set the PUK to 12345678
    g_proxy.MockPukCodeSet(defaultPuk);

    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->UnlockPuk(pin, puk, response, SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    ASSERT_LE(useTimeUs, SimTest::TIME_USEC);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk_1000
 * @tc.name     Loop to call UnlockPuk interface for 1000 times and get the retValueurn value,
 *              and count the number of failures.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk_1000, Reliability | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1234");
    std::u16string puk = Str8ToStr16("12345678");
    std::string defaultPin = "1234";
    std::string defaultPuk = "12345678";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_PUK_LOCKED
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_PUK_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);
    // Use the analog vendor library to set the PUK to 12345678
    g_proxy.MockPukCodeSet(defaultPuk);

    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool retValue = g_proxy.GetHandler()->UnlockPuk(pin, puk, response, SLOTID_0);
        ASSERT_TRUE(retValue);
        ASSERT_EQ(response.result, UNLOCKED);
        ASSERT_EQ(response.remain, REMAIN_0);
    }

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk_1100
 * @tc.name     Test the UnlockPuk interface with the phoneId exception parameter.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk_1100, Reliability | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1234");
    std::u16string puk = Str8ToStr16("12345678");
    std::string defaultPin = "1234";
    std::string defaultPuk = "12345678";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_PUK_LOCKED
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_PUK_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);
    // Use the analog vendor library to set the PUK to 12345678
    g_proxy.MockPukCodeSet(defaultPuk);

    bool retValue = g_proxy.GetHandler()->UnlockPuk(pin, puk, response, SLOTID_4);
    ASSERT_FALSE(retValue);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_AlterPin_0100
 * @tc.name     Test that the alterPin interface is called when the correct oldPin code is entered,
 *              the wrong pin code is entered and the correct SIM card ID parameter is entered.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin_0100, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin = Str8ToStr16("1234");
    std::u16string newPin = Str8ToStr16("@qQ1");
    std::string defaultPin = "1234";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->AlterPin(newPin, oldPin, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_AlterPin_0200
 * @tc.name     Test the alterPin interface when inputing the wrong OLDPIN code,
 *              the normal pin code and the normal SIM card ID parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin_0200, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin = Str8ToStr16("99999999");
    std::u16string newPin = Str8ToStr16("4321");
    std::string defaultPin = "1234";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->AlterPin(newPin, oldPin, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, PASSWORD_ERR);
    ASSERT_EQ(response.remain, REMAIN_2);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_AlterPin_0300
 * @tc.name     The test calls the AlterPin interface when entering the correct oldPin code,
 *              normal pin code and abnormal SIM card ID parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin_0300, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin = Str8ToStr16("1234");
    std::u16string newPin = Str8ToStr16("4321");
    std::string defaultPin = "1234";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->AlterPin(newPin, oldPin, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, UNLOCKED);
    ASSERT_EQ(response.remain, REMAIN_0);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_AlterPin_0400
 * @tc.name     The test calls the AlterPin interface when entering the correct oldPin code,
 *              normal pin code and abnormal SIM card ID parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin_0400, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin = Str8ToStr16("9999");
    std::u16string newPin = Str8ToStr16("1234");
    std::string defaultPin = "1234";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->AlterPin(newPin, oldPin, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, PASSWORD_ERR);
    ASSERT_EQ(response.remain, REMAIN_2);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_AlterPin_0500
 * @tc.name     Test that the AlterPin interface is called when an oldPin parameter of string length 3 is entered.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin_0500, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin = Str8ToStr16("123");
    std::u16string newPin = Str8ToStr16("4321");
    std::string defaultPin = "1234";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->AlterPin(newPin, oldPin, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_AlterPin_0600
 * @tc.name     Test that the AlterPin interface is called when an pin parameter of string length 3 is entered.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin_0600, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin = Str8ToStr16("1234");
    std::u16string newPin = Str8ToStr16("@qQ");
    std::string defaultPin = "1234";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->AlterPin(newPin, oldPin, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_AlterPin_0700
 * @tc.name     Test that the alterPin interface is called when oldPin and pin
 *              are entered with a string length of 9.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin_0700, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin = Str8ToStr16("oldPin=AT+CPIN=\"1234\"");
    std::u16string newPin = Str8ToStr16("pin=AT+CPIN=\"1234\"");
    std::string defaultPin = "1234";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->AlterPin(newPin, oldPin, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_AlterPin_0800
 * @tc.name     Test the AlterPin interface when the card state is EX_PIN_LOCKED.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin_0800, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin = Str8ToStr16("1234");
    std::u16string newPin = Str8ToStr16("4321");
    std::string defaultPin = "1234";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_PIN_LOCKED
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_PIN_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->AlterPin(newPin, oldPin, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_AlterPin_0900
 * @tc.name     Test the AlterPin interface when the card state is EX_PUK_LOCKED.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin_0900, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin = Str8ToStr16("1234");
    std::u16string newPin = Str8ToStr16("4321");
    std::string defaultPin = "1234";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_PUK_LOCKED
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_PUK_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->AlterPin(newPin, oldPin, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_AlterPin_1000
 * @tc.name     The test AlterPin interface PIN code error exceeds the number of times, and the PUK lock is triggered.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin_1000, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin = Str8ToStr16("1111");
    std::u16string newPin = Str8ToStr16("1234");
    std::string defaultPin = "1234";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->AlterPin(newPin, oldPin, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, PASSWORD_ERR);
    ASSERT_EQ(response.remain, REMAIN_2);
    retValue = g_proxy.GetHandler()->AlterPin(newPin, oldPin, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, PASSWORD_ERR);
    ASSERT_EQ(response.remain, REMAIN_1);
    retValue = g_proxy.GetHandler()->AlterPin(newPin, oldPin, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, PASSWORD_ERR);
    ASSERT_EQ(response.remain, REMAIN_0);
    retValue = g_proxy.GetHandler()->AlterPin(newPin, oldPin, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_AlterPin_1100
 * @tc.name     Test the AlterPin interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin_1100, Performance | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    TimeCountHelper timeHelper;
    std::u16string oldPin = Str8ToStr16("1234");
    std::u16string newPin = Str8ToStr16("1234");
    std::string defaultPin = "1234";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);

    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->AlterPin(newPin, oldPin, response, SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    ASSERT_LE(useTimeUs, SimTest::TIME_USEC);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_AlterPin_1200
 * @tc.name     Loop to call AlterPin interface for 1000 times and get the retValueurn value,
 *              and count the number of failures.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin_1200, Reliability | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin = Str8ToStr16("1234");
    std::u16string newPin = Str8ToStr16("1234");
    std::string defaultPin = "1234";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);

    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool retValue = g_proxy.GetHandler()->AlterPin(newPin, oldPin, response, SLOTID_0);
        ASSERT_TRUE(retValue);
        ASSERT_EQ(response.result, UNLOCKED);
        ASSERT_EQ(response.remain, REMAIN_0);
    }

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_AlterPin_1300
 * @tc.name     Test AlterPin interface,phoneId exception entered.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin_1300, Reliability | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin = Str8ToStr16("1234");
    std::u16string newPin = Str8ToStr16("1234");
    std::string defaultPin = "1234";

    // Enable the PIN lock function.
    g_proxy.SwitchPinLock(OPEN);

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Use the analog vendor library to set the PIN to 1234
    g_proxy.MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->AlterPin(newPin, oldPin, response, SLOTID_4);
    ASSERT_FALSE(retValue);

    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);
    // Turn off the PIN lock function.
    g_proxy.SwitchPinLock(CLOSE);
}

/**
 * @tc.number   Telephony_Sim_SetLockState_0100
 * @tc.name     The test calls SetLockState and enters the correct PIN code to open the PIN lock function.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetLockState_0100, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1234");

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);

    bool retValue = g_proxy.GetHandler()->SetLockState(pin, OPEN, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_SetLockState_0200
 * @tc.name     The test calls SetLockState and enters the correct PIN code to close the PIN lock function.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetLockState_0200, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1234");

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);

    bool retValue = g_proxy.GetHandler()->SetLockState(pin, CLOSE, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_SetLockState_0300
 * @tc.name     Test if the SIM card is in PIN_LOCKED state, call SetLockState and enter the
 *              correct PIN code to open the PIN lock function.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetLockState_0300, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1234");

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_PIN_LOCKED
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_PIN_LOCKED);

    bool retValue = g_proxy.GetHandler()->SetLockState(pin, OPEN, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_SetLockState_0400
 * @tc.name     Test if the SIM card is in PIN_LOCKED state, call SetLockState and enter the
 *              correct PIN code to close the PIN lock function.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetLockState_0400, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1234");

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_PIN_LOCKED
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_PIN_LOCKED);

    bool retValue = g_proxy.GetHandler()->SetLockState(pin, CLOSE, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_SetLockState_0500
 * @tc.name     When the SIM card is in EX_READY state, call SetLockState and enter
 *              an incorrect PIN code to open the PIN lock function.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetLockState_0500, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1111");

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);

    bool retValue = g_proxy.GetHandler()->SetLockState(pin, OPEN, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, PASSWORD_ERR);
    ASSERT_EQ(response.remain, REMAIN_2);
}

/**
 * @tc.number   Telephony_Sim_SetLockState_0600
 * @tc.name     When the SIM card is in PIN_LOCKED state, call SetLockState and enter
 *              an incorrect PIN code to close the PIN lock function.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetLockState_0600, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1111");

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);

    bool retValue = g_proxy.GetHandler()->SetLockState(pin, CLOSE, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, PASSWORD_ERR);
    ASSERT_EQ(response.remain, REMAIN_2);
}

/**
 * @tc.number   Telephony_Sim_SetLockState_0700
 * @tc.name     When the SIM card is in EX_READY state, call SetLockState and enter
 *              the wrong PIN code to open the PIN lock function.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetLockState_0700, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("@qw1");

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);

    bool retValue = g_proxy.GetHandler()->SetLockState(pin, CLOSE, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_SetLockState_0800
 * @tc.name     Test the SetLockState interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_SetLockState_0800, Performance | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    TimeCountHelper timeHelper;
    std::u16string pin = Str8ToStr16("1234");

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);

    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < TIME_USEC; timeNumber++) {
        g_proxy.GetHandler()->SetLockState(pin, OPEN, response, SLOTID_0);
        g_proxy.GetHandler()->SetLockState(pin, CLOSE, response, SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    ASSERT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_SetLockState_0900
 * @tc.name     Loop to call SetLockState interface for 1000 times and get the retValueurn value,
 *              and count the number of failures.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_SetLockState_0900, Reliability | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1234");

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);

    for (int32_t loopNumber = 0; loopNumber < TIME_USEC; loopNumber++) {
        bool retValue = g_proxy.GetHandler()->SetLockState(pin, OPEN, response, SLOTID_0);
        ASSERT_TRUE(retValue);
        ASSERT_EQ(response.result, UNLOCKED);
        retValue = g_proxy.GetHandler()->SetLockState(pin, CLOSE, response, SLOTID_0);
        ASSERT_TRUE(retValue);
        ASSERT_EQ(response.result, UNLOCKED);
    }
}

/**
 * @tc.number   Telephony_Sim_SetLockState_1000
 * @tc.name     When the card status is EX_READY, test the SetLockState interface phoneId exception parameter.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_SetLockState_1000, Reliability | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1234");

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the card status to EX_READY
    g_proxy.MockSimStateSet(OHOS::Telephony::ExternalState::EX_READY);

    bool retValue = g_proxy.GetHandler()->SetLockState(pin, OPEN, response, SLOTID_4);
    ASSERT_FALSE(retValue);
}

/*****************************************************Phase four******************************************************/
/**
 * @tc.number   Telephony_Sim_UnlockPin2_0100
 * @tc.name     Test the UnlockPin2 interface with normal input parameters.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin2_0100, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("1234");
    std::string defaultPin2 = "1234";

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the PIN2 to 1234
    g_proxy.MockPin2CodeSet(defaultPin2);

    bool retValue = g_proxy.GetHandler()->UnlockPin2(pin2, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin2_0200
 * @tc.name     Test UnlockPin2 The interface PIN is a string of 3 characters.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin2_0200, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("123");
    std::string defaultPin2 = "1234";

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the PIN2 to 1234
    g_proxy.MockPin2CodeSet(defaultPin2);

    bool retValue = g_proxy.GetHandler()->UnlockPin2(pin2, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin2_0300
 * @tc.name     Test UnlockPin2 The interface PIN is a string of 9 characters.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin2_0300, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("123456789");
    std::string defaultPin2 = "1234";

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the PIN2 to 1234
    g_proxy.MockPin2CodeSet(defaultPin2);

    bool retValue = g_proxy.GetHandler()->UnlockPin2(pin2, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin2_0400
 * @tc.name     Test UnlockPin2 interface error pin2 code entry parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin2_0400, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("4321");
    std::string defaultPin2 = "1234";

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the PIN2 to 1234
    g_proxy.MockPin2CodeSet(defaultPin2);

    bool retValue = g_proxy.GetHandler()->UnlockPin2(pin2, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, PASSWORD_ERR);
    ASSERT_EQ(response.remain, REMAIN_2);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin2_0500
 * @tc.name     Test the UnlockPin2 interface and enter the abnormal slotid parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin2_0500, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("1234");
    std::string defaultPin2 = "1234";

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the PIN2 to 1234
    g_proxy.MockPin2CodeSet(defaultPin2);

    bool retValue = g_proxy.GetHandler()->UnlockPin2(pin2, response, SLOTID_4);
    ASSERT_FALSE(retValue);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin2_0600
 * @tc.name     Test UnlockPin2 The puK2 lock is triggered when too many pin2 codes
 *              are entered incorrectly on the interface.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin2_0600, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("4321");
    std::string defaultPin2 = "1234";

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the PIN2 to 1234
    g_proxy.MockPin2CodeSet(defaultPin2);

    bool retValue = g_proxy.GetHandler()->UnlockPin2(pin2, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, PASSWORD_ERR);
    ASSERT_EQ(response.remain, REMAIN_2);
    retValue = g_proxy.GetHandler()->UnlockPin2(pin2, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, PASSWORD_ERR);
    ASSERT_EQ(response.remain, REMAIN_1);
    retValue = g_proxy.GetHandler()->UnlockPin2(pin2, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, PASSWORD_ERR);
    ASSERT_EQ(response.remain, REMAIN_0);
    retValue = g_proxy.GetHandler()->UnlockPin2(pin2, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin2_0700
 * @tc.name     Loop to call UnlockPin2 interface for 1000 times and get the retValueurn value,
 *              and count the number of failures.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin2_0700, Reliability | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    std::string defaultPin2 = "1234";

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the PIN2 to 1234
    g_proxy.MockPin2CodeSet(defaultPin2);

    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool retValue = g_proxy.GetHandler()->UnlockPin2(Str8ToStr16(defaultPin2), response, SLOTID_0);
        ASSERT_TRUE(retValue);
        ASSERT_EQ(response.result, UNLOCKED);
    }
}

/**
 * @tc.number   Telephony_Sim_UnlockPin2_0800
 * @tc.name     Test the UnlockPin2 interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin2_0800, Performance | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    TimeCountHelper timeHelper;
    std::string defaultPin2 = "1234";

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the PIN2 to 1234
    g_proxy.MockPin2CodeSet(defaultPin2);

    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->UnlockPin2(Str8ToStr16(defaultPin2), response, SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    ASSERT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk2_0100
 * @tc.name     Test the UnlockPuk2 interface and enter normal parameters.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk2_0100, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("1234");
    std::u16string puk2 = Str8ToStr16("12345678");
    std::string defaultPin2 = "1234";
    std::string defaultPuk2 = "12345678";

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the PIN2 to 1234
    g_proxy.MockPin2CodeSet(defaultPin2);
    // Use the analog vendor library to set the PUK2 to 12345678
    g_proxy.MockPuk2CodeSet(defaultPuk2);

    bool retValue = g_proxy.GetHandler()->UnlockPuk2(pin2, puk2, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk2_0200
 * @tc.name     The puk parameter of the UnlockPuk2 interface is a string of 3 characters.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk2_0200, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("1234");
    std::u16string puk2 = Str8ToStr16("123");
    std::string defaultPin2 = "1234";
    std::string defaultPuk2 = "12345678";

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the PIN2 to 1234
    g_proxy.MockPin2CodeSet(defaultPin2);
    // Use the analog vendor library to set the PUK2 to 12345678
    g_proxy.MockPuk2CodeSet(defaultPuk2);

    bool retValue = g_proxy.GetHandler()->UnlockPuk2(pin2, puk2, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk2_0300
 * @tc.name     The puk parameter of the UnlockPuk2 interface is a string of 9 characters.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk2_0300, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("1234");
    std::u16string puk2 = Str8ToStr16("123456789");
    std::string defaultPin2 = "1234";
    std::string defaultPuk2 = "12345678";

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the PIN2 to 1234
    g_proxy.MockPin2CodeSet(defaultPin2);
    // Use the analog vendor library to set the PUK2 to 12345678
    g_proxy.MockPuk2CodeSet(defaultPuk2);

    bool retValue = g_proxy.GetHandler()->UnlockPuk2(pin2, puk2, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk2_0400
 * @tc.name     Test UnlockPuk2 interface and input error PUK2 code.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk2_0400, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("1234");
    std::u16string puk2 = Str8ToStr16("87654321");
    std::string defaultPin2 = "1234";
    std::string defaultPuk2 = "12345678";

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the PIN2 to 1234
    g_proxy.MockPin2CodeSet(defaultPin2);
    // Use the analog vendor library to set the PUK2 to 12345678
    g_proxy.MockPuk2CodeSet(defaultPuk2);

    bool retValue = g_proxy.GetHandler()->UnlockPuk2(pin2, puk2, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, PASSWORD_ERR);
    ASSERT_EQ(response.remain, REMAIN_9);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk2_0500
 * @tc.name     Test the UnlockPuk2 interface and enter the abnormal slotId parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk2_0500, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("1234");
    std::u16string puk2 = Str8ToStr16("12345678");
    std::string defaultPin2 = "1234";
    std::string defaultPuk2 = "12345678";

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the PIN2 to 1234
    g_proxy.MockPin2CodeSet(defaultPin2);
    // Use the analog vendor library to set the PUK2 to 12345678
    g_proxy.MockPuk2CodeSet(defaultPuk2);

    bool retValue = g_proxy.GetHandler()->UnlockPuk2(pin2, puk2, response, SLOTID_4);
    ASSERT_FALSE(retValue);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk2_0600
 * @tc.name     Testing the UnlockPuk2 interface and entering incorrect Pin parameters.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk2_0600, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("123456789");
    std::u16string puk2 = Str8ToStr16("12345678");
    std::string defaultPin2 = "1234";
    std::string defaultPuk2 = "12345678";

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the PIN2 to 1234
    g_proxy.MockPin2CodeSet(defaultPin2);
    // Use the analog vendor library to set the PUK2 to 12345678
    g_proxy.MockPuk2CodeSet(defaultPuk2);

    bool retValue = g_proxy.GetHandler()->UnlockPuk2(pin2, puk2, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk2_0700
 * @tc.name     Test the UnlockPuk2 interface with puk2 code input error, call 11 times trigger lock.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk2_0700, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("1234");
    std::u16string puk2 = Str8ToStr16("87654321");
    std::string defaultPin2 = "1234";
    std::string defaultPuk2 = "12345678";
    int32_t callTimes = 11;

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the PIN2 to 1234
    g_proxy.MockPin2CodeSet(defaultPin2);
    // Use the analog vendor library to set the PUK2 to 12345678
    g_proxy.MockPuk2CodeSet(defaultPuk2);

    bool retValue = false;
    for (int32_t loopNumber = 0; loopNumber < callTimes; loopNumber++) {
        retValue = g_proxy.GetHandler()->UnlockPuk2(pin2, puk2, response, SLOTID_0);
    }
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk2_0800
 * @tc.name     Test the UnlockPuk2 interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk2_0800, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("1234");
    std::u16string puk2 = Str8ToStr16("12345678");
    std::string defaultPin2 = "1234";
    std::string defaultPuk2 = "12345678";

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the PIN2 to 1234
    g_proxy.MockPin2CodeSet(defaultPin2);
    // Use the analog vendor library to set the PUK2 to 12345678
    g_proxy.MockPuk2CodeSet(defaultPuk2);

    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->UnlockPuk2(pin2, puk2, response, SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    ASSERT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk2_0900
 * @tc.name     Loop to call UnlockPuk2 interface for 1000 times and get the retValueurn value,
 *              and count the number of failures.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk2_0900, Reliability | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("1234");
    std::u16string puk2 = Str8ToStr16("12345678");
    std::string defaultPin2 = "1234";
    std::string defaultPuk2 = "12345678";

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the PIN2 to 1234
    g_proxy.MockPin2CodeSet(defaultPin2);
    // Use the analog vendor library to set the PUK2 to 12345678
    g_proxy.MockPuk2CodeSet(defaultPuk2);

    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool retValue = g_proxy.GetHandler()->UnlockPuk2(pin2, puk2, response, SLOTID_0);
        ASSERT_TRUE(retValue);
        ASSERT_EQ(response.result, UNLOCKED);
    }
}

/**
 * @tc.number   Telephony_Sim_AlterPin2_0100
 * @tc.name     Test the AlterPin2 interface and enter the correct oldPin2.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin2_0100, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin2 = Str8ToStr16("1234");
    std::u16string newPin2 = Str8ToStr16("1234");
    std::string defaultPin2 = "1234";

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the PIN2 to 1234
    g_proxy.MockPin2CodeSet(defaultPin2);

    bool retValue = g_proxy.GetHandler()->AlterPin2(newPin2, oldPin2, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_AlterPin2_0200
 * @tc.name     Test AlterPin2 interface newpin for a value of length 3.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin2_0200, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin2 = Str8ToStr16("123");
    std::u16string newPin2 = Str8ToStr16("1234");
    std::string defaultPin2 = "1234";

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the PIN2 to 1234
    g_proxy.MockPin2CodeSet(defaultPin2);

    bool retValue = g_proxy.GetHandler()->AlterPin2(newPin2, oldPin2, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_AlterPin2_0300
 * @tc.name     Test AlterPin2 interface newpin as a value of length 9.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin2_0300, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin2 = Str8ToStr16("123456789");
    std::u16string newPin2 = Str8ToStr16("1234");
    std::string defaultPin2 = "1234";

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the PIN2 to 1234
    g_proxy.MockPin2CodeSet(defaultPin2);

    bool retValue = g_proxy.GetHandler()->AlterPin2(newPin2, oldPin2, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_AlterPin2_0400
 * @tc.name     Test the AlterPin2 interface and enter the abnormal oldPin parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin2_0400, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin2 = Str8ToStr16("1234");
    std::u16string newPin2 = Str8ToStr16("123456789");
    std::string defaultPin2 = "1234";

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the PIN2 to 1234
    g_proxy.MockPin2CodeSet(defaultPin2);

    bool retValue = g_proxy.GetHandler()->AlterPin2(newPin2, oldPin2, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_AlterPin2_0500
 * @tc.name     Test AlterPin2 interface and enter wrong oldPin parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin2_0500, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin2 = Str8ToStr16("1234");
    std::u16string newPin2 = Str8ToStr16("4321");
    std::string defaultPin2 = "1234";

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the PIN2 to 1234
    g_proxy.MockPin2CodeSet(defaultPin2);

    bool retValue = g_proxy.GetHandler()->AlterPin2(newPin2, oldPin2, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, PASSWORD_ERR);
    ASSERT_EQ(response.remain, REMAIN_2);
}

/**
 * @tc.number   Telephony_Sim_AlterPin2_0600
 * @tc.name     Test the AlterPin2 interface and enter the abnormal slotId parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin2_0600, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin2 = Str8ToStr16("1234");
    std::u16string newPin2 = Str8ToStr16("1234");
    std::string defaultPin2 = "1234";

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the PIN2 to 1234
    g_proxy.MockPin2CodeSet(defaultPin2);

    bool retValue = g_proxy.GetHandler()->AlterPin2(newPin2, oldPin2, response, SLOTID_4);
    ASSERT_FALSE(retValue);
}

/**
 * @tc.number   Telephony_Sim_AlterPin2_0700
 * @tc.name     The test invokes the AlterPin2 interface 4 times and the wrong oldPin is entered
 *              to trigger the PUK2 lock.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin2_0700, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin2 = Str8ToStr16("1234");
    std::u16string newPin2 = Str8ToStr16("4321");
    std::string defaultPin2 = "1234";

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the PIN2 to 1234
    g_proxy.MockPin2CodeSet(defaultPin2);

    bool retValue = g_proxy.GetHandler()->AlterPin2(newPin2, oldPin2, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, PASSWORD_ERR);
    ASSERT_EQ(response.remain, REMAIN_2);
}

/**
 * @tc.number   Telephony_Sim_AlterPin2_0800
 * @tc.name     Test the UnlockPuk2 interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin2_0800, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin2 = Str8ToStr16("1234");
    std::u16string newPin2 = Str8ToStr16("1234");
    std::string defaultPin2 = "1234";

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the PIN2 to 1234
    g_proxy.MockPin2CodeSet(defaultPin2);

    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->AlterPin2(newPin2, oldPin2, response, SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    ASSERT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_AlterPin2_0900
 * @tc.name     Loop to call UnlockPuk2 interface for 1000 times and get the retValueurn value,
 *              and count the number of failures.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin2_0900, Reliability | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin2 = Str8ToStr16("1234");
    std::u16string newPin2 = Str8ToStr16("1234");
    std::string defaultPin2 = "1234";

    g_mockVender.MockVendorSet(DISPATCHID::SIM_INIT, NULL, DATA_LENGTH);
    // Use the analog vendor library to set the PIN2 to 1234
    g_proxy.MockPin2CodeSet(defaultPin2);

    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool retValue = g_proxy.GetHandler()->AlterPin2(newPin2, oldPin2, response, SLOTID_0);
        ASSERT_TRUE(retValue);
        ASSERT_EQ(response.result, UNLOCKED);
    }
}