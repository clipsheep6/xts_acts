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

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;

const int32_t SimTest::VAILD_SLOT_ID = EFFECTIVE_SLOT_ID;
const int32_t SimTest::INVALID_VALUE = -1;
const int32_t SimTest::LOOP_NUMBER = 1000;
const unsigned int SimTest::ICCID_LENGTH = 20;
const unsigned int SimTest::IMSI_LENGTH = 15;
const unsigned int SimTest::OPERATOR_NUM_LENGTH = 5;
const std::string SimTest::MOBILE_CODE_1 = "46000";
const std::string SimTest::MOBILE_CODE_2 = "46002";
const std::string SimTest::MOBILE_CODE_3 = "46004";
const std::string SimTest::MOBILE_CODE_4 = "46007";
const std::string SimTest::UNICOM_CODE_1 = "46001";
const std::string SimTest::UNICOM_CODE_2 = "46006";
const std::string SimTest::UNICOM_CODE_3 = "46009";
const std::string SimTest::CHINANET_CODE_1 = "46003";
const std::string SimTest::CHINANET_CODE_2 = "46005";
const std::string SimTest::CHINANET_CODE_3 = "46011";
const std::string SimTest::MOBILE_SPN = "CMCC";
const std::string SimTest::UNICOM_SPN = "";
const std::string SimTest::CHINANET_SPN = "中国电信";
const unsigned int SimTest::MIN_LENGTH = 1;
const int32_t SimTest::OTHER_ABNORMAL = -2;

