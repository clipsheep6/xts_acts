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
    std::string plmnNumeric = GetNetworkState()->GetPlmnNumeric();
    EXPECT_STRNE(plmnNumeric.c_str(), "");
    std::string shortOperatorName = GetNetworkState()->GetShortOperatorName();
    EXPECT_STRNE(shortOperatorName.c_str(), "");
    std::string longOperatorName = GetNetworkState()->GetLongOperatorName();
    EXPECT_STRNE(longOperatorName.c_str(), "");
    RoamingType roamingType = static_cast<RoamingType>(GetNetworkState()->GetPsRoamingStatus());
    EXPECT_EQ(roamingType, RoamingType::ROAMING_STATE_UNKNOWN);
    roamingType = static_cast<RoamingType>(GetNetworkState()->GetCsRoamingStatus());
    EXPECT_EQ(roamingType, RoamingType::ROAMING_STATE_UNKNOWN);
    RegServiceState regState = static_cast<RegServiceState>(GetNetworkState()->GetRegStatus());
    EXPECT_GE(regState, RegServiceState::REG_STATE_UNKNOWN);
    EXPECT_LE(regState, RegServiceState::REG_STATE_SEARCH);
    RadioTech radioTech = static_cast<RadioTech>(GetNetworkState()->GetPsRadioTech());
    EXPECT_GE(radioTech, RadioTech::RADIO_TECHNOLOGY_UNKNOWN);
    EXPECT_LE(radioTech, RadioTech::RADIO_TECHNOLOGY_LTE);
    radioTech = static_cast<RadioTech>(GetNetworkState()->GetCsRadioTech());
    EXPECT_GE(radioTech, RadioTech::RADIO_TECHNOLOGY_UNKNOWN);
    EXPECT_LE(radioTech, RadioTech::RADIO_TECHNOLOGY_LTE);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkState_0800
 * @tc.name    The slot id is 3 to test the GetNetworkState() is wrong and return null
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkState_0800, Function | MediumTest | Level3)
{
    int slotId = 3;
    sptr<NetworkState> result = GetProxy()->GetNetworkState(slotId);
    EXPECT_EQ(result, nullptr);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPsRadioTech_0100
 * @tc.name    Test the GetPsRadioTech interface query function, and return the PS network mode as UNKNOWN
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPsRadioTech_0100, Function | MediumTest | Level3)
{
    RadioTech getPsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetPsRadioTech());
    EXPECT_GE(getPsRadioTech, RadioTech::RADIO_TECHNOLOGY_UNKNOWN);
    EXPECT_LE(getPsRadioTech, RadioTech::RADIO_TECHNOLOGY_LTE);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPsRadioTech_0400
 * @tc.name    Set the slot id is -1 to test the GetPsRadioTech interface query function and return TELEPHONY_ERROR
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPsRadioTech_0400, Function | MediumTest | Level3)
{
    int slotId = -1;
    int result = GetProxy()->GetPsRadioTech(slotId);
    EXPECT_EQ(result, NetworkSearchTest::TELEPHONY_ERROR);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCsRadioTech_0100
 * @tc.name    Test the GetCsRadioTech interface query function, and return the CS network mode as 1XRTT
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCsRadioTech_0100, Function | MediumTest | Level3)
{
    RadioTech getCsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetCsRadioTech());
    EXPECT_GE(getCsRadioTech, RadioTech::RADIO_TECHNOLOGY_UNKNOWN);
    EXPECT_LE(getCsRadioTech, RadioTech::RADIO_TECHNOLOGY_LTE);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCsRadioTech_0400
 * @tc.name    Set the slot id is a to test the GetCsRadioTech interface query function and return TELEPHONY_ERROR
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCsRadioTech_0400, Function | MediumTest | Level3)
{
    int slotId = 'a';
    int result = GetProxy()->GetCsRadioTech(slotId);
    EXPECT_EQ(result, NetworkSearchTest::TELEPHONY_ERROR);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetOperatorNumeric_0100
 * @tc.name    The network registration status is the registration is successful,
 *             test the GetOperatorNumeric interface, query function, the returned operator information is not empty
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetOperatorNumeric_0100, Function | MediumTest | Level3)
{
    std::string plmnNum = "460";
    std::string operatorNumeric = Str16ToStr8(GetProxy()->GetOperatorNumeric(SLOT_0));
    int size = operatorNumeric.size();
    EXPECT_EQ(size, NetworkSearchTest::PLMN_SIZE);
    EXPECT_STREQ(operatorNumeric.substr(0, 3).c_str(), plmnNum.c_str());
}

