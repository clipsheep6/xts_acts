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
    std::string dispName = "simDefaultDisplayName";
    std::string dispNum = "simDefaultDisplayNumber";
    OHOS::Telephony::IccAccountInfo simInfo;
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        int32_t result = g_proxy.GetHandler()->GetSimAccountInfo(SLOTID_0, simInfo);
        ASSERT_TRUE(result);
        ASSERT_EQ(simInfo.slotIndex, SLOTID_0);
        // Return the default piling data as simDefaultDisplayName.
        ASSERT_STREQ(Str16ToStr8(simInfo.displayName).c_str(), dispName.c_str());
        // Return the default piling data as simDefaultDisplayNumber.
        ASSERT_STREQ(Str16ToStr8(simInfo.displayNumber).c_str(), dispNum.c_str());
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