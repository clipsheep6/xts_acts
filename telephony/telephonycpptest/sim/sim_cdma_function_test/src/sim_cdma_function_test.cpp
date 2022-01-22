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
#include "sim_cdma_test.h"

using namespace testing::ext;
using namespace OHOS;
const int32_t SimTest::SLOT_ID_2 = 2;
const int32_t SimTest::SLOT_ID_3 = 3;
const int32_t SimTest::VAILD_SLOT_ID = EFFECTIVE_SLOT_ID;
const int32_t SimTest::SLOTID_MINUS = -1;
const unsigned int SimTest::ICCID_LENGTH = 20;
const unsigned int SimTest::IMSI_LENGTH = 15;
const unsigned int SimTest::OPERATOR_NUM_LENGTH = 5;

/*
 * @tc.number  Telephony_Sim_GetSimIccId_0500
 * @tc.name    In CDMA card type, test GetSimIccId interface slotId and check the returned value.
 * @tc.desc    Function test
 */
HWTEST_F(SimCDMATest, Telephony_Sim_GetSimIccId_0500, Function | MediumTest | Level2)
{
    if (!isCDMA) {
        LOG("The current sim card type is not CDMA.");
        return;
    }
    std::u16string result = g_proxy.GetHandler()->GetSimIccId(SimTest::VAILD_SLOT_ID);
    const char *temp = nullptr;
    temp = Str16ToStr8(result).c_str();
    std::string iccId = Str16ToStr8(result);
    ASSERT_STRNE(temp, "");
    // ICCID is a fixed string of 20 characters.
    ASSERT_EQ(iccId.length(), SimTest::ICCID_LENGTH);
}

/**
 * @tc.number   Telephony_Sim_GetSimIccId_0600
 * @tc.name     In CDMA card type, test GetSimIccId slotId exception input parameter -1 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimCDMATest, Telephony_Sim_GetSimIccId_0600, Function | MediumTest | Level4)
{
    if (!isCDMA) {
        LOG("The current sim card type is not CDMA.");
        return;
    }
    std::u16string result = g_proxy.GetHandler()->GetSimIccId(SimTest::SLOTID_MINUS);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetSimIccId_0700
 * @tc.name     In CDMA card type, test GetSimIccId slotId exception input parameter 1 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimCDMATest, Telephony_Sim_GetSimIccId_0700, Function | MediumTest | Level4)
{
    if (!isCDMA) {
        LOG("The current sim card type is not CDMA.");
        return;
    }
    std::u16string result = g_proxy.GetHandler()->GetSimIccId(SimTest::SLOT_ID_3);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetSimIccId_0800
 * @tc.name     In CDMA card type, test GetSimIccId slotId exception input parameter 2 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimCDMATest, Telephony_Sim_GetSimIccId_0800, Function | MediumTest | Level4)
{
    if (!isCDMA) {
        LOG("The current sim card type is not CDMA.");
        return;
    }
    std::u16string result = g_proxy.GetHandler()->GetSimIccId(SimTest::SLOT_ID_2);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetISOCountryCodeForSim_0500
 * @tc.name     Test the return value of GetISOCountryCodeForSim interface slotId normal input parameter
 *              in CDMA card type.
 * @tc.desc     Function test
 */
HWTEST_F(SimCDMATest, Telephony_Sim_GetISOCountryCodeForSim_0500, Function | MediumTest | Level2)
{
    if (!isCDMA) {
        LOG("The current sim card type is not CDMA.");
        return;
    }
    std::string countryCode = "cn";
    std::u16string result = g_proxy.GetHandler()->GetISOCountryCodeForSim(SimTest::VAILD_SLOT_ID);
    // The country code for mainland China is cn.
    ASSERT_STREQ(Str16ToStr8(result).c_str(), countryCode.c_str());
}

