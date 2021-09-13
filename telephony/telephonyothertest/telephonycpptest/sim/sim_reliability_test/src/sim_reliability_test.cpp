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

#include "sim_test.h"
#include <cstring>

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;

const int32_t SimTest::INVALID_VALUE = -1;
const int32_t SimTest::LOOP_NUMBER = 1000;
const int32_t SimTest::SLOTID_0 = 0;
const int32_t SimTest::SLOTID_1 = 1;
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
const int32_t SimTest::OPEN = 1;
const int32_t SimTest::CLOSE = 0;
const int SimTest::TYPE_FDN = 2;
const int SimTest::TYPE_ADN = 1;
const std::string SimTest::NAME = "test";
const std::string SimTest::NUMBER = "12345678";
const std::string SimTest::NEW_NAME = "tset_Update";
const std::string SimTest::NEW_NUMBER = "12345678_Update";
const int SimTest::INDEX = 1;

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
        ASSERT_NE(result, INVALID_VALUE);
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
 * @tc.number   Telephony_Sim_GetIsoCountryCodeForSim_0400
 * @tc.name     The test executed the GetIsoCountryCodeForSim interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetIsoCountryCodeForSim_0400, Reliability | MediumTest | Level3)
{
    std::string countryCode = "cn";
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        std::u16string result = g_proxy.GetHandler()->GetIsoCountryCodeForSim(SLOTID_0);
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
    bool ret = g_proxy.GetHandler()->SetSimActive(CLOSE, SLOTID_0);
    ASSERT_TRUE(ret);
    ret = g_proxy.GetHandler()->SetShowName(SLOTID_0, cardName);
    ASSERT_TRUE(ret);
    ret = g_proxy.GetHandler()->SetShowNumber(SLOTID_0, cardNumber);
    ASSERT_TRUE(ret);

    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool result = g_proxy.GetHandler()->GetSimAccountInfo(SLOTID_0, simInfo);
        ASSERT_TRUE(result);
        ASSERT_EQ(simInfo.simId, SLOTID_0);
        ASSERT_EQ(simInfo.slotIndex, SLOTID_0);
        ASSERT_FALSE(simInfo.isEsim);
        ASSERT_FALSE(simInfo.isActive);
        ASSERT_STREQ(Str16ToStr8(simInfo.showName).c_str(), Str16ToStr8(cardName).c_str());
        ASSERT_STREQ(Str16ToStr8(simInfo.showNumber).c_str(), Str16ToStr8(cardNumber).c_str());
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
        bool result = g_proxy.GetHandler()->SetDefaultVoiceSlotId(SLOTID_1);
        ASSERT_TRUE(result);
    }
    int32_t value = g_proxy.GetHandler()->GetDefaultVoiceSlotId();
    ASSERT_EQ(value, SLOTID_1);
    bool ret = g_proxy.GetHandler()->SetDefaultVoiceSlotId(defaultValue);
    ASSERT_TRUE(ret);
}

/*****************************************************Phase four*****************************************************/
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
 * @tc.number   Telephony_Sim_SetSimActive_0600
 * @tc.name     The test executed the IsSimActive interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_SetSimActive_0600, Reliability | MediumTest | Level3)
{
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool ret = g_proxy.GetHandler()->SetSimActive(CLOSE, SLOTID_0);
        ASSERT_TRUE(ret);
        ret = g_proxy.GetHandler()->SetSimActive(OPEN, SLOTID_0);
        ASSERT_TRUE(ret);
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
    bool ret = g_proxy.GetHandler()->SetSimActive(OPEN, SLOTID_0);
    ASSERT_TRUE(ret);
    ret = g_proxy.GetHandler()->SetShowName(SLOTID_0, cardName);
    ASSERT_TRUE(ret);
    ret = g_proxy.GetHandler()->SetShowNumber(SLOTID_0, cardNumber);
    ASSERT_TRUE(ret);

    std::vector<OHOS::Telephony::IccAccountInfo> vecAccountInfo;
    bool findSlotIndex = false;
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool result = g_proxy.GetHandler()->GetActiveSimAccountInfoList(vecAccountInfo);
        ASSERT_TRUE(result);
        for (auto iter = vecAccountInfo.begin(); iter != vecAccountInfo.end(); iter++) {
            if ((*iter).slotIndex == SLOTID_0) {
                findSlotIndex = true;
                ASSERT_EQ((*iter).simId, SLOTID_0);
                ASSERT_FALSE((*iter).isEsim);
                ASSERT_FALSE((*iter).isActive);
                ASSERT_STREQ(Str16ToStr8((*iter).showName).c_str(), Str16ToStr8(cardName).c_str());
                ASSERT_STREQ(Str16ToStr8((*iter).showNumber).c_str(), Str16ToStr8(cardNumber).c_str());
            }
        }
        if (findSlotIndex == false) {
            LOG("No corresponding data was found");
            FAIL();
        }
        findSlotIndex = false;
    }
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
        std::u16string result = g_proxy.GetHandler()->GetShowName(SLOTID_0);
        ASSERT_STREQ(Str16ToStr8(result).c_str(), Str16ToStr8(cardName).c_str());
    }
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
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool ret = g_proxy.GetHandler()->SetShowName(SLOTID_0, cardName);
        if (ret) {
            std::u16string result = g_proxy.GetHandler()->GetShowName(SLOTID_0);
            ASSERT_STREQ(Str16ToStr8(result).c_str(), Str16ToStr8(cardName).c_str());
        } else {
            LOG("SetShowName fail...");
            FAIL();
        }
    }
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
 * @tc.number   Telephony_Sim_GetShowNumber_0500
 * @tc.name     The test executed the GetShowNumber interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowNumber_0500, Reliability | MediumTest | Level3)
{
    std::u16string cardNumber = Str8ToStr16("1234");
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool ret = g_proxy.GetHandler()->SetShowNumber(SLOTID_0, cardNumber);
        if (ret) {
            std::u16string result = g_proxy.GetHandler()->GetShowNumber(SLOTID_0);
            ASSERT_STREQ(Str16ToStr8(result).c_str(), Str16ToStr8(cardNumber).c_str());
        } else {
            LOG("SetShowNumber fail...");
        }
    }
}

