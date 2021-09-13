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
#include <vector>
#include <map>
#include <set>

using namespace testing::ext;
using namespace OHOS;
const int32_t SimTest::INVALID_VALUE = -1;
const int32_t SimTest::OTHER_ABNORMAL = -2;
const int32_t SimTest::PASSWORD_ERR = -1;
const int32_t SimTest::UNLOCKED = 0;
const int32_t SimTest::SLOTID_4 = 4;
const int32_t SimTest::SLOTID_2 = 2;
const int32_t SimTest::SLOTID_1 = 1;
const int32_t SimTest::SLOTID_0 = 0;
const int32_t SimTest::CLOSE = 0;
const int32_t SimTest::OPEN = 1;
const int32_t SimTest::PARAMETERS_ERR = 4;
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
const int SimTest::TYPE_OTHER = 4;
const int SimTest::TYPE_FDN = 2;
const int SimTest::TYPE_ADN = 1;
const std::string SimTest::NAME = "test";
const std::string SimTest::NUMBER = "12345678";
const std::string SimTest::NEW_NAME = "tset_Update";
const std::string SimTest::NEW_NUMBER = "12345678_Update";
const int SimTest::INDEX = 1;

/**
 * @tc.number   Telephony_Sim_GetSimState_0100
 * @tc.name     Enter normal parameters to test whether the GetSimState interface function can execute normally.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimState_0100, Function | MediumTest | Level1)
{
    int32_t result = g_proxy.GetHandler()->GetSimState(SLOTID_0);
    ASSERT_EQ(result, OHOS::Telephony::ExternalState::EX_READY);
}

/**
 * @tc.number   Telephony_Sim_GetSimState_0200
 * @tc.name     Enter exception parameters to test whether the GetSimState interface function can execute normally.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimState_0200, Function | MediumTest | Level2)
{
    int32_t result = g_proxy.GetHandler()->GetSimState(SLOTID_4);
    ASSERT_EQ(result, INVALID_VALUE);
}

/**
 * @tc.number   Telephony_Sim_HasSimCard_0100
 * @tc.name     Enter normal parameters to test whether the HasSimCard interface function can execute normally.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_HasSimCard_0100, Function | MediumTest | Level1)
{
    bool result = g_proxy.GetHandler()->HasSimCard(SLOTID_0);
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_Sim_HasSimCard_0200
 * @tc.name     Enter exception parameters to test whether the HasSimCard interface function can execute normally.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_HasSimCard_0200, Function | MediumTest | Level2)
{
    bool result = g_proxy.GetHandler()->HasSimCard(SLOTID_4);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_GetSimIccId_0100
 * @tc.name     Enter normal parameters to test whether the GetSimIccId interface function can execute normally.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimIccId_0100, Function | MediumTest | Level2)
{
    std::u16string result = g_proxy.GetHandler()->GetSimIccId(SLOTID_0);
    const char *temp = nullptr;
    temp = Str16ToStr8(result).c_str();
    std::string iccId = Str16ToStr8(result);
    ASSERT_STRNE(temp, "");
    // ICCID is a fixed string of 20 characters.
    ASSERT_EQ(iccId.length(), ICCID_LENGTH);
}

/**
 * @tc.number   Telephony_Sim_GetSimIccId_0200
 * @tc.name     Enter exception parameters to test whether the GetSimIccId interface function can execute normally.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimIccId_0200, Function | MediumTest | Level4)
{
    std::u16string result = g_proxy.GetHandler()->GetSimIccId(SLOTID_4);
    const char *temp = nullptr;
    temp = Str16ToStr8(result).c_str();
    ASSERT_STREQ(temp, "");
}

/**
 * @tc.number   Telephony_Sim_GetIMSI_0100
 * @tc.name     Enter normal parameters to test whether the GetIMSI interface function can execute normally.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetIMSI_0100, Function | MediumTest | Level2)
{
    std::u16string result = g_proxy.GetHandler()->GetIMSI(SLOTID_0);
    const char *temp = nullptr;
    temp = Str16ToStr8(result).c_str();
    std::string imsi = Str16ToStr8(result);
    ASSERT_STRNE(temp, "");
    // IMSI is a fixed string of 15 characters.
    ASSERT_EQ(imsi.length(), IMSI_LENGTH);
}

/**
 * @tc.number   Telephony_Sim_GetIMSI_0200
 * @tc.name     Enter exception parameters to test whether the GetIMSI interface function can execute normally.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetIMSI_0200, Function | MediumTest | Level4)
{
    std::u16string result = g_proxy.GetHandler()->GetIMSI(SLOTID_4);
    const char *temp = nullptr;
    temp = Str16ToStr8(result).c_str();
    ASSERT_STREQ(temp, "");
}

/**
 * @tc.number   Telephony_Sim_GetSimOperatorNumeric_0100
 * @tc.name     Enter normal parameters to test whether the GetSimOperatorNumeric interface function
 *              can execute normally.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimOperatorNumeric_0100, Function | MediumTest | Level2)
{
    std::string operatorNumTopThree = "460";
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

/**
 * @tc.number   Telephony_Sim_GetSimOperatorNumeric_0200
 * @tc.name     Enter exception parameters to test whether the GetSimOperatorNumeric interface function
 *              can execute normally.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimOperatorNumeric_0200, Function | MediumTest | Level4)
{
    std::u16string result = g_proxy.GetHandler()->GetSimOperatorNumeric(SLOTID_4);
    const char *temp = nullptr;
    temp = Str16ToStr8(result).c_str();
    ASSERT_STREQ(temp, "");
}

/**
 * @tc.number   Telephony_Sim_GetIsoCountryCodeForSim_0100
 * @tc.name     Enter normal parameters to test whether the GetIsoCountryCodeForSim interface function can
 *              execute normally.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetIsoCountryCodeForSim_0100, Function | MediumTest | Level2)
{
    std::string countryCode = "cn";
    std::u16string result = g_proxy.GetHandler()->GetIsoCountryCodeForSim(SLOTID_0);
    const char *temp = nullptr;
    temp = Str16ToStr8(result).c_str();
    // The country code for mainland China is cn.
    ASSERT_STREQ(temp, countryCode.c_str());
}

/**
 * @tc.number   Telephony_Sim_GetIsoCountryCodeForSim_0200
 * @tc.name     Enter exception parameters to test whether the GetIsoCountryCodeForSim interface function
 *              can execute normally.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetIsoCountryCodeForSim_0200, Function | MediumTest | Level4)
{
    std::u16string result = g_proxy.GetHandler()->GetIsoCountryCodeForSim(SLOTID_4);
    const char *temp = nullptr;
    temp = Str16ToStr8(result).c_str();
    ASSERT_STREQ(temp, "");
}

/**
 * @tc.number   Telephony_Sim_GetSimSpn_0100
 * @tc.name     Enter normal parameters to test whether the GetSimSpn interface function can execute normally.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimSpn_0100, Function | MediumTest | Level2)
{
    std::u16string result = g_proxy.GetHandler()->GetSimSpn(SLOTID_0);
    std::string value = Str16ToStr8(result);
    ASSERT_STRNE(value.c_str(), "");
    if ((value == MOBILE_CODE_1) || (value == MOBILE_CODE_2) ||(value == MOBILE_CODE_3) || (value == MOBILE_CODE_4)) {
        ASSERT_STREQ(value.c_str(), MOBILE_SPN.c_str());
    } else if ((value == UNICOM_CODE_1) || (value == UNICOM_CODE_2) || (value == UNICOM_CODE_3)) {
        ASSERT_STREQ(value.c_str(), UNICOM_SPN.c_str());
    } else if ((value == TELECOM_CODE_1) || (value == TELECOM_CODE_2) || (value == TELECOM_CODE_3)){
        ASSERT_STREQ(value.c_str(), TELECOM_SPN.c_str());
    }
}

/**
 * @tc.number   Telephony_Sim_GetSimSpn_0200
 * @tc.name     Enter exception parameters to test whether the GetSimSpn interface function can execute normally.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimSpn_0200, Function | MediumTest | Level4)
{
    std::u16string result = g_proxy.GetHandler()->GetSimSpn(SLOTID_4);
    const char *temp = nullptr;
    temp = Str16ToStr8(result).c_str();
    ASSERT_STREQ(temp, "");
}

/**
 * @tc.number   Telephony_Sim_GetSimGid1_0100
 * @tc.name     Enter normal parameters to test whether the GetSimGid1 interface function can execute normally.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimGid1_0100, Function | MediumTest | Level2)
{
    std::u16string result = g_proxy.GetHandler()->GetSimGid1(SLOTID_0);
    std::string value = Str16ToStr8(result);
    ASSERT_STRNE(value.c_str(), "");
    ASSERT_TRUE((value.length() >= MIN_LENGTH));
}

/**
 * @tc.number   Telephony_Sim_GetSimGid1_0200
 * @tc.name     Enter exception parameters to test whether the GetSimGid1 interface function can execute normally.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimGid1_0200, Function | MediumTest | Level4)
{
    std::u16string result = g_proxy.GetHandler()->GetSimGid1(SLOTID_4);
    const char *temp = nullptr;
    temp = Str16ToStr8(result).c_str();
    ASSERT_STREQ(temp, "");
}

/**
 * @tc.number   Telephony_Sim_GetSimAccountInfo_0100
 * @tc.name     Get the return value by calling the GetSimAccountInfo interface SIM ID input parameter 0.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimAccountInfo_0100, Function | MediumTest | Level2)
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

    bool result = g_proxy.GetHandler()->GetSimAccountInfo(SLOTID_0, simInfo);
    ASSERT_TRUE(result);
    ASSERT_EQ(simInfo.simId, SLOTID_0);
    ASSERT_EQ(simInfo.slotIndex, SLOTID_0);
    ASSERT_FALSE(simInfo.isEsim);
    ASSERT_FALSE(simInfo.isActive);
    ASSERT_STREQ(Str16ToStr8(simInfo.showName).c_str(), Str16ToStr8(cardName).c_str());
    ASSERT_STREQ(Str16ToStr8(simInfo.showNumber).c_str(), Str16ToStr8(cardNumber).c_str());

    // Restore the active state.
    ret = g_proxy.GetHandler()->SetSimActive(OPEN, SLOTID_0);
    ASSERT_TRUE(ret);
}

/**
 * @tc.number   Telephony_Sim_GetSimAccountInfo_0200
 * @tc.name     Get the return value by calling the GetSimAccountInfo interface SIM ID input parameter 4.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimAccountInfo_0200, Function | MediumTest | Level4)
{
    OHOS::Telephony::IccAccountInfo simInfo;
    bool result = g_proxy.GetHandler()->GetSimAccountInfo(SLOTID_4, simInfo);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_GetDefaultVoiceSlotId_0100
 * @tc.name     Test the getDefaultVoiceLotid interface to see if the calling card has been set.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetDefaultVoiceSlotId_0100, Function | MediumTest | Level2)
{
    int32_t defaultValue = g_proxy.GetHandler()->GetDefaultVoiceSlotId();
    bool ret = g_proxy.GetHandler()->SetDefaultVoiceSlotId(SLOTID_1);
    ASSERT_TRUE(ret);
    int32_t result = g_proxy.GetHandler()->GetDefaultVoiceSlotId();
    ASSERT_EQ(result, SLOTID_1);
    ret = g_proxy.GetHandler()->SetDefaultVoiceSlotId(defaultValue);
    ASSERT_TRUE(ret);
}

/**
 * @tc.number   Telephony_Sim_GetDefaultVoiceSlotId_0200
 * @tc.name     Set the SIM card 1 as the default calling card and get the return value
 *              by calling the getDefaultVoiceLotid interface.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetDefaultVoiceSlotId_0200, Function | MediumTest | Level4)
{
    int32_t defaultValue = g_proxy.GetHandler()->GetDefaultVoiceSlotId();
    bool ret = g_proxy.GetHandler()->SetDefaultVoiceSlotId(SLOTID_2);
    ASSERT_TRUE(ret);
    int32_t result = g_proxy.GetHandler()->GetDefaultVoiceSlotId();
    ASSERT_EQ(result, SLOTID_2);
    ret = g_proxy.GetHandler()->SetDefaultVoiceSlotId(defaultValue);
    ASSERT_TRUE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetDefaultVoiceSlotId_0100
 * @tc.name     Enter the exception parameter 0 to get the return value of the SetDefaultVoiceLotid interface.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetDefaultVoiceSlotId_0100, Function | MediumTest | Level4)
{
    bool result = g_proxy.GetHandler()->SetDefaultVoiceSlotId(SLOTID_4);
    ASSERT_FALSE(result);
    int32_t ret = g_proxy.GetHandler()->GetDefaultVoiceSlotId();
    ASSERT_NE(ret, SLOTID_4);
}

/*****************************************************Phase four*****************************************************/
/**
 * @tc.number   Telephony_Sim_IsSimActive_0100
 * @tc.name     Test that the IsSimActive interface is called when the SIM card is activated
 *              and the parameters are normal.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_IsSimActive_0100, Function | MediumTest | Level2)
{
    bool result = g_proxy.GetHandler()->IsSimActive(SLOTID_0);
    ASSERT_TRUE(result);
    int32_t state = g_proxy.GetHandler()->GetSimState(SLOTID_0);
    ASSERT_EQ(state, OHOS::Telephony::ExternalState::EX_READY);
}

/**
 * @tc.number   Telephony_Sim_IsSimActive_0200
 * @tc.name     Test to call the IsSimActive interface and enter exception parameters when the SIM card is active.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_IsSimActive_0200, Function | MediumTest | Level1)
{
    bool result = g_proxy.GetHandler()->IsSimActive(SLOTID_4);
    ASSERT_FALSE(result);
    int32_t state = g_proxy.GetHandler()->GetSimState(SLOTID_0);
    ASSERT_EQ(state, OHOS::Telephony::ExternalState::EX_READY);
}

/**
 * @tc.number   Telephony_Sim_IsSimActive_0300
 * @tc.name     Test that the IsSimActive interface is called when the SIM card is not activated
 *              and the parameters are normal.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_IsSimActive_0300, Function | MediumTest | Level1)
{
    bool ret = g_proxy.GetHandler()->SetSimActive(CLOSE, SLOTID_0);
    ASSERT_TRUE(ret);
    bool result = g_proxy.GetHandler()->IsSimActive(SLOTID_0);
    ASSERT_FALSE(result);
    // Delay one second to obtain the refreshed card status.
    sleep(1);
    int32_t state = g_proxy.GetHandler()->GetSimState(SLOTID_0);
    ASSERT_EQ(state, OHOS::Telephony::ExternalState::EX_ABSENT);

    // Restore the active state.
    ret = g_proxy.GetHandler()->SetSimActive(OPEN, SLOTID_0);
    ASSERT_TRUE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetSimActive_0100
 * @tc.name     When the SIM card is activated, the test calls the SetSimActive interface and enters normal parameters.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetSimActive_0100, Function | MediumTest | Level1)
{
    bool ret = g_proxy.GetHandler()->SetSimActive(CLOSE, SLOTID_0);
    ASSERT_TRUE(ret);
    bool result = g_proxy.GetHandler()->IsSimActive(SLOTID_0);
    ASSERT_FALSE(result);
    ret = g_proxy.GetHandler()->SetSimActive(OPEN, SLOTID_0);
    ASSERT_TRUE(ret);
    result = g_proxy.GetHandler()->IsSimActive(SLOTID_0);
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_Sim_SetSimActive_0200
 * @tc.name     When the SIM card is activated, the test calls the SetSimActive interface
 *              and enters an abnormal slotId parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetSimActive_0200, Function | MediumTest | Level1)
{
    bool ret = g_proxy.GetHandler()->SetSimActive(CLOSE, SLOTID_4);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetSimActive_0300
 * @tc.name     When the SIM card is activated, the test calls the SetSimActive interface
 *              and enters an normal slotId parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetSimActive_0300, Function | MediumTest | Level1)
{
    bool ret = g_proxy.GetHandler()->SetSimActive(OPEN, SLOTID_0);
    ASSERT_TRUE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetSimActive_0400
 * @tc.name     When the SIM card is activated, the test calls the SetSimActive interface
 *              and enters an abnormal enable parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetSimActive_0400, Function | MediumTest | Level1)
{
    bool ret = g_proxy.GetHandler()->SetSimActive(PARAMETERS_ERR, SLOTID_0);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_GetActiveSimAccountInfoList_0100
 * @tc.name     Test call GetActiveSimAccountInfoList interface when the card is activated.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetActiveSimAccountInfoList_0100, Function | MediumTest | Level1)
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
    bool result = g_proxy.GetHandler()->GetActiveSimAccountInfoList(vecAccountInfo);
    ASSERT_TRUE(result);

    bool findSlotIndex = false;
    for (auto iter = vecAccountInfo.begin(); iter != vecAccountInfo.end(); iter++) {
        if ((*iter).slotIndex == SLOTID_0) {
            findSlotIndex = true;
            ASSERT_EQ((*iter).simId, SLOTID_0);
            ASSERT_FALSE((*iter).isEsim);
            ASSERT_TRUE((*iter).isActive);
            ASSERT_STREQ(Str16ToStr8((*iter).showName).c_str(), Str16ToStr8(cardName).c_str());
            ASSERT_STREQ(Str16ToStr8((*iter).showNumber).c_str(), Str16ToStr8(cardNumber).c_str());
        }
    }
    if (findSlotIndex == false) {
        LOG("No corresponding data was found");
        FAIL();
    }
}

/**
 * @tc.number   Telephony_Sim_GetActiveSimAccountInfoList_0200
 * @tc.name     Test call GetActiveSimAccountInfoList interface when the card is not active.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetActiveSimAccountInfoList_0200, Function | MediumTest | Level1)
{
    std::u16string cardName = Str8ToStr16("1234");
    std::u16string cardNumber = Str8ToStr16("1234");
    bool ret = g_proxy.GetHandler()->SetShowName(SLOTID_0, cardName);
    ASSERT_TRUE(ret);
    ret = g_proxy.GetHandler()->SetShowNumber(SLOTID_0, cardNumber);
    ASSERT_TRUE(ret);
    ret = g_proxy.GetHandler()->SetSimActive(CLOSE, SLOTID_0);
    ASSERT_TRUE(ret);

    std::vector<OHOS::Telephony::IccAccountInfo> vecAccountInfo;
    bool result = g_proxy.GetHandler()->GetActiveSimAccountInfoList(vecAccountInfo);
    ASSERT_TRUE(result);
    bool isEmpty = vecAccountInfo.empty();
    ASSERT_TRUE(isEmpty);

    // Restore the active state.
    ret = g_proxy.GetHandler()->SetSimActive(OPEN, SLOTID_0);
    ASSERT_TRUE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetShowName_0100
 * @tc.name     Test SetShowName slotId exception input parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowName_0100, Function | MediumTest | Level1)
{
    std::u16string cardName = Str8ToStr16("1234");
    bool ret = g_proxy.GetHandler()->SetShowName(SLOTID_4, cardName);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetShowName_0200
 * @tc.name     Test SetShowName Interface parameter name The value contains more than 32 characters.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowName_0200, Function | MediumTest | Level1)
{
    std::u16string cardName = Str8ToStr16("012345678901234567890123456789qQ@");
    bool ret = g_proxy.GetHandler()->SetShowName(SLOTID_0, cardName);
    ASSERT_FALSE(ret);
    std::u16string result = g_proxy.GetHandler()->GetShowName(SLOTID_0);
    ASSERT_STRNE(Str16ToStr8(result).c_str(), Str16ToStr8(cardName).c_str());
}

/**
 * @tc.number   Telephony_Sim_SetShowName_0300
 * @tc.name     Test SetShowName Interface parameter name Specifies an empty value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowName_0300, Function | MediumTest | Level1)
{
    std::u16string cardName = Str8ToStr16("");
    bool ret = g_proxy.GetHandler()->SetShowName(SLOTID_0, cardName);
    ASSERT_FALSE(ret);
    std::u16string result = g_proxy.GetHandler()->GetShowName(SLOTID_0);
    ASSERT_STRNE(Str16ToStr8(result).c_str(), Str16ToStr8(cardName).c_str());
}

/**
 * @tc.number   Telephony_Sim_GetShowName_0100
 * @tc.name     Test the GetShowName interface input parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowName_0100, Function | MediumTest | Level1)
{
    std::u16string cardName = Str8ToStr16("1234");
    bool ret = g_proxy.GetHandler()->SetShowName(SLOTID_0, cardName);
    ASSERT_TRUE(ret);
    std::u16string result = g_proxy.GetHandler()->GetShowName(SLOTID_0);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), Str16ToStr8(cardName).c_str());
}

/**
 * @tc.number   Telephony_Sim_GetShowName_0300
 * @tc.name     Test the GetShowName interface exception input parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowName_0300, Function | MediumTest | Level1)
{
    std::u16string cardName = Str8ToStr16("1234");
    std::u16string result = g_proxy.GetHandler()->GetShowName(SLOTID_4);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_SetShowNumber_0100
 * @tc.name     Test SetShowNumber slotId exception input parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowNumber_0100, Function | MediumTest | Level1)
{
    std::u16string cardNumber = Str8ToStr16("1234");
    bool ret = g_proxy.GetHandler()->SetShowNumber(SLOTID_4, cardNumber);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetShowNumber_0200
 * @tc.name     Test SetShowNumber Interface parameter number Specifies a value that contains more than 32 characters.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowNumber_0200, Function | MediumTest | Level1)
{
    std::u16string cardNumber = Str8ToStr16("012345678901234567890123456789qQ@");
    bool ret = g_proxy.GetHandler()->SetShowNumber(SLOTID_0, cardNumber);
    ASSERT_FALSE(ret);
    std::u16string result = g_proxy.GetHandler()->GetShowNumber(SLOTID_0);
    ASSERT_STRNE(Str16ToStr8(result).c_str(), Str16ToStr8(cardNumber).c_str());
}

/**
 * @tc.number   Telephony_Sim_SetShowNumber_0300
 * @tc.name     Test SetShowNumber Interface parameter number Specifies an empty value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowNumber_0300, Function | MediumTest | Level1)
{
    std::u16string cardNumber = Str8ToStr16("");
    bool ret = g_proxy.GetHandler()->SetShowNumber(SLOTID_0, cardNumber);
    ASSERT_FALSE(ret);
    std::u16string result = g_proxy.GetHandler()->GetShowNumber(SLOTID_0);
    ASSERT_STRNE(Str16ToStr8(result).c_str(), Str16ToStr8(cardNumber).c_str());
}

/**
 * @tc.number   Telephony_Sim_GetShowNumber_0100
 * @tc.name     Test the GetShowNumber interface input parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowNumber_0100, Function | MediumTest | Level1)
{
    std::u16string cardNumber = Str8ToStr16("1234");
    bool ret = g_proxy.GetHandler()->SetShowNumber(SLOTID_0, cardNumber);
    ASSERT_TRUE(ret);
    std::u16string result = g_proxy.GetHandler()->GetShowNumber(SLOTID_0);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), Str16ToStr8(cardNumber).c_str());
}

/**
 * @tc.number   Telephony_Sim_GetShowNumber_0300
 * @tc.name     Test the GetShowNumber interface exception input parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowNumber_0300, Function | MediumTest | Level1)
{
    std::u16string result = g_proxy.GetHandler()->GetShowNumber(SLOTID_4);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetOperatorConfig_0100
 * @tc.name     Test the GetOperatorConfig interface entry parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetOperatorConfig_0100, Function | MediumTest | Level1)
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

/**
 * @tc.number   Telephony_Sim_GetOperatorConfig_0200
 * @tc.name     Test the GetOperatorConfig interface exception input parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetOperatorConfig_0200, Function | MediumTest | Level1)
{
    OHOS::Telephony::OperatorConfig poc;
    bool ret = g_proxy.GetHandler()->GetOperatorConfig(SLOTID_4, poc);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_GetSimTelephoneNumber_0100
 * @tc.name     Test the GetSimTelephoneNumber interface input parameters.
 *              Prerequisite: The card number has been written into the SIM card.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimTelephoneNumber_0100, Function | MediumTest | Level1)
{
    std::u16string ret = g_proxy.GetHandler()->GetSimTelephoneNumber(SLOTID_0);
    ASSERT_STRNE(Str16ToStr8(ret).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetSimTelephoneNumber_0200
 * @tc.name     Test the GetSimTelephoneNumber interface exception input parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimTelephoneNumber_0200, Function | MediumTest | Level1)
{
    std::u16string ret = g_proxy.GetHandler()->GetSimTelephoneNumber(SLOTID_4);
    ASSERT_STREQ(Str16ToStr8(ret).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailIdentifier_0100
 * @tc.name     Test the GetVoiceMailIdentifier interface input parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailIdentifier_0100, Function | MediumTest | Level1)
{
    std::u16string operatorNum1 = Str8ToStr16("46000");
    std::u16string operatorNum2 = Str8ToStr16("46002");
    std::u16string operatorNum3 = Str8ToStr16("46004");
    std::u16string operatorNum4 = Str8ToStr16("46007");
    std::string mobileVoiceMail = "12599";
    std::u16string ret = g_proxy.GetHandler()->GetVoiceMailIdentifier(SLOTID_0);
    std::u16string result = g_proxy.GetHandler()->GetSimOperatorNumeric(SLOTID_0);
    if (result == operatorNum1 || result == operatorNum2 || result == operatorNum3 || result == operatorNum4) {
        ASSERT_STREQ(Str16ToStr8(ret).c_str(), mobileVoiceMail.c_str());
    } else {
        ASSERT_STRNE(Str16ToStr8(ret).c_str(), "");
    }
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailIdentifier_0200
 * @tc.name     Test the GetVoiceMailIdentifier interface exception input parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailIdentifier_0200, Function | MediumTest | Level1)
{
    std::u16string ret = g_proxy.GetHandler()->GetVoiceMailIdentifier(SLOTID_4);
    ASSERT_STREQ(Str16ToStr8(ret).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailNumber_0200
 * @tc.name     Test the GetVoiceMailNumber interface exception input parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailNumber_0200, Function | MediumTest | Level1)
{
    std::u16string ret = g_proxy.GetHandler()->GetVoiceMailNumber(SLOTID_4);
    ASSERT_STREQ(Str16ToStr8(ret).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_QueryIccDiallingNumbers_0100
 * @tc.name     Test the QueryIccDiallingNumbers interface and the slotId parameter is valid.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_QueryIccDiallingNumbers_0100, Function | MediumTest | Level1)
{
    g_proxy.DeletePosition1Contact();
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = INDEX;
    info->alphaTag_ = Str8ToStr16(NAME);
    info->number_ = Str8ToStr16(NUMBER);
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

/**
 * @tc.number   Telephony_Sim_QueryIccDiallingNumbers_0200
 * @tc.name     Test QueryIccDiallingNumbers interface, slotId exception input parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_QueryIccDiallingNumbers_0200, Function | MediumTest | Level1)
{
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_4, TYPE_ADN);
    bool result = vecDialNumInfo.empty();
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_Sim_QueryIccDiallingNumbers_0300
 * @tc.name     Test the QueryIccDiallingNumbers interface to query "Type" for fixed-dial contacts.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_QueryIccDiallingNumbers_0300, Function | MediumTest | Level1)
{
    g_proxy.DeletePosition1Contact();
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = INDEX;
    info->alphaTag_ = Str8ToStr16(NAME);
    info->number_ = Str8ToStr16(NUMBER);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_FDN, info);
    ASSERT_TRUE(ret);
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_FDN);
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

/**
 * @tc.number   Telephony_Sim_QueryIccDiallingNumbers_0400
 * @tc.name     Test the QueryIccDiallingNumbers interface with the "type" parameter as an exception.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_QueryIccDiallingNumbers_0400, Function | MediumTest | Level1)
{
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_4, TYPE_OTHER);
    bool result = vecDialNumInfo.empty();
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_0100
 * @tc.name     Test the AddIccDiallingNumbers interface, slotId parameter is normal.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_0100, Function | MediumTest | Level1)
{
    g_proxy.DeletePosition1Contact();
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = INDEX;
    info->alphaTag_ = Str8ToStr16(NAME);
    info->number_ = Str8ToStr16(NUMBER);
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

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_0200
 * @tc.name     Test the AddIccDiallingNumbers interface, slotId exception parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_0200, Function | MediumTest | Level1)
{
    g_proxy.DeletePosition1Contact();
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = INDEX;
    info->alphaTag_ = Str8ToStr16(NAME);
    info->number_ = Str8ToStr16(NUMBER);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_4, TYPE_ADN, info);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_0300
 * @tc.name     Tests the AddIccDiallingNumbers interface with the "type" parameter as a fixed-dial contact.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_0300, Function | MediumTest | Level1)
{
    g_proxy.DeletePosition1Contact();
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = INDEX;
    info->alphaTag_ = Str8ToStr16(NAME);
    info->number_ = Str8ToStr16(NUMBER);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_FDN, info);
    ASSERT_TRUE(ret);
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_FDN);
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

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_0400
 * @tc.name     Testing the AddIccDiallingNumbers interface, the "type" parameter is an exception parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_0400, Function | MediumTest | Level1)
{
    g_proxy.DeletePosition1Contact();
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = INDEX;
    info->alphaTag_ = Str8ToStr16(NAME);
    info->number_ = Str8ToStr16(NUMBER);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_OTHER, info);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_0500
 * @tc.name     Tests whether the AddIccDiallingNumbers interface can insert "recordNumber"
 *              when it already exists and is an empty string
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_0500, Function | MediumTest | Level1)
{
    g_proxy.DeletePosition1Contact();
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = INDEX;
    info->alphaTag_ = Str8ToStr16(NAME);
    info->number_ = Str8ToStr16("");
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_TRUE(result);
    result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_0600
 * @tc.name     Tests whether the AddIccDiallingNumbers interface can be inserted again
 *              when the "recordNumber" already exists and is normal.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_0600, Function | MediumTest | Level1)
{
    g_proxy.DeletePosition1Contact();
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = INDEX;
    info->alphaTag_ = Str8ToStr16(NAME);
    info->number_ = Str8ToStr16(NUMBER);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_TRUE(result);
    result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_0700
 * @tc.name     Test the AddIccDiallingNumbers interface, slotId parameter is normal.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_0700, Function | MediumTest | Level1)
{
    g_proxy.DeletePosition1Contact();
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = INDEX;
    info->alphaTag_ = Str8ToStr16("");
    info->number_ = Str8ToStr16("");
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_DelIccDiallingNumbers_0100
 * @tc.name     Test DelIccDiallingNumbers interface, slotId normal entry.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_DelIccDiallingNumbers_0100, Function | MediumTest | Level1)
{
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    bool notEmpty = !vecDialNumInfo.empty();
    bool findRecordNum = false;
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
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_TRUE(result);
    bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_ADN, freeIndex);
    ASSERT_TRUE(ret);

    //After the deletion is successful, check whether it still exists.
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecQueryDialNum =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    notEmpty = !vecQueryDialNum.empty();
    if (notEmpty) {
        for (auto vecIter = vecQueryDialNum.begin(); vecIter != vecQueryDialNum.end(); vecIter++) {
            if ((*vecIter)->recordNumber_ == freeIndex) {
                findRecordNum = true;
                break;
            }
        }
    } else {
        SUCCEED();
    }
    if (findRecordNum == false) {
        SUCCEED();
    } else {
        LOG("The deleted number still exists...");
        FAIL();
    }
}

/**
 * @tc.number   Telephony_Sim_DelIccDiallingNumbers_0200
 * @tc.name     Test DelIccDiallingNumbers interface, slotId exception entry.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_DelIccDiallingNumbers_0200, Function | MediumTest | Level1)
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
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_TRUE(result);
    bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_4, TYPE_ADN, freeIndex);
    ASSERT_TRUE(ret);
}

/**
 * @tc.number   Telephony_Sim_DelIccDiallingNumbers_0300
 * @tc.name     Tests the DelIccDiallingNumbers interface with the index parameter entering a non-existent value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_DelIccDiallingNumbers_0300, Function | MediumTest | Level1)
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
    bool result = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_ADN, freeIndex);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_DelIccDiallingNumbers_0400
 * @tc.name     Tests the DelIccDiallingNumbers interface with the "type" parameter as a fixed-dial contact.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_DelIccDiallingNumbers_0400, Function | MediumTest | Level1)
{
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_FDN);
    bool notEmpty = !vecDialNumInfo.empty();
    bool findRecordNum = false;
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
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_FDN, info);
    ASSERT_TRUE(result);
    bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_FDN, freeIndex);
    ASSERT_TRUE(ret);

    //After the deletion is successful, check whether it still exists.
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecQueryDialNum =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_FDN);
    notEmpty = !vecQueryDialNum.empty();
    if (notEmpty) {
        for (auto vecIter = vecQueryDialNum.begin(); vecIter != vecQueryDialNum.end(); vecIter++) {
            if ((*vecIter)->recordNumber_ == freeIndex) {
                findRecordNum = true;
                break;
            }
        }
    } else {
        SUCCEED();
    }
    if (findRecordNum == false) {
        SUCCEED();
    } else {
        LOG("The deleted number still exists...");
        FAIL();
    }
}

/**
 * @tc.number   Telephony_Sim_DelIccDiallingNumbers_0500
 * @tc.name     Test the DelIccDiallingNumbers interface, the 'type' parameter is an exception parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_DelIccDiallingNumbers_0500, Function | MediumTest | Level1)
{
	std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_FDN);
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
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_FDN, info);
    ASSERT_TRUE(result);
    bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_OTHER, freeIndex);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_0100
 * @tc.name     Test the UpdateIccDiallingNumbers interface and enter the normal slotId parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_0100, Function | MediumTest | Level1)
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
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ADN, info, INDEX);
    ASSERT_TRUE(retUpdate);

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

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_0200
 * @tc.name     Test the UpdateIccDiallingNumbers interface and enter the normal slotId parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_0200, Function | MediumTest | Level1)
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
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_4, TYPE_ADN, info, INDEX);
    ASSERT_FALSE(retUpdate);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_0300
 * @tc.name     Test the UpdateIccDiallingNumbers interface and enter a non-existent value for the index parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_0300, Function | MediumTest | Level1)
{
    g_proxy.DeletePosition1Contact();
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = INDEX;
    info->alphaTag_ = Str8ToStr16(NEW_NAME);
    info->number_ = Str8ToStr16(NEW_NUMBER);
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_4, TYPE_ADN, info, INDEX);
    ASSERT_FALSE(retUpdate);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_0400
 * @tc.name     Test the UpdateIccDiallingNumbers interface. The "type" parameter is a fixed-dial contact.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_0400, Function | MediumTest | Level1)
{
    g_proxy.DeletePosition1Contact();
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = INDEX;
    info->alphaTag_ = Str8ToStr16(NAME);
    info->number_ = Str8ToStr16(NUMBER);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_FDN, info);
    ASSERT_TRUE(ret);

    info->alphaTag_ = Str8ToStr16(NEW_NAME);
    info->number_ = Str8ToStr16(NEW_NUMBER);
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_FDN, info, INDEX);
    ASSERT_TRUE(retUpdate);

    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_FDN);
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

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_0500
 * @tc.name     Test the UpdateIccDiallingNumbers interface. The "Type" parameter is invalid.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_0500, Function | MediumTest | Level1)
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
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_OTHER, info, INDEX);
    ASSERT_TRUE(retUpdate);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_0600
 * @tc.name     Test the UpdateIccDiallingNumbers interface where "number_" is an empty string.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_0600, Function | MediumTest | Level1)
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
    info->number_ = Str8ToStr16("");
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ADN, info, INDEX);
    ASSERT_TRUE(retUpdate);

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
                ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), "");
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

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_0700
 * @tc.name     Test the UpdateIccDiallingNumbers interface where "alphaTag_" is an empty string.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_0700, Function | MediumTest | Level1)
{
    g_proxy.DeletePosition1Contact();
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = INDEX;
    info->alphaTag_ = Str8ToStr16(NAME);
    info->number_ = Str8ToStr16(NUMBER);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_TRUE(ret);

    info->alphaTag_ = Str8ToStr16("");
    info->number_ = Str8ToStr16(NEW_NUMBER);
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ADN, info, INDEX);
    ASSERT_TRUE(retUpdate);

    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    bool notEmpty = !vecDialNumInfo.empty();
    bool findRecordNum = false;
    if (notEmpty) {
        for (auto iter = vecDialNumInfo.begin(); iter != vecDialNumInfo.end(); iter++) {
            if ((*iter)->recordNumber_ == INDEX) {
                findRecordNum = true;
                ASSERT_EQ((*iter)->recordNumber_, INDEX);
                ASSERT_STREQ(Str16ToStr8((*iter)->alphaTag_).c_str(), "");
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

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_0800
 * @tc.name     Test UpdateIccDiallingNumbers where "recordNumber" does not exist.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_0800, Function | MediumTest | Level1)
{
    g_proxy.DeletePosition1Contact();
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = INDEX;
    info->alphaTag_ = Str8ToStr16(NEW_NAME);
    info->number_ = Str8ToStr16(NEW_NUMBER);
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ADN, info, INDEX);
    ASSERT_FALSE(retUpdate);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_0900
 * @tc.name     Test the UpdateIccDiallingNumbers interface, where "recordNumber" does not exist
 *              and "alphaTag" and "number_" are empty strings.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_0900, Function | MediumTest | Level1)
{
    g_proxy.DeletePosition1Contact();
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = INDEX;
    info->alphaTag_ = Str8ToStr16("");
    info->number_ = Str8ToStr16("");
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ADN, info, INDEX);
    ASSERT_FALSE(retUpdate);
}