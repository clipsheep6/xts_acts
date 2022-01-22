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
const int32_t SimTest::INVALID_VALUE = -1;
const int32_t SimTest::OTHER_ABNORMAL = -2;
const int32_t SimTest::SLOT_ID_3 = 3;
const int32_t SimTest::SLOT_ID_2 = 2;
const int32_t SimTest::VAILD_SLOT_ID = EFFECTIVE_SLOT_ID;
const int32_t SimTest::SLOTID_MINUS = -1;
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
const unsigned int SimTest::PHONE_NUMBER_LENGTH = 11;

/**
 * @tc.number   Telephony_Sim_GetSimState_0100
 * @tc.name     Enter normal parameters to test whether the GetSimState interface function can execute normally.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimState_0100, Function | MediumTest | Level1)
{
    int32_t result = g_proxy.GetHandler()->GetSimState(VAILD_SLOT_ID);
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::SimState::SIM_STATE_READY);
}

/**
 * @tc.number   Telephony_Sim_GetSimState_0200
 * @tc.name     Enter exception parameters to test whether the GetSimState interface function can execute normally.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimState_0200, Function | MediumTest | Level2)
{
    int32_t result = g_proxy.GetHandler()->GetSimState(SLOT_ID_3);
    ASSERT_EQ(result, INVALID_VALUE);
}

/**
 * @tc.number   Telephony_Sim_HasSimCard_0100
 * @tc.name     Enter normal parameters to test whether the HasSimCard interface function can execute normally.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_HasSimCard_0100, Function | MediumTest | Level1)
{
    bool result = g_proxy.GetHandler()->HasSimCard(VAILD_SLOT_ID);
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_Sim_HasSimCard_0200
 * @tc.name     Enter exception parameters to test whether the HasSimCard interface function can execute normally.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_HasSimCard_0200, Function | MediumTest | Level2)
{
    bool result = g_proxy.GetHandler()->HasSimCard(SLOT_ID_3);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_GetSimIccId_0100
 * @tc.name     Enter normal parameters to test whether the GetSimIccId interface function can execute normally.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimIccId_0100, Function | MediumTest | Level2)
{
    std::u16string result = g_proxy.GetHandler()->GetSimIccId(VAILD_SLOT_ID);
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
    std::u16string result = g_proxy.GetHandler()->GetSimIccId(SLOT_ID_3);
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
    std::u16string result = g_proxy.GetHandler()->GetIMSI(VAILD_SLOT_ID);
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
    std::u16string result = g_proxy.GetHandler()->GetIMSI(SLOT_ID_3);
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

/**
 * @tc.number   Telephony_Sim_GetSimOperatorNumeric_0200
 * @tc.name     Enter exception parameters to test whether the GetSimOperatorNumeric interface function
 *              can execute normally.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimOperatorNumeric_0200, Function | MediumTest | Level4)
{
    std::u16string result = g_proxy.GetHandler()->GetSimOperatorNumeric(SLOT_ID_3);
    const char *temp = nullptr;
    temp = Str16ToStr8(result).c_str();
    ASSERT_STREQ(temp, "");
}

/**
 * @tc.number   Telephony_Sim_GetISOCountryCodeForSim_0100
 * @tc.name     Enter normal parameters to test whether the GetISOCountryCodeForSim interface function can
 *              execute normally.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetISOCountryCodeForSim_0100, Function | MediumTest | Level2)
{
    std::string countryCode = "cn";
    std::u16string result = g_proxy.GetHandler()->GetISOCountryCodeForSim(VAILD_SLOT_ID);
    const char *temp = nullptr;
    temp = Str16ToStr8(result).c_str();
    // The country code for mainland China is cn.
    ASSERT_STREQ(temp, countryCode.c_str());
}

/**
 * @tc.number   Telephony_Sim_GetISOCountryCodeForSim_0200
 * @tc.name     Enter exception parameters to test whether the GetISOCountryCodeForSim interface function
 *              can execute normally.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetISOCountryCodeForSim_0200, Function | MediumTest | Level4)
{
    std::u16string result = g_proxy.GetHandler()->GetISOCountryCodeForSim(SLOT_ID_3);
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
    std::u16string result = g_proxy.GetHandler()->GetSimSpn(VAILD_SLOT_ID);
    std::string value = Str16ToStr8(g_proxy.GetHandler()->GetSimOperatorNumeric(VAILD_SLOT_ID));
    if ((value == MOBILE_CODE_1) || (value == MOBILE_CODE_2) || (value == MOBILE_CODE_3) || (value == MOBILE_CODE_4)) {
        ASSERT_STREQ(Str16ToStr8(result).c_str(), MOBILE_SPN.c_str());
    } else if ((value == UNICOM_CODE_1) || (value == UNICOM_CODE_2) || (value == UNICOM_CODE_3)) {
        ASSERT_STREQ(Str16ToStr8(result).c_str(), UNICOM_SPN.c_str());
    } else if ((value == CHINANET_CODE_1) || (value == CHINANET_CODE_2) || (value == CHINANET_CODE_3)) {
        ASSERT_STREQ(Str16ToStr8(result).c_str(), CHINANET_SPN.c_str());
    } else {
        LOG("Get Sim Operator Numeric Is %s.", value.c_str());
    }
}

/**
 * @tc.number   Telephony_Sim_GetSimSpn_0200
 * @tc.name     Enter exception parameters to test whether the GetSimSpn interface function can execute normally.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimSpn_0200, Function | MediumTest | Level4)
{
    std::u16string result = g_proxy.GetHandler()->GetSimSpn(SLOT_ID_3);
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
    std::u16string result = g_proxy.GetHandler()->GetSimGid1(VAILD_SLOT_ID);
    std::string value = Str16ToStr8(result);
    ASSERT_STRNE(Str16ToStr8(result).c_str(), "");
    ASSERT_TRUE((value.length() >= MIN_LENGTH));
}

/**
 * @tc.number   Telephony_Sim_GetSimGid1_0200
 * @tc.name     Enter exception parameters to test whether the GetSimGid1 interface function can execute normally.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimGid1_0200, Function | MediumTest | Level4)
{
    std::u16string result = g_proxy.GetHandler()->GetSimGid1(SLOT_ID_3);
    const char *temp = nullptr;
    temp = Str16ToStr8(result).c_str();
    ASSERT_STREQ(temp, "");
}

/**
 * @tc.number   Telephony_Sim_GetDefaultVoiceSlotId_0100
 * @tc.name     Test the getDefaultVoiceLotid interface to see if the calling card has been set.
 * @tc.desc     Function test
 */