/**
 * @tc.number   Telephony_Sim_GetOperatorConfig_0400
 * @tc.name     The test executed the GetOperatorConfig interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetOperatorConfig_0400, Reliability | MediumTest | Level3)
{
    OHOS::Telephony::OperatorConfig poc;
    std::u16string mapBoolValue = Str8ToStr16("allow_emergency_numbers_in_call_log_bool");
    std::u16string mapMaxHeight = Str8ToStr16("maxImageHeight");
    std::u16string mapWfcImsMode = Str8ToStr16("carrier_default_wfc_ims_mode_int");
    std::u16string mapApnSet = Str8ToStr16("show_apn_setting_cdma_bool");
    std::u16string mobileCode = Str8ToStr16("46000");
    std::string defaultBoolValue = "true";
    std::string defaultMaxHeight = "1944";
    std::string defaultApnSet = "true";
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool ret = g_proxy.GetHandler()->GetOperatorConfig(SLOTID_0, poc);
        ASSERT_TRUE(ret);
        std::u16string OperNum = g_proxy.GetHandler()->GetSimOperatorNumeric(SLOTID_0);
        if (OperNum == mobileCode) {
            auto findBoolValue = poc.configValue.find(mapBoolValue);
            if (findBoolValue != poc.configValue.end()) {
                ASSERT_STREQ(Str16ToStr8(findBoolValue->second).c_str(), defaultBoolValue.c_str());
            }
        } else {
            auto findMaxHeight = poc.configValue.find(mapMaxHeight);
            if (findMaxHeight != poc.configValue.end()) {
                ASSERT_STREQ(Str16ToStr8(findMaxHeight->second).c_str(), defaultMaxHeight.c_str());
            }
            auto findApnSet = poc.configValue.find(mapApnSet);
            if (findApnSet != poc.configValue.end()) {
                ASSERT_STREQ(Str16ToStr8(findApnSet->second).c_str(), defaultApnSet.c_str());
            }
        }
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
    std::u16string operatorNum1 = Str8ToStr16("46000");
    std::u16string operatorNum2 = Str8ToStr16("46002");
    std::u16string operatorNum3 = Str8ToStr16("46004");
    std::u16string operatorNum4 = Str8ToStr16("46007");
    std::string mobileVoiceMail = "12599";
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        std::u16string ret = g_proxy.GetHandler()->GetVoiceMailIdentifier(SLOTID_0);
        std::u16string result = g_proxy.GetHandler()->GetSimOperatorNumeric(SLOTID_0);
        if (result == operatorNum1 || result == operatorNum2 || result == operatorNum3 || result == operatorNum4) {
            ASSERT_STREQ(Str16ToStr8(ret).c_str(), mobileVoiceMail.c_str());
        } else {
            ASSERT_STRNE(Str16ToStr8(ret).c_str(), "");
        }
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
    std::u16string operatorNum1 = Str8ToStr16("46000");
    std::u16string operatorNum2 = Str8ToStr16("46002");
    std::u16string operatorNum3 = Str8ToStr16("46004");
    std::u16string operatorNum4 = Str8ToStr16("46007");
    std::string mobileVoiceMail = "12599";
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        std::u16string ret = g_proxy.GetHandler()->GetVoiceMailNumber(SLOTID_0);
        std::u16string result = g_proxy.GetHandler()->GetSimOperatorNumeric(SLOTID_0);
        if (result == operatorNum1 || result == operatorNum2 || result == operatorNum3 || result == operatorNum4) {
            ASSERT_STREQ(Str16ToStr8(ret).c_str(), mobileVoiceMail.c_str());
        } else {
            ASSERT_STRNE(Str16ToStr8(ret).c_str(), "");
        }
    }
}

/**
 * @tc.number   Telephony_Sim_QueryIccDiallingNumbers_0600
 * @tc.name     The test executed the QueryIccDiallingNumbers interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_QueryIccDiallingNumbers_0600, Reliability | MediumTest | Level3)
{
    g_proxy.DeletePosition1Contact();
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = INDEX;
    info->alphaTag_ = Str8ToStr16(NAME);
    info->number_ = Str8ToStr16(NUMBER);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_TRUE(ret);
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo;
    bool findRecordNum = false;
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        vecDialNumInfo = g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
        bool notEmpty = !vecDialNumInfo.empty();
        if (notEmpty) {
            for (auto iter = vecDialNumInfo.begin(); iter != vecDialNumInfo.end(); iter++) {
                if ((*iter)->recordNumber_ == INDEX) {
                    findRecordNum = true;
                    ASSERT_EQ((*iter)->recordNumber_, INDEX);
                    ASSERT_STREQ(Str16ToStr8((*iter)->alphaTag_).c_str(), NAME.c_str());
                    ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), NUMBER.c_str());
                    break;
                }
            }
        } else {
            LOG("Vector is empty...");
            FAIL();
        }
        if (findRecordNum == false) {
            LOG("No corresponding data was found");
            FAIL();
        }
        findRecordNum = false;
    }
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_0900
 * @tc.name     The test executed the QueryIccDiallingNumbers interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_0900, Function | MediumTest | Level1)
{
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = INDEX;
    info->alphaTag_ = Str8ToStr16(NAME);
    info->number_ = Str8ToStr16(NUMBER);
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_ADN, INDEX);
        g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_FDN, INDEX);
        bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
        ASSERT_TRUE(ret);
        std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
            g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
        bool notEmpty = !vecDialNumInfo.empty();
        bool findRecordNum = false;
        if (notEmpty) {
            for (auto iter = vecDialNumInfo.begin(); iter != vecDialNumInfo.end(); iter++) {
                if ((*iter)->recordNumber_ == INDEX) {
                    findRecordNum = true;
                    ASSERT_EQ((*iter)->recordNumber_, INDEX);
                    ASSERT_STREQ(Str16ToStr8((*iter)->alphaTag_).c_str(), NAME.c_str());
                    ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), NUMBER.c_str());
                    break;
                }
            }
        } else {
            LOG("Vector is empty...");
            FAIL();
        }
        if (findRecordNum == false) {
            LOG("No corresponding data was found");
            FAIL();
        }
    }
}

/**
 * @tc.number   Telephony_Sim_DelIccDiallingNumbers_0700
 * @tc.name     The test executed the DelIccDiallingNumbers interface query function 10 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_DelIccDiallingNumbers_0700, Function | MediumTest | Level1)
{
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
    g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    bool notEmpty = !vecDialNumInfo.empty();
    std::set<int32_t> saveRecordNum;
    int32_t initIndex = 1;
    int32_t freeIndex = 0;
    if (notEmpty) {
        for (auto iter = vecDialNumInfo.begin(); iter != vecDialNumInfo.end(); iter++) {
            saveRecordNum.insert((*iter)->recordNumber_);
        }
        for (auto setIter = saveRecordNum.begin(); setIter != saveRecordNum.end(); setIter++) {
            if (*setIter != initIndex) {
                freeIndex = initIndex;
                break;
            }
            initIndex++;
        }
    } else {
        freeIndex = initIndex;
    }
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = freeIndex;
    info->alphaTag_ = Str8ToStr16(NAME);
    info->number_ = Str8ToStr16(NUMBER);
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
        ASSERT_TRUE(result);
        bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_ADN, freeIndex);
        ASSERT_TRUE(ret);
        std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
            g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
        bool empty = vecDialNumInfo.empty();
        if (empty) {
            LOG("Vector is empty...");
            SUCCEED();
        } else {
            for (auto iter = vecDialNumInfo.begin(); iter != vecDialNumInfo.end(); iter++) {
                if ((*iter)->recordNumber_ == INDEX) {
                    FAIL();
                }
            }
        }
    }
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_1100
 * @tc.name     The test executed the UpdateIccDiallingNumbers interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_1100, Reliability | MediumTest | Level3)
{
    g_proxy.DeletePosition1Contact();
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = INDEX;
    info->alphaTag_ = Str8ToStr16(NAME);
    info->number_ = Str8ToStr16(NUMBER);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_TRUE(ret);

    info->alphaTag_ = Str8ToStr16(NEW_NAME);
    info->number_ = Str8ToStr16(NEW_NUMBER);
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ADN, info, INDEX);
        ASSERT_TRUE(retUpdate);
    }

    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    bool notEmpty = !vecDialNumInfo.empty();
    bool findRecordNum = false;
    if (notEmpty) {
        for (auto iter = vecDialNumInfo.begin(); iter != vecDialNumInfo.end(); iter++) {
            if ((*iter)->recordNumber_ == INDEX) {
                findRecordNum = true;
                ASSERT_EQ((*iter)->recordNumber_, INDEX);
                ASSERT_STREQ(Str16ToStr8((*iter)->alphaTag_).c_str(), NEW_NAME.c_str());
                ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), NEW_NUMBER.c_str());
                break;
            }
        }
    } else {
        LOG("Vector is empty...");
        FAIL();
    }
    if (findRecordNum == false) {
        LOG("No corresponding data was found");
        FAIL();
    }
}