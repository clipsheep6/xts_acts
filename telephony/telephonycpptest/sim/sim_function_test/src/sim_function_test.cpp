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
const int32_t SimTest::INVALID_VALUE = -1;
const int32_t SimTest::OTHER_ABNORMAL = -2;
const int32_t SimTest::PASSWORD_ERR = -1;
const int32_t SimTest::UNLOCKED = 0;
const int32_t SimTest::SLOTID_4 = 4;
const int32_t SimTest::SLOTID_2 = 2;
const int32_t SimTest::SLOTID_1 = 1;
const int32_t SimTest::SLOTID_0 = 0;
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
const std::string SimTest:: MOBILE_SPN = "00434D4343FFFFFFFFFFFFFFFFFFFFFFFF";
const std::string SimTest:: UNICOM_SPN = "00FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF";
const std::string SimTest:: TELECOM_SPN = "01804E2D56FD75354FE1FFFFFFFFFFFFFF";
const unsigned int SimTest::MIN_LENGTH = 1;

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
 * @tc.name     Get the return value by calling the GetSimAccountInfo interface SIM ID input parameter 1.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimAccountInfo_0100, Function | MediumTest | Level2)
{
    OHOS::Telephony::IccAccountInfo simInfo;
    std::string dispName = "simDefaultDisplayName";
    std::string dispNum = "simDefaultDisplayNumber";
    bool result = g_proxy.GetHandler()->GetSimAccountInfo(SLOTID_0, simInfo);
    ASSERT_TRUE(result);
    ASSERT_EQ(simInfo.slotIndex, SLOTID_0);
    // Return the default piling data as simDefaultDisplayName.
    ASSERT_STREQ(Str16ToStr8(simInfo.displayName).c_str(), dispName.c_str());
    // Return the default piling data as simDefaultDisplayNumber.
    ASSERT_STREQ(Str16ToStr8(simInfo.displayNumber).c_str(), dispNum.c_str());
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