/**
 * @tc.number   Telephony_Sim_GetISOCountryCodeForSim_0600
 * @tc.name     Test GetISOCountryCodeForSim interface slotId exception input parameter -1 under CDMA card type
 *              and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimCDMATest, Telephony_Sim_GetISOCountryCodeForSim_0600, Function | MediumTest | Level4)
{
    if (!isCDMA) {
        LOG("The current sim card type is not CDMA.");
        return;
    }
    std::u16string result = g_proxy.GetHandler()->GetISOCountryCodeForSim(SimTest::SLOTID_MINUS);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetISOCountryCodeForSim_0700
 * @tc.name     Test GetISOCountryCodeForSim interface slotId exception input parameter 1 under CDMA card type
 *              and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimCDMATest, Telephony_Sim_GetISOCountryCodeForSim_0700, Function | MediumTest | Level4)
{
    if (!isCDMA) {
        LOG("The current sim card type is not CDMA.");
        return;
    }
    std::u16string result = g_proxy.GetHandler()->GetISOCountryCodeForSim(SimTest::SLOT_ID_3);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetISOCountryCodeForSim_0800
 * @tc.name     Test GetISOCountryCodeForSim interface slotId exception input parameter 2 under CDMA card type
 *              and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimCDMATest, Telephony_Sim_GetISOCountryCodeForSim_0800, Function | MediumTest | Level4)
{
    if (!isCDMA) {
        LOG("The current sim card type is not CDMA.");
        return;
    }
    std::u16string result = g_proxy.GetHandler()->GetISOCountryCodeForSim(SimTest::SLOT_ID_2);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetSimSpn_0500
 * @tc.name     In CDMA card type test GetSimSpn slotId normal input parameter and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimCDMATest, Telephony_Sim_GetSimSpn_0500, Function | MediumTest | Level2)
{
    if (!isCDMA) {
        LOG("The current sim card type is not CDMA.");
        return;
    }
    std::string retSpn = "中国电信"; // Pile driving data.
    std::u16string result = g_proxy.GetHandler()->GetSimSpn(SimTest::VAILD_SLOT_ID);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), retSpn.c_str());
}

/**
 * @tc.number   Telephony_Sim_GetSimSpn_0600
 * @tc.name     In CDMA card type, test GetSimSpn slotId exception input parameter -1 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimCDMATest, Telephony_Sim_GetSimSpn_0600, Function | MediumTest | Level4)
{
    if (!isCDMA) {
        LOG("The current sim card type is not CDMA.");
        return;
    }
    std::u16string result = g_proxy.GetHandler()->GetSimSpn(SimTest::SLOTID_MINUS);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetSimSpn_0700
 * @tc.name     In CDMA card type, test GetSimSpn slotId exception input parameter 1 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimCDMATest, Telephony_Sim_GetSimSpn_0700, Function | MediumTest | Level4)
{
    if (!isCDMA) {
        LOG("The current sim card type is not CDMA.");
        return;
    }
    std::u16string result = g_proxy.GetHandler()->GetSimSpn(SimTest::SLOT_ID_3);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetSimSpn_0800
 * @tc.name     In CDMA card type, test GetSimSpn slotId exception input parameter 2 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimCDMATest, Telephony_Sim_GetSimSpn_0800, Function | MediumTest | Level4)
{
    if (!isCDMA) {
        LOG("The current sim card type is not CDMA.");
        return;
    }
    std::u16string result = g_proxy.GetHandler()->GetSimSpn(SimTest::SLOT_ID_2);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetIMSI_0500
 * @tc.name     Test the return value of the slotId normal input parameter of GetIMSI interface in CDMA card type.
 * @tc.desc     Function test
 */
HWTEST_F(SimCDMATest, Telephony_Sim_GetIMSI_0500, Function | MediumTest | Level2)
{
    if (!isCDMA) {
        LOG("The current sim card type is not CDMA.");
        return;
    }
    std::u16string result = g_proxy.GetHandler()->GetIMSI(SimTest::VAILD_SLOT_ID);
    const char *temp = nullptr;
    temp = Str16ToStr8(result).c_str();
    std::string imsi = Str16ToStr8(result);
    ASSERT_STRNE(temp, "");
    // IMSI is a fixed string of 15 characters.
    ASSERT_EQ(imsi.length(), SimTest::IMSI_LENGTH);
}

/**
 * @tc.number   Telephony_Sim_GetIMSI_0600
 * @tc.name     est the return value of GetIMSI interface slotId exception input parameter -1 in CDMA card type.
 * @tc.desc     Function test
 */