HWTEST_F(SimDefaultIdTest, Telephony_Sim_GetDefaultVoiceSlotId_0100, Function | MediumTest | Level2)
{
    bool ret = g_proxy.GetHandler()->SetDefaultVoiceSlotId(SimTest::VAILD_SLOT_ID);
    ASSERT_TRUE(ret);
    int32_t result = g_proxy.GetHandler()->GetDefaultVoiceSlotId();
    ASSERT_EQ(result, SimTest::VAILD_SLOT_ID);
}

/**
 * @tc.number   Telephony_Sim_GetDefaultVoiceSlotId_0200
 * @tc.name     Set the SIM card 1 as the default calling card and get the return value
 *              by calling the getDefaultVoiceLotid interface.
 * @tc.desc     Function test
 */
HWTEST_F(SimDefaultIdTest, Telephony_Sim_GetDefaultVoiceSlotId_0200, Function | MediumTest | Level4)
{
    bool ret = g_proxy.GetHandler()->SetDefaultVoiceSlotId(SimTest::SLOT_ID_2);
    ASSERT_FALSE(ret);
    int32_t result = g_proxy.GetHandler()->GetDefaultVoiceSlotId();
    ASSERT_NE(result, SimTest::SLOT_ID_2);
}

/**
 * @tc.number   Telephony_Sim_SetDefaultVoiceSlotId_0100
 * @tc.name     Enter the exception parameter 0 to get the return value of the SetDefaultVoiceLotid interface.
 * @tc.desc     Function test
 */
HWTEST_F(SimDefaultIdTest, Telephony_Sim_SetDefaultVoiceSlotId_0100, Function | MediumTest | Level4)
{
    bool result = g_proxy.GetHandler()->SetDefaultVoiceSlotId(SimTest::SLOT_ID_3);
    ASSERT_FALSE(result);
    int32_t ret = g_proxy.GetHandler()->GetDefaultVoiceSlotId();
    ASSERT_NE(ret, SimTest::SLOT_ID_3);
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
    bool retValue = g_proxy.GetHandler()->UnlockPin(VAILD_SLOT_ID, pin, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin_1000
 * @tc.name     When the card status is SIM_STATE_READY, test the Unlockpin interface phoneId exception parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin_1000, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string defaultPin = Str8ToStr16("1234");

    bool retValue = g_proxy.GetHandler()->UnlockPin(SLOT_ID_3, defaultPin, response);
    ASSERT_FALSE(retValue);
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

    bool retValue = g_proxy.GetHandler()->UnlockPuk(VAILD_SLOT_ID, pin, puk, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk_1100
 * @tc.name     Test the UnlockPuk interface with the phoneId exception parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk_1100, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin = Str8ToStr16("1234");
    std::u16string puk = Str8ToStr16("12345678");

    bool retValue = g_proxy.GetHandler()->UnlockPuk(SLOT_ID_3, pin, puk, response);
    ASSERT_FALSE(retValue);
}

/**
 * @tc.number   Telephony_Sim_AlterPin_1300
 * @tc.name     Test AlterPin interface,phoneId exception entered.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin_1300, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin = Str8ToStr16("1234");
    std::u16string newPin = Str8ToStr16("1234");

    bool retValue = g_proxy.GetHandler()->AlterPin(SLOT_ID_3, newPin, oldPin, response);
    ASSERT_FALSE(retValue);
}

/**
 * @tc.number   Telephony_Sim_AlterPin_1400
 * @tc.name     Test AlterPin interface,phoneId exception entered.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin_1400, Function | MediumTest | Level2)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin = Str8ToStr16("9999");
    std::u16string newPin = Str8ToStr16("1234");
    std::string defaultPin = "1234";

    bool retValue = g_proxy.GetHandler()->AlterPin(VAILD_SLOT_ID, newPin, oldPin, response);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);
}
