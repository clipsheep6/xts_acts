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

#define NETWORSEARCH_MOCK_TEST
#include "network_search_test.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;
using namespace OHOS::Telephony::NetworkSearch;
using namespace NetworkSearch;

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkState_0400
 * @tc.name    Network status change, get the network registration status
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkState_0400, Function | MediumTest | Level3)
{
    g_mockVender->MockVendorSetReg(DOMAIN_TYPE_PS, static_cast<int>(RegServiceState::REG_STATE_IN_SERVICE));
    g_mockVender->MockVendorSetTech(DOMAIN_TYPE_PS, static_cast<int>(RadioTech::RADIO_TECHNOLOGY_GSM));
    g_mockVender->MockVendorSetReg(DOMAIN_TYPE_CS, static_cast<int>(RegServiceState::REG_STATE_IN_SERVICE));
    g_mockVender->MockVendorSetTech(DOMAIN_TYPE_CS, static_cast<int>(RadioTech::RADIO_TECHNOLOGY_GSM));
    sleep(1);
    int regState = static_cast<int>(GetNetworkState()->GetRegStatus());
    EXPECT_EQ(regState, static_cast<int>(RegServiceState::REG_STATE_IN_SERVICE));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkState_0500
 * @tc.name    If the network status changes,the resident mode is mobile, obtain the current operator's long name is
 *             CHINA MOBILE, short name is CMCC and numeric is 46000
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkState_0500, Function | MediumTest | Level3)
{
    SetMockOperatorData("CHINA MOBILE", "CMCC", "46000");
    std::string plmnNumeric = (GetNetworkState()->GetPlmnNumeric());
    ASSERT_STREQ(plmnNumeric.c_str(), "46000");
    std::string shortOperatorName = (GetNetworkState()->GetShortOperatorName());
    ASSERT_STREQ(shortOperatorName.c_str(), "CMCC");
    std::string longOperatorName = (GetNetworkState()->GetLongOperatorName());
    ASSERT_STREQ(longOperatorName.c_str(), "CHINA MOBILE");
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkState_0600
 * @tc.name    If the network status changes, the resident mode is mobile, obtain the current operator's long name is
 *             China Unicom, short name is CU and numeric is 46001
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkState_0600, Function | MediumTest | Level3)
{
    SetMockOperatorData("China Unicom", "CU", "46001");
    std::string plmnNumeric = (GetNetworkState()->GetPlmnNumeric());
    ASSERT_STREQ(plmnNumeric.c_str(), "46001");
    std::string shortOperatorName = (GetNetworkState()->GetShortOperatorName());
    ASSERT_STREQ(shortOperatorName.c_str(), "CU");
    std::string longOperatorName = (GetNetworkState()->GetLongOperatorName());
    ASSERT_STREQ(longOperatorName.c_str(), "China Unicom");
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkState_0700
 * @tc.name    If the network status changes, the resident mode is mobile, obtain the current operator's long name is
 *             China Telecom, short name is CT and numeric is 46003
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkState_0700, Function | MediumTest | Level3)
{
    SetMockOperatorData("China Telecom", "CT", "46003");
    std::string plmnNumeric = (GetNetworkState()->GetPlmnNumeric());
    ASSERT_STREQ(plmnNumeric.c_str(), "46003");
    std::string shortOperatorName = (GetNetworkState()->GetShortOperatorName());
    ASSERT_STREQ(shortOperatorName.c_str(), "CT");
    std::string longOperatorName = (GetNetworkState()->GetLongOperatorName());
    ASSERT_STREQ(longOperatorName.c_str(), "China Telecom");
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkState_0900
 * @tc.name    Network status change, get the network registration status is REG_STATE_UNKNOWN
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkState_0900, Function | MediumTest | Level3)
{
    g_mockVender->MockVendorSetReg(DOMAIN_TYPE_PS, static_cast<int>(RegServiceState::REG_STATE_UNKNOWN));
    g_mockVender->MockVendorSetTech(DOMAIN_TYPE_PS, static_cast<int>(RadioTech::RADIO_TECHNOLOGY_GSM));
    g_mockVender->MockVendorSetReg(DOMAIN_TYPE_CS, static_cast<int>(RegServiceState::REG_STATE_UNKNOWN));
    g_mockVender->MockVendorSetTech(DOMAIN_TYPE_CS, static_cast<int>(RadioTech::RADIO_TECHNOLOGY_GSM));
    sleep(1);
    int regState = static_cast<int>(GetNetworkState()->GetRegStatus());
    EXPECT_EQ(regState, static_cast<int>(RegServiceState::REG_STATE_UNKNOWN));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkState_1000
 * @tc.name    Network status change, get the network registration status is REG_STATE_NO_SERVICE
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkState_1000, Function | MediumTest | Level3)
{
    g_mockVender->MockVendorSetReg(DOMAIN_TYPE_PS, static_cast<int>(RegServiceState::REG_STATE_NO_SERVICE));
    g_mockVender->MockVendorSetTech(DOMAIN_TYPE_PS, static_cast<int>(RadioTech::RADIO_TECHNOLOGY_GSM));
    g_mockVender->MockVendorSetReg(DOMAIN_TYPE_CS, static_cast<int>(RegServiceState::REG_STATE_NO_SERVICE));
    g_mockVender->MockVendorSetTech(DOMAIN_TYPE_CS, static_cast<int>(RadioTech::RADIO_TECHNOLOGY_GSM));
    sleep(1);
    int regState = static_cast<int>(GetNetworkState()->GetRegStatus());
    EXPECT_EQ(regState, static_cast<int>(RegServiceState::REG_STATE_NO_SERVICE));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkState_1100
 * @tc.name    Network status change, get the network registration status is REG_STATE_SEARCH
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkState_1100, Function | MediumTest | Level3)
{
    g_mockVender->MockVendorSetReg(DOMAIN_TYPE_PS, static_cast<int>(RegServiceState::REG_STATE_SEARCH));
    g_mockVender->MockVendorSetTech(DOMAIN_TYPE_PS, static_cast<int>(RadioTech::RADIO_TECHNOLOGY_GSM));
    g_mockVender->MockVendorSetReg(DOMAIN_TYPE_CS, static_cast<int>(RegServiceState::REG_STATE_SEARCH));
    g_mockVender->MockVendorSetTech(DOMAIN_TYPE_CS, static_cast<int>(RadioTech::RADIO_TECHNOLOGY_GSM));
    sleep(1);
    int regState = static_cast<int>(GetNetworkState()->GetRegStatus());
    EXPECT_EQ(regState, static_cast<int>(RegServiceState::REG_STATE_SEARCH));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetOperatorNumeric_0400
 * @tc.name    Register as China Mobile operator to test the operatorNumeric is "46000"
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetOperatorNumeric_0400, Function | MediumTest | Level3)
{
    SetMockOperatorData("CHINA MOBILE", "CMCC", "46000");
    std::string operatorNumeric = Str16ToStr8(GetProxy()->GetOperatorNumeric(SLOT_ID));
    ASSERT_STREQ(operatorNumeric.c_str(), "46000");
}

