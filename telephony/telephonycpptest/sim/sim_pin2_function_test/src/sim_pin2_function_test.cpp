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

using namespace testing::ext;
using namespace OHOS;
const int32_t SimTest::OTHER_ABNORMAL = -2;
const int32_t SimTest::PASSWORD_ERR = -1;
const int32_t SimTest::UNLOCKED = 0;
const int32_t SimTest::SLOTID_2 = 2;
const int32_t SimTest::SLOTID_1 = 1;
const int32_t SimTest::SLOTID_0 = 0;
const int32_t SimTest::SLOTID_MINUS = -1;
const int32_t SimTest::CLOSE = 0;
const int32_t SimTest::OPEN = 1;
const int32_t SimTest::PARAMETERS_ERR = -1;
const std::u16string SimTest::WRONG_PIN2 = Str8ToStr16("202110");

/**************************************************Phase four*****************************************************/
/**
 * @tc.number   Telephony_Sim_UnlockPin2_0100
 * @tc.name     Test the slotId of UnlockPin2 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin2_0100, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string truePin2 = Str8ToStr16(CORRECT_PIN2);

    bool retValue = g_proxy.GetHandler()->UnlockPin2(SLOTID_0, truePin2, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin2_0200
 * @tc.name     Test UnlockPin2 The interface PIN is a string of 3 characters.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin2_0200, Function | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("123");

    bool retValue = g_proxy.GetHandler()->UnlockPin2(SLOTID_0, pin2, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin2_0300
 * @tc.name     Test UnlockPin2 The interface PIN is a string of 9 characters.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin2_0300, Function | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("123@#ABCD");

    bool retValue = g_proxy.GetHandler()->UnlockPin2(SLOTID_0, pin2, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin2_0400
 * @tc.name     Test the UnlockPin2 interface error pin2 code entry and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin2_0400, Function | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("0400");
    std::u16string truePin2 = Str8ToStr16(CORRECT_PIN2);

    bool retValue = g_proxy.GetHandler()->UnlockPin2(SLOTID_0, pin2, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, PASSWORD_ERR);
    ASSERT_EQ(response.remain, REMAIN_2);

    // Input the correct pin2 code to restore the normal status of pin2.
    int32_t resetResult = g_proxy.RestoreNormalPin2Status(truePin2);
    ASSERT_EQ(resetResult, UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin2_0500
 * @tc.name     Test the slotid exception input parameter of the UnlockPin2 interface and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin2_0500, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("1234");

    bool retValue = g_proxy.GetHandler()->UnlockPin2(SLOTID_MINUS, pin2, response);
    ASSERT_FALSE(retValue);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin2_0600
 * @tc.name     Test UnlockPin2 interface input error pin2 too many codes trigger PUK2 lock, check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin2_0600, Function | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("0400");
    std::u16string truePin2 = Str8ToStr16(CORRECT_PIN2);
    std::u16string truePuk2 = Str8ToStr16(CORRECT_PUK2);

    bool retValue = g_proxy.GetHandler()->UnlockPin2(SLOTID_0, pin2, response);
    ASSERT_EQ(response.result, PASSWORD_ERR);
    ASSERT_EQ(response.remain, REMAIN_2);
    retValue = g_proxy.GetHandler()->UnlockPin2(SLOTID_0, pin2, response);
    ASSERT_EQ(response.result, PASSWORD_ERR);
    ASSERT_EQ(response.remain, REMAIN_1);
    retValue = g_proxy.GetHandler()->UnlockPin2(SLOTID_0, pin2, response);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);

    // Input the correct puk2 code to restore the normal status of puk2.
    int32_t resetResult = g_proxy.RestoreNormalPuk2Status(truePin2, truePuk2);
    ASSERT_EQ(resetResult, UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin2_0900
 * @tc.name     Test slotid exception input parameter 1 of UnlockPin2 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin2_0900, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("1234");

    bool retValue = g_proxy.GetHandler()->UnlockPin2(SLOTID_1, pin2, response);
    ASSERT_FALSE(retValue);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin2_1000
 * @tc.name     Test slotid exception input parameter 2 of UnlockPin2 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin2_1000, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("1234");

    bool retValue = g_proxy.GetHandler()->UnlockPin2(SLOTID_2, pin2, response);
    ASSERT_FALSE(retValue);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk2_0100
 * @tc.name     Test whether slotId of UnlockPuk2 is unlocked with input parameters.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk2_0100, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string truePin2 = Str8ToStr16(CORRECT_PIN2);
    std::u16string truePuk2 = Str8ToStr16(CORRECT_PUK2);

    // Trigger puk2 lock.
    g_proxy.TriggerPuk2Lock(WRONG_PIN2);

    bool retValue = g_proxy.GetHandler()->UnlockPuk2(SLOTID_0, truePin2, truePuk2, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk2_0200
 * @tc.name     Test UnlockPuk2 interface puk for an exception string of length 3 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk2_0200, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("1234");
    std::u16string puk2 = Str8ToStr16("123");
    std::u16string truePin2 = Str8ToStr16(CORRECT_PIN2);
    std::u16string truePuk2 = Str8ToStr16(CORRECT_PUK2);

    // Trigger puk2 lock.
    g_proxy.TriggerPuk2Lock(WRONG_PIN2);

    bool retValue = g_proxy.GetHandler()->UnlockPuk2(SLOTID_0, pin2, puk2, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);

    // Input the correct puk2 code to restore the normal status of puk2.
    int32_t resetResult = g_proxy.RestoreNormalPuk2Status(truePin2, truePuk2);
    ASSERT_EQ(resetResult, UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk2_0300
 * @tc.name     Test UnlockPuk2 interface puk for an exception string of length 9 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk2_0300, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("1234");
    std::u16string puk2 = Str8ToStr16("123@#ABCD");
    std::u16string truePin2 = Str8ToStr16(CORRECT_PIN2);
    std::u16string truePuk2 = Str8ToStr16(CORRECT_PUK2);

    // Trigger puk2 lock.
    g_proxy.TriggerPuk2Lock(WRONG_PIN2);

    bool retValue = g_proxy.GetHandler()->UnlockPuk2(SLOTID_0, pin2, puk2, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);

    // Input the correct puk2 code to restore the normal status of puk2.
    int32_t resetResult = g_proxy.RestoreNormalPuk2Status(truePin2, truePuk2);
    ASSERT_EQ(resetResult, UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk2_0400
 * @tc.name     Test the UnlockPuk2 interface error puk2 code entry parameter and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk2_0400, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string puk2 = Str8ToStr16("0400");
    std::u16string truePin2 = Str8ToStr16(CORRECT_PIN2);
    std::u16string truePuk2 = Str8ToStr16(CORRECT_PUK2);

    // Trigger puk2 lock.
    g_proxy.TriggerPuk2Lock(WRONG_PIN2);

    bool retValue = g_proxy.GetHandler()->UnlockPuk2(SLOTID_0, truePin2, puk2, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, PASSWORD_ERR);
    ASSERT_EQ(response.remain, REMAIN_9);

    // Input the correct puk2 code to restore the normal status of puk2.
    int32_t resetResult = g_proxy.RestoreNormalPuk2Status(truePin2, truePuk2);
    ASSERT_EQ(resetResult, UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk2_0500
 * @tc.name     Test the slotId exception input parameter of the UnlockPuk2 interface and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk2_0500, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("1234");
    std::u16string puk2 = Str8ToStr16("12345678");
    std::u16string truePin2 = Str8ToStr16(CORRECT_PIN2);
    std::u16string truePuk2 = Str8ToStr16(CORRECT_PUK2);

    // Trigger puk2 lock.
    g_proxy.TriggerPuk2Lock(WRONG_PIN2);

    bool retValue = g_proxy.GetHandler()->UnlockPuk2(SLOTID_MINUS, pin2, puk2, response);
    ASSERT_FALSE(retValue);

    // Input the correct puk2 code to restore the normal status of puk2.
    int32_t resetResult = g_proxy.RestoreNormalPuk2Status(truePin2, truePuk2);
    ASSERT_EQ(resetResult, UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk2_0600
 * @tc.name     Test the UnlockPuk2 interface exception newPin entry parameter and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk2_0600, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("123@#ABCD");
    std::u16string truePin2 = Str8ToStr16(CORRECT_PIN2);
    std::u16string truePuk2 = Str8ToStr16(CORRECT_PUK2);

    // Trigger puk2 lock.
    g_proxy.TriggerPuk2Lock(WRONG_PIN2);

    bool retValue = g_proxy.GetHandler()->UnlockPuk2(SLOTID_0, pin2, truePuk2, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);

    // Input the correct puk2 code to restore the normal status of puk2.
    int32_t resetResult = g_proxy.RestoreNormalPuk2Status(truePin2, truePuk2);
    ASSERT_EQ(resetResult, UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk2_1000
 * @tc.name     Test calls the UnlockPuk2 interface when no PUK2 lock is triggered to check the return value.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk2_1000, Reliability | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("1234");
    std::u16string puk2 = Str8ToStr16("12345678");

    bool retValue = g_proxy.GetHandler()->UnlockPuk2(SLOTID_0, pin2, puk2, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk2_1100
 * @tc.name     Test slotId exception input parameter 1 of the UnlockPuk2 interface and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk2_1100, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("1234");
    std::u16string puk2 = Str8ToStr16("12345678");

    bool retValue = g_proxy.GetHandler()->UnlockPuk2(SLOTID_1, pin2, puk2, response);
    ASSERT_FALSE(retValue);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk2_1200
 * @tc.name     Test slotId exception input parameter 2 of the UnlockPuk2 interface and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk2_1200, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("1234");
    std::u16string puk2 = Str8ToStr16("12345678");

    bool retValue = g_proxy.GetHandler()->UnlockPuk2(SLOTID_2, pin2, puk2, response);
    ASSERT_FALSE(retValue);
}

/**
 * @tc.number   Telephony_Sim_AlterPin2_0100
 * @tc.name     Test that the AlterPin2 interface is successfully modified and check the returned value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin2_0100, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin2 = Str8ToStr16(CORRECT_PIN2);
    std::u16string newPin2 = Str8ToStr16(CORRECT_PIN2);

    bool retValue = g_proxy.GetHandler()->AlterPin2(SLOTID_0, newPin2, oldPin2, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_AlterPin2_0200
 * @tc.name     Test AlterPin2 interface newpin for an exception value of length 3 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin2_0200, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin2 = Str8ToStr16(CORRECT_PIN2);
    std::u16string newPin2 = Str8ToStr16("123");

    bool retValue = g_proxy.GetHandler()->AlterPin2(SLOTID_0, newPin2, oldPin2, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_AlterPin2_0300
 * @tc.name     Test AlterPin2 interface newpin for an exception value of length 9 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin2_0300, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin2 = Str8ToStr16(CORRECT_PIN2);
    std::u16string newPin2 = Str8ToStr16("123@#ABCD");

    bool retValue = g_proxy.GetHandler()->AlterPin2(SLOTID_0, newPin2, oldPin2, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_AlterPin2_0400
 * @tc.name    Test AlterPin2 interface exception oldPin entry parameter, check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin2_0400, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin2 = Str8ToStr16("123@#ABCD");
    std::u16string newPin2 = Str8ToStr16(CORRECT_PIN2);

    bool retValue = g_proxy.GetHandler()->AlterPin2(SLOTID_0, newPin2, oldPin2, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_AlterPin2_0500
 * @tc.name     Test the AlterPin2 interface error oldPin entry parameter and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin2_0500, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin2 = Str8ToStr16("0500");
    std::u16string newPin2 = Str8ToStr16("0501");
    std::u16string truePin2 = Str8ToStr16(CORRECT_PIN2);

    bool retValue = g_proxy.GetHandler()->AlterPin2(SLOTID_0, newPin2, oldPin2, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, PASSWORD_ERR);
    ASSERT_EQ(response.remain, REMAIN_2);

    // Input the correct pin2 code to restore the normal status of pin2.
    int32_t resetResult = g_proxy.RestoreNormalPin2Status(truePin2);
    ASSERT_EQ(resetResult, UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_AlterPin2_0600
 * @tc.name     Test the slotId input parameter of AlterPin2 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin2_0600, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin2 = Str8ToStr16("1234");
    std::u16string newPin2 = Str8ToStr16("1234");

    bool retValue = g_proxy.GetHandler()->AlterPin2(SLOTID_MINUS, newPin2, oldPin2, response);
    ASSERT_FALSE(retValue);
}

/**
 * @tc.number   Telephony_Sim_AlterPin2_0700
 * @tc.name     Test AlterPin2 interface input error oldPin too many trigger PUK2 lock, check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin2_0700, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin2 = Str8ToStr16("0500");
    std::u16string newPin2 = Str8ToStr16("0501");
    std::u16string truePin2 = Str8ToStr16(CORRECT_PIN2);
    std::u16string truePuk2 = Str8ToStr16(CORRECT_PUK2);

    bool retValue = g_proxy.GetHandler()->AlterPin2(SLOTID_0, newPin2, oldPin2, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, PASSWORD_ERR);
    ASSERT_EQ(response.remain, REMAIN_2);
    retValue = g_proxy.GetHandler()->AlterPin2(SLOTID_0, newPin2, oldPin2, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, PASSWORD_ERR);
    ASSERT_EQ(response.remain, REMAIN_1);
    retValue = g_proxy.GetHandler()->AlterPin2(SLOTID_0, newPin2, oldPin2, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);

    // Input the correct puk2 code to restore the normal status of puk2.
    int32_t resetResult = g_proxy.RestoreNormalPuk2Status(truePin2, truePuk2);
    ASSERT_EQ(resetResult, UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_AlterPin2_1000
 * @tc.name     Test the slotId input parameter 1 of AlterPin2 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin2_1000, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin2 = Str8ToStr16("1234");
    std::u16string newPin2 = Str8ToStr16("1234");

    bool retValue = g_proxy.GetHandler()->AlterPin2(SLOTID_1, newPin2, oldPin2, response);
    ASSERT_FALSE(retValue);
}

/**
 * @tc.number   Telephony_Sim_AlterPin2_1100
 * @tc.name     Test the slotId input parameter 2 of AlterPin2 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin2_1100, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin2 = Str8ToStr16("1234");
    std::u16string newPin2 = Str8ToStr16("1234");

    bool retValue = g_proxy.GetHandler()->AlterPin2(SLOTID_2, newPin2, oldPin2, response);
    ASSERT_FALSE(retValue);
}
