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
 * @tc.number  Telephony_NetworkSearch_GetNetworkState_0200
 * @tc.name    Test the GetNetworkState interface query function executed 1000 times, each time the data can be
 *             returned successfully
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkState_0200, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        std::string plmnNumeric = GetNetworkState()->GetPlmnNumeric();
        ASSERT_STRNE(plmnNumeric.c_str(), "");
        std::string shortOperatorName = GetNetworkState()->GetShortOperatorName();
        ASSERT_STRNE(shortOperatorName.c_str(), "");
        std::string longOperatorName = GetNetworkState()->GetLongOperatorName();
        ASSERT_STRNE(longOperatorName.c_str(), "");
        RoamingType roamingType = static_cast<RoamingType>(GetNetworkState()->GetPsRoamingStatus());
        ASSERT_EQ(roamingType, RoamingType::ROAMING_STATE_UNKNOWN);
        roamingType = static_cast<RoamingType>(GetNetworkState()->GetCsRoamingStatus());
        ASSERT_EQ(roamingType, RoamingType::ROAMING_STATE_UNKNOWN);
        RegServiceState regState = static_cast<RegServiceState>(GetNetworkStateCache()->GetRegStatus());
        ASSERT_GE(regState, RegServiceState::REG_STATE_UNKNOWN);
        ASSERT_LE(regState, RegServiceState::REG_STATE_SEARCH);
        RadioTech radioTech = static_cast<RadioTech>(GetNetworkStateCache()->GetPsRadioTech());
        ASSERT_GE(radioTech, RadioTech::RADIO_TECHNOLOGY_UNKNOWN);
        ASSERT_LE(radioTech, RadioTech::RADIO_TECHNOLOGY_LTE);
        radioTech = static_cast<RadioTech>(GetNetworkStateCache()->GetCsRadioTech());
        ASSERT_GE(radioTech, RadioTech::RADIO_TECHNOLOGY_UNKNOWN);
        ASSERT_LE(radioTech, RadioTech::RADIO_TECHNOLOGY_LTE);
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPsRadioTech_0200
 * @tc.name    Test the GetPsRadioTech interface query function executed 1000 times,
 *             each time the data can be returned successfully
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPsRadioTech_0200, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        RadioTech getPsRadioTech = static_cast<RadioTech>(GetNetworkStateCache()->GetPsRadioTech());
        ASSERT_GE(getPsRadioTech, RadioTech::RADIO_TECHNOLOGY_UNKNOWN);
        ASSERT_LE(getPsRadioTech, RadioTech::RADIO_TECHNOLOGY_LTE);
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCsRadioTech_0200
 * @tc.name    Test the GetCsRadioTech interface query function executed 1000 times,
 *             each time the data can be returnedsuccessfully
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCsRadioTech_0200, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        RadioTech getCsRadioTech = static_cast<RadioTech>(GetNetworkStateCache()->GetCsRadioTech());
        ASSERT_GE(getCsRadioTech, RadioTech::RADIO_TECHNOLOGY_UNKNOWN);
        ASSERT_LE(getCsRadioTech, RadioTech::RADIO_TECHNOLOGY_LTE);
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetOperatorNumeric_0200
 * @tc.name    Test GetOperatorNumeric interface query function is executed 1000 times, and data is returned each time
 *             successfully
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetOperatorNumeric_0200, Reliability | MediumTest | Level3)
{
    std::string plmnNum = "460";
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        std::string operatorNumeric = Str16ToStr8(GetProxy()->GetOperatorNumeric(SLOT_0));
        int size = operatorNumeric.size();
        ASSERT_EQ(size, NetworkSearchTest::PLMN_SIZE);
        ASSERT_STREQ(operatorNumeric.substr(0, 3).c_str(), plmnNum.c_str());
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetOperatorName_0200
 * @tc.name    Test GetOperatorName interface query function is executed 1000 times, and data is returned each time
 *             successfully
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetOperatorName_0200, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        std::string operatorName = Str16ToStr8(GetProxy()->GetOperatorName(SLOT_0));
        ASSERT_STRNE(operatorName.c_str(), "");
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetSignalInfoList_0200
 * @tc.name    Test the GetSignalInfoList interface query function executed 1000 times, each time the data is returned
 *             successfully
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetSignalInfoList_0200, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        auto signalVec = GetProxy()->GetSignalInfoList(SLOT_0);
        SignalInformation::NetworkType type;
        int level = 0;
        ASSERT_FALSE(signalVec.empty());
        for (const auto &singnal_sptr : signalVec) {
            ASSERT_NE(singnal_sptr, nullptr);
            type = singnal_sptr->GetNetworkType();
            ASSERT_GE(type, SignalInformation::NetworkType::GSM);
            ASSERT_LE(type, SignalInformation::NetworkType::TDSCDMA);
            level = singnal_sptr->GetSignalLevel();
            int min = SIGNAL_STRENGTH_INVALID;
            int max = SIGNAL_STRENGTH_HIGHEST;
            ASSERT_GE(level, min);
            ASSERT_LE(level, max);
        }
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkSelectionMode_0300
 * @tc.name    Test the  GetNetworkSelectionMode interface query function executed 1000 times, each time the data is
 *             returned
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkSelectionMode_0300, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        hasNewData[GET_NETWORK_MODEL] = false;
        bool getSelectMode = GetProxy()->GetNetworkSelectionMode(SLOT_0, g_callback);
        ASSERT_TRUE(getSelectMode);
        LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        ASSERT_EQ(getNetworkModeCallbackResult, MODE_TYPE_AUTO);
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_SetNetworkSelectionMode_0800
 * @tc.name    Test the  SetNetworkSelectionMode interface query function executed 1000 times, each time the data is
 *             returned
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetNetworkSelectionMode_0800, Reliability | MediumTest | Level3)
{
    SelectionMode selectionMode = MODE_TYPE_AUTO;
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        hasNewData[SET_NETWORK_MODEL] = false;
        hasNewData[GET_NETWORK_MODEL] = false;
        if (i % 2 == 0) {
            selectionMode = MODE_TYPE_MANUAL;
        } else {
            selectionMode = MODE_TYPE_AUTO;
        }
        bool setSelectMode = GetProxy()->SetNetworkSelectionMode(
            SLOT_0, selectionMode, SetNetworkInformation(selectionMode), false, g_callback);
        ASSERT_TRUE(setSelectMode);
        LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        ASSERT_TRUE(setNetworkModeCallbackResult);
        ASSERT_EQ(errCodeResult, HRIL_ERR_SUCCESS);
        bool getSelectMode = GetProxy()->GetNetworkSelectionMode(SLOT_0, g_callback);
        ASSERT_TRUE(getSelectMode);
        LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        ASSERT_NE(getNetworkModeCallbackResult, MODE_TYPE_UNKNOWN);
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkSearchResult_0300
 * @tc.name    Test the  SetNetworkSelectionMode interface query function executed 1000 times, each time the data is
 *             returned
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkSearchResult_0300, Reliability | MediumTest | Level3)
{
    RecoverNetworkSelectionMode();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        hasNewData[GET_NETWORK_SEARCH_RESULT] = false;
        bool networkSearchResult = GetProxy()->GetNetworkSearchResult(SLOT_0, g_callback);
        ASSERT_TRUE(networkSearchResult);
        LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_SEARCH_RESULT], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        ASSERT_TRUE(getNetworkResultCallback);
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetIsoCountryCodeForNetwork_0200
 * @tc.name    Test the  GetNetworkState interface query function executed 1000 times, each time the data is not NULL
 *             returned
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetIsoCountryCodeForNetwork_0200, Reliability | MediumTest | Level3)
{
    GetProxy()->SetRadioState(true, g_callback);
    sleep(WAIT_CACHE_DATA);
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        sptr<NetworkState> networkState = GetProxy()->GetNetworkState(SLOT_0);
        if (networkState == nullptr) {
            FAIL();
        }
        std::u16string countryCode = GetProxy()->GetIsoCountryCodeForNetwork(SLOT_0);
        std::string str = Str16ToStr8(countryCode);
        ASSERT_STREQ(str.c_str(), "cn");
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetRadioState_0400
 * @tc.name    Test the  GetRadioState interface query function executed 1000 times, each time the data is not
 * CORE_SERVICE_POWER_NOT_AVAILABLE returned
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetRadioState_0400, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        hasNewData[GET_RADIO_STATUS] = false;
        bool getRadioState = GetProxy()->GetRadioState(g_callback);
        ASSERT_TRUE(getRadioState);
        LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        ASSERT_TRUE(getRadioStatusCallback);
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_SetRadioState_0400
 * @tc.name    Test the  SetRadioState interface query function executed 1000 times, each time the data is not false
 *             returned
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetRadioState_0400, Reliability | MediumTest | Level3)
{
    bool setRadioState;
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        hasNewData[SET_RADIO_STATUS] = false;
        if (i % 2 == 0) {
            setRadioState = GetProxy()->SetRadioState(false, g_callback);
        } else {
            setRadioState = GetProxy()->SetRadioState(true, g_callback);
        }
        ASSERT_TRUE(setRadioState);
        LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        ASSERT_TRUE(setRadioStatusCallback);
        ASSERT_EQ(errCodeResult, HRIL_ERR_SUCCESS);
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetRadioState_0300
 * @tc.name    Test the  GetNetworkState interface query function executed 1000 times, each time the data is not NULL
 *             returned
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetRadioState_0300, Reliability | MediumTest | Level3)
{
    int system(const char *string);
    system("pkill telephony");
    bool getRadioState = GetProxy()->GetRadioState(g_callback);
    EXPECT_FALSE(getRadioState);
    usleep(WAIT_TELEPHONY_RUN); // Wait for the telephony process to restart
}