/*
 * @tc.number  Telephony_NetworkSearch_GetOperatorNumeric_0500
 * @tc.name    Register as China Unicom operator to test the operatorNumeric is "46001"
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetOperatorNumeric_0500, Function | MediumTest | Level3)
{
    SetMockOperatorData("China Unicom", "CU", "46001");
    std::string operatorNumeric = Str16ToStr8(GetProxy()->GetOperatorNumeric(SLOT_ID));
    ASSERT_STREQ(operatorNumeric.c_str(), "46001");
}

/*
 * @tc.number  Telephony_NetworkSearch_GetOperatorNumeric_0600
 * @tc.name    Register as China Telecom operator to test the operatorNumeric is "46003"
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetOperatorNumeric_0600, Function | MediumTest | Level3)
{
    SetMockOperatorData("China Telecom", "CT", "46003");
    std::string operatorNumeric = Str16ToStr8(GetProxy()->GetOperatorNumeric(SLOT_ID));
    ASSERT_STREQ(operatorNumeric.c_str(), "46003");
}

/*
 * @tc.number  Telephony_NetworkSearch_GetOperatorName_0400
 * @tc.name    Register as China Mobile operator to test the longName is "China Mobile"
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetOperatorName_0400, Function | MediumTest | Level3)
{
    SetMockOperatorData("CHINA MOBILE", "CMCC", "46000");
    std::string operatorName = Str16ToStr8(GetProxy()->GetOperatorName(SLOT_ID));
    ASSERT_STREQ(operatorName.c_str(), "CHINA MOBILE");
}

/*
 * @tc.number  Telephony_NetworkSearch_GetOperatorName_0500
 * @tc.name    Register as China Unicom operator to test the longName is "China Unicom"
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetOperatorName_0500, Function | MediumTest | Level3)
{
    SetMockOperatorData("China Unicom", "CU", "46001");
    std::string operatorName = Str16ToStr8(GetProxy()->GetOperatorName(SLOT_ID));
    ASSERT_STREQ(operatorName.c_str(), "China Unicom");
}

/*
 * @tc.number  Telephony_NetworkSearch_GetOperatorName_0600
 * @tc.name    Register as China Telecom operator to test the longName is "China Telecom"
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetOperatorName_0600, Function | MediumTest | Level3)
{
    SetMockOperatorData("China Telecom", "CT", "46003");
    std::string operatorName = Str16ToStr8(GetProxy()->GetOperatorName(SLOT_ID));
    ASSERT_STREQ(operatorName.c_str(), "China Telecom");
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkSearchInformation_0500
 * @tc.name    the resident mode is mobile, obtain the current operator's long name is CHINA MOBILE, short name is CMCC
 *             and numeric is 46000
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkSearchInformation_0500, Function | MediumTest | Level3)
{
    SetMockOperatorData("CHINA MOBILE", "CMCC", "46000");
    g_mockVender->MockVendorSetPlmnState(static_cast<int>(NetworkPlmnState::NETWORK_PLMN_STATE_AVAILABLE));
    g_mockVender->MockVendorSetRat(static_cast<int>(NetworkRat::NETWORK_LTE));
    bool networkSearchResult = GetProxy()->GetNetworkSearchInformation(SLOT_ID, g_callback);
    ASSERT_TRUE(networkSearchResult);
    LOCK_NUM_WHILE_EQ((int)operatorLongName.size(), NETWORK_WAIT_LOCK_SIZE, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    LOCK_STRING_WHILE_NE(operatorNumeric.at(0).c_str(), "46000", LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    LOCK_STRING_WHILE_NE(operatorShortName.at(0).c_str(), "CMCC", LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    LOCK_STRING_WHILE_NE(operatorLongName.at(0).c_str(), "CHINA MOBILE", LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    LOCK_NUM_WHILE_NE(networkPlmnState.at(0), static_cast<int>(NetworkPlmnState::NETWORK_PLMN_STATE_AVAILABLE),
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    LOCK_NUM_WHILE_NE(networkRat.at(0), static_cast<int>(NetworkRat::NETWORK_LTE), LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkSearchInformation_0600
 * @tc.name    the resident mode is mobile, obtain the current operator's long name is China Unicom, short name is CU
 *             and numeric is 46001
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkSearchInformation_0600, Function | MediumTest | Level3)
{
    SetMockOperatorData("China Unicom", "CU", "46001");
    g_mockVender->MockVendorSetPlmnState(static_cast<int>(NetworkPlmnState::NETWORK_PLMN_STATE_REGISTERED));
    g_mockVender->MockVendorSetRat(static_cast<int>(NetworkRat::NETWORK_GSM_OR_GPRS));
    bool networkSearchResult = GetProxy()->GetNetworkSearchInformation(SLOT_ID, g_callback);
    ASSERT_TRUE(networkSearchResult);
    LOCK_NUM_WHILE_EQ((int)operatorLongName.size(), NETWORK_WAIT_LOCK_SIZE, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    LOCK_STRING_WHILE_NE(operatorNumeric.at(0).c_str(), "46001", LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    LOCK_STRING_WHILE_NE(operatorShortName.at(0).c_str(), "CU", LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    LOCK_STRING_WHILE_NE(operatorLongName.at(0).c_str(), "China Unicom", LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    LOCK_NUM_WHILE_NE(networkPlmnState.at(0), static_cast<int>(NetworkPlmnState::NETWORK_PLMN_STATE_REGISTERED),
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    LOCK_NUM_WHILE_NE(
        networkRat.at(0), static_cast<int>(NetworkRat::NETWORK_GSM_OR_GPRS), LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkSearchInformation_0700
 * @tc.name    the resident mode is mobile, obtain the current operator's long name is China Telecom, short name is CT
 *             and numeric is 46003
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkSearchInformation_0700, Function | MediumTest | Level3)
{
    SetMockOperatorData("China Telecom", "CT", "46003");
    g_mockVender->MockVendorSetPlmnState(static_cast<int>(NetworkPlmnState::NETWORK_PLMN_STATE_FORBIDDEN));
    g_mockVender->MockVendorSetRat(static_cast<int>(NetworkRat::NETWORK_WCDMA));
    bool networkSearchResult = GetProxy()->GetNetworkSearchInformation(SLOT_ID, g_callback);
    ASSERT_TRUE(networkSearchResult);
    LOCK_NUM_WHILE_EQ((int)operatorLongName.size(), NETWORK_WAIT_LOCK_SIZE, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    LOCK_STRING_WHILE_NE(operatorNumeric.at(0).c_str(), "46003", LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    LOCK_STRING_WHILE_NE(operatorShortName.at(0).c_str(), "CT", LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    LOCK_STRING_WHILE_NE(operatorLongName.at(0).c_str(), "China Telecom", LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    LOCK_NUM_WHILE_NE(networkPlmnState.at(0), static_cast<int>(NetworkPlmnState::NETWORK_PLMN_STATE_FORBIDDEN),
        LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    LOCK_NUM_WHILE_NE(networkRat.at(0), static_cast<int>(NetworkRat::NETWORK_WCDMA), LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetIsoCountryCodeForNetwork_0400
 * @tc.name    Based on China mobile operators, the test country code is "cn"
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetIsoCountryCodeForNetwork_0400, Function | MediumTest | Level3)
{
    SetMockOperatorData("CHINA MOBILE", "CMCC", "46000");
    std::u16string countryCode = GetProxy()->GetIsoCountryCodeForNetwork(SLOT_ID);
    std::string str = Str16ToStr8(countryCode);
    ASSERT_STREQ(str.c_str(), "cn");
}

/*
 * @tc.number  Telephony_NetworkSearch_GetIsoCountryCodeForNetwork_0500
 * @tc.name    Based on China mobile operators, the test country code is "hk"
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetIsoCountryCodeForNetwork_0500, Function | MediumTest | Level3)
{
    SetMockOperatorData("China Telecom", "CT", "45400");
    std::u16string countryCode = GetProxy()->GetIsoCountryCodeForNetwork(SLOT_ID);
    std::string str = Str16ToStr8(countryCode);
    ASSERT_STREQ(str.c_str(), "hk");
}

/*
 * @tc.number  Telephony_NetworkSearch_GetIsoCountryCodeForNetwork_0600
 * @tc.name    Based on China mobile operators, the test country code is "sg"
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetIsoCountryCodeForNetwork_0600, Function | MediumTest | Level3)
{
    SetMockOperatorData("SINGTEL MOBILE", "", "52501");
    std::u16string countryCode = GetProxy()->GetIsoCountryCodeForNetwork(SLOT_ID);
    std::string str = Str16ToStr8(countryCode);
    ASSERT_STREQ(str.c_str(), "sg");
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_1100
 * @tc.name    Use SetPreferredNetwork to set the preferred network mode is CORE_NETWORK_MODE_LTE_WCDMA_GSM to test
 *             the network type from 4G to 3G to 2G
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_1100, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_LTE_WCDMA_GSM), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_AUTO));
    // Analog resident 4G
    g_mockVender->MockVendorSetTech(DOMAIN_TYPE_PS, static_cast<int>(RadioTech::RADIO_TECHNOLOGY_LTE));
    g_mockVender->MockVendorSetTech(DOMAIN_TYPE_CS, static_cast<int>(RadioTech::RADIO_TECHNOLOGY_LTE));
    sleep(1);
    RadioTech getPsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetPsRadioTech());
    EXPECT_EQ(getPsRadioTech, RadioTech::RADIO_TECHNOLOGY_LTE);
    RadioTech getCsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetCsRadioTech());
    EXPECT_EQ(getCsRadioTech, RadioTech::RADIO_TECHNOLOGY_LTE);
    // Analog resident 3G
    g_mockVender->MockVendorSetTech(DOMAIN_TYPE_PS, static_cast<int>(RadioTech::RADIO_TECHNOLOGY_WCDMA));
    g_mockVender->MockVendorSetTech(DOMAIN_TYPE_CS, static_cast<int>(RadioTech::RADIO_TECHNOLOGY_WCDMA));
    sleep(1);
    getPsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetPsRadioTech());
    EXPECT_EQ(getPsRadioTech, RadioTech::RADIO_TECHNOLOGY_WCDMA);
    getCsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetCsRadioTech());
    EXPECT_EQ(getCsRadioTech, RadioTech::RADIO_TECHNOLOGY_WCDMA);
    // Analog resident 2G
    g_mockVender->MockVendorSetTech(DOMAIN_TYPE_PS, static_cast<int>(RadioTech::RADIO_TECHNOLOGY_GSM));
    g_mockVender->MockVendorSetTech(DOMAIN_TYPE_CS, static_cast<int>(RadioTech::RADIO_TECHNOLOGY_GSM));
    sleep(1);
    getPsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetPsRadioTech());
    EXPECT_EQ(getPsRadioTech, RadioTech::RADIO_TECHNOLOGY_GSM);
    getCsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetCsRadioTech());
    EXPECT_EQ(getCsRadioTech, RadioTech::RADIO_TECHNOLOGY_GSM);
}