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

#define NETWORSEARCH_FUNCTION_TEST
#include "network_search_test.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;
using namespace OHOS::Telephony::NetworkSearch;
using namespace NetworkSearch;

/*
 * @tc.number  Telephony_NetworkSearch_GetRadioState_0100
 * @tc.name    To test the GetRadioState() get the current radio status when the radio status is off
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetRadioState_0100, Function | MediumTest | Level3)
{
    bool setRadioState = GetProxy()->SetRadioState(SLOT_ID, false, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getRadioState = GetProxy()->GetRadioState(SLOT_ID, g_callback);
    ASSERT_TRUE(getRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_FALSE(getRadioStatusCallback);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetRadioState_0200
 * @tc.name    To test the GetRadioState() get the current radio status when the radio status is on
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetRadioState_0200, Function | MediumTest | Level3)
{
    bool setRadioState = GetProxy()->SetRadioState(SLOT_ID, true, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getRadioState = GetProxy()->GetRadioState(SLOT_ID, g_callback);
    ASSERT_TRUE(getRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_TRUE(getRadioStatusCallback);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetRadioState_0100
 * @tc.name    Use SetRadioState() set the current radio status is true and current status is on to test the error code
 *             is HRIL_ERR_REPEAT_STATUS
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetRadioState_0100, Function | MediumTest | Level3)
{
    bool setRadioState = GetProxy()->SetRadioState(SLOT_ID, true, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_TRUE(setRadioStatusCallback);
    ASSERT_EQ(errCodeResult, HRIL_ERR_REPEAT_STATUS);
    bool getRadioState = GetProxy()->GetRadioState(SLOT_ID, g_callback);
    ASSERT_TRUE(getRadioState);
    LOG("Telephony_NetworkSearch_SetRadioState_0100 hasNewData[GET_RADIO_STATUS] : %d", hasNewData[GET_RADIO_STATUS]);
    LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_TRUE(getRadioStatusCallback);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetRadioState_0200
 * @tc.name    Use SetRadioState() set the current radio status is false and current status is on to test the error code
 *             is HRIL_ERR_SUCCESS
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetRadioState_0200, Function | MediumTest | Level3)
{
    bool setRadioState = GetProxy()->SetRadioState(SLOT_ID, false, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_TRUE(setRadioStatusCallback);
    ASSERT_EQ(errCodeResult, HRIL_ERR_SUCCESS);
    bool getRadioState = GetProxy()->GetRadioState(SLOT_ID, g_callback);
    ASSERT_TRUE(getRadioState);
    LOG("Telephony_NetworkSearch_SetRadioState_0200 hasNewData[GET_RADIO_STATUS] : %d", hasNewData[GET_RADIO_STATUS]);
    LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_FALSE(getRadioStatusCallback);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetRadioState_0600
 * @tc.name    Use SetRadioState() set the current radio status is false, to test the operator information is empty
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetRadioState_0600, Function | MediumTest | Level3)
{
    bool setRadioState = GetProxy()->SetRadioState(SLOT_ID, false, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    std::string plmnNumeric = GetNetworkState()->GetPlmnNumeric();
    EXPECT_STREQ(plmnNumeric.c_str(), "");
    std::string shortOperatorName = GetNetworkState()->GetShortOperatorName();
    EXPECT_STREQ(shortOperatorName.c_str(), "");
    std::string longOperatorName = GetNetworkState()->GetLongOperatorName();
    EXPECT_STREQ(longOperatorName.c_str(), "");
    EXPECT_EQ(GetNetworkState()->GetPsRoamingStatus(), RoamingType::ROAMING_STATE_UNKNOWN);
    EXPECT_EQ(GetNetworkState()->GetCsRoamingStatus(), RoamingType::ROAMING_STATE_UNKNOWN);
    EXPECT_EQ(GetNetworkState()->GetPsRadioTech(), RadioTech::RADIO_TECHNOLOGY_UNKNOWN);
    EXPECT_EQ(GetNetworkState()->GetCsRadioTech(), RadioTech::RADIO_TECHNOLOGY_UNKNOWN);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetRadioState_0700
 * @tc.name    Use SetRadioState() set the current radio status is false, to test the signal info list is empty
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetRadioState_0700, Function | MediumTest | Level3)
{
    bool setRadioState = GetProxy()->SetRadioState(SLOT_ID, false, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    auto signalVec = GetProxy()->GetSignalInfoList(SLOT_ID);
    bool signalInfoListEmpty = true;
    if (!signalVec.empty()) {
        signalInfoListEmpty = false;
    }
    EXPECT_TRUE(signalInfoListEmpty);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetRadioState_0800
 * @tc.name    Use SetRadioState() set the current radio status is false, to test the ps and cs radio tech is
 *             RADIO_TECHNOLOGY_UNKNOWN
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetRadioState_0800, Function | MediumTest | Level3)
{
    bool setRadioState = GetProxy()->SetRadioState(SLOT_ID, false, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(GetNetworkState()->GetPsRadioTech(), RadioTech::RADIO_TECHNOLOGY_UNKNOWN);
    EXPECT_EQ(GetNetworkState()->GetCsRadioTech(), RadioTech::RADIO_TECHNOLOGY_UNKNOWN);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetIsoCountryCodeForNetwork_0700
 * @tc.name    If radio is off,use GetIsoCountryCodeForNetwork() get country code is empty
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetIsoCountryCodeForNetwork_0700, Function | MediumTest | Level3)
{
    bool setRadioState = GetProxy()->SetRadioState(SLOT_ID, false, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getRadioState = GetProxy()->GetRadioState(SLOT_ID, g_callback);
    ASSERT_TRUE(getRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_FALSE(getRadioStatusCallback);
    std::u16string countryCode = GetProxy()->GetIsoCountryCodeForNetwork(SLOT_ID);
    std::string str = Str16ToStr8(countryCode);
    EXPECT_STREQ(str.c_str(), "");
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_0500
 * @tc.name    If radio is off,use GetPreferredNetwork() to get current preferred mode and return true and callback
 *             is CORE_NETWORK_MODE_AUTO
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_0500, Function | MediumTest | Level3)
{
    bool setRadioState = GetProxy()->SetRadioState(SLOT_ID, false, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getRadioState = GetProxy()->GetRadioState(SLOT_ID, g_callback);
    ASSERT_TRUE(getRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_FALSE(getRadioStatusCallback);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_AUTO));
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_0300
 * @tc.name    Set the preferred network mode is CORE_NETWORK_MODE_LTE_WCDMA_GSM to test the SetPreferredNetwork()
 *             callback is true
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_0300, Function | MediumTest | Level3)
{
    bool setRadioState = GetProxy()->SetRadioState(SLOT_ID, false, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getRadioState = GetProxy()->GetRadioState(SLOT_ID, g_callback);
    ASSERT_TRUE(getRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_FALSE(getRadioStatusCallback);
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_LTE_WCDMA_GSM), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_TRUE(setPreferredNetworkModeResult);
    EXPECT_EQ(errCodeResult, HRIL_ERR_SUCCESS);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCellInfoList_0500
 * @tc.name    If radio is off,to test the GetCellInfoList() and the result is empty
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCellInfoList_0500, Function | MediumTest | Level3)
{
    bool setRadioState = GetProxy()->SetRadioState(SLOT_ID, false, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getRadioState = GetProxy()->GetRadioState(SLOT_ID, g_callback);
    ASSERT_TRUE(getRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_FALSE(getRadioStatusCallback);
    std::vector<sptr<CellInformation>> cellInfoList = GetProxy()->GetCellInfoList(SLOT_ID);
    EXPECT_TRUE(cellInfoList.empty());
}

/*
 * @tc.number  Telephony_NetworkSearch_SendUpdateCellLocationRequest_0200
 * @tc.name    If radio is off,to test the SendUpdateCellLocationRequest() and the result is false
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SendUpdateCellLocationRequest_0200, Function | MediumTest | Level3)
{
    bool setRadioState = GetProxy()->SetRadioState(SLOT_ID, false, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getRadioState = GetProxy()->GetRadioState(SLOT_ID, g_callback);
    ASSERT_TRUE(getRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_FALSE(getRadioStatusCallback);
    bool requestResult = GetProxy()->SendUpdateCellLocationRequest(SLOT_ID);
    EXPECT_FALSE(requestResult);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetImei_0500
 * @tc.name    If radio is off,to test the GetImei() and the result is not empty and the length is 15
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetImei_0500, Function | MediumTest | Level3)
{
    bool setRadioState = GetProxy()->SetRadioState(SLOT_ID, false, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getRadioState = GetProxy()->GetRadioState(SLOT_ID, g_callback);
    ASSERT_TRUE(getRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_FALSE(getRadioStatusCallback);
    std::u16string getImei = GetProxy()->GetImei(SLOT_ID);
    std::string str = Str16ToStr8(getImei);
    EXPECT_STRNE(str.c_str(), "");
    int size = str.size();
    EXPECT_EQ(size, NetworkSearchTest::IMEI_SIZE);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetUniqueDeviceId_0500
 * @tc.name    If radio is off,to test the GetUniqueDeviceId() and the result is not empty and the length is 14 or 15
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetUniqueDeviceId_0500, Function | MediumTest | Level3)
{
    bool setRadioState = GetProxy()->SetRadioState(SLOT_ID, false, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getRadioState = GetProxy()->GetRadioState(SLOT_ID, g_callback);
    ASSERT_TRUE(getRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_FALSE(getRadioStatusCallback);
    std::u16string getDeviceId = GetProxy()->GetUniqueDeviceId(SLOT_ID);
    std::string str = Str16ToStr8(getDeviceId);
    EXPECT_STRNE(str.c_str(), "");
    int size = str.size();
    EXPECT_TRUE(size == NetworkSearchTest::IMEI_SIZE || size == NetworkSearchTest::MEID_SIZE);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNrOptionMode_0700
 * @tc.name    If radio is off,to test the GetNrOptionMode() is wrong and return NR_MODE_UNKNOWN
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNrOptionMode_0700, Function | MediumTest | Level3)
{
    bool setRadioState = GetProxy()->SetRadioState(SLOT_ID, false, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getRadioState = GetProxy()->GetRadioState(SLOT_ID, g_callback);
    ASSERT_TRUE(getRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_FALSE(getRadioStatusCallback);
    NrMode nrMode = GetProxy()->GetNrOptionMode(SLOT_ID);
    EXPECT_EQ(nrMode, NrMode::NR_MODE_UNKNOWN);
}

/*
 * @tc.number  Telephony_NetworkSearch_IsNrSupported_0200
 * @tc.name    If radio is off,to test the IsNrSupported() is wrong and return true
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_IsNrSupported_0200, Function | MediumTest | Level3)
{
    bool setRadioState = GetProxy()->SetRadioState(SLOT_ID, false, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getRadioState = GetProxy()->GetRadioState(SLOT_ID, g_callback);
    ASSERT_TRUE(getRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_FALSE(getRadioStatusCallback);
    bool nrResult = GetProxy()->IsNrSupported(SLOT_ID);
    EXPECT_TRUE(nrResult);
}