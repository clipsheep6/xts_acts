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
 * @tc.number  Telephony_NetworkSearch_GetNetworkState_1200
 * @tc.name    Use the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_TDSCDMA_GSM to test tThe
 *             service status of PS registration is the registration is successful, test the GetNetworkState interface
 *             to query the network registration service status as the registration is successful and IsEmergency is
 *             true
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkState_1200, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_TDSCDMA_GSM);
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
    EXPECT_TRUE(emergency);
    NrState nrState = GetNetworkState()->GetNrState();
    EXPECT_GE(nrState, NrState::NR_STATE_NOT_SUPPORT);
    EXPECT_LE(nrState, NrState::NR_NSA_STATE_SA_ATTACHED);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPsRadioTech_0500
 * @tc.name    Use the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_CDMA to test the
 *             GetPsRadioTech interface query function, and return the PS network mode as RADIO_TECHNOLOGY_1XRTT
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPsRadioTech_0500, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_CDMA);
    RadioTech getPsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetPsRadioTech());
    EXPECT_EQ(getPsRadioTech, RadioTech::RADIO_TECHNOLOGY_1XRTT);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPsRadioTech_0600
 * @tc.name    Use the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_TDSCDMA to test the
 *             GetPsRadioTech interface query function, and return the PS network mode as RADIO_TECHNOLOGY_TD_SCDMA
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPsRadioTech_0600, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_TDSCDMA);
    RadioTech getPsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetPsRadioTech());
    EXPECT_EQ(getPsRadioTech, RadioTech::RADIO_TECHNOLOGY_TD_SCDMA);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPsRadioTech_0700
 * @tc.name    Use the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_EVDO to test the
 *             GetPsRadioTech interface query function, and return the PS network mode as RADIO_TECHNOLOGY_EVDO
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPsRadioTech_0700, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_EVDO);
    RadioTech getPsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetPsRadioTech());
    EXPECT_EQ(getPsRadioTech, RadioTech::RADIO_TECHNOLOGY_EVDO);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPsRadioTech_0800
 * @tc.name    Use the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_TDSCDMA_WCDMA to test the
 *             GetPsRadioTech interface query function, and return the PS network mode as RADIO_TECHNOLOGY_EHRPD
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPsRadioTech_0800, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_TDSCDMA_WCDMA);
    RadioTech getPsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetPsRadioTech());
    EXPECT_EQ(getPsRadioTech, RadioTech::RADIO_TECHNOLOGY_EHRPD);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPsRadioTech_0900
 * @tc.name    Use the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_LTE_WCDMA_GSM_EVDO_CDMA to
 *             test the GetPsRadioTech interface query function, and return the PS network mode as RADIO_TECHNOLOGY_HSPA
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPsRadioTech_0900, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_LTE_WCDMA_GSM_EVDO_CDMA);
    RadioTech getPsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetPsRadioTech());
    EXPECT_EQ(getPsRadioTech, RadioTech::RADIO_TECHNOLOGY_HSPA);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPsRadioTech_1000
 * @tc.name    Use the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_EVDO_CDMA to test the
 *             GetPsRadioTech interface query function, and return the PS network mode as RADIO_TECHNOLOGY_HSPAP
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPsRadioTech_1000, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_EVDO_CDMA);
    RadioTech getPsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetPsRadioTech());
    EXPECT_EQ(getPsRadioTech, RadioTech::RADIO_TECHNOLOGY_HSPAP);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPsRadioTech_1100
 * @tc.name    Use the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_LTE_EVDO_CDMA to test the
 *             GetPsRadioTech interface query function, and return the PS network mode as RADIO_TECHNOLOGY_LTE_CA
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPsRadioTech_1100, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_LTE_EVDO_CDMA);
    RadioTech getPsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetPsRadioTech());
    EXPECT_EQ(getPsRadioTech, RadioTech::RADIO_TECHNOLOGY_LTE_CA);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPsRadioTech_1200
 * @tc.name    Use the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_NR to test the
 *             GetPsRadioTech interface query function, and return the PS network mode as RADIO_TECHNOLOGY_NR
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPsRadioTech_1200, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_NR);
    RadioTech getPsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetPsRadioTech());
    EXPECT_EQ(getPsRadioTech, RadioTech::RADIO_TECHNOLOGY_NR);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCsRadioTech_0500
 * @tc.name    Use the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_CDMA to test the
 *             GetCsRadioTech interface query function, and return the Cs network mode as RADIO_TECHNOLOGY_1XRTT
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCsRadioTech_0500, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_CDMA);
    RadioTech getCsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetCsRadioTech());
    EXPECT_EQ(getCsRadioTech, RadioTech::RADIO_TECHNOLOGY_1XRTT);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCsRadioTech_0600
 * @tc.name    Use the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_TDSCDMA to test the
 *             GetCsRadioTech interface query function, and return the Cs network mode as RADIO_TECHNOLOGY_TD_SCDMA
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCsRadioTech_0600, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_TDSCDMA);
    RadioTech getCsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetCsRadioTech());
    EXPECT_EQ(getCsRadioTech, RadioTech::RADIO_TECHNOLOGY_TD_SCDMA);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCsRadioTech_0700
 * @tc.name    Use the SetPreferredNetwork() to set preferred network mode NETWORK_TEST_CDMA_EVDO_0 to test the
 *             GetCsRadioTech interface query function, and return the Cs network mode as RADIO_TECHNOLOGY_EVDO
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCsRadioTech_0700, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_EVDO);
    RadioTech getCsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetCsRadioTech());
    EXPECT_EQ(getCsRadioTech, RadioTech::RADIO_TECHNOLOGY_EVDO);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCsRadioTech_0800
 * @tc.name    Use the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_TDSCDMA_WCDMA to test the
 *             GetCsRadioTech interface query function, and return the PS network mode as RADIO_TECHNOLOGY_EHRPD
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCsRadioTech_0800, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_TDSCDMA_WCDMA);
    RadioTech getCsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetCsRadioTech());
    EXPECT_EQ(getCsRadioTech, RadioTech::RADIO_TECHNOLOGY_EHRPD);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCsRadioTech_0900
 * @tc.name    Use the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_LTE_WCDMA_GSM_EVDO_CDMA to
 *             test the GetCsRadioTech interface query function, and return the PS network mode as RADIO_TECHNOLOGY_HSPA
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCsRadioTech_0900, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_LTE_WCDMA_GSM_EVDO_CDMA);
    RadioTech getCsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetCsRadioTech());
    EXPECT_EQ(getCsRadioTech, RadioTech::RADIO_TECHNOLOGY_HSPA);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCsRadioTech_1000
 * @tc.name    Use the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_EVDO_CDMA to test the
 *             GetCsRadioTech interface query function, and return the PS network mode as RADIO_TECHNOLOGY_HSPAP
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCsRadioTech_1000, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_EVDO_CDMA);
    RadioTech getCsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetCsRadioTech());
    EXPECT_EQ(getCsRadioTech, RadioTech::RADIO_TECHNOLOGY_HSPAP);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCsRadioTech_1100
 * @tc.name    Use the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_LTE_EVDO_CDMA to test the
 *             GetCsRadioTech interface query function, and return the PS network mode as RADIO_TECHNOLOGY_LTE_CA
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCsRadioTech_1100, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_LTE_EVDO_CDMA);
    RadioTech getCsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetCsRadioTech());
    EXPECT_EQ(getCsRadioTech, RadioTech::RADIO_TECHNOLOGY_LTE_CA);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCsRadioTech_1200
 * @tc.name    Use the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_NR to test the
 *             GetCsRadioTech interface query function, and return the PS network mode as RADIO_TECHNOLOGY_NR
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCsRadioTech_1200, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_NR);
    RadioTech getCsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetCsRadioTech());
    EXPECT_EQ(getCsRadioTech, RadioTech::RADIO_TECHNOLOGY_NR);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetSignalInfoList_0600
 * @tc.name    Use the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_CDMA to test the
 *             GetSignalInfoList interface query function, the returned network type is CDMA and the signal level range
 *             is 5
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetSignalInfoList_0600, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_CDMA);
    auto signalVec = GetProxy()->GetSignalInfoList(SLOT_ID);
    SignalInformation::NetworkType type;
    int level = 0;
    if (!signalVec.empty()) {
        for (const auto &singnal_sptr : signalVec) {
            ASSERT_NE(singnal_sptr, nullptr);
            type = singnal_sptr->GetNetworkType();
            LOG("Telephony_NetworkSearch_GetSignalInfoList_0600 type = %d", type);
            EXPECT_EQ(type, SignalInformation::NetworkType::CDMA);
            level = singnal_sptr->GetSignalLevel();
            LOG("Telephony_NetworkSearch_GetSignalInfoList_0600 level = %d", level);
            int min = SIGNAL_STRENGTH_INVALID;
            int max = SIGNAL_STRENGTH_HIGHEST;
            ASSERT_GE(level, min);
            ASSERT_LE(level, max);
        }
    } else {
        EXPECT_FALSE(signalVec.empty());
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetSignalInfoList_0700
 * @tc.name    Use the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_TDSCDMA to test the
 *             GetSignalInfoList interface query function, the returned network type is TDSCDMA and the signal level
 *             range is 5
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetSignalInfoList_0700, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_TDSCDMA);
    auto signalVec = GetProxy()->GetSignalInfoList(SLOT_ID);
    SignalInformation::NetworkType type;
    int level = 0;
    if (!signalVec.empty()) {
        for (const auto &singnal_sptr : signalVec) {
            ASSERT_NE(singnal_sptr, nullptr);
            type = singnal_sptr->GetNetworkType();
            LOG("Telephony_NetworkSearch_GetSignalInfoList_0700 type = %d", type);
            EXPECT_EQ(type, SignalInformation::NetworkType::TDSCDMA);
            level = singnal_sptr->GetSignalLevel();
            LOG("Telephony_NetworkSearch_GetSignalInfoList_0700 level = %d", level);
            int min = SIGNAL_STRENGTH_INVALID;
            int max = SIGNAL_STRENGTH_HIGHEST;
            ASSERT_GE(level, min);
            ASSERT_LE(level, max);
        }
    } else {
        EXPECT_FALSE(signalVec.empty());
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetSignalInfoList_0800
 * @tc.name    Test the GetSignalInfoList interface query function, the returned network type is NR, and the signal
 *             level range is [0,4]
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetSignalInfoList_0800, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_NR);
    auto signalVec = GetProxy()->GetSignalInfoList(SLOT_ID);
    SignalInformation::NetworkType type;
    int level = 0;
    ASSERT_FALSE(signalVec.empty());
    for (const auto &singnal_sptr : signalVec) {
        ASSERT_NE(singnal_sptr, nullptr);
        type = singnal_sptr->GetNetworkType();
        LOG("Telephony_NetworkSearch_GetSignalInfoList_0800 type = %d", type);
        EXPECT_EQ(type, SignalInformation::NetworkType::NR);
        level = singnal_sptr->GetSignalLevel();
        LOG("Telephony_NetworkSearch_GetSignalInfoList_0800 level = %d", level);
        int min = SIGNAL_STRENGTH_INVALID;
        int max = SIGNAL_STRENGTH_HIGHEST;
        EXPECT_GE(level, min);
        EXPECT_LE(level, max);
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_1200
 * @tc.name    Set the preferred network mode CORE_NETWORK_MODE_CDMA to test the GetPreferredNetwork() return the
 *             preferred network mode is CORE_NETWORK_MODE_CDMA
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_1200, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_CDMA), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_CDMA));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_1300
 * @tc.name    Set the preferred network mode CORE_NETWORK_MODE_EVDO to test the GetPreferredNetwork() return the
 *             preferred network mode is CORE_NETWORK_MODE_EVDO
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_1300, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_EVDO), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_EVDO));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_1400
 * @tc.name    Set the preferred network mode CORE_NETWORK_MODE_EVDO_CDMA to test the GetPreferredNetwork() return
 *             the preferred network mode is CORE_NETWORK_MODE_EVDO_CDMA
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_1400, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_EVDO_CDMA), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_EVDO_CDMA));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_1500
 * @tc.name    Set the preferred network mode CORE_NETWORK_MODE_WCDMA_GSM_EVDO_CDMA to test the
 *             GetPreferredNetwork() return the preferred network mode is CORE_NETWORK_MODE_WCDMA_GSM_EVDO_CDMA
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_1500, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_WCDMA_GSM_EVDO_CDMA), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult,
        static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_WCDMA_GSM_EVDO_CDMA));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_1600
 * @tc.name    Set the preferred network mode CORE_NETWORK_MODE_LTE_EVDO_CDMA to test the GetPreferredNetwork()
 * return the preferred network mode is CORE_NETWORK_MODE_LTE_EVDO_CDMA
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_1600, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_LTE_EVDO_CDMA), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(
        getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_LTE_EVDO_CDMA));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_1700
 * @tc.name    Set the preferred network mode CORE_NETWORK_MODE_LTE_WCDMA_GSM_EVDO_CDMA to test the
 *             GetPreferredNetwork() return the preferred network mode is CORE_NETWORK_MODE_LTE_WCDMA_GSM_EVDO_CDMA
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_1700, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_LTE_WCDMA_GSM_EVDO_CDMA), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult,
        static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_LTE_WCDMA_GSM_EVDO_CDMA));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_1800
 * @tc.name    Set the preferred network mode CORE_NETWORK_MODE_TDSCDMA to test the GetPreferredNetwork() return the
 *             preferred network mode is CORE_NETWORK_MODE_TDSCDMA
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_1800, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_TDSCDMA), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_TDSCDMA));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_1900
 * @tc.name    Set the preferred network mode CORE_NETWORK_MODE_TDSCDMA_GSM to test the GetPreferredNetwork() return
 * the preferred network mode is CORE_NETWORK_MODE_TDSCDMA_GSM
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_1900, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_TDSCDMA_GSM), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_TDSCDMA_GSM));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_2000
 * @tc.name    Set the preferred network mode CORE_NETWORK_MODE_NR to test the GetPreferredNetwork() return the
 *             preferred network mode is CORE_NETWORK_MODE_NR
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_2000, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_NR), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_NR));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_2100
 * @tc.name    Set the preferred network mode CORE_NETWORK_MODE_NR_LTE to test the GetPreferredNetwork() return the
 *             preferred network mode is CORE_NETWORK_MODE_NR_LTE
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_2100, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_NR_LTE), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_NR_LTE));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_2200
 * @tc.name    Set the preferred network mode CORE_NETWORK_MODE_NR_LTE_WCDMA to test the GetPreferredNetwork()
 * return the preferred network mode is CORE_NETWORK_MODE_NR_LTE_WCDMA
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_2200, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_NR_LTE_WCDMA), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(
        getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_NR_LTE_WCDMA));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_2300
 * @tc.name    Set the preferred network mode CORE_NETWORK_MODE_NR_LTE_WCDMA_GSM to test the GetPreferredNetwork()
 * return the preferred network mode is CORE_NETWORK_MODE_NR_LTE_WCDMA_GSM
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_2300, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_NR_LTE_WCDMA_GSM), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(
        getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_NR_LTE_WCDMA_GSM));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_2400
 * @tc.name    Set the preferred network mode CORE_NETWORK_MODE_NR_LTE_EVDO_CDMA to test the GetPreferredNetwork()
 * return the preferred network mode is CORE_NETWORK_MODE_NR_LTE_EVDO_CDMA
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_2400, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_NR_LTE_EVDO_CDMA), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(
        getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_NR_LTE_EVDO_CDMA));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_2500
 * @tc.name    Set the preferred network mode CORE_NETWORK_MODE_NR_LTE_WCDMA_GSM_EVDO_CDMA to test the
 * GetPreferredNetwork() return the preferred network mode is CORE_NETWORK_MODE_NR_LTE_WCDMA_GSM_EVDO_CDMA
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_2500, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_NR_LTE_WCDMA_GSM_EVDO_CDMA), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult,
        static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_NR_LTE_WCDMA_GSM_EVDO_CDMA));
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_1500
 * @tc.name    Test the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_TDSCDMA_WCDMA and use
 *             GetPreferredNetwork() to test the return the preferred network mode is
 *             CORE_NETWORK_MODE_TDSCDMA_WCDMA
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_1500, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_TDSCDMA_WCDMA), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(
        getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_TDSCDMA_WCDMA));
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_1600
 * @tc.name    Test the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_TDSCDMA_WCDMA_GSM and use
 *             GetPreferredNetwork() to test the return the preferred network mode is
 *             CORE_NETWORK_MODE_TDSCDMA_WCDMA_GSM
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_1600, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_TDSCDMA_WCDMA_GSM), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(
        getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_TDSCDMA_WCDMA_GSM));
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_1700
 * @tc.name    Test the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_LTE_TDSCDMA and use
 *             GetPreferredNetwork() to test the return the preferred network mode is CORE_NETWORK_MODE_LTE_TDSCDMA
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_1700, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_LTE_TDSCDMA), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_LTE_TDSCDMA));
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_1800
 * @tc.name    Test the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_LTE_TDSCDMA_GSM and use
 *             GetPreferredNetwork() to test the return the preferred network mode is
 *             CORE_NETWORK_MODE_LTE_TDSCDMA_GSM
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_1800, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_LTE_TDSCDMA_GSM), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(
        getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_LTE_TDSCDMA_GSM));
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_1900
 * @tc.name    Test the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_LTE_TDSCDMA_WCDMA and use
 *             GetPreferredNetwork() to test the return the preferred network mode is
 *             CORE_NETWORK_MODE_LTE_TDSCDMA_WCDMA
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_1900, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_LTE_TDSCDMA_WCDMA), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(
        getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_LTE_TDSCDMA_WCDMA));
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_2000
 * @tc.name    Test the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_LTE_TDSCDMA_WCDMA_GSM and
 *             use GetPreferredNetwork() to test the return the preferred network mode is
 *             CORE_NETWORK_MODE_LTE_TDSCDMA_WCDMA_GSM
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_2000, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_LTE_TDSCDMA_WCDMA_GSM), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult,
        static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_LTE_TDSCDMA_WCDMA_GSM));
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_2100
 * @tc.name    Test the SetPreferredNetwork() to set preferred network mode
 *             CORE_NETWORK_MODE_TDSCDMA_WCDMA_GSM_EVDO_CDMA and use GetPreferredNetwork() to test the return the
 *             preferred network mode is CORE_NETWORK_MODE_TDSCDMA_WCDMA_GSM_EVDO_CDMA
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_2100, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_TDSCDMA_WCDMA_GSM_EVDO_CDMA), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult,
        static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_TDSCDMA_WCDMA_GSM_EVDO_CDMA));
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_2200
 * @tc.name    Test the SetPreferredNetwork() to set preferred network mode
 *             CORE_NETWORK_MODE_LTE_TDSCDMA_WCDMA_GSM_EVDO_CDMA and use GetPreferredNetwork() to test the return
 *             the preferred network mode is CORE_NETWORK_MODE_LTE_TDSCDMA_WCDMA_GSM_EVDO_CDMA
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_2200, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(SLOT_ID,
        static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_LTE_TDSCDMA_WCDMA_GSM_EVDO_CDMA), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult,
        static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_LTE_TDSCDMA_WCDMA_GSM_EVDO_CDMA));
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_2300
 * @tc.name    Test the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_NR_LTE_TDSCDMA and use
 *             GetPreferredNetwork() to test the return the preferred network mode is
 * CORE_NETWORK_MODE_NR_LTE_TDSCDMA
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_2300, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_NR_LTE_TDSCDMA), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(
        getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_NR_LTE_TDSCDMA));
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_2400
 * @tc.name    Test the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_NR_LTE_TDSCDMA_GSM and use
 *             GetPreferredNetwork() to test the return the preferred network mode is
 * CORE_NETWORK_MODE_NR_LTE_TDSCDMA_GSM
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_2400, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_NR_LTE_TDSCDMA_GSM), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult,
        static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_NR_LTE_TDSCDMA_GSM));
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_2500
 * @tc.name    Test the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_NR_LTE_TDSCDMA_WCDMA and
 * use GetPreferredNetwork() to test the return the preferred network mode is CORE_NETWORK_MODE_NR_LTE_TDSCDMA_WCDMA
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_2500, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_NR_LTE_TDSCDMA_WCDMA), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult,
        static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_NR_LTE_TDSCDMA_WCDMA));
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_2600
 * @tc.name    Test the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_NR_LTE_TDSCDMA_WCDMA_GSM
 * and use GetPreferredNetwork() to test the return the preferred network mode is
 * CORE_NETWORK_MODE_NR_LTE_TDSCDMA_WCDMA_GSM
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_2600, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_NR_LTE_TDSCDMA_WCDMA_GSM), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult,
        static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_NR_LTE_TDSCDMA_WCDMA_GSM));
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_2700
 * @tc.name    Test the SetPreferredNetwork() to set preferred network mode
 * CORE_NETWORK_MODE_NR_LTE_TDSCDMA_WCDMA_GSM_EVDO_CDMA and use GetPreferredNetwork() to test the return the
 * preferred network mode is CORE_NETWORK_MODE_NR_LTE_TDSCDMA_WCDMA_GSM_EVDO_CDMA
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_2700, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(SLOT_ID,
        static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_NR_LTE_TDSCDMA_WCDMA_GSM_EVDO_CDMA), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult,
        static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_NR_LTE_TDSCDMA_WCDMA_GSM_EVDO_CDMA));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCellInfoList_0800
 * @tc.name    Use the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_CDMA to test the
 *             GetCellInfoList() and the result is CELL_TYPE_CDMA network list
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCellInfoList_0800, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_CDMA);
    std::vector<sptr<CellInformation>> cellInfoList = GetProxy()->GetCellInfoList(SLOT_ID);
    ASSERT_FALSE(cellInfoList.empty());
    CellInformation::CellType type;
    for (const auto &cellList : cellInfoList) {
        ASSERT_NE(cellList, nullptr);
        type = cellList->GetNetworkType();
        LOG("Telephony_NetworkSearch_GetCellInfoList_0800 type:%d", static_cast<int32_t>(type));
        if (type == CellInformation::CellType::CELL_TYPE_CDMA) {
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
        } else {
            FAIL();
            LOG("GetCellInfoList is RAT_TYPE_NONE");
        }
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCellInfoList_0900
 * @tc.name    Use the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_TDSCDMA to test the
 *             GetCellInfoList() and the result is CELL_TYPE_TDSCDMA network list
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCellInfoList_0900, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_TDSCDMA);
    std::vector<sptr<CellInformation>> cellInfoList = GetProxy()->GetCellInfoList(SLOT_ID);
    ASSERT_FALSE(cellInfoList.empty());
    CellInformation::CellType type;
    for (const auto &cellList : cellInfoList) {
        ASSERT_NE(cellList, nullptr);
        type = cellList->GetNetworkType();
        LOG("Telephony_NetworkSearch_GetCellInfoList_0900 type:%d", static_cast<int32_t>(type));
        if (type == CellInformation::CellType::CELL_TYPE_TDSCDMA) {
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
            EXPECT_EQ(tdscdma->GetMcc(), "460");
            EXPECT_NE(tdscdma->GetMnc(), "");
            LOG("TDSCDMA String: %s", tdscdma->ToString().c_str());
        } else {
            FAIL();
            LOG("GetCellInfoList is RAT_TYPE_NONE");
        }
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCellInfoList_1000
 * @tc.name    Use the SetPreferredNetwork() to set preferred network mode CORE_NETWORK_MODE_NR to test the
 *             GetCellInfoList() and the result is CELL_TYPE_NR network list
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCellInfoList_1000, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_NR);
    std::vector<sptr<CellInformation>> cellInfoList = GetProxy()->GetCellInfoList(SLOT_ID);
    ASSERT_FALSE(cellInfoList.empty());
    CellInformation::CellType type;
    for (const auto &cellList : cellInfoList) {
        ASSERT_NE(cellList, nullptr);
        type = cellList->GetNetworkType();
        LOG("Telephony_NetworkSearch_GetCellInfoList_1000 type:%d", static_cast<int32_t>(type));
        if (type == CellInformation::CellType::CELL_TYPE_NR) {
            NrCellInformation *nr = reinterpret_cast<NrCellInformation *>(cellList.GetRefPtr());
            EXPECT_GE(nr->GetPci(), CELL_INFO_MIN);
            EXPECT_LE(nr->GetPci(), CELL_INFO_NR_PCI_MAX);
            EXPECT_GE(nr->GetArfcn(), CELL_INFO_MIN);
            EXPECT_LE(nr->GetArfcn(), CELL_INFO_NR_NRARFCN_MAX);
            EXPECT_EQ(nr->GetMcc(), "460");
            EXPECT_NE(nr->GetMnc(), "");
            EXPECT_GE(nr->GetTac(), CELL_INFO_MIN);
            EXPECT_LE(nr->GetTac(), CELL_INFO_LAC_TAC_MAX);
            EXPECT_GE(nr->GetNci(), CELL_INFO_MIN);
            EXPECT_LE(nr->GetNci(), CELL_INFO_NR_NCI_MAX);
            LOG("NR String: %s", nr->ToString().c_str());
        } else {
            FAIL();
            LOG("GetCellInfoList is RAT_TYPE_NONE");
        }
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetImei_0800
 * @tc.name    The type is CDMA to test the GetImei() is wrong and return null
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetImei_0800, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_CDMA);
    std::u16string getImei = GetProxy()->GetImei(SLOT_ID);
    std::string str = Str16ToStr8(getImei);
    EXPECT_STREQ(str.c_str(), "");
}

