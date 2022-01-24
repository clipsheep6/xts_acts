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
#include <cstring>
#include "log.h"
#include "time_count_helper.h"
#include "sim_test.h"
#include "sim_pin_mock_test.h"

using namespace testing::ext;
using namespace OHOS;
const int32_t SimTest::DATA_LENGTH = 0;
const int32_t SimTest::OTHER_ABNORMAL = -2;
const int32_t SimTest::PASSWORD_ERR = -1;
const int32_t SimTest::UNLOCKED = 0;
const int32_t SimTest::VAILD_SLOT_ID = EFFECTIVE_SLOT_ID;
const int32_t SimTest::OPEN = 1;
const int32_t SimTest::CLOSE = 0;
const int32_t SimTest::REMAIN_0 = 0;
const int32_t SimTest::REMAIN_1 = 1;
const int32_t SimTest::REMAIN_2 = 2;
const int32_t SimTest::REMAIN_9 = 9;

/**
 * @tc.number   Telephony_Sim_GetSimState_0500
 * @tc.name     Test calling the GetSimState interface when the card state is SIM_STATE_UNKNOWN.
 * @tc.desc     Function test
 */
HWTEST_F(SimStateMockTest, Telephony_Sim_GetSimState_0500, Function | MediumTest | Level3)
{
    // Use the analog vendor library to set the card status to SIM_STATE_UNKNOWN
    g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_UNKNOWN);
    int32_t result = g_proxy.GetHandler()->GetSimState(SimTest::VAILD_SLOT_ID);
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::SimState::SIM_STATE_UNKNOWN);
}

/**
 * @tc.number   Telephony_Sim_GetSimState_0600
 * @tc.name     Test calling the GetSimState interface when the card state is SIM_STATE_NOT_PRESENT.
 * @tc.desc     Function test
 */
HWTEST_F(SimStateMockTest, Telephony_Sim_GetSimState_0600, Function | MediumTest | Level3)
{
    // Use the analog vendor library to set the card status to SIM_STATE_NOT_PRESENT
    g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_NOT_PRESENT);
    int32_t result = g_proxy.GetHandler()->GetSimState(SimTest::VAILD_SLOT_ID);
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::SimState::SIM_STATE_NOT_PRESENT);
}

/**
 * @tc.number   Telephony_Sim_GetSimState_0700
 * @tc.name     Test calling the GetSimState interface when the card state is SIM_STATE_LOCKED.
 * @tc.desc     Function test
 */
HWTEST_F(SimStateMockTest, Telephony_Sim_GetSimState_0700, Function | MediumTest | Level3)
{
    // Use the analog vendor library to set the card status to SIM_STATE_LOCKED
    g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_LOCKED);
    int32_t result = g_proxy.GetHandler()->GetSimState(SimTest::VAILD_SLOT_ID);
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::SimState::SIM_STATE_LOCKED);
}

/**
 * @tc.number   Telephony_Sim_GetSimState_0800
 * @tc.name     Test calling the GetSimState interface when the card state is SIM_STATE_LOCKED.
 * @tc.desc     Function test
 */
HWTEST_F(SimStateMockTest, Telephony_Sim_GetSimState_0800, Function | MediumTest | Level3)
{
    // Use the analog vendor library to set the card status to SIM_STATE_LOCKED
    g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_LOCKED);
    int32_t result = g_proxy.GetHandler()->GetSimState(SimTest::VAILD_SLOT_ID);
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::SimState::SIM_STATE_LOCKED);
}

/**
 * @tc.number   Telephony_Sim_HasSimCard_0500
 * @tc.name     Test calling the HasSimCard interface when the card state is SIM_STATE_NOT_PRESENT.
 * @tc.desc     Function test
 */
HWTEST_F(SimStateMockTest, Telephony_Sim_HasSimCard_0500, Function | MediumTest | Level3)
{
    // Use the analog vendor library to set the card status to SIM_STATE_NOT_PRESENT
    g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_NOT_PRESENT);
    bool result = g_proxy.GetHandler()->HasSimCard(SimTest::VAILD_SLOT_ID);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin_0200
 * @tc.name     The test calls the UnlockPin interface when an incorrect PIN code
 *              and a normal SIM card ID parameter are entered.
 * @tc.desc     Function test
 */