HWTEST_F(SimCDMATest, Telephony_Sim_GetIMSI_0600, Function | MediumTest | Level4)
{
    if (!isCDMA) {
        LOG("The current sim card type is not CDMA.");
        return;
    }
    std::u16string result = g_proxy.GetHandler()->GetIMSI(SimTest::SLOTID_MINUS);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetIMSI_0700
 * @tc.name     est the return value of GetIMSI interface slotId exception input parameter 1 in CDMA card type.
 * @tc.desc     Function test
 */
HWTEST_F(SimCDMATest, Telephony_Sim_GetIMSI_0700, Function | MediumTest | Level4)
{
    if (!isCDMA) {
        LOG("The current sim card type is not CDMA.");
        return;
    }
    std::u16string result = g_proxy.GetHandler()->GetIMSI(SimTest::SLOT_ID_3);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetIMSI_0800
 * @tc.name     est the return value of GetIMSI interface slotId exception input parameter 2 in CDMA card type.
 * @tc.desc     Function test
 */
HWTEST_F(SimCDMATest, Telephony_Sim_GetIMSI_0800, Function | MediumTest | Level4)
{
    if (!isCDMA) {
        LOG("The current sim card type is not CDMA.");
        return;
    }
    std::u16string result = g_proxy.GetHandler()->GetIMSI(SimTest::SLOT_ID_2);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetSimOperatorNumeric_0500
 * @tc.name     Test the slotId normal input parameter of GetSimOperatorNumeric interface under CDMA card file and
 *              check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimCDMATest, Telephony_Sim_GetSimOperatorNumeric_0500, Function | MediumTest | Level2)
{
    if (!isCDMA) {
        LOG("The current sim card type is not CDMA.");
        return;
    }
    std::string operatorNumTopThree = "460";
    std::u16string result = g_proxy.GetHandler()->GetSimOperatorNumeric(SimTest::VAILD_SLOT_ID);
    const char *temp = nullptr;
    temp = Str16ToStr8(result).c_str();
    std::string num = Str16ToStr8(result);
    ASSERT_STRNE(temp, "");
    // The length of operator numeric in mainland China is 5.
    ASSERT_EQ(num.length(), SimTest::OPERATOR_NUM_LENGTH);
    // The first three operator numeric in mainland China is "460".
    ASSERT_STREQ(num.substr(0, 3).c_str(), operatorNumTopThree.c_str());
}

/**
 * @tc.number   Telephony_Sim_GetSimOperatorNumeric_0600
 * @tc.name     Test slotId exception input parameter -1 of the GetSimOperatorNumeric interface under the CDMA
 *              card type and check the return value..
 * @tc.desc     Function test
 */
HWTEST_F(SimCDMATest, Telephony_Sim_GetSimOperatorNumeric_0600, Function | MediumTest | Level4)
{
    if (!isCDMA) {
        LOG("The current sim card type is not CDMA.");
        return;
    }
    std::u16string result = g_proxy.GetHandler()->GetSimOperatorNumeric(SimTest::SLOTID_MINUS);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetSimOperatorNumeric_0700
 * @tc.name     Test slotId exception input parameter 1 of the GetSimOperatorNumeric interface under the CDMA
 *              card type and check the return value..
 * @tc.desc     Function test
 */
HWTEST_F(SimCDMATest, Telephony_Sim_GetSimOperatorNumeric_0700, Function | MediumTest | Level4)
{
    if (!isCDMA) {
        LOG("The current sim card type is not CDMA.");
        return;
    }
    std::u16string result = g_proxy.GetHandler()->GetSimOperatorNumeric(SimTest::SLOT_ID_3);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetSimOperatorNumeric_0800
 * @tc.name     Test slotId exception input parameter 2 of the GetSimOperatorNumeric interface under the CDMA
 *              card type and check the return value..
 * @tc.desc     Function test
 */
HWTEST_F(SimCDMATest, Telephony_Sim_GetSimOperatorNumeric_0800, Function | MediumTest | Level4)
{
    if (!isCDMA) {
        LOG("The current sim card type is not CDMA.");
        return;
    }
    std::u16string result = g_proxy.GetHandler()->GetSimOperatorNumeric(SimTest::SLOT_ID_2);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), "");
}