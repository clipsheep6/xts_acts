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
#include "sim_state_type.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;

const int32_t SimTest::LOOP_NUMBER = 1000;
const int32_t SimTest::SLOTID_0 = 0;
const int32_t SimTest::SLOTID_1 = 1;
const int32_t SimTest::SLOTID_MINUS = -1;
const unsigned int SimTest::ICCID_LENGTH = 20;
const unsigned int SimTest::IMSI_LENGTH = 15;
const unsigned int SimTest::OPERATOR_NUM_LENGTH = 5;
const std::string SimTest::MOBILE_CODE_1 = "46000";
const std::string SimTest::MOBILE_CODE_2 = "46002";
const std::string SimTest::MOBILE_CODE_3 = "46004";
const std::string SimTest::MOBILE_CODE_4 = "46007";
const std::string SimTest::UNICOM_CODE_1 = "46004";
const std::string SimTest::UNICOM_CODE_2 = "46006";
const std::string SimTest::UNICOM_CODE_3 = "46009";
const std::string SimTest::TELECOM_CODE_1 = "46003";
const std::string SimTest::TELECOM_CODE_2 = "46005";
const std::string SimTest::TELECOM_CODE_3 = "46011";
const std::string SimTest::MOBILE_SPN = "00434D4343FFFFFFFFFFFFFFFFFFFFFFFF";
const std::string SimTest::UNICOM_SPN = "00FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF";
const std::string SimTest::TELECOM_SPN = "01804E2D56FD75354FE1FFFFFFFFFFFFFF";
const unsigned int SimTest::MIN_LENGTH = 1;
const int32_t SimTest::OTHER_ABNORMAL = -2;
const int32_t SimTest::OPEN = 1;
const int32_t SimTest::CLOSE = 0;
const unsigned int SimTest::PHONE_NUMBER_LENGTH = 11;