HWTEST_F(SimPinLockMockTest, Telephony_Sim_UnlockPin_0200, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("11111111");
    std::string defaultPin = "1234";

    // Use the analog vendor library to set the card status to SIM_STATE_LOCKED
    g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_pinMock->MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->UnlockPin(SimTest::VAILD_SLOT_ID, pin, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::PASSWORD_ERR);
    ASSERT_EQ(response.remain, SimTest::REMAIN_2);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin_0300
 * @tc.name     The test calls the UnlockPin interface when the abnormal PIN code
 *              and normal SIM card ID parameters are entered.
 * @tc.desc     Function test
 */
HWTEST_F(SimPinLockMockTest, Telephony_Sim_UnlockPin_0300, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("123");
    std::string defaultPin = "1234";

    // Use the analog vendor library to set the card status to SIM_STATE_LOCKED
    g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_pinMock->MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->UnlockPin(SimTest::VAILD_SLOT_ID, pin, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin_0400
 * @tc.name     The test calls the UnlockPin interface when the correct PIN code
 *              and normal SIM card ID parameters are entered.
 * @tc.desc     Function test
 */
HWTEST_F(SimPinLockMockTest, Telephony_Sim_UnlockPin_0400, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1234");
    std::string defaultPin = "1234";

    // Use the analog vendor library to set the card status to SIM_STATE_LOCKED
    g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_pinMock->MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->UnlockPin(SimTest::VAILD_SLOT_ID, pin, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::UNLOCKED);
    ASSERT_EQ(response.remain, SimTest::REMAIN_0);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin_0500
 * @tc.name     The test calls the UnlockPin interface when the abnormal PIN code
 *              and normal SIM card ID parameters are entered.
 * @tc.desc     Function test
 */
HWTEST_F(SimPinLockMockTest, Telephony_Sim_UnlockPin_0500, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("AT+CPIN=\"1234\"");
    std::string defaultPin = "1234";

    // Use the analog vendor library to set the card status to SIM_STATE_LOCKED
    g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_pinMock->MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->UnlockPin(SimTest::VAILD_SLOT_ID, pin, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin_0600
 * @tc.name     Test input PIN code error more than the number of times,trigger PUK lock.
 * @tc.desc     Function test
 */
HWTEST_F(SimPinLockMockTest, Telephony_Sim_UnlockPin_0600, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1111");
    std::string defaultPin = "1234";
    std::string defaultPuk = "12345678";

    // Use the analog vendor library to set the card status to SIM_STATE_LOCKED
    g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_pinMock->MockPinCodeSet(defaultPin);
    // Use the analog vendor library to set the PUK to 12345678
    g_pinMock->MockPukCodeSet(defaultPuk);

    bool retValue = g_proxy.GetHandler()->UnlockPin(SimTest::VAILD_SLOT_ID, pin, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::PASSWORD_ERR);
    ASSERT_EQ(response.remain, SimTest::REMAIN_2);
    retValue = g_proxy.GetHandler()->UnlockPin(SimTest::VAILD_SLOT_ID, pin, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::PASSWORD_ERR);
    ASSERT_EQ(response.remain, SimTest::REMAIN_1);
    retValue = g_proxy.GetHandler()->UnlockPin(SimTest::VAILD_SLOT_ID, pin, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::PASSWORD_ERR);
    ASSERT_EQ(response.remain, SimTest::REMAIN_0);
    retValue = g_proxy.GetHandler()->UnlockPin(SimTest::VAILD_SLOT_ID, pin, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin_0700
 * @tc.name     When PUK is locked, the test calls the UnlockPin interface.
 * @tc.desc     Function test
 */
HWTEST_F(SimPinLockMockTest, Telephony_Sim_UnlockPin_0700, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1234");
    std::string defaultPin = "1234";

    // Use the analog vendor library to set the card status to SIM_STATE_LOCKED
    g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_pinMock->MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->UnlockPin(SimTest::VAILD_SLOT_ID, pin, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk_0100
 * @tc.name     Enter the correct PIN code, PUK code and SIM card ID parameters to test the UnlockPUK interface.
 * @tc.desc     Function test
 */
HWTEST_F(SimPinLockMockTest, Telephony_Sim_UnlockPuk_0100, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1234");
    std::u16string puk = Str8ToStr16("12345678");
    std::string defaultPin = "1234";
    std::string defaultPuk = "12345678";

    // Use the analog vendor library to set the card status to SIM_STATE_LOCKED
    g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_pinMock->MockPinCodeSet(defaultPin);
    // Use the analog vendor library to set the PUK to 12345678
    g_pinMock->MockPukCodeSet(defaultPuk);

    bool retValue = g_proxy.GetHandler()->UnlockPuk(SimTest::VAILD_SLOT_ID, pin, puk, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::UNLOCKED);
    ASSERT_EQ(response.remain, SimTest::REMAIN_0);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk_0200
 * @tc.name     Test the UnlockPUK interface by entering the correct PIN code,
 *              the wrong PUK code,and the SIM card ID parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimPinLockMockTest, Telephony_Sim_UnlockPuk_0200, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1234");
    std::u16string puk = Str8ToStr16("@qQ1");
    std::string defaultPin = "1234";
    std::string defaultPuk = "12345678";

    // Use the analog vendor library to set the card status to SIM_STATE_LOCKED
    g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_pinMock->MockPinCodeSet(defaultPin);
    // Use the analog vendor library to set the PUK to 12345678
    g_pinMock->MockPukCodeSet(defaultPuk);

    bool retValue = g_proxy.GetHandler()->UnlockPuk(SimTest::VAILD_SLOT_ID, pin, puk, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk_0300
 * @tc.name     Test the UnlockPUK interface by entering the wrong PIN code,
 *              correct PUK code and correct SIM card ID parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimPinLockMockTest, Telephony_Sim_UnlockPuk_0300, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("@qQ1");
    std::u16string puk = Str8ToStr16("12345678");
    std::string defaultPin = "1234";
    std::string defaultPuk = "12345678";

    // Use the analog vendor library to set the card status to SIM_STATE_LOCKED
    g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_pinMock->MockPinCodeSet(defaultPin);
    // Use the analog vendor library to set the PUK to 12345678
    g_pinMock->MockPukCodeSet(defaultPuk);

    bool retValue = g_proxy.GetHandler()->UnlockPuk(SimTest::VAILD_SLOT_ID, pin, puk, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk_0400
 * @tc.name     Test the UnlockPUK interface by entering the wrong PIN code,
 *              wrong PUK code and correct SIM card ID parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimPinLockMockTest, Telephony_Sim_UnlockPuk_0400, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1234");
    std::u16string puk = Str8ToStr16("99999999");
    std::string defaultPin = "1234";
    std::string defaultPuk = "12345678";

    // Use the analog vendor library to set the card status to SIM_STATE_LOCKED
    g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_pinMock->MockPinCodeSet(defaultPin);
    // Use the analog vendor library to set the PUK to 12345678
    g_pinMock->MockPukCodeSet(defaultPuk);

    bool retValue = g_proxy.GetHandler()->UnlockPuk(SimTest::VAILD_SLOT_ID, pin, puk, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::PASSWORD_ERR);
    ASSERT_EQ(response.remain, SimTest::REMAIN_9);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk_0500
 * @tc.name     Test the UnlockPuk interface when entering a PUK parameter of length 3.
 * @tc.desc     Function test
 */
HWTEST_F(SimPinLockMockTest, Telephony_Sim_UnlockPuk_0500, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1234");
    std::u16string puk = Str8ToStr16("123");
    std::string defaultPin = "1234";
    std::string defaultPuk = "12345678";

    // Use the analog vendor library to set the card status to SIM_STATE_LOCKED
    g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_pinMock->MockPinCodeSet(defaultPin);
    // Use the analog vendor library to set the PUK to 12345678
    g_pinMock->MockPukCodeSet(defaultPuk);

    bool retValue = g_proxy.GetHandler()->UnlockPuk(SimTest::VAILD_SLOT_ID, pin, puk, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk_0600
 * @tc.name     Test the UnlockPuk interface when entering a PUK parameter of length greater than 9.
 * @tc.desc     Function test
 */
HWTEST_F(SimPinLockMockTest, Telephony_Sim_UnlockPuk_0600, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1234");
    std::u16string puk = Str8ToStr16("AT+CPIN=\"1234\"");
    std::string defaultPin = "1234";
    std::string defaultPuk = "12345678";

    // Use the analog vendor library to set the card status to SIM_STATE_LOCKED
    g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_pinMock->MockPinCodeSet(defaultPin);
    // Use the analog vendor library to set the PUK to 12345678
    g_pinMock->MockPukCodeSet(defaultPuk);

    bool retValue = g_proxy.GetHandler()->UnlockPuk(SimTest::VAILD_SLOT_ID, pin, puk, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk_0700
 * @tc.name     Test when incorrect PUK code parameters are entered to call the unlockPUK interface,
 *              failing more than 10 times resulting in the SIM card being disabled.
 * @tc.desc     Function test
 */
HWTEST_F(SimPinLockMockTest, Telephony_Sim_UnlockPuk_0700, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    int32_t callTimes = 10;
    bool retValue = false;
    std::u16string pin = Str8ToStr16("1234");
    std::u16string puk = Str8ToStr16("99999999");
    std::string defaultPin = "1234";
    std::string defaultPuk = "12345678";

    // Use the analog vendor library to set the card status to SIM_STATE_LOCKED
    g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_pinMock->MockPinCodeSet(defaultPin);
    // Use the analog vendor library to set the PUK to 12345678
    g_pinMock->MockPukCodeSet(defaultPuk);

    for (int32_t timeNumber = 0; timeNumber < callTimes; timeNumber++) {
        retValue = g_proxy.GetHandler()->UnlockPuk(SimTest::VAILD_SLOT_ID, pin, puk, response);
    }
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::PASSWORD_ERR);
    ASSERT_EQ(response.remain, SimTest::REMAIN_0);
}

/**
 * @tc.number   Telephony_Sim_AlterPin_0100
 * @tc.name     Test that the alterPin interface is called when the correct oldPin code is entered,
 *              the wrong pin code is entered and the correct SIM card ID parameter is entered.
 * @tc.desc     Function test
 */
HWTEST_F(SimPinLockMockTest, Telephony_Sim_AlterPin_0100, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin = Str8ToStr16("1234");
    std::u16string newPin = Str8ToStr16("@qQ1");
    std::string defaultPin = "1234";

    // Use the analog vendor library to set the card status to SIM_STATE_READY
    g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_READY);
    // Use the analog vendor library to set the PIN to 1234
    g_pinMock->MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->AlterPin(SimTest::VAILD_SLOT_ID, newPin, oldPin, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_AlterPin_0200
 * @tc.name     Test the alterPin interface when inputing the wrong OLDPIN code,
 *              the normal pin code and the normal SIM card ID parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimPinLockMockTest, Telephony_Sim_AlterPin_0200, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin = Str8ToStr16("99999999");
    std::u16string newPin = Str8ToStr16("4321");
    std::string defaultPin = "1234";

    // Use the analog vendor library to set the card status to SIM_STATE_READY
    g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_READY);
    // Use the analog vendor library to set the PIN to 1234
    g_pinMock->MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->AlterPin(SimTest::VAILD_SLOT_ID, newPin, oldPin, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::PASSWORD_ERR);
    ASSERT_EQ(response.remain, SimTest::REMAIN_2);
}

/**
 * @tc.number   Telephony_Sim_AlterPin_0300
 * @tc.name     The test calls the AlterPin interface when entering the correct oldPin code,
 *              normal pin code and abnormal SIM card ID parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimPinLockMockTest, Telephony_Sim_AlterPin_0300, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin = Str8ToStr16("1234");
    std::u16string newPin = Str8ToStr16("4321");
    std::string defaultPin = "1234";

    // Use the analog vendor library to set the card status to SIM_STATE_READY
    g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_READY);
    // Use the analog vendor library to set the PIN to 1234
    g_pinMock->MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->AlterPin(SimTest::VAILD_SLOT_ID, newPin, oldPin, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::UNLOCKED);
    ASSERT_EQ(response.remain, SimTest::REMAIN_0);
}

/**
 * @tc.number   Telephony_Sim_AlterPin_0400
 * @tc.name     The test calls the AlterPin interface when entering the correct oldPin code,
 *              normal pin code and abnormal SIM card ID parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimPinLockMockTest, Telephony_Sim_AlterPin_0400, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin = Str8ToStr16("9999");
    std::u16string newPin = Str8ToStr16("1234");
    std::string defaultPin = "1234";

    // Use the analog vendor library to set the card status to SIM_STATE_READY
    g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_READY);
    // Use the analog vendor library to set the PIN to 1234
    g_pinMock->MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->AlterPin(SimTest::VAILD_SLOT_ID, newPin, oldPin, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::PASSWORD_ERR);
    ASSERT_EQ(response.remain, SimTest::REMAIN_2);
}

/**
 * @tc.number   Telephony_Sim_AlterPin_0500
 * @tc.name     Test that the AlterPin interface is called when an oldPin parameter of string length 3 is entered.
 * @tc.desc     Function test
 */
HWTEST_F(SimPinLockMockTest, Telephony_Sim_AlterPin_0500, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin = Str8ToStr16("123");
    std::u16string newPin = Str8ToStr16("4321");
    std::string defaultPin = "1234";

    // Use the analog vendor library to set the card status to SIM_STATE_READY
    g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_READY);
    // Use the analog vendor library to set the PIN to 1234
    g_pinMock->MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->AlterPin(SimTest::VAILD_SLOT_ID, newPin, oldPin, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_AlterPin_0600
 * @tc.name     Test that the AlterPin interface is called when an pin parameter of string length 3 is entered.
 * @tc.desc     Function test
 */
HWTEST_F(SimPinLockMockTest, Telephony_Sim_AlterPin_0600, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin = Str8ToStr16("1234");
    std::u16string newPin = Str8ToStr16("@qQ");
    std::string defaultPin = "1234";

    // Use the analog vendor library to set the card status to SIM_STATE_READY
    g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_READY);
    // Use the analog vendor library to set the PIN to 1234
    g_pinMock->MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->AlterPin(SimTest::VAILD_SLOT_ID, newPin, oldPin, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_AlterPin_0700
 * @tc.name     Test that the alterPin interface is called when oldPin and pin
 *              are entered with a string length of 9.
 * @tc.desc     Function test
 */
HWTEST_F(SimPinLockMockTest, Telephony_Sim_AlterPin_0700, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin = Str8ToStr16("oldPin=AT+CPIN=\"1234\"");
    std::u16string newPin = Str8ToStr16("pin=AT+CPIN=\"1234\"");
    std::string defaultPin = "1234";

    // Use the analog vendor library to set the card status to SIM_STATE_READY
    g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_READY);
    // Use the analog vendor library to set the PIN to 1234
    g_pinMock->MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->AlterPin(SimTest::VAILD_SLOT_ID, newPin, oldPin, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_AlterPin_0800
 * @tc.name     Test the AlterPin interface when the card state is SIM_STATE_LOCKED.
 * @tc.desc     Function test
 */
HWTEST_F(SimPinLockMockTest, Telephony_Sim_AlterPin_0800, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin = Str8ToStr16("1234");
    std::u16string newPin = Str8ToStr16("4321");
    std::string defaultPin = "1234";

    // Use the analog vendor library to set the card status to SIM_STATE_LOCKED
    g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_pinMock->MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->AlterPin(SimTest::VAILD_SLOT_ID, newPin, oldPin, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_AlterPin_0900
 * @tc.name     Test the AlterPin interface when the card state is SIM_STATE_LOCKED.
 * @tc.desc     Function test
 */
HWTEST_F(SimPinLockMockTest, Telephony_Sim_AlterPin_0900, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin = Str8ToStr16("1234");
    std::u16string newPin = Str8ToStr16("4321");
    std::string defaultPin = "1234";

    // Use the analog vendor library to set the card status to SIM_STATE_LOCKED
    g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_LOCKED);
    // Use the analog vendor library to set the PIN to 1234
    g_pinMock->MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->AlterPin(SimTest::VAILD_SLOT_ID, newPin, oldPin, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_AlterPin_1000
 * @tc.name     The test AlterPin interface PIN code error exceeds the number of times, and the PUK lock is triggered.
 * @tc.desc     Function test
 */
HWTEST_F(SimPinLockMockTest, Telephony_Sim_AlterPin_1000, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin = Str8ToStr16("1111");
    std::u16string newPin = Str8ToStr16("1234");
    std::string defaultPin = "1234";

    // Use the analog vendor library to set the card status to SIM_STATE_READY
    g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_READY);
    // Use the analog vendor library to set the PIN to 1234
    g_pinMock->MockPinCodeSet(defaultPin);

    bool retValue = g_proxy.GetHandler()->AlterPin(SimTest::VAILD_SLOT_ID, newPin, oldPin, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::PASSWORD_ERR);
    ASSERT_EQ(response.remain, SimTest::REMAIN_2);
    retValue = g_proxy.GetHandler()->AlterPin(SimTest::VAILD_SLOT_ID, newPin, oldPin, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::PASSWORD_ERR);
    ASSERT_EQ(response.remain, SimTest::REMAIN_1);
    retValue = g_proxy.GetHandler()->AlterPin(SimTest::VAILD_SLOT_ID, newPin, oldPin, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::PASSWORD_ERR);
    ASSERT_EQ(response.remain, SimTest::REMAIN_0);
    retValue = g_proxy.GetHandler()->AlterPin(SimTest::VAILD_SLOT_ID, newPin, oldPin, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::OTHER_ABNORMAL);
}