/**
 * @tc.number   Telephony_Sim_GetSimState_0400
 * @tc.name     The test executed the GetSimState interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimState_0400, Reliability | MediumTest | Level3)
{
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        int32_t result = g_proxy.GetHandler()->GetSimState(VAILD_SLOT_ID);
        ASSERT_EQ(result, (int32_t)OHOS::Telephony::SimState::SIM_STATE_READY);
    }
}

/**
 * @tc.number   Telephony_Sim_HasSimCard_0400
 * @tc.name     The test executed the HasSimCard interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_HasSimCard_0400, Reliability | MediumTest | Level3)
{
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool result = g_proxy.GetHandler()->HasSimCard(VAILD_SLOT_ID);
        ASSERT_TRUE(result);
    }
}

/**
 * @tc.number   Telephony_Sim_GetSimIccId_0300
 * @tc.name     The test executed the GetSimIccId interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimIccId_0400, Reliability | MediumTest | Level3)
{
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        std::u16string result = g_proxy.GetHandler()->GetSimIccId(VAILD_SLOT_ID);
        const char *temp = nullptr;
        temp = Str16ToStr8(result).c_str();
        std::string iccId = Str16ToStr8(result);
        ASSERT_STRNE(temp, "");
        // ICCID is a fixed string of 20 characters.
        ASSERT_EQ(iccId.length(), ICCID_LENGTH);
    }
}

/**
 * @tc.number   Telephony_Sim_GetIMSI_0400
 * @tc.name     The test executed the GetIMSI interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetIMSI_0400, Reliability | MediumTest | Level3)
{
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        std::u16string result = g_proxy.GetHandler()->GetIMSI(VAILD_SLOT_ID);
        const char *temp = nullptr;
        temp = Str16ToStr8(result).c_str();
        std::string imsi = Str16ToStr8(result);
        ASSERT_STRNE(temp, "");
        // IMSI is a fixed string of 15 characters.
        ASSERT_EQ(imsi.length(), IMSI_LENGTH);
    }
}

/**
 * @tc.number   Telephony_Sim_GetSimOperatorNumeric_0400
 * @tc.name     The test executed the GetSimOperatorNumeric interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimOperatorNumeric_0400, Reliability | MediumTest | Level3)
{
    std::string operatorNumTopThree = "460";
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        std::u16string result = g_proxy.GetHandler()->GetSimOperatorNumeric(VAILD_SLOT_ID);
        const char *temp = nullptr;
        temp = Str16ToStr8(result).c_str();
        std::string num = Str16ToStr8(result);
        ASSERT_STRNE(temp, "");
        // The length of operator numeric in mainland China is 5.
        ASSERT_EQ(num.length(), OPERATOR_NUM_LENGTH);
        // The first three operator numeric in mainland China is "460".
        ASSERT_STREQ(num.substr(0, 3).c_str(), operatorNumTopThree.c_str());
    }
}

/**
 * @tc.number   Telephony_Sim_GetISOCountryCodeForSim_0400
 * @tc.name     The test executed the GetISOCountryCodeForSim interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetISOCountryCodeForSim_0400, Reliability | MediumTest | Level3)
{
    std::string countryCode = "cn";
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        std::u16string result = g_proxy.GetHandler()->GetISOCountryCodeForSim(VAILD_SLOT_ID);
        const char *temp = nullptr;
        temp = Str16ToStr8(result).c_str();
        // The country code for mainland China is cn.
        ASSERT_STREQ(temp, countryCode.c_str());
    }
}

/**
 * @tc.number   Telephony_Sim_GetSimSpn_0400
 * @tc.name     The test executed the GetSimSpn interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimSpn_0400, Reliability | MediumTest | Level3)
{
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        std::u16string result = g_proxy.GetHandler()->GetSimSpn(VAILD_SLOT_ID);
        std::string value = Str16ToStr8(g_proxy.GetHandler()->GetSimOperatorNumeric(VAILD_SLOT_ID));
        if ((value == MOBILE_CODE_1) || (value == MOBILE_CODE_2) || (value == MOBILE_CODE_3) ||
            (value == MOBILE_CODE_4)) {
            ASSERT_STREQ(Str16ToStr8(result).c_str(), MOBILE_SPN.c_str());
        } else if ((value == UNICOM_CODE_1) || (value == UNICOM_CODE_2) || (value == UNICOM_CODE_3)) {
            ASSERT_STREQ(Str16ToStr8(result).c_str(), UNICOM_SPN.c_str());
        } else if ((value == CHINANET_CODE_1) || (value == CHINANET_CODE_2) || (value == CHINANET_CODE_3)) {
            ASSERT_STREQ(Str16ToStr8(result).c_str(), CHINANET_SPN.c_str());
        } else {
            LOG("Get Sim Operator Numeric Is %s.", value.c_str());
        }
    }
}

/**
 * @tc.number   Telephony_Sim_GetSimGid1_0400
 * @tc.name     The test executed the GetSimGid1 interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimGid1_0400, Reliability | MediumTest | Level3)
{
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        std::u16string result = g_proxy.GetHandler()->GetSimGid1(VAILD_SLOT_ID);
        std::string value = Str16ToStr8(result);
        ASSERT_STRNE(value.c_str(), "");
        ASSERT_TRUE((value.length() >= MIN_LENGTH));
    }
}

/**
 * @tc.number   Telephony_Sim_GetDefaultVoiceSlotId_0400
 * @tc.name     Loop to call GetDefaultVoiceLotid interface for 1000 times and get the return value,
 *              and count the number of failures.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetDefaultVoiceSlotId_0400, Reliability | MediumTest | Level3)
{
    int32_t defaultValue = g_proxy.GetHandler()->GetDefaultVoiceSlotId();
    bool ret = g_proxy.GetHandler()->SetDefaultVoiceSlotId(VAILD_SLOT_ID);
    ASSERT_TRUE(ret);
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        int32_t result = g_proxy.GetHandler()->GetDefaultVoiceSlotId();
        ASSERT_EQ(result, VAILD_SLOT_ID);
    }
    ret = g_proxy.GetHandler()->SetDefaultVoiceSlotId(defaultValue);
    ASSERT_TRUE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetDefaultVoiceSlotId_0300
 * @tc.name     Loop to call SetDefaultVoiceSlotId interface for 1000 times and get the return value,
 *              and count the number of failures.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_SetDefaultVoiceSlotId_0300, Reliability | MediumTest | Level3)
{
    int32_t defaultValue = g_proxy.GetHandler()->GetDefaultVoiceSlotId();
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool result = g_proxy.GetHandler()->SetDefaultVoiceSlotId(VAILD_SLOT_ID);
        ASSERT_TRUE(result);
    }
    int32_t value = g_proxy.GetHandler()->GetDefaultVoiceSlotId();
    ASSERT_EQ(value, VAILD_SLOT_ID);
    bool ret = g_proxy.GetHandler()->SetDefaultVoiceSlotId(defaultValue);
    ASSERT_TRUE(ret);
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
    std::u16string defaultPin = Str8ToStr16("1234");

    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool retValue = g_proxy.GetHandler()->UnlockPin(VAILD_SLOT_ID, defaultPin, response);
        ASSERT_TRUE(retValue);
        ASSERT_EQ(response.result, OTHER_ABNORMAL);
    }
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

    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool retValue = g_proxy.GetHandler()->UnlockPuk(VAILD_SLOT_ID, pin, puk, response);
        ASSERT_TRUE(retValue);
        ASSERT_EQ(response.result, OTHER_ABNORMAL);
    }
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

    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool retValue = g_proxy.GetHandler()->AlterPin(VAILD_SLOT_ID, newPin, oldPin, response);
        ASSERT_TRUE(retValue);
        ASSERT_EQ(response.result, OTHER_ABNORMAL);
    }
}