/*
 * @tc.number  Telephony_NetworkSearch_GetMeid_0100
 * @tc.name    The slot id is 0 to test the GetMeid() and the result is not empty and the length is 14
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetMeid_0100, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_CDMA);
    std::u16string getMeid = GetProxy()->GetMeid(SLOT_ID);
    std::string str = Str16ToStr8(getMeid);
    EXPECT_STRNE(str.c_str(), "");
    LOG("Telephony_NetworkSearch_GetMeid_0100 getMeid:%s", str.c_str());
    int size = str.size();
    EXPECT_EQ(size, NetworkSearchTest::MEID_SIZE);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetMeid_0200
 * @tc.name    The slot id is 5 to test the GetMeid() is wrong and return null
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetMeid_0200, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_CDMA);
    int slotId = 5;
    std::u16string getMeid = GetProxy()->GetMeid(slotId);
    std::string str = Str16ToStr8(getMeid);
    EXPECT_STREQ(str.c_str(), "");
}

/*
 * @tc.number  Telephony_NetworkSearch_GetMeid_0300
 * @tc.name    The slot id is -1 to test the GetMeid() is wrong and return null
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetMeid_0300, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_CDMA);
    int slotId = -1;
    std::u16string getMeid = GetProxy()->GetMeid(slotId);
    std::string str = Str16ToStr8(getMeid);
    EXPECT_STREQ(str.c_str(), "");
}

/*
 * @tc.number  Telephony_NetworkSearch_GetMeid_0400
 * @tc.name    The slot id is 2 to test the GetMeid() is wrong and return null
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetMeid_0400, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_CDMA);
    int slotId = 2;
    std::u16string getMeid = GetProxy()->GetMeid(slotId);
    std::string str = Str16ToStr8(getMeid);
    EXPECT_STREQ(str.c_str(), "");
}

/*
 * @tc.number  Telephony_NetworkSearch_GetUniqueDeviceId_0800
 * @tc.name    The type is CDMA to test the GetUniqueDeviceId() and the result is not empty and the length is 14 or 15
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetUniqueDeviceId_0800, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_CDMA);
    std::u16string getDeviceId = GetProxy()->GetUniqueDeviceId(SLOT_ID);
    std::string str = Str16ToStr8(getDeviceId);
    EXPECT_STRNE(str.c_str(), "");
    LOG("Telephony_NetworkSearch_GetUniqueDeviceId_0800 getDeviceId:%s", str.c_str());
    int size = str.size();
    EXPECT_TRUE(size == NetworkSearchTest::IMEI_SIZE || size == NetworkSearchTest::MEID_SIZE);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNrOptionMode_0800
 * @tc.name    The type is CORE_NETWORK_MODE_LTE_EVDO_CDMA to test the GetNrOptionMode() and the result range is
 *             NR_MODE_NSA_ONLY
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNrOptionMode_0800, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_LTE_EVDO_CDMA);
    NrMode nrMode = GetProxy()->GetNrOptionMode(SLOT_ID);
    EXPECT_EQ(nrMode, NrMode::NR_MODE_NSA_ONLY);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNrOptionMode_0900
 * @tc.name    The type is CORE_NETWORK_MODE_NR to test the GetNrOptionMode() and the result range is NR_MODE_NSA_ONLY
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNrOptionMode_0900, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_NR);
    NrMode nrMode = GetProxy()->GetNrOptionMode(SLOT_ID);
    EXPECT_EQ(nrMode, NrMode::NR_MODE_SA_ONLY);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetMeid_0500
 * @tc.name    If radio is off,to test the GetMeid() and the result is not empty and the length is 14
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetMeid_0500, Function | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_CDMA);
    bool setRadioState = GetProxy()->SetRadioState(SLOT_ID, false, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getRadioState = GetProxy()->GetRadioState(SLOT_ID, g_callback);
    ASSERT_TRUE(getRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_FALSE(getRadioStatusCallback);
    std::u16string getMeid = GetProxy()->GetMeid(SLOT_ID);
    std::string str = Str16ToStr8(getMeid);
    EXPECT_STRNE(str.c_str(), "");
    int size = str.size();
    EXPECT_EQ(size, NetworkSearchTest::MEID_SIZE);
}