/*
 * @tc.number  Telephony_NetworkSearch_SetRadioState_0300
 * @tc.name    Test the  GetNetworkState interface query function executed 1000 times, each time the data is not NULL
 *             returned
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetRadioState_0300, Reliability | MediumTest | Level3)
{
    int system(const char *string);
    system("pkill telephony");
    bool setRadioState = GetProxy()->SetRadioState(true, g_callback);
    EXPECT_FALSE(setRadioState);
    usleep(WAIT_TELEPHONY_RUN); // Wait for the telephony process to restart
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkSearchResult_0800
 * @tc.name    Test the  GetNetworkState interface query function executed 1000 times, each time the data is not NULL
 *             returned
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkSearchResult_0800, Reliability | MediumTest | Level3)
{
    int system(const char *string);
    system("pkill telephony");
    bool networkSearchResult = GetProxy()->GetNetworkSearchResult(SLOT_0, g_callback);
    EXPECT_FALSE(networkSearchResult);
    usleep(WAIT_TELEPHONY_RUN); // Wait for the telephony process to restart
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkSelectionMode_0500
 * @tc.name    Test the  GetNetworkState interface query function executed 1000 times, each time the data is not NULL
 *             returned
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkSelectionMode_0500, Reliability | MediumTest | Level3)
{
    int system(const char *string);
    system("pkill telephony");
    bool getSelectModeResult = GetProxy()->GetNetworkSelectionMode(SLOT_0, g_callback);
    EXPECT_FALSE(getSelectModeResult);
    usleep(WAIT_TELEPHONY_RUN); // Wait for the telephony process to restart
}

/*
 * @tc.number  Telephony_NetworkSearch_SetNetworkSelectionMode_1000
 * @tc.name    Test the  GetNetworkState interface query function executed 1000 times, each time the data is not NULL
 *             returned
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetNetworkSelectionMode_1000, Reliability | MediumTest | Level3)
{
    int system(const char *string);
    system("pkill telephony");
    system("pkill riladapter_host");
    SelectionMode selectionMode = MODE_TYPE_AUTO;
    bool setSelectModeResult = GetProxy()->SetNetworkSelectionMode(SLOT_0, selectionMode, nullptr, false, g_callback);
    EXPECT_FALSE(setSelectModeResult);
    sleep(WAIT_CACHE_DATA); // Wait for the telephony process to restart
}