/*
 * @tc.number  Telephony_NetworkSearch_GetOperatorNumeric_0700
 * @tc.name    Set the slot id is 99 to test the GetOperatorNumeric interface query function and return ""
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetOperatorNumeric_0700, Function | MediumTest | Level3)
{
    int slotId = 99;
    std::string operatorNumeric = Str16ToStr8(GetProxy()->GetOperatorNumeric(slotId));
    EXPECT_STREQ(operatorNumeric.c_str(), "");
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
    EXPECT_STRNE(operatorName.c_str(), "");
}

/*
 * @tc.number  Telephony_NetworkSearch_GetOperatorName_0700
 * @tc.name    Set the slot id is 99 to test the GetOperatorName interface query function and return ""
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetOperatorName_0700, Function | MediumTest | Level3)
{
    int slotId = 3;
    std::string operatorName = Str16ToStr8(GetProxy()->GetOperatorName(slotId));
    EXPECT_STREQ(operatorName.c_str(), "");
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
    int level = 0;
    ASSERT_FALSE(signalVec.empty());
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
 * @tc.number  Telephony_NetworkSearch_GetSignalInfoList_0400
 * @tc.name    Set the slot id is 99 to test the GetSignalInfoList interface query function and return empty
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetSignalInfoList_0400, Function | MediumTest | Level3)
{
    int slotId = 5;
    auto signalVec = GetProxy()->GetSignalInfoList(slotId);
    int size = signalVec.size();
    LOG("Telephony_NetworkSearch_GetSignalInfoList_0400 size = %d", size);
    EXPECT_EQ(size, 0);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetSignalInfoList_0500
 * @tc.name    Test the GetSignalInfoList and GetPsRadioTech and GetCsRadioTechinterface query function, the returned
 *             network type equal PsRadioTech or CsRadioTech
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetSignalInfoList_0500, Function | MediumTest | Level3)
{
    int getPsRadioTech = static_cast<int>(GetNetworkState()->GetPsRadioTech());
    int getCsRadioTech = static_cast<int>(GetNetworkState()->GetCsRadioTech());
    auto signalVec = GetProxy()->GetSignalInfoList(SLOT_0);
    int type;
    bool result = false;
    ASSERT_FALSE(signalVec.empty());
    for (const auto &singnal_sptr : signalVec) {
        ASSERT_NE(singnal_sptr, nullptr);
        type = static_cast<int>(singnal_sptr->GetNetworkType());
        LOG("Telephony_NetworkSearch_GetSignalInfoList_0500 type = %d", type);
        LOG("Telephony_NetworkSearch_GetSignalInfoList_0500 getPsRadioTech = %d", getPsRadioTech);
        LOG("Telephony_NetworkSearch_GetSignalInfoList_0500 getCsRadioTech = %d", getCsRadioTech);
        if (type == getPsRadioTech || type == getCsRadioTech) {
            result = true;
        }
    }
    EXPECT_TRUE(result);
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
 * @tc.number  Telephony_NetworkSearch_GetNetworkSelectionMode_0600
 * @tc.name    Set the slot id is 3 to test the GetNetworkSelectionMode and the result is false
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkSelectionMode_0600, Function | MediumTest | Level3)
{
    int slotId = 3;
    bool getSelectModeResult = GetProxy()->GetNetworkSelectionMode(slotId, g_callback);
    EXPECT_FALSE(getSelectModeResult);
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
    ASSERT_EQ(errCodeResult, HRIL_ERR_SUCCESS);
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
    ASSERT_EQ(errCodeResult, HRIL_ERR_SUCCESS);
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
    ASSERT_EQ(errCodeResult, HRIL_ERR_INVALID_PARAMETER);
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
    ASSERT_EQ(errCodeResult, HRIL_ERR_INVALID_PARAMETER);
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
    ASSERT_EQ(errCodeResult, HRIL_ERR_INVALID_PARAMETER);
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
    ASSERT_EQ(errCodeResult, HRIL_ERR_INVALID_MODEM_PARAMETER);
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
    bool setSelectModeResult = GetProxy()->SetNetworkSelectionMode(
        SLOT_0, selectionMode, SetNetworkInformation(selectionMode), true, g_callback);
    ASSERT_TRUE(setSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_TRUE(setNetworkModeCallbackResult);
    ASSERT_EQ(errCodeResult, HRIL_ERR_SUCCESS);
    hasNewData[GET_NETWORK_MODEL] = false;
    bool getSelectModeResult = GetProxy()->GetNetworkSelectionMode(SLOT_0, g_callback);
    ASSERT_TRUE(getSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getNetworkModeCallbackResult, selectionMode);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetNetworkSelectionMode_0900
 * @tc.name    Set the slot id is 7 to test the SetNetworkSelectionMode and the result is false
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetNetworkSelectionMode_0900, Function | MediumTest | Level3)
{
    SelectionMode selectionMode = MODE_TYPE_AUTO;
    int slotId = 7;
    bool setSelectModeResult = GetProxy()->SetNetworkSelectionMode(
        slotId, selectionMode, SetNetworkInformation(selectionMode), false, g_callback);
    EXPECT_FALSE(setSelectModeResult);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkSearchInformation_0100
 * @tc.name    Test the result from GetNetworkSearchInformation when the select mode is MODE_TYPE_AUTO
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkSearchInformation_0100, Function | MediumTest | Level3)
{
    SelectionMode selectionMode = MODE_TYPE_AUTO;
    bool setSelectModeResult = GetProxy()->SetNetworkSelectionMode(SLOT_0, selectionMode, nullptr, false, g_callback);
    ASSERT_TRUE(setSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getSelectModeResult = GetProxy()->GetNetworkSelectionMode(SLOT_0, g_callback);
    ASSERT_TRUE(getSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool networkSearchResult = GetProxy()->GetNetworkSearchInformation(SLOT_0, g_callback);
    ASSERT_TRUE(networkSearchResult);
    LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_SEARCH_RESULT], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT_RESULT);
    EXPECT_TRUE(getNetworkResultCallback);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkSearchInformation_0200
 * @tc.name    Test the result from GetNetworkSearchInformation when the select mode is MODE_TYPE_AUTO
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkSearchInformation_0200, Function | MediumTest | Level3)
{
    SelectionMode selectionMode = MODE_TYPE_MANUAL;
    bool setSelectModeResult = GetProxy()->SetNetworkSelectionMode(
        SLOT_0, selectionMode, SetNetworkInformation(selectionMode), false, g_callback);
    ASSERT_TRUE(setSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getSelectModeResult = GetProxy()->GetNetworkSelectionMode(SLOT_0, g_callback);
    ASSERT_TRUE(getSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool networkSearchResult = GetProxy()->GetNetworkSearchInformation(SLOT_0, g_callback);
    ASSERT_TRUE(networkSearchResult);
    LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_SEARCH_RESULT], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT_RESULT);
    EXPECT_TRUE(getNetworkResultCallback);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkSearchInformation_0900
 * @tc.name    Set the slot id is -1 to test the GetNetworkSearchInformation and the result is false
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkSearchInformation_0900, Function | MediumTest | Level3)
{
    int slotId = -1;
    bool networkSearchResult = GetProxy()->GetNetworkSearchInformation(slotId, g_callback);
    EXPECT_FALSE(networkSearchResult);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetIsoCountryCodeForNetwork_0100
 * @tc.name    Set the slot id is 0 to test the GetIsoCountryCodeForNetwork() and return country code is 'cn'
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetIsoCountryCodeForNetwork_0100, Function | MediumTest | Level3)
{
    std::u16string countryCode = GetProxy()->GetIsoCountryCodeForNetwork(SLOT_0);
    std::string str = Str16ToStr8(countryCode);
    EXPECT_STREQ(str.c_str(), "cn");
}

/*
 * @tc.number  Telephony_NetworkSearch_GetIsoCountryCodeForNetwork_0800
 * @tc.name    Set the slot id is 8 to test the GetIsoCountryCodeForNetwork() and return country code is ''
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetIsoCountryCodeForNetwork_0800, Function | MediumTest | Level3)
{
    int slotId = 8;
    std::u16string countryCode = GetProxy()->GetIsoCountryCodeForNetwork(slotId);
    std::string str = Str16ToStr8(countryCode);
    EXPECT_STREQ(str.c_str(), "");
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_0200
 * @tc.name    Set the preferred network mode CORE_NETWORK_MODE_GSM to test the GetPreferredNetwork() return the
 *             preferred network mode is CORE_NETWORK_MODE_GSM
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_0200, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(SLOT_0, CORE_NETWORK_MODE_GSM, g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_0, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult, CORE_NETWORK_MODE_GSM);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_0300
 * @tc.name    Set the preferred network mode CORE_NETWORK_MODE_WCDMA to test the GetPreferredNetwork() return the
 *             preferred network mode is CORE_NETWORK_MODE_WCDMA
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_0300, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(SLOT_0, CORE_NETWORK_MODE_WCDMA, g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_0, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult, CORE_NETWORK_MODE_WCDMA);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_0400
 * @tc.name    Set the preferred network mode CORE_NETWORK_MODE_LTE to test the GetPreferredNetwork() return the
 *             preferred network mode is CORE_NETWORK_MODE_LTE
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_0400, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(SLOT_0, CORE_NETWORK_MODE_LTE, g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_0, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult, CORE_NETWORK_MODE_LTE);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_0500
 * @tc.name    Set the preferred network mode CORE_NETWORK_MODE_LTE_WCDMA to test the GetPreferredNetwork() return
 *             the preferred network mode is CORE_NETWORK_MODE_LTE_WCDMA
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_0500, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(SLOT_0, CORE_NETWORK_MODE_LTE_WCDMA, g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_0, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult, CORE_NETWORK_MODE_LTE_WCDMA);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_0600
 * @tc.name    Set the preferred network mode CORE_NETWORK_MODE_LTE_WCDMA_GSM to test the GetPreferredNetwork()
 *             return the preferred network mode is CORE_NETWORK_MODE_LTE_WCDMA_GSM
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_0600, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(SLOT_0, CORE_NETWORK_MODE_LTE_WCDMA_GSM, g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_0, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult, CORE_NETWORK_MODE_AUTO);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_0700
 * @tc.name    Set the preferred network mode CORE_NETWORK_MODE_WCDMA_GSM to test the GetPreferredNetwork() return
 *             the preferred network mode is CORE_NETWORK_MODE_WCDMA_GSM
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_0700, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(SLOT_0, CORE_NETWORK_MODE_WCDMA_GSM, g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_0, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult, CORE_NETWORK_MODE_WCDMA_GSM);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_1000
 * @tc.name    Set the slot id is -1 to test the GetPreferredNetwork() and return the false
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_1000, Function | MediumTest | Level3)
{
    int slotId = -1;
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(slotId, g_callback);
    EXPECT_FALSE(getPreferredMode);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_1300
 * @tc.name    Set the slot id is 1 to test the GetPreferredNetwork() and return the false
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_1300, Function | MediumTest | Level3)
{
    int slotId = 1;
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(slotId, g_callback);
    EXPECT_FALSE(getPreferredMode);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_1400
 * @tc.name    Set the slot id is 2 to test the GetPreferredNetwork() and return the false
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_1400, Function | MediumTest | Level3)
{
    int slotId = 2;
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(slotId, g_callback);
    EXPECT_FALSE(getPreferredMode);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_0100
 * @tc.name    Set the preferred network mode -1 to test the SetPreferredNetwork() callback is false and err code is
 *             HRIL_ERR_INVALID_PARAMETER
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_0100, Function | MediumTest | Level3)
{
    RecoverPreferredNetwork();
    int32_t networkMode = -1;
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(SLOT_0, networkMode, g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_FALSE(setPreferredNetworkModeResult);
    EXPECT_EQ(errCodeResult, HRIL_ERR_INVALID_PARAMETER);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_0, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getPreferredNetworkModeResult, CORE_NETWORK_MODE_AUTO);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_0200
 * @tc.name    Set the preferred network mode 7 to test the SetPreferredNetwork() callback is false and err code is
 *             HRIL_ERR_INVALID_PARAMETER
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_0200, Function | MediumTest | Level3)
{
    RecoverPreferredNetwork();
    int32_t networkMode = 7;
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(SLOT_0, networkMode, g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_FALSE(setPreferredNetworkModeResult);
    EXPECT_EQ(errCodeResult, HRIL_ERR_INVALID_PARAMETER);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_0, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getPreferredNetworkModeResult, CORE_NETWORK_MODE_AUTO);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_0500
 * @tc.name    Set the preferred network mode CORE_NETWORK_MODE_LTE to test the GetNetworkStateCache() ps and cs radio
 *             tech is RADIO_TECHNOLOGY_LTE preferred network mode is CORE_NETWORK_MODE_LTE
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_0500, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(SLOT_0, CORE_NETWORK_MODE_LTE, g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    sleep(WAIT_RECOVER);
    RadioTech psRadioTech = static_cast<RadioTech>(GetNetworkState()->GetPsRadioTech());
    RadioTech csRadioTech = static_cast<RadioTech>(GetNetworkState()->GetCsRadioTech());
    LOG("Telephony_NetworkSearch_SetPreferredNetwork_0500 psRadioTech = %d csRadioTech = %d", psRadioTech, csRadioTech);
    EXPECT_TRUE(psRadioTech == RadioTech::RADIO_TECHNOLOGY_LTE || csRadioTech == RadioTech::RADIO_TECHNOLOGY_LTE);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_0600
 * @tc.name    Set the slot id is 12 to test the SetPreferredNetwork() callback is true and the errcode is
 *             HRIL_ERR_SUCCESS
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_0600, Function | MediumTest | Level3)
{
    RecoverPreferredNetwork();
    int slotId = -1;
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(slotId, CORE_NETWORK_MODE_GSM, g_callback);
    EXPECT_FALSE(setPreferredMode);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_0, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getPreferredNetworkModeResult, CORE_NETWORK_MODE_AUTO);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_0900
 * @tc.name    Set the slot id is 1 to test the SetPreferredNetwork() return the false and current preferred network
 *             mode is CORE_NETWORK_MODE_AUTO
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_0900, Function | MediumTest | Level3)
{
    RecoverPreferredNetwork();
    int slotId = 1;
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(slotId, CORE_NETWORK_MODE_WCDMA, g_callback);
    EXPECT_FALSE(setPreferredMode);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_0, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getPreferredNetworkModeResult, CORE_NETWORK_MODE_AUTO);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_1000
 * @tc.name    Set the slot id is 2 to test the SetPreferredNetwork() return the false and current preferred network
 *             mode is CORE_NETWORK_MODE_AUTO
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_1000, Function | MediumTest | Level3)
{
    RecoverPreferredNetwork();
    int slotId = 2;
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(slotId, CORE_NETWORK_MODE_LTE_WCDMA, g_callback);
    EXPECT_FALSE(setPreferredMode);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_0, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getPreferredNetworkModeResult, CORE_NETWORK_MODE_AUTO);
}