/**********************************************Phase one to three*************************************************/
/**
 * @tc.number   Telephony_Sim_GetSimState_0400
 * @tc.name     The test executed the GetSimState interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimState_0400, Reliability | MediumTest | Level3)
{
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        int32_t result = g_proxy.GetHandler()->GetSimState(SLOTID_0);
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
        bool result = g_proxy.GetHandler()->HasSimCard(SLOTID_0);
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
        std::u16string result = g_proxy.GetHandler()->GetSimIccId(SLOTID_0);
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
        std::u16string result = g_proxy.GetHandler()->GetIMSI(SLOTID_0);
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
        std::u16string result = g_proxy.GetHandler()->GetSimOperatorNumeric(SLOTID_0);
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
        std::u16string result = g_proxy.GetHandler()->GetISOCountryCodeForSim(SLOTID_0);
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
        std::u16string result = g_proxy.GetHandler()->GetSimSpn(SLOTID_0);
        std::string value = Str16ToStr8(result);
        ASSERT_STRNE(value.c_str(), "");
        if ((value == MOBILE_CODE_1) || (value == MOBILE_CODE_2) ||(value == MOBILE_CODE_3) ||
            (value == MOBILE_CODE_4)) {
            ASSERT_STREQ(value.c_str(), MOBILE_SPN.c_str());
        } else if ((value == UNICOM_CODE_1) || (value == UNICOM_CODE_2) || (value == UNICOM_CODE_3)) {
            ASSERT_STREQ(value.c_str(), UNICOM_SPN.c_str());
        } else if ((value == TELECOM_CODE_1) || (value == TELECOM_CODE_2) || (value == TELECOM_CODE_3)){
            ASSERT_STREQ(value.c_str(), TELECOM_SPN.c_str());
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
        std::u16string result = g_proxy.GetHandler()->GetSimGid1(SLOTID_0);
        std::string value = Str16ToStr8(result);
        ASSERT_STRNE(value.c_str(), "");
        ASSERT_TRUE((value.length() >= MIN_LENGTH));
    }
}

/**
 * @tc.number   Telephony_Sim_GetSimAccountInfo_0400
 * @tc.name     The test executed the GetSimAccountInfo interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimAccountInfo_0400, Reliability | MediumTest | Level3)
{
    OHOS::Telephony::IccAccountInfo simInfo;
    std::u16string cardName = Str8ToStr16("1234");
    std::u16string cardNumber = Str8ToStr16("1234");
    bool ret = g_proxy.GetHandler()->SetActiveSim(CLOSE, SLOTID_0);
    ASSERT_TRUE(ret);
    ret = g_proxy.GetHandler()->SetShowName(SLOTID_0, cardName);
    ASSERT_TRUE(ret);
    ret = g_proxy.GetHandler()->SetShowNumber(SLOTID_0, cardNumber);
    ASSERT_TRUE(ret);
    std::u16string retIccId = g_proxy.GetHandler()->GetSimIccId(SLOTID_0);

    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool result = g_proxy.GetHandler()->GetSimAccountInfo(SLOTID_0, simInfo);
        ASSERT_TRUE(result);
        ASSERT_EQ(simInfo.simId, SLOTID_0);
        ASSERT_EQ(simInfo.slotIndex, SLOTID_0);
        ASSERT_FALSE(simInfo.isEsim);
        ASSERT_FALSE(simInfo.isActive);
        ASSERT_STREQ(Str16ToStr8(simInfo.iccId).c_str(), Str16ToStr8(retIccId).c_str());
        ASSERT_STREQ(Str16ToStr8(simInfo.showName).c_str(), Str16ToStr8(cardName).c_str());
        ASSERT_STREQ(Str16ToStr8(simInfo.showNumber).c_str(), Str16ToStr8(cardNumber).c_str());
        usleep(100000);
    }

    // Restore initial state.
    bool setResult = g_proxy.GetHandler()->SetActiveSim(OPEN, SLOTID_0);
    ASSERT_TRUE(setResult);
    std::u16string defaultCardName;
    std::u16string retName = g_proxy.GetHandler()->GetOperatorName(SLOTID_0);
    if (Str16ToStr8(retName) != "") {
        defaultCardName = retName;
    } else {
        defaultCardName= Str8ToStr16("Card0");
    }
    setResult = g_proxy.GetHandler()->SetShowName(SLOTID_0, defaultCardName);
    ASSERT_TRUE(setResult);
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
    bool ret = g_proxy.GetHandler()->SetDefaultVoiceSlotId(SLOTID_0);
    ASSERT_TRUE(ret);
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        int32_t result = g_proxy.GetHandler()->GetDefaultVoiceSlotId();
        ASSERT_EQ(result, SLOTID_0);
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
        bool result = g_proxy.GetHandler()->SetDefaultVoiceSlotId(SLOTID_0);
        ASSERT_TRUE(result);
    }
    int32_t value = g_proxy.GetHandler()->GetDefaultVoiceSlotId();
    ASSERT_EQ(value, SLOTID_0);
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
    std::string defaultPin = "1234";

    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool retValue = g_proxy.GetHandler()->UnlockPin(Str8ToStr16(defaultPin), response, SLOTID_0);
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
        bool retValue = g_proxy.GetHandler()->UnlockPuk(pin, puk, response, SLOTID_0);
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
        bool retValue = g_proxy.GetHandler()->AlterPin(newPin, oldPin, response, SLOTID_0);
        ASSERT_TRUE(retValue);
        ASSERT_EQ(response.result, OTHER_ABNORMAL);
    }
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
    std::u16string pin = Str8ToStr16("123456789");

    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool retValue = g_proxy.GetHandler()->SetLockState(pin, OPEN, response, SLOTID_0);
        ASSERT_TRUE(retValue);
        ASSERT_EQ(response.result, OTHER_ABNORMAL);
    }
}

/**************************************************Phase four*****************************************************/
/**
 * @tc.number   Telephony_Sim_IsSimActive_0500
 * @tc.name     The test executed the IsSimActive interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_IsSimActive_0500, Reliability | MediumTest | Level3)
{
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool result = g_proxy.GetHandler()->IsSimActive(SLOTID_0);
        ASSERT_TRUE(result);
    }
}

/**
 * @tc.number   Telephony_Sim_GetActiveSimAccountInfoList_0400
 * @tc.name     The test executed the IsSimActive interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetActiveSimAccountInfoList_0400, Reliability | MediumTest | Level3)
{
    std::u16string cardName = Str8ToStr16("1234");
    std::u16string cardNumber = Str8ToStr16("1234");
    bool ret = g_proxy.GetHandler()->SetShowName(SLOTID_0, cardName);
    ASSERT_TRUE(ret);
    ret = g_proxy.GetHandler()->SetShowNumber(SLOTID_0, cardNumber);
    ASSERT_TRUE(ret);

    std::vector<OHOS::Telephony::IccAccountInfo> vecAccountInfo;
    bool findSlotIndex = false;
    std::u16string retIccId = g_proxy.GetHandler()->GetSimIccId(SLOTID_0);
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool result = g_proxy.GetHandler()->GetActiveSimAccountInfoList(vecAccountInfo);
        ASSERT_TRUE(result);
        for (std::vector<OHOS::Telephony::IccAccountInfo>::iterator iter = vecAccountInfo.begin();
             iter != vecAccountInfo.end(); iter++) {
            if ((*iter).slotIndex == SLOTID_0) {
                findSlotIndex = true;
                ASSERT_EQ((*iter).simId, SLOTID_0);
                ASSERT_FALSE((*iter).isEsim);
                ASSERT_TRUE((*iter).isActive);
                ASSERT_STREQ(Str16ToStr8((*iter).iccId).c_str(), Str16ToStr8(retIccId).c_str());
                ASSERT_STREQ(Str16ToStr8((*iter).showName).c_str(), Str16ToStr8(cardName).c_str());
                ASSERT_STREQ(Str16ToStr8((*iter).showNumber).c_str(), Str16ToStr8(cardNumber).c_str());
            }
        }
        ASSERT_TRUE(findSlotIndex);
        findSlotIndex = false;
        usleep(100000);
    }

    // Restore initial state.
    std::u16string defaultCardName = g_proxy.GetHandler()->GetOperatorName(SLOTID_0);
    bool setResult = g_proxy.GetHandler()->SetShowName(SLOTID_0, defaultCardName);
    ASSERT_TRUE(setResult);
}

/**
 * @tc.number   Telephony_Sim_SetShowName_0500
 * @tc.name     The test executed the SetShowName interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowName_0500, Reliability | MediumTest | Level3)
{
    std::u16string cardName = Str8ToStr16("1234");
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool ret = g_proxy.GetHandler()->SetShowName(SLOTID_0, cardName);
        ASSERT_TRUE(ret);
    }
    std::u16string result = g_proxy.GetHandler()->GetShowName(SLOTID_0);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), Str16ToStr8(cardName).c_str());

    // Restore initial state.
    std::u16string defaultCardName = g_proxy.GetHandler()->GetOperatorName(SLOTID_0);
    bool setResult = g_proxy.GetHandler()->SetShowName(SLOTID_0, defaultCardName);
    ASSERT_TRUE(setResult);
}

/**
 * @tc.number   Telephony_Sim_GetShowName_0500
 * @tc.name     The test executed the GetShowName interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowName_0500, Reliability | MediumTest | Level3)
{
    std::u16string cardName = Str8ToStr16("1234");
    bool ret = g_proxy.GetHandler()->SetShowName(SLOTID_0, cardName);
    ASSERT_TRUE(ret);
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        std::u16string result = g_proxy.GetHandler()->GetShowName(SLOTID_0);
        ASSERT_STREQ(Str16ToStr8(result).c_str(), Str16ToStr8(cardName).c_str());
    }

    // Restore initial state.
    std::u16string defaultCardName = g_proxy.GetHandler()->GetOperatorName(SLOTID_0);
    bool setResult = g_proxy.GetHandler()->SetShowName(SLOTID_0, defaultCardName);
    ASSERT_TRUE(setResult);
}

/**
 * @tc.number   Telephony_Sim_SetShowNumber_0500
 * @tc.name     The test executed the SetShowNumber interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowNumber_0500, Reliability | MediumTest | Level3)
{
    std::u16string cardNumber = Str8ToStr16("1234");
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool ret = g_proxy.GetHandler()->SetShowNumber(SLOTID_0, cardNumber);
        ASSERT_TRUE(ret);
        std::u16string result = g_proxy.GetHandler()->GetShowNumber(SLOTID_0);
        ASSERT_STREQ(Str16ToStr8(result).c_str(), Str16ToStr8(cardNumber).c_str());
    }
}

/**
 * @tc.number   Telephony_Sim_GetShowNumber_0400
 * @tc.name     The test executed the GetShowNumber interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowNumber_0400, Reliability | MediumTest | Level3)
{
    std::u16string cardNumber = Str8ToStr16("1234");
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool ret = g_proxy.GetHandler()->SetShowNumber(SLOTID_0, cardNumber);
        ASSERT_TRUE(ret);
        std::u16string result = g_proxy.GetHandler()->GetShowNumber(SLOTID_0);
        ASSERT_STREQ(Str16ToStr8(result).c_str(), Str16ToStr8(cardNumber).c_str());
    }
}

/**
 * @tc.number   Telephony_Sim_GetOperatorConfigs_0400
 * @tc.name     The test executed the GetOperatorConfigs interface query function 1000 times,
 *              expecting to execute successfully each time.
 *              Prerequisites: Mobile card.Manually push the XML configuration file corresponding to the
 *              mobile card to the 'data/OperatorConfig' path on the development board.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetOperatorConfigs_0400, Reliability | MediumTest | Level3)
{
    OHOS::Telephony::OperatorConfig poc;
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool ret = g_proxy.GetHandler()->GetOperatorConfigs(SLOTID_0, poc);
        ASSERT_TRUE(ret);
        ASSERT_FALSE(poc.configValue.empty());
    }
}

/**
 * @tc.number   Telephony_Sim_GetSimTelephoneNumber_0400
 * @tc.name     The test executed the GetSimTelephoneNumber interface query function 1000 times,
 *              expecting to execute successfully each time.Prerequisite: The card number has been
 *              written into the SIM card.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimTelephoneNumber_0400, Reliability | MediumTest | Level3)
{
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        std::u16string ret = g_proxy.GetHandler()->GetSimTelephoneNumber(SLOTID_0);
        ASSERT_STRNE(Str16ToStr8(ret).c_str(), "");
        // The length of a mobile phone number in mainland China is greater than or equal to 11 digits.
        ASSERT_GE(Str16ToStr8(ret).length(), PHONE_NUMBER_LENGTH);
    }
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailIdentifier_0400
 * @tc.name     The test executed the GetSimTelephoneNumber interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailIdentifier_0400, Reliability | MediumTest | Level3)
{
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        std::u16string ret = g_proxy.GetHandler()->GetVoiceMailIdentifier(SLOTID_0);
        ASSERT_STRNE(Str16ToStr8(ret).c_str(), "");
    }
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailNumber_0400
 * @tc.name     The test executed the GetVoiceMailNumber interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailNumber_0400, Reliability | MediumTest | Level3)
{
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        std::u16string ret = g_proxy.GetHandler()->GetVoiceMailNumber(SLOTID_0);
        ASSERT_STRNE(Str16ToStr8(ret).c_str(), "");
    }
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
    std::string pin2 = "123";

    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool retValue = g_proxy.GetHandler()->UnlockPin2(Str8ToStr16(pin2), response, SLOTID_0);
        ASSERT_TRUE(retValue);
        ASSERT_EQ(response.result, OTHER_ABNORMAL);
    }
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

    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool retValue = g_proxy.GetHandler()->UnlockPuk2(pin2, puk2, response, SLOTID_0);
        ASSERT_TRUE(retValue);
        ASSERT_EQ(response.result, OTHER_ABNORMAL);
    }
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
    std::u16string oldPin2 = Str8ToStr16("123");
    std::u16string newPin2 = Str8ToStr16("1234");

    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool retValue = g_proxy.GetHandler()->AlterPin2(newPin2, oldPin2, response, SLOTID_MINUS);
        ASSERT_FALSE(retValue);
    }
}

/**
 * @tc.number   Telephony_Sim_SetActiveSim_0600
 * @tc.name     The test executed the IsSimActive interface setting function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_SetActiveSim_0600, Reliability | MediumTest | Level3)
{
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER / 2; loopNumber++) {
        bool ret = g_proxy.GetHandler()->SetActiveSim(CLOSE, SLOTID_0);
        ASSERT_TRUE(ret);
        ret = g_proxy.GetHandler()->SetActiveSim(OPEN, SLOTID_0);
        ASSERT_TRUE(ret);
    }
}

/**************************************************Phase five*****************************************************/
/**
 * @tc.number   Telephony_Sim_SetVoiceMailInfo_0900
 * @tc.name     The test executed the SetVoiceMailInfo interface setting function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetVoiceMailInfo_0900, Function | MediumTest | Level1)
{
    std::u16string mailName = Str8ToStr16("123#@\%_ABCDE");
    std::u16string mailNumber = Str8ToStr16("01234567890123456789");
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool ret = g_proxy.GetHandler()->SetVoiceMailInfo(mailName, mailNumber, SLOTID_0);
        ASSERT_TRUE(ret);
        std::u16string retMailNumber = g_proxy.GetHandler()->GetVoiceMailNumber(SLOTID_0);
        ASSERT_STREQ(Str16ToStr8(retMailNumber).c_str(), Str16ToStr8(mailNumber).c_str());
        std::u16string retMailName = g_proxy.GetHandler()->GetVoiceMailIdentifier(SLOTID_0);
        ASSERT_STREQ(Str16ToStr8(retMailName).c_str(), Str16ToStr8(mailName).c_str());
    }
}