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
#include "network_search_state.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;
using namespace OHOS::Telephony::NetworkSearch;
using namespace NetworkSearch;

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkState_0100
 * @tc.name    The service status of PS registration is the registration is successful, test the GetNetworkState
 *             interface to query the network registration service status as the registration is successful
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkState_0100, Function | MediumTest | Level3)
{
    GetNetworkStateCache()->SetNetworkState(RegServiceState::REG_STATE_IN_SERVICE, DOMAIN_TYPE_PS);
    GetNetworkStateCache()->SetNetworkState(RegServiceState::REG_STATE_UNKNOWN, DOMAIN_TYPE_CS);
    int regState = GetNetworkStateCache()->GetRegStatus();
    EXPECT_EQ(regState, static_cast<int>(RegServiceState::REG_STATE_IN_SERVICE));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkState_0200
 * @tc.name    The PS registration service status is not registered successfully, the CS registered service status is
 *             registered successfully, and the GetNetworkState interface is tested to query the network registration
 *             service status as registered successful
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkState_0200, Function | MediumTest | Level3)
{
    RegServiceState setCsRegState = RegServiceState::REG_STATE_IN_SERVICE;
    GetNetworkStateCache()->SetNetworkState(RegServiceState::REG_STATE_NO_SERVICE, DOMAIN_TYPE_PS);
    GetNetworkStateCache()->SetNetworkState(setCsRegState, DOMAIN_TYPE_CS);
    int regState = GetNetworkStateCache()->GetRegStatus();
    EXPECT_EQ(regState, static_cast<int>(setCsRegState));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkState_0300
 * @tc.name    PS registration service status is not registration successful, CS registration service status is
 *             registration failure, test GetNetworkState interface to query the network registration service status
 *             is registration failure
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkState_0300, Function | MediumTest | Level3)
{
    RegServiceState setCsRegState = RegServiceState::REG_STATE_NO_SERVICE;
    GetNetworkStateCache()->SetNetworkState(RegServiceState::REG_STATE_NO_SERVICE, DOMAIN_TYPE_PS);
    GetNetworkStateCache()->SetNetworkState(setCsRegState, DOMAIN_TYPE_CS);
    int regState = GetNetworkStateCache()->GetRegStatus();
    EXPECT_EQ(regState, static_cast<int>(setCsRegState));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkState_0400
 * @tc.name    The PS registration service status is not successful registration, the CS registration service status
 *             is emergency calls only, and the GetNetworkState interface is tested to query the network registration
 *             service status as emergency calls only.
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkState_0400, Function | MediumTest | Level3)
{
    RegServiceState setCsRegState = RegServiceState::REG_STATE_EMERGENCY_ONLY;
    GetNetworkStateCache()->SetNetworkState(RegServiceState::REG_STATE_NO_SERVICE, DOMAIN_TYPE_PS);
    GetNetworkStateCache()->SetNetworkState(setCsRegState, DOMAIN_TYPE_CS);
    int regState = GetNetworkStateCache()->GetRegStatus();
    EXPECT_EQ(regState, static_cast<int>(setCsRegState));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkState_0500
 * @tc.name    PS registration service status is not successful registration, CS registration service status is modem
 *             closed, test GetNetworkState interface to query network registration service status is modem closed
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkState_0500, Function | MediumTest | Level3)
{
    RegServiceState setCsRegState = RegServiceState::REG_STATE_UNKNOWN;
    GetNetworkStateCache()->SetNetworkState(RegServiceState::REG_STATE_NO_SERVICE, DOMAIN_TYPE_PS);
    GetNetworkStateCache()->SetNetworkState(setCsRegState, DOMAIN_TYPE_CS);
    int regState = GetNetworkStateCache()->GetRegStatus();
    EXPECT_EQ(regState, static_cast<int>(setCsRegState));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkState_0600
 * @tc.name    The service status of the network registration is registration successful, and the operator information
 *             for testing the GetNetworkState interface to query the network registration status is not empty
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkState_0600, Function | MediumTest | Level3)
{
    std::string plmnNumeric = GetNetworkState()->GetPlmnNumeric();
    bool result = MatchAllResultString(plmnNumeric, g_arrPlmnNumeric, ARR_LENGTH_8);
    EXPECT_TRUE(result);
    std::string shortOperatorName = GetNetworkState()->GetShortOperatorName();
    result = MatchAllResultString(shortOperatorName, g_arrShortOperatorName, ARR_LENGTH_3);
    EXPECT_TRUE(result);
    std::string longOperatorName = GetNetworkState()->GetLongOperatorName();
    result = MatchAllResultString(longOperatorName, g_arrLongOperatorName, ARR_LENGTH_3);
    EXPECT_TRUE(result);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkState_0900
 * @tc.name    PS registration service status is not successful registration, CS registration service status is search,
 *             test GetNetworkState interface to query network registration service status is search
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkState_0900, Function | MediumTest | Level3)
{
    RegServiceState setCsRegState = RegServiceState::REG_STATE_SEARCH;
    GetNetworkStateCache()->SetNetworkState(RegServiceState::REG_STATE_NO_SERVICE, DOMAIN_TYPE_PS);
    GetNetworkStateCache()->SetNetworkState(setCsRegState, DOMAIN_TYPE_CS);
    int regState = GetNetworkStateCache()->GetRegStatus();
    EXPECT_EQ(regState, static_cast<int>(setCsRegState));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPsRadioTech_0100
 * @tc.name    Test the GetPsRadioTech interface query function, and return the PS network mode as UNKNOWN
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPsRadioTech_0100, Function | MediumTest | Level3)
{
    RadioTech setPsRadioTech = RadioTech::RADIO_TECHNOLOGY_UNKNOWN;
    GetNetworkStateCache()->SetNetworkType(setPsRadioTech, DOMAIN_TYPE_PS);
    RadioTech getPsRadioTech = static_cast<RadioTech>(GetNetworkStateCache()->GetPsRadioTech());
    EXPECT_EQ(getPsRadioTech, setPsRadioTech);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPsRadioTech_0200
 * @tc.name    Test the GetPsRadioTech interface query function, and return the PS network mode as 1XRTT
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPsRadioTech_0200, Function | MediumTest | Level3)
{
    RadioTech setPsRadioTech = RadioTech::RADIO_TECHNOLOGY_LTE;
    GetNetworkStateCache()->SetNetworkType(setPsRadioTech, DOMAIN_TYPE_PS);
    RadioTech getPsRadioTech = static_cast<RadioTech>(GetNetworkStateCache()->GetPsRadioTech());
    EXPECT_EQ(getPsRadioTech, setPsRadioTech);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPsRadioTech_0300
 * @tc.name    Test the GetPsRadioTech interface query function, and return the PS network mode as GSM
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPsRadioTech_0300, Function | MediumTest | Level3)
{
    RadioTech setPsRadioTech = RadioTech::RADIO_TECHNOLOGY_GSM;
    GetNetworkStateCache()->SetNetworkType(setPsRadioTech, DOMAIN_TYPE_PS);
    RadioTech getPsRadioTech = static_cast<RadioTech>(GetNetworkStateCache()->GetPsRadioTech());
    EXPECT_EQ(getPsRadioTech, setPsRadioTech);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCsRadioTech_0100
 * @tc.name    Test the GetCsRadioTech interface query function, and return the CS network mode as 1XRTT
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCsRadioTech_0100, Function | MediumTest | Level3)
{
    RadioTech setCsRadioTech = RadioTech::RADIO_TECHNOLOGY_LTE;
    GetNetworkStateCache()->SetNetworkType(setCsRadioTech, DOMAIN_TYPE_CS);
    RadioTech getCsRadioTech = static_cast<RadioTech>(GetNetworkStateCache()->GetCsRadioTech());
    EXPECT_EQ(getCsRadioTech, setCsRadioTech);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCsRadioTech_0200
 * @tc.name    Test the GetCsRadioTech interface query function, and return the CS network mode as UNKNOWN
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCsRadioTech_0200, Function | MediumTest | Level3)
{
    RadioTech setCsRadioTech = RadioTech::RADIO_TECHNOLOGY_UNKNOWN;
    GetNetworkStateCache()->SetNetworkType(setCsRadioTech, DOMAIN_TYPE_CS);
    RadioTech getCsRadioTech = static_cast<RadioTech>(GetNetworkStateCache()->GetCsRadioTech());
    EXPECT_EQ(getCsRadioTech, setCsRadioTech);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCsRadioTech_0300
 * @tc.name    Test the GetCsRadioTech interface query function, and return the CS network mode as WCDMA
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCsRadioTech_0300, Function | MediumTest | Level3)
{
    RadioTech setCsRadioTech = RadioTech::RADIO_TECHNOLOGY_WCDMA;
    GetNetworkStateCache()->SetNetworkType(setCsRadioTech, DOMAIN_TYPE_CS);
    RadioTech getCsRadioTech = static_cast<RadioTech>(GetNetworkStateCache()->GetCsRadioTech());
    EXPECT_EQ(getCsRadioTech, setCsRadioTech);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetOperatorNumeric_0100
 * @tc.name    The network registration status is the registration is successful,
 *             test the GetOperatorNumeric interface, query function, the returned operator information is not empty
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetOperatorNumeric_0100, Function | MediumTest | Level3)
{
    std::string operatorNumeric = Str16ToStr8(GetProxy()->GetOperatorNumeric(SLOT_0));
    bool result = MatchAllResultString(operatorNumeric, g_arrPlmnNumeric, ARR_LENGTH_8);
    EXPECT_TRUE(result);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetOperatorName_0100
 * @tc.name    The network registration status is the registration is successful, test the GetOperatorName interface
 *             query function, the returned operator information is not empty
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetOperatorName_0100, Function | MediumTest | Level3)
{
    std::string operatorName = Str16ToStr8(GetProxy()->GetOperatorName(SLOT_0));
    bool result = MatchAllResultString(operatorName, g_arrLongOperatorName, ARR_LENGTH_3);
    EXPECT_TRUE(result);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetSignalInfoList_0100
 * @tc.name    Test the GetSignalInfoList interface query function, the returned network type is not 0, and the signal
 *             level range is [0,4]
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetSignalInfoList_0100, Function | MediumTest | Level3)
{
    auto signalVec = GetProxy()->GetSignalInfoList(SLOT_0);
    SignalInformation::NetworkType type;
    int size = signalVec.size();
    int level = 0;
    LOG("Telephony_NetworkSearch_GetSignalInfoList_0100 size = %d", size);
    ASSERT_NE(size, 0);
    for (const auto &singnal_sptr : signalVec) {
        ASSERT_NE(singnal_sptr, nullptr);
        type = singnal_sptr->GetNetworkType();
        LOG("Telephony_NetworkSearch_GetSignalInfoList_0100 type = %d", type);
        ASSERT_GE(type, SignalInformation::NetworkType::GSM);
        ASSERT_LE(type, SignalInformation::NetworkType::TDSCDMA);
        level = singnal_sptr->GetSignalLevel();
        LOG("Telephony_NetworkSearch_GetSignalInfoList_0100 level = %d", level);
        int min = SIGNAL_STRENGTH_INVALID;
        int max = SIGNAL_STRENGTH_HIGHEST;
        ASSERT_GE(level, min);
        ASSERT_LE(level, max);
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkSelectionMode_0100
 * @tc.name    Test the network selection mode is manual to test the result is MODE_TYPE_MANUAL
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkSelectionMode_0100, Function | MediumTest | Level3)
{
    SelectionMode selectionMode = MODE_TYPE_MANUAL;
    hasNewData[GET_NETWORK_MODEL] = false;
    bool setSelectModeResult = GetProxy()->SetNetworkSelectionMode(
        SLOT_0, selectionMode, SetNetworkInformation(selectionMode), false, g_callback);
    ASSERT_TRUE(setSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getSelectModeResult = GetProxy()->GetNetworkSelectionMode(SLOT_0, g_callback);
    ASSERT_TRUE(getSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getNetworkModeCallbackResult, selectionMode);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkSelectionMode_0200
 * @tc.name    Test the network selection mode is automatic to test the result is MODE_TYPE_AUTO
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkSelectionMode_0200, Function | MediumTest | Level3)
{
    SelectionMode selectionMode = MODE_TYPE_AUTO;
    hasNewData[GET_NETWORK_MODEL] = false;
    bool setSelectModeResult = GetProxy()->SetNetworkSelectionMode(
        SLOT_0, selectionMode, SetNetworkInformation(selectionMode), false, g_callback);
    ASSERT_TRUE(setSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getSelectModeResult = GetProxy()->GetNetworkSelectionMode(SLOT_0, g_callback);
    ASSERT_TRUE(getSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getNetworkModeCallbackResult, selectionMode);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetNetworkSelectionMode_0100
 * @tc.name    Test the network selection mode when selectmode is MODE_TYPE_AUTO networkInformation is "46000"
 *             resumeSelection is "False" the result is True and selection mode is MODE_TYPE_AUTO
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetNetworkSelectionMode_0100, Function | MediumTest | Level3)
{
    SelectionMode selectionMode = MODE_TYPE_AUTO;
    hasNewData[GET_NETWORK_MODEL] = false;
    bool setSelectModeResult = GetProxy()->SetNetworkSelectionMode(
        SLOT_0, selectionMode, SetNetworkInformation(selectionMode), false, g_callback);
    ASSERT_TRUE(setSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_TRUE(setNetworkModeCallbackResult);
    bool getSelectModeResult = GetProxy()->GetNetworkSelectionMode(SLOT_0, g_callback);
    ASSERT_TRUE(getSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getNetworkModeCallbackResult, selectionMode);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetNetworkSelectionMode_0200
 * @tc.name    Test the network selection mode when selectmode is MODE_TYPE_MANUAL networkInformation is "46000"
 *             resumeSelection is "False" the result is True and selection mode is MODE_TYPE_MANUAL
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetNetworkSelectionMode_0200, Function | MediumTest | Level3)
{
    SelectionMode selectionMode = MODE_TYPE_MANUAL;
    hasNewData[GET_NETWORK_MODEL] = false;
    bool setSelectModeResult = GetProxy()->SetNetworkSelectionMode(
        SLOT_0, selectionMode, SetNetworkInformation(selectionMode), false, g_callback);
    ASSERT_TRUE(setSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_TRUE(setNetworkModeCallbackResult);
    bool getSelectModeResult = GetProxy()->GetNetworkSelectionMode(SLOT_0, g_callback);
    ASSERT_TRUE(getSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getNetworkModeCallbackResult, selectionMode);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetNetworkSelectionMode_0300
 * @tc.name    Test the network selection mode when selectmode is "5" networkInformation is "46000"
 *             resumeSelection is "False" the result is False and selection mode is MODE_TYPE_AUTO
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetNetworkSelectionMode_0300, Function | MediumTest | Level3)
{
    RecoverNetworkSelectionMode();
    int selectMode = 5;
    bool setSelectModeResult =
        GetProxy()->SetNetworkSelectionMode(SLOT_0, selectMode, SetNetworkInformation(selectMode), false, g_callback);
    ASSERT_TRUE(setSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_FALSE(setNetworkModeCallbackResult);
    bool getSelectModeResult = GetProxy()->GetNetworkSelectionMode(SLOT_0, g_callback);
    ASSERT_TRUE(getSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getNetworkModeCallbackResult, MODE_TYPE_AUTO);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetNetworkSelectionMode_0400
 * @tc.name    Test the network selection mode when selectmode is "a" networkInformation is "46000"
 *             resumeSelection is "False" the result is False and selection mode is MODE_TYPE_AUTO
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetNetworkSelectionMode_0400, Function | MediumTest | Level3)
{
    RecoverNetworkSelectionMode();
    int selectMode = 'a';
    bool setSelectModeResult =
        GetProxy()->SetNetworkSelectionMode(SLOT_0, selectMode, SetNetworkInformation(selectMode), false, g_callback);
    ASSERT_TRUE(setSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_FALSE(setNetworkModeCallbackResult);
    bool getSelectModeResult = GetProxy()->GetNetworkSelectionMode(SLOT_0, g_callback);
    ASSERT_TRUE(getSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getNetworkModeCallbackResult, MODE_TYPE_AUTO);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetNetworkSelectionMode_0500
 * @tc.name    Test the network selection mode when selectmode is "@" networkInformation is "46000"
 *             resumeSelection is "False" the result is False and selection mode is MODE_TYPE_AUTO
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetNetworkSelectionMode_0500, Function | MediumTest | Level3)
{
    RecoverNetworkSelectionMode();
    int selectMode = '@';
    bool setSelectModeResult =
        GetProxy()->SetNetworkSelectionMode(SLOT_0, selectMode, SetNetworkInformation(selectMode), false, g_callback);
    ASSERT_TRUE(setSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_FALSE(setNetworkModeCallbackResult);
    bool getSelectModeResult = GetProxy()->GetNetworkSelectionMode(SLOT_0, g_callback);
    ASSERT_TRUE(getSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getNetworkModeCallbackResult, MODE_TYPE_AUTO);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetNetworkSelectionMode_0600
 * @tc.name    Test the network selection mode when selectmode is MODE_TYPE_MANUAL networkInformation is "SSSSS"
 *             resumeSelection is "False" the result is False and selection mode is MODE_TYPE_AUTO
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetNetworkSelectionMode_0600, Function | MediumTest | Level3)
{
    RecoverNetworkSelectionMode();
    SelectionMode selectionMode = MODE_TYPE_MANUAL;
    sptr<NetworkInformation> networkInfo(new NetworkInformation());
    if (networkInfo != nullptr) {
        networkInfo->SetOperateInformation("CHINA MOBULE", "CMCC", "SSSSS", NETWORK_PLMN_STATE_AVAILABLE, NETWORK_LTE);
    }
    bool setSelectModeResult =
        GetProxy()->SetNetworkSelectionMode(SLOT_0, selectionMode, networkInfo, false, g_callback);
    ASSERT_TRUE(setSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_FALSE(setNetworkModeCallbackResult);
    bool getSelectModeResult = GetProxy()->GetNetworkSelectionMode(SLOT_0, g_callback);
    ASSERT_TRUE(getSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getNetworkModeCallbackResult, MODE_TYPE_AUTO);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetNetworkSelectionMode_0700
 * @tc.name    Test the network selection mode when selectmode is MODE_TYPE_AUTO networkInformation is nullptr
 *             resumeSelection is "True" the result is True and selection mode is MODE_TYPE_AUTO
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetNetworkSelectionMode_0700, Function | MediumTest | Level3)
{
    SelectionMode selectionMode = MODE_TYPE_AUTO;
    bool setSelectModeResult = GetProxy()->SetNetworkSelectionMode(SLOT_0, selectionMode, nullptr, true, g_callback);
    ASSERT_TRUE(setSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_TRUE(setNetworkModeCallbackResult);
    hasNewData[GET_NETWORK_MODEL] = false;
    bool getSelectModeResult = GetProxy()->GetNetworkSelectionMode(SLOT_0, g_callback);
    ASSERT_TRUE(getSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getNetworkModeCallbackResult, selectionMode);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkSearchResult_0100
 * @tc.name    Test the result from GetNetworkSearchResult when the select mode is MODE_TYPE_AUTO
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkSearchResult_0100, Function | MediumTest | Level3)
{
    SelectionMode selectionMode = MODE_TYPE_AUTO;
    hasNewData[GET_NETWORK_MODEL] = false;
    bool setSelectModeResult = GetProxy()->SetNetworkSelectionMode(SLOT_0, selectionMode, nullptr, false, g_callback);
    ASSERT_TRUE(setSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getSelectModeResult = GetProxy()->GetNetworkSelectionMode(SLOT_0, g_callback);
    ASSERT_TRUE(getSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool networkSearchResult = GetProxy()->GetNetworkSearchResult(SLOT_0, g_callback);
    ASSERT_TRUE(networkSearchResult);
    LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_SEARCH_RESULT], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_TRUE(getNetworkResultCallback);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkSearchResult_0200
 * @tc.name    Test the result from GetNetworkSearchResult when the select mode is MODE_TYPE_AUTO
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkSearchResult_0200, Function | MediumTest | Level3)
{
    SelectionMode selectionMode = MODE_TYPE_MANUAL;
    hasNewData[GET_NETWORK_MODEL] = false;
    bool setSelectModeResult = GetProxy()->SetNetworkSelectionMode(
        SLOT_0, selectionMode, SetNetworkInformation(selectionMode), false, g_callback);
    ASSERT_TRUE(setSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getSelectModeResult = GetProxy()->GetNetworkSelectionMode(SLOT_0, g_callback);
    ASSERT_TRUE(getSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool networkSearchResult = GetProxy()->GetNetworkSearchResult(SLOT_0, g_callback);
    ASSERT_TRUE(networkSearchResult);
    LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_SEARCH_RESULT], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_TRUE(getNetworkResultCallback);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetIsoCountryCodeForNetwork_0100
 * @tc.name    Get country code is 'cn'
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetIsoCountryCodeForNetwork_0100, Function | MediumTest | Level3)
{
    bool setRadioState = GetProxy()->SetRadioState(SLOT_0, true, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getRadioState = GetProxy()->GetRadioState(SLOT_0, g_callback);
    ASSERT_TRUE(getRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_TRUE(getRadioStatusCallback);
    sleep(WAIT_CACHE_DATA);
    std::u16string countryCode = GetProxy()->GetIsoCountryCodeForNetwork(SLOT_0);
    std::string str = Str16ToStr8(countryCode);
    EXPECT_STREQ(str.c_str(), "cn");
}