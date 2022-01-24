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
#include "sim_lock_type_test.h"

using namespace testing::ext;
using namespace OHOS;
const int32_t SimTest::SLOT_ID_2 = 2;
const int32_t SimTest::SLOT_ID_3 = 3;
const int32_t SimTest::VAILD_SLOT_ID = EFFECTIVE_SLOT_ID;
const int32_t SimTest::SLOTID_MINUS = -1;
const int32_t SimTest::UNLOCKED = 0;
const int32_t SimTest::PASSWORD_ERR = -1;
const int32_t SimTest::OTHER_ABNORMAL = -2;
const int32_t SimTest::REMAIN_2 = 2;
const int32_t SimTest::REMAIN_9 = 9;
const std::u16string SimTest::WRONG_PASSWORD = OHOS::Str8ToStr16("2021");
;

/**
 * @tc.number   Telephony_Sim_UnlockSimLock_0100
 * @tc.name     Test the UnlockSimLock interface. Enter the correct password to unlock the pin lock.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_UnlockSimLock_0100, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::PersoLockInfo lockInfos = {
        OHOS::Telephony::PersoLockType::PN_PIN_LOCK,
        OHOS::Str8ToStr16(PN_PIN_LOCK_PASSWORD),
    };
    bool results = g_proxy.GetHandler()->UnlockSimLock(SimTest::VAILD_SLOT_ID, lockInfos, response);
    ASSERT_TRUE(results);
    ASSERT_EQ(response.result, SimTest::UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_UnlockSimLock_0200
 * @tc.name     The UnlockSimLock interface enters an incorrect password to unlock the network PIN lock.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_UnlockSimLock_0200, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::PersoLockInfo lockInfos = {
        OHOS::Telephony::PersoLockType::PN_PIN_LOCK,
        SimTest::WRONG_PASSWORD,
    };
    bool results = g_proxy.GetHandler()->UnlockSimLock(SimTest::VAILD_SLOT_ID, lockInfos, response);
    ASSERT_TRUE(results);
    ASSERT_EQ(response.result, SimTest::PASSWORD_ERR);
    ASSERT_EQ(response.remain, SimTest::REMAIN_2);
}

/**
 * @tc.number   Telephony_Sim_UnlockSimLock_0300
 * @tc.name     Test the UnlockSimLock interface. Enter the correct password to unlock the PUK lock.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_UnlockSimLock_0300, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::PersoLockInfo lockInfos = {
        OHOS::Telephony::PersoLockType::PN_PUK_LOCK,
        OHOS::Str8ToStr16(PN_PUK_LOCK_PASSWORD),
    };
    bool results = g_proxy.GetHandler()->UnlockSimLock(SimTest::VAILD_SLOT_ID, lockInfos, response);
    ASSERT_TRUE(results);
    ASSERT_EQ(response.result, SimTest::UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_UnlockSimLock_0400
 * @tc.name     The UnlockSimLock interface enters an incorrect password to unlock the puK lock.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_UnlockSimLock_0400, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::PersoLockInfo lockInfos = {
        OHOS::Telephony::PersoLockType::PN_PUK_LOCK,
        SimTest::WRONG_PASSWORD,
    };
    bool results = g_proxy.GetHandler()->UnlockSimLock(SimTest::VAILD_SLOT_ID, lockInfos, response);
    ASSERT_TRUE(results);
    ASSERT_EQ(response.result, SimTest::PASSWORD_ERR);
    ASSERT_EQ(response.remain, SimTest::REMAIN_9);
}

/**
 * @tc.number   Telephony_Sim_UnlockSimLock_0500
 * @tc.name     Test the UnlockSimLock interface. Enter the correct password to unlock the subnet PIN lock.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_UnlockSimLock_0500, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::PersoLockInfo lockInfos = {
        OHOS::Telephony::PersoLockType::PU_PIN_LOCK,
        OHOS::Str8ToStr16(PU_PIN_LOCK_PASSWORD),
    };
    bool results = g_proxy.GetHandler()->UnlockSimLock(SimTest::VAILD_SLOT_ID, lockInfos, response);
    ASSERT_TRUE(results);
    ASSERT_EQ(response.result, SimTest::UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_UnlockSimLock_0600
 * @tc.name     The UnlockSimLock interface enters an incorrect password to unlock the subnet PIN lock.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_UnlockSimLock_0600, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::PersoLockInfo lockInfos = {
        OHOS::Telephony::PersoLockType::PU_PIN_LOCK,
        SimTest::WRONG_PASSWORD,
    };
    bool results = g_proxy.GetHandler()->UnlockSimLock(SimTest::VAILD_SLOT_ID, lockInfos, response);
    ASSERT_TRUE(results);
    ASSERT_EQ(response.result, SimTest::PASSWORD_ERR);
    ASSERT_EQ(response.remain, SimTest::REMAIN_2);
}

/**
 * @tc.number   Telephony_Sim_UnlockSimLock_0700
 * @tc.name     Test The UnlockSimLock interface. Enter the correct password to unlock the subnet PUK lock.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_UnlockSimLock_0700, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::PersoLockInfo lockInfos = {
        OHOS::Telephony::PersoLockType::PU_PUK_LOCK,
        OHOS::Str8ToStr16(PU_PUK_LOCK_PASSWORD),
    };
    bool results = g_proxy.GetHandler()->UnlockSimLock(SimTest::VAILD_SLOT_ID, lockInfos, response);
    ASSERT_TRUE(results);
    ASSERT_EQ(response.result, SimTest::UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_UnlockSimLock_0800
 * @tc.name     The UnlockSimLock interface enters an incorrect password to unlock the PUK lock of the subnet.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_UnlockSimLock_0800, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::PersoLockInfo lockInfos = {
        OHOS::Telephony::PersoLockType::PU_PUK_LOCK,
        SimTest::WRONG_PASSWORD,
    };
    bool results = g_proxy.GetHandler()->UnlockSimLock(SimTest::VAILD_SLOT_ID, lockInfos, response);
    ASSERT_TRUE(results);
    ASSERT_EQ(response.result, SimTest::PASSWORD_ERR);
    ASSERT_EQ(response.remain, SimTest::REMAIN_9);
}

/**
 * @tc.number   Telephony_Sim_UnlockSimLock_0900
 * @tc.name     Test the UnlockSimLock interface. Enter the correct password to unlock the PIN lock.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_UnlockSimLock_0900, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::PersoLockInfo lockInfos = {
        OHOS::Telephony::PersoLockType::PP_PIN_LOCK,
        OHOS::Str8ToStr16(PP_PIN_LOCK_PASSWORD),
    };
    bool results = g_proxy.GetHandler()->UnlockSimLock(SimTest::VAILD_SLOT_ID, lockInfos, response);
    ASSERT_TRUE(results);
    ASSERT_EQ(response.result, SimTest::UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_UnlockSimLock_1000
 * @tc.name     The UnlockSimLock interface enters an incorrect password to unlock the PIN lock.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_UnlockSimLock_1000, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::PersoLockInfo lockInfos = {
        OHOS::Telephony::PersoLockType::PP_PIN_LOCK,
        SimTest::WRONG_PASSWORD,
    };
    bool results = g_proxy.GetHandler()->UnlockSimLock(SimTest::VAILD_SLOT_ID, lockInfos, response);
    ASSERT_TRUE(results);
    ASSERT_EQ(response.result, SimTest::PASSWORD_ERR);
    ASSERT_EQ(response.remain, SimTest::REMAIN_2);
}

/**
 * @tc.number   Telephony_Sim_UnlockSimLock_1100
 * @tc.name     Test the UnlockSimLock interface. Enter the correct password to unlock the PUK lock.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_UnlockSimLock_1100, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::PersoLockInfo lockInfos = {
        OHOS::Telephony::PersoLockType::PP_PUK_LOCK,
        OHOS::Str8ToStr16(PP_PUK_LOCK_PASSWORD),
    };
    bool results = g_proxy.GetHandler()->UnlockSimLock(SimTest::VAILD_SLOT_ID, lockInfos, response);
    ASSERT_TRUE(results);
    ASSERT_EQ(response.result, SimTest::UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_UnlockSimLock_1200
 * @tc.name     The UnlockSimLock interface enters an incorrect password to unlock the PUK lock.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_UnlockSimLock_1200, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::PersoLockInfo lockInfos = {
        OHOS::Telephony::PersoLockType::PP_PUK_LOCK,
        SimTest::WRONG_PASSWORD,
    };
    bool results = g_proxy.GetHandler()->UnlockSimLock(SimTest::VAILD_SLOT_ID, lockInfos, response);
    ASSERT_TRUE(results);
    ASSERT_EQ(response.result, SimTest::PASSWORD_ERR);
    ASSERT_EQ(response.remain, SimTest::REMAIN_9);
}

/**
 * @tc.number   Telephony_Sim_UnlockSimLock_1300
 * @tc.name     Test the UnlockSimLock interface. Enter the correct password to unlock the organization PIN lock.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_UnlockSimLock_1300, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::PersoLockInfo lockInfos = {
        OHOS::Telephony::PersoLockType::PC_PIN_LOCK,
        OHOS::Str8ToStr16(PC_PIN_LOCK_PASSWORD),
    };
    bool results = g_proxy.GetHandler()->UnlockSimLock(SimTest::VAILD_SLOT_ID, lockInfos, response);
    ASSERT_TRUE(results);
    ASSERT_EQ(response.result, SimTest::UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_UnlockSimLock_1400
 * @tc.name     The UnlockSimLock interface enters an incorrect password to unlock the organization PIN lock.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_UnlockSimLock_1400, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::PersoLockInfo lockInfos = {
        OHOS::Telephony::PersoLockType::PC_PIN_LOCK,
        SimTest::WRONG_PASSWORD,
    };
    bool results = g_proxy.GetHandler()->UnlockSimLock(SimTest::VAILD_SLOT_ID, lockInfos, response);
    ASSERT_TRUE(results);
    ASSERT_EQ(response.result, SimTest::PASSWORD_ERR);
    ASSERT_EQ(response.remain, SimTest::REMAIN_2);
}

/**
 * @tc.number   Telephony_Sim_UnlockSimLock_1500
 * @tc.name     Test the UnlockSimLock interface. Enter the correct password to unlock the PUK lock.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_UnlockSimLock_1500, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::PersoLockInfo lockInfos = {
        OHOS::Telephony::PersoLockType::PC_PUK_LOCK,
        OHOS::Str8ToStr16(PC_PUK_LOCK_PASSWORD),
    };
    bool results = g_proxy.GetHandler()->UnlockSimLock(SimTest::VAILD_SLOT_ID, lockInfos, response);
    ASSERT_TRUE(results);
    ASSERT_EQ(response.result, SimTest::UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_UnlockSimLock_1600
 * @tc.name     The UnlockSimLock interface enters an incorrect password to unlock the organization PUK lock.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_UnlockSimLock_1600, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::PersoLockInfo lockInfos = {
        OHOS::Telephony::PersoLockType::PC_PUK_LOCK,
        SimTest::WRONG_PASSWORD,
    };
    bool results = g_proxy.GetHandler()->UnlockSimLock(SimTest::VAILD_SLOT_ID, lockInfos, response);
    ASSERT_TRUE(results);
    ASSERT_EQ(response.result, SimTest::PASSWORD_ERR);
    ASSERT_EQ(response.remain, SimTest::REMAIN_9);
}

/**
 * @tc.number   Telephony_Sim_UnlockSimLock_1700
 * @tc.name     Test the UnlockSimLock interface. Enter the correct password to unlock the SIM PIN lock.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_UnlockSimLock_1700, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::PersoLockInfo lockInfos = {
        OHOS::Telephony::PersoLockType::SIM_PIN_LOCK,
        OHOS::Str8ToStr16(SIM_PIN_LOCK_PASSWORD),
    };
    bool results = g_proxy.GetHandler()->UnlockSimLock(SimTest::VAILD_SLOT_ID, lockInfos, response);
    ASSERT_TRUE(results);
    ASSERT_EQ(response.result, SimTest::UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_UnlockSimLock_1800
 * @tc.name     The UnlockSimLock interface enters an incorrect password to unlock the SIM PIN lock.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_UnlockSimLock_1800, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::PersoLockInfo lockInfos = {
        OHOS::Telephony::PersoLockType::SIM_PIN_LOCK,
        SimTest::WRONG_PASSWORD,
    };
    bool results = g_proxy.GetHandler()->UnlockSimLock(SimTest::VAILD_SLOT_ID, lockInfos, response);
    ASSERT_TRUE(results);
    ASSERT_EQ(response.result, SimTest::PASSWORD_ERR);
    ASSERT_EQ(response.remain, SimTest::REMAIN_2);
}

/**
 * @tc.number   Telephony_Sim_UnlockSimLock_1900
 * @tc.name     Test the UnlockSimLock interface. Enter the correct password to unlock the PUK lock.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_UnlockSimLock_1900, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::PersoLockInfo lockInfos = {
        OHOS::Telephony::PersoLockType::SIM_PUK_LOCK,
        OHOS::Str8ToStr16(SIM_PUK_LOCK_PASSWORD),
    };
    bool results = g_proxy.GetHandler()->UnlockSimLock(SimTest::VAILD_SLOT_ID, lockInfos, response);
    ASSERT_TRUE(results);
    ASSERT_EQ(response.result, SimTest::UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_UnlockSimLock_2000
 * @tc.name     The UnlockSimLock interface enters an incorrect password to unlock the SIM PUK lock.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_UnlockSimLock_2000, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::PersoLockInfo lockInfos = {
        OHOS::Telephony::PersoLockType::SIM_PUK_LOCK,
        SimTest::WRONG_PASSWORD,
    };
    bool results = g_proxy.GetHandler()->UnlockSimLock(SimTest::VAILD_SLOT_ID, lockInfos, response);
    ASSERT_TRUE(results);
    ASSERT_EQ(response.result, SimTest::PASSWORD_ERR);
    ASSERT_EQ(response.remain, SimTest::REMAIN_9);
}

/**
 * @tc.number   Telephony_Sim_UnlockSimLock_2100
 * @tc.name     To test the UnlockSimLock interface, enter the 3-digit abnormal password to unlock the SIM PUK lock.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_UnlockSimLock_2100, Function | MediumTest | Level1)
{
    std::string abnormalPassword = "123";
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::PersoLockInfo lockInfos = {
        OHOS::Telephony::PersoLockType::SIM_PUK_LOCK,
        OHOS::Str8ToStr16(abnormalPassword),
    };
    bool results = g_proxy.GetHandler()->UnlockSimLock(SimTest::VAILD_SLOT_ID, lockInfos, response);
    ASSERT_TRUE(results);
    ASSERT_EQ(response.result, SimTest::OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_UnlockSimLock_2200
 * @tc.name     Test the UnlockSimLock interface. Enter the 9-digit abnormal password to unlock the SIM PUK lock.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_UnlockSimLock_2200, Function | MediumTest | Level1)
{
    std::string abnormalPassword = "123@#_ Aq";
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::PersoLockInfo lockInfos = {
        OHOS::Telephony::PersoLockType::SIM_PUK_LOCK,
        OHOS::Str8ToStr16(abnormalPassword),
    };
    bool results = g_proxy.GetHandler()->UnlockSimLock(SimTest::VAILD_SLOT_ID, lockInfos, response);
    ASSERT_TRUE(results);
    ASSERT_EQ(response.result, SimTest::OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_UnlockSimLock_2300
 * @tc.name     The UnlockSimLock interface failed to unlock the network PIN lock too many times.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_UnlockSimLock_2300, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::PersoLockInfo lockInfos = {
        OHOS::Telephony::PersoLockType::PN_PIN_LOCK,
        SimTest::WRONG_PASSWORD,
    };
    bool results = false;
    for (int32_t callTimes = 0; callTimes < 4; callTimes++) {
        results = g_proxy.GetHandler()->UnlockSimLock(SimTest::VAILD_SLOT_ID, lockInfos, response);
    }
    ASSERT_TRUE(results);
    ASSERT_EQ(response.result, SimTest::OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_UnlockSimLock_2400
 * @tc.name     Tests the UnlockSimLock interface with the slotId input parameter -1.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_UnlockSimLock_2400, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::PersoLockInfo lockInfos = {
        OHOS::Telephony::PersoLockType::PN_PIN_LOCK,
        OHOS::Str8ToStr16(PN_PIN_LOCK_PASSWORD),
    };
    bool results = g_proxy.GetHandler()->UnlockSimLock(SimTest::SLOTID_MINUS, lockInfos, response);
    ASSERT_FALSE(results);
}

/**
 * @tc.number   Telephony_Sim_UnlockSimLock_2500
 * @tc.name     Tests the UnlockSimLock interface with the slotId input parameter 1.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_UnlockSimLock_2500, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::PersoLockInfo lockInfos = {
        OHOS::Telephony::PersoLockType::PN_PIN_LOCK,
        OHOS::Str8ToStr16(PN_PIN_LOCK_PASSWORD),
    };
    bool results = g_proxy.GetHandler()->UnlockSimLock(SimTest::SLOT_ID_3, lockInfos, response);
    ASSERT_FALSE(results);
}

/**
 * @tc.number   Telephony_Sim_UnlockSimLock_2600
 * @tc.name     Tests the UnlockSimLock interface with the slotId input parameter 2.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_UnlockSimLock_2600, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::PersoLockInfo lockInfos = {
        OHOS::Telephony::PersoLockType::PN_PIN_LOCK,
        OHOS::Str8ToStr16(PN_PIN_LOCK_PASSWORD),
    };
    bool results = g_proxy.GetHandler()->UnlockSimLock(SimTest::SLOT_ID_2, lockInfos, response);
    ASSERT_FALSE(results);
}

/**
 * @tc.number   Telephony_Sim_HasOperatorPrivileges_0100
 * @tc.name     Test the HasOperatorPrivileges interface and the slotId entry parameter 0.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_HasOperatorPrivileges_0100, Function | MediumTest | Level1)
{
    bool results = g_proxy.GetHandler()->HasOperatorPrivileges(SimTest::VAILD_SLOT_ID);
    ASSERT_TRUE(results);
}

/**
 * @tc.number   Telephony_Sim_HasOperatorPrivileges_0200
 * @tc.name     Test the HasOperatorPrivileges interface and the slotId entry parameter -1.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_HasOperatorPrivileges_0200, Function | MediumTest | Level1)
{
    bool results = g_proxy.GetHandler()->HasOperatorPrivileges(SimTest::SLOTID_MINUS);
    ASSERT_FALSE(results);
}

/**
 * @tc.number   Telephony_Sim_HasOperatorPrivileges_0300
 * @tc.name     Test the HasOperatorPrivileges interface and the slotId entry parameter 1.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_HasOperatorPrivileges_0300, Function | MediumTest | Level1)
{
    bool results = g_proxy.GetHandler()->HasOperatorPrivileges(SimTest::SLOT_ID_3);
    ASSERT_FALSE(results);
}

/**
 * @tc.number   Telephony_Sim_HasOperatorPrivileges_0400
 * @tc.name     Test the HasOperatorPrivileges interface and the slotId entry parameter 1.
 * @tc.desc     Function test
 */
HWTEST_F(SimLockTypeTest, Telephony_Sim_HasOperatorPrivileges_0400, Function | MediumTest | Level1)
{
    bool results = g_proxy.GetHandler()->HasOperatorPrivileges(SimTest::SLOT_ID_2);
    ASSERT_FALSE(results);
}
