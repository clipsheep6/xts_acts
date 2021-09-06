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

#include "network_search_test.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;
using namespace OHOS::Telephony::NetworkSearch;
using namespace NetworkSearch;

/*
 * @tc.number  Telephony_NetworkSearch_GetRadioState_0100
 * @tc.name    Get the current radio status when the radio status is off
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetRadioState_0100, Function | MediumTest | Level3)
{
    bool setRadioState = GetProxy()->SetRadioState(SLOT_0, false, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getRadioState = GetProxy()->GetRadioState(SLOT_0, g_callback);
    ASSERT_TRUE(getRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_FALSE(getRadioStatusCallback);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetRadioState_0200
 * @tc.name    Get the current radio status when the radio status is on
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetRadioState_0200, Function | MediumTest | Level3)
{
    bool setRadioState = GetProxy()->SetRadioState(SLOT_0, true, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getRadioState = GetProxy()->GetRadioState(SLOT_0, g_callback);
    ASSERT_TRUE(getRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getRadioStatusCallback, true);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetRadioState_0100
 * @tc.name    Set the current radio status is true
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetRadioState_0100, Function | MediumTest | Level3)
{
    RecoverRadioState();
    bool setRadioState = GetProxy()->SetRadioState(SLOT_0, true, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_FALSE(setRadioStatusCallback);
    bool getRadioState = GetProxy()->GetRadioState(SLOT_0, g_callback);
    ASSERT_TRUE(getRadioState);
    LOG("Telephony_NetworkSearch_SetRadioState_0200 hasNewData[GET_RADIO_STATUS] : %d", hasNewData[GET_RADIO_STATUS]);
    LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_TRUE(getRadioStatusCallback);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetRadioState_0200
 * @tc.name    Set the current radio status is false
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetRadioState_0200, Function | MediumTest | Level3)
{
    RecoverRadioState();
    bool setRadioState = GetProxy()->SetRadioState(SLOT_0, false, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_TRUE(setRadioStatusCallback);
    bool getRadioState = GetProxy()->GetRadioState(SLOT_0, g_callback);
    ASSERT_TRUE(getRadioState);
    LOG("Telephony_NetworkSearch_SetRadioState_0200 hasNewData[GET_RADIO_STATUS] : %d", hasNewData[GET_RADIO_STATUS]);
    LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_FALSE(getRadioStatusCallback);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetRadioState_0600
 * @tc.name    Set the current radio status is false
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetRadioState_0600, Function | MediumTest | Level3)
{
    bool setRadioState = GetProxy()->SetRadioState(SLOT_0, false, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    std::string plmnNumeric = GetNetworkState()->GetPlmnNumeric();
    bool result = MatchAllResultString(plmnNumeric, g_arrPlmnNumeric, ARR_LENGTH_8);
    EXPECT_FALSE(result);
    std::string shortOperatorName = GetNetworkState()->GetShortOperatorName();
    result = MatchAllResultString(shortOperatorName, g_arrShortOperatorName, ARR_LENGTH_3);
    EXPECT_FALSE(result);
    std::string longOperatorName = GetNetworkState()->GetLongOperatorName();
    result = MatchAllResultString(longOperatorName, g_arrShortOperatorName, ARR_LENGTH_3);
    EXPECT_FALSE(result);
    EXPECT_EQ(GetNetworkState()->GetPsRoamingStatus(), ROAMING_STATE_UNKNOWN);
    EXPECT_EQ(GetNetworkState()->GetCsRoamingStatus(), ROAMING_STATE_UNKNOWN);
    EXPECT_EQ(GetNetworkState()->GetPsRadioTech(), RADIO_TECHNOLOGY_UNKNOWN);
    EXPECT_EQ(GetNetworkState()->GetCsRadioTech(), RADIO_TECHNOLOGY_UNKNOWN);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetRadioState_0700
 * @tc.name    Set the current radio status is false
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetRadioState_0700, Function | MediumTest | Level3)
{
    bool setRadioState = GetProxy()->SetRadioState(SLOT_0, false, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    auto signalVec = GetProxy()->GetSignalInfoList(SLOT_0);
    bool signalInfoListEmpty = true;
    if (!signalVec.empty()) {
        signalInfoListEmpty = false;
    }
    EXPECT_TRUE(signalInfoListEmpty);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetRadioState_0800
 * @tc.name    Set the current radio status is false
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetRadioState_0800, Function | MediumTest | Level3)
{
    bool setRadioState = GetProxy()->SetRadioState(SLOT_0, false, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(GetNetworkState()->GetPsRadioTech(), RADIO_TECHNOLOGY_UNKNOWN);
    EXPECT_EQ(GetNetworkState()->GetCsRadioTech(), RADIO_TECHNOLOGY_UNKNOWN);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetIsoCountryCodeForNetwork_0700
 * @tc.name    If radio is off,use GetIsoCountryCodeForNetwork() get country code is empty
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetIsoCountryCodeForNetwork_0700, Function | MediumTest | Level3)
{
    bool setRadioState = GetProxy()->SetRadioState(SLOT_0, false, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getRadioState = GetProxy()->GetRadioState(SLOT_0, g_callback);
    ASSERT_TRUE(getRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_FALSE(getRadioStatusCallback);
    std::u16string countryCode = GetProxy()->GetIsoCountryCodeForNetwork(SLOT_0);
    std::string str = Str16ToStr8(countryCode);
    EXPECT_STREQ(str.c_str(), "");
}