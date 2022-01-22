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
 *             interface to query the network registration service status as the registration is successful and
 *             IsEmergency is false
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
    EXPECT_LE(radioTech, RadioTech::RADIO_TECHNOLOGY_NR);
    radioTech = static_cast<RadioTech>(GetNetworkState()->GetCsRadioTech());
    EXPECT_GE(radioTech, RadioTech::RADIO_TECHNOLOGY_UNKNOWN);
    EXPECT_LE(radioTech, RadioTech::RADIO_TECHNOLOGY_NR);
    bool emergency = GetNetworkState()->IsEmergency();
    EXPECT_FALSE(emergency);
    NrState nrState = GetNetworkState()->GetNrState();
    EXPECT_GE(nrState, NrState::NR_STATE_NOT_SUPPORT);
    EXPECT_LE(nrState, NrState::NR_NSA_STATE_SA_ATTACHED);
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
 * @tc.name    Test the GetPsRadioTech interface query function, and return the PS network mode as UNKNOWN to LTE
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPsRadioTech_0100, Function | MediumTest | Level3)
{
    RadioTech getPsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetPsRadioTech());
    EXPECT_GE(getPsRadioTech, RadioTech::RADIO_TECHNOLOGY_UNKNOWN);
    EXPECT_LE(getPsRadioTech, RadioTech::RADIO_TECHNOLOGY_NR);
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
 * @tc.name    Test the GetCsRadioTech interface query function, and return the CS network mode as  UNKNOWN to LTE
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCsRadioTech_0100, Function | MediumTest | Level3)
{
    RadioTech getCsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetCsRadioTech());
    EXPECT_GE(getCsRadioTech, RadioTech::RADIO_TECHNOLOGY_UNKNOWN);
    EXPECT_LE(getCsRadioTech, RadioTech::RADIO_TECHNOLOGY_NR);
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
    std::string operatorNumeric = Str16ToStr8(GetProxy()->GetOperatorNumeric(SLOT_ID));
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
    std::string operatorName = Str16ToStr8(GetProxy()->GetOperatorName(SLOT_ID));
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
    auto signalVec = GetProxy()->GetSignalInfoList(SLOT_ID);
    SignalInformation::NetworkType type;
    int level = 0;
    ASSERT_FALSE(signalVec.empty());
    for (const auto &singnal_sptr : signalVec) {
        ASSERT_NE(singnal_sptr, nullptr);
        type = singnal_sptr->GetNetworkType();
        LOG("Telephony_NetworkSearch_GetSignalInfoList_0100 type = %d", type);
        EXPECT_GE(type, SignalInformation::NetworkType::GSM);
        EXPECT_LE(type, SignalInformation::NetworkType::NR);
        level = singnal_sptr->GetSignalLevel();
        LOG("Telephony_NetworkSearch_GetSignalInfoList_0100 level = %d", level);
        int min = SIGNAL_STRENGTH_INVALID;
        int max = SIGNAL_STRENGTH_HIGHEST;
        EXPECT_GE(level, min);
        EXPECT_LE(level, max);
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetSignalInfoList_0400
 * @tc.name    Set the slot id is 5 to test the GetSignalInfoList interface query function and return empty
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
    int getPsRadioTech = RadioTechToNetworkType(GetNetworkState()->GetPsRadioTech());
    int getCsRadioTech = RadioTechToNetworkType(GetNetworkState()->GetCsRadioTech());
    auto signalVec = GetProxy()->GetSignalInfoList(SLOT_ID);
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
    SelectionMode selectionMode = SelectionMode::MODE_TYPE_MANUAL;
    hasNewData[GET_NETWORK_MODEL] = false;
    bool setSelectModeResult = GetProxy()->SetNetworkSelectionMode(SLOT_ID, static_cast<int32_t>(selectionMode),
        SetNetworkInformation(static_cast<int32_t>(selectionMode)), false, g_callback);
    ASSERT_TRUE(setSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getSelectModeResult = GetProxy()->GetNetworkSelectionMode(SLOT_ID, g_callback);
    ASSERT_TRUE(getSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getNetworkModeCallbackResult, static_cast<int32_t>(selectionMode));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkSelectionMode_0200
 * @tc.name    Test the network selection mode is automatic to test the result is MODE_TYPE_AUTO
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkSelectionMode_0200, Function | MediumTest | Level3)
{
    SelectionMode selectionMode = SelectionMode::MODE_TYPE_AUTO;
    hasNewData[GET_NETWORK_MODEL] = false;
    bool setSelectModeResult = GetProxy()->SetNetworkSelectionMode(SLOT_ID, static_cast<int32_t>(selectionMode),
        SetNetworkInformation(static_cast<int32_t>(selectionMode)), false, g_callback);
    ASSERT_TRUE(setSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getSelectModeResult = GetProxy()->GetNetworkSelectionMode(SLOT_ID, g_callback);
    ASSERT_TRUE(getSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getNetworkModeCallbackResult, static_cast<int32_t>(selectionMode));
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
 * @tc.name    Test the network selection mode when selectmode is MODE_TYPE_AUTO networkInformation is current card
 *             resumeSelection is "False" the result is True and selection mode is MODE_TYPE_AUTO
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetNetworkSelectionMode_0100, Function | MediumTest | Level3)
{
    SelectionMode selectionMode = SelectionMode::MODE_TYPE_AUTO;
    hasNewData[GET_NETWORK_MODEL] = false;
    bool setSelectModeResult = GetProxy()->SetNetworkSelectionMode(SLOT_ID, static_cast<int32_t>(selectionMode),
        SetNetworkInformation(static_cast<int32_t>(selectionMode)), false, g_callback);
    ASSERT_TRUE(setSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_TRUE(setNetworkModeCallbackResult);
    ASSERT_EQ(errCodeResult, HRIL_ERR_SUCCESS);
    bool getSelectModeResult = GetProxy()->GetNetworkSelectionMode(SLOT_ID, g_callback);
    ASSERT_TRUE(getSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getNetworkModeCallbackResult, static_cast<int32_t>(selectionMode));
}

/*
 * @tc.number  Telephony_NetworkSearch_SetNetworkSelectionMode_0200
 * @tc.name    Test the network selection mode when selectmode is MODE_TYPE_MANUAL networkInformation is current card
 *             resumeSelection is "False" the result is True and selection mode is MODE_TYPE_MANUAL
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetNetworkSelectionMode_0200, Function | MediumTest | Level3)
{
    SelectionMode selectionMode = SelectionMode::MODE_TYPE_MANUAL;
    hasNewData[GET_NETWORK_MODEL] = false;
    bool setSelectModeResult = GetProxy()->SetNetworkSelectionMode(SLOT_ID, static_cast<int32_t>(selectionMode),
        SetNetworkInformation(static_cast<int32_t>(selectionMode)), false, g_callback);
    ASSERT_TRUE(setSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_TRUE(setNetworkModeCallbackResult);
    ASSERT_EQ(errCodeResult, HRIL_ERR_SUCCESS);
    bool getSelectModeResult = GetProxy()->GetNetworkSelectionMode(SLOT_ID, g_callback);
    ASSERT_TRUE(getSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getNetworkModeCallbackResult, static_cast<int32_t>(selectionMode));
}

/*
 * @tc.number  Telephony_NetworkSearch_SetNetworkSelectionMode_0300
 * @tc.name    Test the network selection mode when selectmode is "5" networkInformation is current card
 *             resumeSelection is "False" the result is False and selection mode is MODE_TYPE_AUTO
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetNetworkSelectionMode_0300, Function | MediumTest | Level3)
{
    RecoverNetworkSelectionMode();
    int selectMode = 5;
    bool setSelectModeResult =
        GetProxy()->SetNetworkSelectionMode(SLOT_ID, selectMode, SetNetworkInformation(selectMode), false, g_callback);
    ASSERT_TRUE(setSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_FALSE(setNetworkModeCallbackResult);
    ASSERT_EQ(errCodeResult, HRIL_ERR_INVALID_PARAMETER);
    bool getSelectModeResult = GetProxy()->GetNetworkSelectionMode(SLOT_ID, g_callback);
    ASSERT_TRUE(getSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getNetworkModeCallbackResult, static_cast<int32_t>(SelectionMode::MODE_TYPE_AUTO));
}

/*
 * @tc.number  Telephony_NetworkSearch_SetNetworkSelectionMode_0400
 * @tc.name    Test the network selection mode when selectmode is MODE_TYPE_MANUAL networkInformation is "SSSSS"
 *             resumeSelection is "False" the result is False and selection mode is MODE_TYPE_AUTO
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetNetworkSelectionMode_0400, Function | MediumTest | Level3)
{
    RecoverNetworkSelectionMode();
    SelectionMode selectionMode = SelectionMode::MODE_TYPE_MANUAL;
    sptr<NetworkInformation> networkInfo(new NetworkInformation());
    if (networkInfo != nullptr) {
        networkInfo->SetOperateInformation("CHINA MOBULE", "CMCC", "SSSSS",
            static_cast<int32_t>(NetworkPlmnState::NETWORK_PLMN_STATE_AVAILABLE),
            static_cast<int32_t>(NetworkRat::NETWORK_LTE));
    }
    bool setSelectModeResult = GetProxy()->SetNetworkSelectionMode(
        SLOT_ID, static_cast<int32_t>(selectionMode), networkInfo, false, g_callback);
    ASSERT_TRUE(setSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_FALSE(setNetworkModeCallbackResult);
    ASSERT_EQ(errCodeResult, HRIL_ERR_INVALID_MODEM_PARAMETER);
    bool getSelectModeResult = GetProxy()->GetNetworkSelectionMode(SLOT_ID, g_callback);
    ASSERT_TRUE(getSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getNetworkModeCallbackResult, static_cast<int32_t>(SelectionMode::MODE_TYPE_AUTO));
}

/*
 * @tc.number  Telephony_NetworkSearch_SetNetworkSelectionMode_0500
 * @tc.name    Test the network selection mode when selectmode is MODE_TYPE_AUTO networkInformation is current card
 *             resumeSelection is "True" the result is True and selection mode is MODE_TYPE_AUTO
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetNetworkSelectionMode_0500, Function | MediumTest | Level3)
{
    SelectionMode selectionMode = SelectionMode::MODE_TYPE_AUTO;
    bool setSelectModeResult = GetProxy()->SetNetworkSelectionMode(SLOT_ID, static_cast<int32_t>(selectionMode),
        SetNetworkInformation(static_cast<int32_t>(selectionMode)), true, g_callback);
    ASSERT_TRUE(setSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_TRUE(setNetworkModeCallbackResult);
    ASSERT_EQ(errCodeResult, HRIL_ERR_SUCCESS);
    hasNewData[GET_NETWORK_MODEL] = false;
    bool getSelectModeResult = GetProxy()->GetNetworkSelectionMode(SLOT_ID, g_callback);
    ASSERT_TRUE(getSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getNetworkModeCallbackResult, static_cast<int32_t>(selectionMode));
}

/*
 * @tc.number  Telephony_NetworkSearch_SetNetworkSelectionMode_0900
 * @tc.name    Set the slot id is 7 to test the SetNetworkSelectionMode and the result is false
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetNetworkSelectionMode_0900, Function | MediumTest | Level3)
{
    SelectionMode selectionMode = SelectionMode::MODE_TYPE_AUTO;
    int slotId = 7;
    bool setSelectModeResult = GetProxy()->SetNetworkSelectionMode(slotId, static_cast<int32_t>(selectionMode),
        SetNetworkInformation(static_cast<int32_t>(selectionMode)), false, g_callback);
    EXPECT_FALSE(setSelectModeResult);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkSearchInformation_0100
 * @tc.name    Test the result from GetNetworkSearchInformation when the select mode is MODE_TYPE_AUTO
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkSearchInformation_0100, Function | MediumTest | Level3)
{
    SelectionMode selectionMode = SelectionMode::MODE_TYPE_AUTO;
    bool setSelectModeResult =
        GetProxy()->SetNetworkSelectionMode(SLOT_ID, static_cast<int32_t>(selectionMode), nullptr, false, g_callback);
    ASSERT_TRUE(setSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getSelectModeResult = GetProxy()->GetNetworkSelectionMode(SLOT_ID, g_callback);
    ASSERT_TRUE(getSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool networkSearchResult = GetProxy()->GetNetworkSearchInformation(SLOT_ID, g_callback);
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
    SelectionMode selectionMode = SelectionMode::MODE_TYPE_MANUAL;
    bool setSelectModeResult = GetProxy()->SetNetworkSelectionMode(SLOT_ID, static_cast<int32_t>(selectionMode),
        SetNetworkInformation(static_cast<int32_t>(selectionMode)), false, g_callback);
    ASSERT_TRUE(setSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getSelectModeResult = GetProxy()->GetNetworkSelectionMode(SLOT_ID, g_callback);
    ASSERT_TRUE(getSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool networkSearchResult = GetProxy()->GetNetworkSearchInformation(SLOT_ID, g_callback);
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
    std::u16string countryCode = GetProxy()->GetIsoCountryCodeForNetwork(SLOT_ID);
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
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_GSM), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_GSM));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_0300
 * @tc.name    Set the preferred network mode CORE_NETWORK_MODE_WCDMA to test the GetPreferredNetwork() return the
 *             preferred network mode is CORE_NETWORK_MODE_WCDMA
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_0300, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_WCDMA), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_WCDMA));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_0400
 * @tc.name    Set the preferred network mode CORE_NETWORK_MODE_LTE to test the GetPreferredNetwork() return the
 *             preferred network mode is CORE_NETWORK_MODE_LTE
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_0400, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_LTE), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_LTE));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_0700
 * @tc.name    Set the slot id is -1 to test the GetPreferredNetwork() and return the false
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_0700, Function | MediumTest | Level3)
{
    int slotId = -1;
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(slotId, g_callback);
    EXPECT_FALSE(getPreferredMode);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_1000
 * @tc.name    Set the slot id is 5 to test the GetPreferredNetwork() and return the false
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_1000, Function | MediumTest | Level3)
{
    int slotId = 5;
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(slotId, g_callback);
    EXPECT_FALSE(getPreferredMode);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_1100
 * @tc.name    Set the slot id is 2 to test the GetPreferredNetwork() and return the false
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_1100, Function | MediumTest | Level3)
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
    int32_t networkMode = -1;
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(SLOT_ID, networkMode, g_callback);
    ASSERT_FALSE(setPreferredMode);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_AUTO));
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_0200
 * @tc.name    Set the preferred network mode 77 to test the SetPreferredNetwork() callback is false and err code is
 *             HRIL_ERR_INVALID_PARAMETER
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_0200, Function | MediumTest | Level3)
{
    int32_t networkMode = 77;
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(SLOT_ID, networkMode, g_callback);
    ASSERT_FALSE(setPreferredMode);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_AUTO));
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_0500
 * @tc.name    Set the preferred network mode CORE_NETWORK_MODE_LTE to test the GetNetworkState() ps and cs radio
 *             tech is RADIO_TECHNOLOGY_LTE preferred network mode is CORE_NETWORK_MODE_LTE
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_0500, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_LTE), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    sleep(WAIT_RECOVER); // WAIT_RECOVER
    RadioTech psRadioTech = static_cast<RadioTech>(GetNetworkState()->GetPsRadioTech());
    RadioTech csRadioTech = static_cast<RadioTech>(GetNetworkState()->GetCsRadioTech());
    LOG("Telephony_NetworkSearch_SetPreferredNetwork_0500 psRadioTech = %d csRadioTech = %d", psRadioTech, csRadioTech);
    EXPECT_TRUE(psRadioTech == RadioTech::RADIO_TECHNOLOGY_LTE || csRadioTech == RadioTech::RADIO_TECHNOLOGY_LTE);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_0600
 * @tc.name    Set the slot id is -1 to test the SetPreferredNetwork() callback is true and the errcode is
 *             HRIL_ERR_SUCCESS
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_0600, Function | MediumTest | Level3)
{
    int slotId = -1;
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        slotId, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_GSM), g_callback);
    EXPECT_FALSE(setPreferredMode);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_AUTO));
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_0900
 * @tc.name    Set the slot id is 5 to test the SetPreferredNetwork() return the false and current preferred network
 *             mode is CORE_NETWORK_MODE_AUTO
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_0900, Function | MediumTest | Level3)
{
    int slotId = 5;
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        slotId, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_WCDMA), g_callback);
    EXPECT_FALSE(setPreferredMode);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_AUTO));
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_1000
 * @tc.name    Set the slot id is 2 to test the SetPreferredNetwork() return the false and current preferred network
 *             mode is CORE_NETWORK_MODE_AUTO
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_1000, Function | MediumTest | Level3)
{
    int slotId = 2;
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        slotId, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_LTE_WCDMA), g_callback);
    EXPECT_FALSE(setPreferredMode);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_AUTO));
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_1200
 * @tc.name    Test the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_LTE_WCDMA and use
 *             GetPreferredNetwork() to test the return the preferred network mode is CORE_NETWORK_MODE_LTE_WCDMA
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_1200, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_LTE_WCDMA), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_LTE_WCDMA));
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_1300
 * @tc.name    Test the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_LTE_WCDMA_GSM and use
 *             GetPreferredNetwork() to test the return the preferred network mode is CORE_NETWORK_MODE_AUTO
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_1300, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_LTE_WCDMA_GSM), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_AUTO));
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_1400
 * @tc.name    Test the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_WCDMA_GSM and use
 *             GetPreferredNetwork() to test the return the preferred network mode is CORE_NETWORK_MODE_WCDMA_GSM
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_1400, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_WCDMA_GSM), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_WCDMA_GSM));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCellInfoList_0100
 * @tc.name    The slot id is 0 to test the GetCellInfoList() and the result is current network list
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCellInfoList_0100, Function | MediumTest | Level3)
{
    std::vector<sptr<CellInformation>> cellInfoList = GetProxy()->GetCellInfoList(SLOT_ID);
    ASSERT_FALSE(cellInfoList.empty());
    CellInformation::CellType type;
    for (const auto &cellList : cellInfoList) {
        ASSERT_NE(cellList, nullptr);
        bool result = false;
        type = cellList->GetNetworkType();
        LOG("Telephony_NetworkSearch_GetCellInfoList_0100 type:%d", static_cast<int32_t>(type));
        if (type == CellInformation::CellType::CELL_TYPE_GSM) {
            GsmCellInformation *gsm = reinterpret_cast<GsmCellInformation *>(cellList.GetRefPtr());
            EXPECT_GE(gsm->GetLac(), CELL_INFO_MIN);
            EXPECT_LE(gsm->GetLac(), CELL_INFO_LAC_TAC_MAX);
            EXPECT_GE(gsm->GetCellId(), CELL_INFO_MIN);
            EXPECT_LE(gsm->GetCellId(), CELL_INFO_GSM_CELLID_MAX);
            EXPECT_GE(gsm->GetArfcn(), CELL_INFO_MIN);
            EXPECT_LE(gsm->GetArfcn(), CELL_INFO_ARFCN_MAX);
            EXPECT_GE(gsm->GetBsic(), CELL_INFO_MIN);
            EXPECT_LE(gsm->GetBsic(), CELL_INFO_BSIC_MAX);
            EXPECT_EQ(gsm->GetMcc(), CELL_INFO_MCC);
            EXPECT_GE(gsm->GetMnc(), CELL_INFO_MIN);
            EXPECT_LE(gsm->GetMnc(), CELL_INFO_MNC_MAX);
            LOG("GSM String: %s", gsm->ToString().c_str());
        } else if (type == CellInformation::CellType::CELL_TYPE_WCDMA) {
            WcdmaCellInformation *wcdma = reinterpret_cast<WcdmaCellInformation *>(cellList.GetRefPtr());
            EXPECT_GE(wcdma->GetLac(), CELL_INFO_MIN);
            EXPECT_LE(wcdma->GetLac(), CELL_INFO_LAC_TAC_MAX);
            EXPECT_GE(wcdma->GetCellId(), CELL_INFO_MIN);
            EXPECT_LE(wcdma->GetCellId(), CELL_INFO_WCDMA_CELLID_MAX);
            EXPECT_GE(wcdma->GetArfcn(), CELL_INFO_MIN);
            EXPECT_LE(wcdma->GetArfcn(), CELL_INFO_ARFCN_MAX);
            EXPECT_GE(wcdma->GetPsc(), CELL_INFO_MIN);
            EXPECT_LE(wcdma->GetPsc(), CELL_INFO_PSC_MAX);
            EXPECT_EQ(wcdma->GetMcc(), CELL_INFO_MCC);
            EXPECT_GE(wcdma->GetMnc(), CELL_INFO_MIN);
            EXPECT_LE(wcdma->GetMnc(), CELL_INFO_MNC_MAX);
            LOG("WCDMA String: %s", wcdma->ToString().c_str());
        } else if (type == CellInformation::CellType::CELL_TYPE_LTE) {
            LteCellInformation *lte = reinterpret_cast<LteCellInformation *>(cellList.GetRefPtr());
            EXPECT_GE(lte->GetTac(), CELL_INFO_MIN);
            EXPECT_LE(lte->GetTac(), CELL_INFO_LAC_TAC_MAX);
            EXPECT_GE(lte->GetCellId(), CELL_INFO_MIN);
            EXPECT_LE(lte->GetCellId(), CELL_INFO_LTE_CELLID_MAX);
            EXPECT_GE(lte->GetArfcn(), CELL_INFO_MIN);
            EXPECT_LE(lte->GetArfcn(), CELL_INFO_EARFCN_MAX);
            EXPECT_GE(lte->GetPci(), CELL_INFO_MIN);
            EXPECT_LE(lte->GetPci(), CELL_INFO_PCI_MAX);
            EXPECT_EQ(lte->GetMcc(), CELL_INFO_MCC);
            EXPECT_GE(lte->GetMnc(), CELL_INFO_MIN);
            EXPECT_LE(lte->GetMnc(), CELL_INFO_MNC_MAX);
            LOG("LTE String: %s", lte->ToString().c_str());
        } else if (type == CellInformation::CellType::CELL_TYPE_CDMA) {
            CdmaCellInformation *cdma = reinterpret_cast<CdmaCellInformation *>(cellList.GetRefPtr());
            EXPECT_GE(cdma->GetBaseId(), CELL_INFO_MIN);
            EXPECT_LE(cdma->GetBaseId(), CELL_INFO_LAC_TAC_MAX);
            EXPECT_GE(cdma->GetLatitude(), CELL_INFO_LATITU_MIN);
            EXPECT_LE(cdma->GetLatitude(), CELL_INFO_LATITU_MAX);
            EXPECT_GE(cdma->GetLongitude(), CELL_INFO_LONGITU_MIN);
            EXPECT_LE(cdma->GetLongitude(), CELL_INFO_LONGITU_MAX);
            EXPECT_GE(cdma->GetNid(), CELL_INFO_MIN);
            EXPECT_LE(cdma->GetNid(), CELL_INFO_NID_MAX);
            EXPECT_GE(cdma->GetSid(), CELL_INFO_MIN);
            EXPECT_LE(cdma->GetSid(), CELL_INFO_SID_MAX);
            LOG("CDMA String: %s", cdma->ToString().c_str());
        } else if (type == CellInformation::CellType::CELL_TYPE_TDSCDMA) {
            TdscdmaCellInformation *tdscdma = reinterpret_cast<TdscdmaCellInformation *>(cellList.GetRefPtr());
            EXPECT_GE(tdscdma->GetLac(), CELL_INFO_MIN);
            EXPECT_LE(tdscdma->GetLac(), CELL_INFO_LAC_TAC_MAX);
            EXPECT_GE(tdscdma->GetCellId(), CELL_INFO_MIN);
            EXPECT_LE(tdscdma->GetCellId(), CELL_INFO_WCDMA_CELLID_MAX);
            int uarfcn = tdscdma->GetArfcn();
            EXPECT_TRUE((uarfcn >= CELL_INFO_UARFCN_9400 && uarfcn <= CELL_INFO_UARFCN_9600) ||
                        (uarfcn >= CELL_INFO_UARFCN_10050 && uarfcn <= CELL_INFO_UARFCN_10125) ||
                        (uarfcn >= CELL_INFO_UARFCN_11500 && uarfcn <= CELL_INFO_UARFCN_12000));
            EXPECT_GE(tdscdma->GetArfcn(), CELL_INFO_MIN);
            EXPECT_LE(tdscdma->GetArfcn(), CELL_INFO_EARFCN_MAX);
            EXPECT_GE(tdscdma->GetCpid(), CELL_INFO_MIN);
            EXPECT_LE(tdscdma->GetCpid(), CELL_INFO_CPID_MAX);
            EXPECT_EQ(tdscdma->GetMcc(), CELL_INFO_MCC);
            EXPECT_GE(tdscdma->GetMnc(), CELL_INFO_MIN);
            EXPECT_LE(tdscdma->GetMnc(), CELL_INFO_MNC_MAX);
            LOG("TDSCDMA String: %s", tdscdma->ToString().c_str());
        } else if (type == CellInformation::CellType::CELL_TYPE_NR) {
            NrCellInformation *nr = reinterpret_cast<NrCellInformation *>(cellList.GetRefPtr());
            EXPECT_GE(nr->GetPci(), CELL_INFO_MIN);
            EXPECT_LE(nr->GetPci(), CELL_INFO_NR_PCI_MAX);
            EXPECT_GE(nr->GetArfcn(), CELL_INFO_MIN);
            EXPECT_LE(nr->GetArfcn(), CELL_INFO_NR_NRARFCN_MAX);
            EXPECT_EQ(nr->GetMcc(), CELL_INFO_MCC);
            EXPECT_GE(nr->GetMnc(), CELL_INFO_MIN);
            EXPECT_LE(nr->GetMnc(), CELL_INFO_MNC_MAX);
            EXPECT_GE(nr->GetTac(), CELL_INFO_MIN);
            EXPECT_LE(nr->GetTac(), CELL_INFO_LAC_TAC_MAX);
            EXPECT_GE(nr->GetNci(), CELL_INFO_MIN);
            EXPECT_LE(nr->GetNci(), CELL_INFO_NR_NCI_MAX);
            LOG("NR String: %s", nr->ToString().c_str());
        } else {
            EXPECT_TRUE(result);
            LOG("GetCellInfoList is RAT_TYPE_NONE");
        }
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCellInfoList_0200
 * @tc.name    The slot id is 5 to test the GetCellInfoList() is wrong and return is empty
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCellInfoList_0200, Function | MediumTest | Level3)
{
    int slotId = 5;
    std::vector<sptr<CellInformation>> cellInfoList = GetProxy()->GetCellInfoList(slotId);
    EXPECT_TRUE(cellInfoList.empty());
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCellInfoList_0300
 * @tc.name    The slot id is -1 to test the GetCellInfoList() is wrong and return is empty
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCellInfoList_0300, Function | MediumTest | Level3)
{
    int slotId = -1;
    std::vector<sptr<CellInformation>> cellInfoList = GetProxy()->GetCellInfoList(slotId);
    EXPECT_TRUE(cellInfoList.empty());
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCellInfoList_0400
 * @tc.name    The slot id is 2 to test the GetCellInfoList() is wrong and return is empty
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCellInfoList_0400, Function | MediumTest | Level3)
{
    int slotId = 2;
    std::vector<sptr<CellInformation>> cellInfoList = GetProxy()->GetCellInfoList(slotId);
    EXPECT_TRUE(cellInfoList.empty());
}

/*
 * @tc.number  Telephony_NetworkSearch_SendUpdateCellLocationRequest_0100
 * @tc.name    Test the SendUpdateCellLocationRequest() and the result is true
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SendUpdateCellLocationRequest_0100, Function | MediumTest | Level3)
{
    bool requestResult = GetProxy()->SendUpdateCellLocationRequest(SLOT_ID);
    EXPECT_TRUE(requestResult);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetImei_0100
 * @tc.name    The slot id is 0 to test the GetImei() and the result is not empty and the length is 15
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetImei_0100, Function | MediumTest | Level3)
{
    std::u16string getImei = GetProxy()->GetImei(SLOT_ID);
    std::string str = Str16ToStr8(getImei);
    EXPECT_STRNE(str.c_str(), "");
    LOG("Telephony_NetworkSearch_GetImei_0100 getImei:%s", str.c_str());
    int size = str.size();
    EXPECT_EQ(size, NetworkSearchTest::IMEI_SIZE);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetImei_0200
 * @tc.name    The slot id is 5 to test the GetImei() is wrong and return null
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetImei_0200, Function | MediumTest | Level3)
{
    int slotId = 5;
    std::u16string getImei = GetProxy()->GetImei(slotId);
    std::string str = Str16ToStr8(getImei);
    EXPECT_STREQ(str.c_str(), "");
}

/*
 * @tc.number  Telephony_NetworkSearch_GetImei_0300
 * @tc.name    The slot id is -1 to test the GetImei() is wrong and return null
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetImei_0300, Function | MediumTest | Level3)
{
    int slotId = -1;
    std::u16string getImei = GetProxy()->GetImei(slotId);
    std::string str = Str16ToStr8(getImei);
    EXPECT_STREQ(str.c_str(), "");
}

/*
 * @tc.number  Telephony_NetworkSearch_GetImei_0400
 * @tc.name    The slot id is 2 to test the GetImei() is wrong and return null
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetImei_0400, Function | MediumTest | Level3)
{
    int slotId = 2;
    std::u16string getImei = GetProxy()->GetImei(slotId);
    std::string str = Str16ToStr8(getImei);
    EXPECT_STREQ(str.c_str(), "");
}

/*
 * @tc.number  Telephony_NetworkSearch_GetMeid_0800
 * @tc.name    The type is GSM to test the GetMeid() is wrong and return null
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetMeid_0800, Function | MediumTest | Level3)
{
    std::u16string getMeid = GetProxy()->GetMeid(SLOT_ID);
    std::string str = Str16ToStr8(getMeid);
    EXPECT_STREQ(str.c_str(), "");
}

/*
 * @tc.number  Telephony_NetworkSearch_GetUniqueDeviceId_0100
 * @tc.name    The slot id is 0 to test the GetUniqueDeviceId() and the result is not empty and the length is 14 or 15
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetUniqueDeviceId_0100, Function | MediumTest | Level3)
{
    std::u16string getDeviceId = GetProxy()->GetUniqueDeviceId(SLOT_ID);
    std::string str = Str16ToStr8(getDeviceId);
    EXPECT_STRNE(str.c_str(), "");
    LOG("Telephony_NetworkSearch_GetUniqueDeviceId_0100 getDeviceId:%s", str.c_str());
    int size = str.size();
    EXPECT_TRUE(size == NetworkSearchTest::IMEI_SIZE || size == NetworkSearchTest::MEID_SIZE);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetUniqueDeviceId_0200
 * @tc.name    The slot id is 5 to test the GetUniqueDeviceId() is wrong and return null
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetUniqueDeviceId_0200, Function | MediumTest | Level3)
{
    int slotId = 5;
    std::u16string getDeviceId = GetProxy()->GetUniqueDeviceId(slotId);
    std::string str = Str16ToStr8(getDeviceId);
    EXPECT_STREQ(str.c_str(), "");
}

/*
 * @tc.number  Telephony_NetworkSearch_GetUniqueDeviceId_0300
 * @tc.name    The slot id is -1 to test the GetUniqueDeviceId() is wrong and return null
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetUniqueDeviceId_0300, Function | MediumTest | Level3)
{
    int slotId = -1;
    std::u16string getDeviceId = GetProxy()->GetUniqueDeviceId(slotId);
    std::string str = Str16ToStr8(getDeviceId);
    EXPECT_STREQ(str.c_str(), "");
}

/*
 * @tc.number  Telephony_NetworkSearch_GetUniqueDeviceId_0400
 * @tc.name    The slot id is 2 to test the GetUniqueDeviceId() is wrong and return null
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetUniqueDeviceId_0400, Function | MediumTest | Level3)
{
    int slotId = 2;
    std::u16string getDeviceId = GetProxy()->GetUniqueDeviceId(slotId);
    std::string str = Str16ToStr8(getDeviceId);
    EXPECT_STREQ(str.c_str(), "");
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNrOptionMode_0100
 * @tc.name    The slot id is 0 to test the GetNrOptionMode() and the result range is
 *             [NR_MODE_UNKNOWN,NR_MODE_NSA_AND_SA]
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNrOptionMode_0100, Function | MediumTest | Level3)
{
    NrMode nrMode = GetProxy()->GetNrOptionMode(SLOT_ID);
    EXPECT_GE(nrMode, NrMode::NR_MODE_UNKNOWN);
    EXPECT_LE(nrMode, NrMode::NR_MODE_NSA_AND_SA);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNrOptionMode_0200
 * @tc.name    The slot id is 5 to test the GetNrOptionMode() is wrong and return NR_MODE_UNKNOWN
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNrOptionMode_0200, Function | MediumTest | Level3)
{
    int slotId = 5;
    NrMode nrMode = GetProxy()->GetNrOptionMode(slotId);
    EXPECT_EQ(nrMode, NrMode::NR_MODE_UNKNOWN);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNrOptionMode_0300
 * @tc.name    The slot id is -1 to test the GetNrOptionMode() is wrong and return NR_MODE_UNKNOWN
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNrOptionMode_0300, Function | MediumTest | Level3)
{
    int slotId = -1;
    NrMode nrMode = GetProxy()->GetNrOptionMode(slotId);
    EXPECT_EQ(nrMode, NrMode::NR_MODE_UNKNOWN);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNrOptionMode_0400
 * @tc.name    The slot id is 2 to test the GetNrOptionMode() is wrong and return NR_MODE_UNKNOWN
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNrOptionMode_0400, Function | MediumTest | Level3)
{
    int slotId = 2;
    NrMode nrMode = GetProxy()->GetNrOptionMode(slotId);
    EXPECT_EQ(nrMode, NrMode::NR_MODE_UNKNOWN);
}

/*
 * @tc.number  Telephony_NetworkSearch_IsNrSupported_0100
 * @tc.name    To test the IsNrSupported() and the result is true
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_IsNrSupported_0100, Function | MediumTest | Level3)
{
    bool nrResult = GetProxy()->IsNrSupported(SLOT_ID);
    EXPECT_TRUE(nrResult);
}