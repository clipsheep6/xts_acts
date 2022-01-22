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
 * @tc.number  Telephony_NetworkSearch_GetNetworkState_0200
 * @tc.name    Test the GetNetworkState interface query function executed 1000 times, each time the data can be
 *             returned successfully
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkState_0200, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RELIABILITY_RUN_TIME_1000; i++) {
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
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPsRadioTech_0200
 * @tc.name    Test the GetPsRadioTech interface query function executed 1000 times,
 *             each time the data can be returned successfully
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPsRadioTech_0200, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RELIABILITY_RUN_TIME_1000; i++) {
        RadioTech getPsRadioTech = static_cast<RadioTech>(GetNetworkStateCache()->GetPsRadioTech());
        ASSERT_GE(getPsRadioTech, RadioTech::RADIO_TECHNOLOGY_UNKNOWN);
        ASSERT_LE(getPsRadioTech, RadioTech::RADIO_TECHNOLOGY_NR);
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
    for (int i = 0; i < TEST_RELIABILITY_RUN_TIME_1000; i++) {
        RadioTech getCsRadioTech = static_cast<RadioTech>(GetNetworkStateCache()->GetCsRadioTech());
        ASSERT_GE(getCsRadioTech, RadioTech::RADIO_TECHNOLOGY_UNKNOWN);
        ASSERT_LE(getCsRadioTech, RadioTech::RADIO_TECHNOLOGY_NR);
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
    for (int i = 0; i < TEST_RELIABILITY_RUN_TIME_1000; i++) {
        std::string operatorNumeric = Str16ToStr8(GetProxy()->GetOperatorNumeric(SLOT_ID));
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
    for (int i = 0; i < TEST_RELIABILITY_RUN_TIME_1000; i++) {
        std::string operatorName = Str16ToStr8(GetProxy()->GetOperatorName(SLOT_ID));
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
    for (int i = 0; i < TEST_RELIABILITY_RUN_TIME_1000; i++) {
        auto signalVec = GetProxy()->GetSignalInfoList(SLOT_ID);
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
    for (int i = 0; i < TEST_RELIABILITY_RUN_TIME_1000; i++) {
        hasNewData[GET_NETWORK_MODEL] = false;
        bool getSelectMode = GetProxy()->GetNetworkSelectionMode(SLOT_ID, g_callback);
        ASSERT_TRUE(getSelectMode);
        LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        ASSERT_EQ(getNetworkModeCallbackResult, static_cast<int32_t>(SelectionMode::MODE_TYPE_AUTO));
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_SetNetworkSelectionMode_0600
 * @tc.name    Test the  SetNetworkSelectionMode interface query function executed 1000 times, each time the data is
 *             returned
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetNetworkSelectionMode_0600, Reliability | MediumTest | Level3)
{
    SelectionMode selectionMode = SelectionMode::MODE_TYPE_AUTO;
    for (int i = 0; i < TEST_RELIABILITY_RUN_TIME_1000; i++) {
        hasNewData[SET_NETWORK_MODEL] = false;
        hasNewData[GET_NETWORK_MODEL] = false;
        if (i % 2 == 0) {
            selectionMode = SelectionMode::MODE_TYPE_MANUAL;
        } else {
            selectionMode = SelectionMode::MODE_TYPE_AUTO;
        }
        bool setSelectMode = GetProxy()->SetNetworkSelectionMode(SLOT_ID, static_cast<int32_t>(selectionMode),
            SetNetworkInformation(static_cast<int32_t>(selectionMode)), false, g_callback);
        ASSERT_TRUE(setSelectMode);
        LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        ASSERT_TRUE(setNetworkModeCallbackResult);
        ASSERT_EQ(errCodeResult, HRIL_ERR_SUCCESS);
        bool getSelectMode = GetProxy()->GetNetworkSelectionMode(SLOT_ID, g_callback);
        ASSERT_TRUE(getSelectMode);
        LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        ASSERT_NE(getNetworkModeCallbackResult, static_cast<int32_t>(SelectionMode::MODE_TYPE_UNKNOWN));
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkSearchInformation_0300
 * @tc.name    Test the  SetNetworkSelectionMode interface query function executed 10 times, each time the data is
 *             returned
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkSearchInformation_0300, Reliability | MediumTest | Level3)
{
    RecoverNetworkSelectionMode();
    for (int i = 0; i < TEST_RELIABILITY_RUN_TIME_10; i++) {
        hasNewData[GET_NETWORK_SEARCH_RESULT] = false;
        getNetworkResultCallback = false;
        bool networkSearchResult = GetProxy()->GetNetworkSearchInformation(SLOT_ID, g_callback);
        ASSERT_TRUE(networkSearchResult);
        LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_SEARCH_RESULT], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        ASSERT_TRUE(getNetworkResultCallback);
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
    for (int i = 0; i < TEST_RELIABILITY_RUN_TIME_1000; i++) {
        hasNewData[GET_RADIO_STATUS] = false;
        bool getRadioState = GetProxy()->GetRadioState(SLOT_ID, g_callback);
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
    for (int i = 0; i < TEST_RELIABILITY_RUN_TIME_1000; i++) {
        hasNewData[SET_RADIO_STATUS] = false;
        if (i % 2 == 0) {
            setRadioState = GetProxy()->SetRadioState(SLOT_ID, false, g_callback);
        } else {
            setRadioState = GetProxy()->SetRadioState(SLOT_ID, true, g_callback);
        }
        ASSERT_TRUE(setRadioState);
        LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        ASSERT_TRUE(setRadioStatusCallback);
        ASSERT_EQ(errCodeResult, HRIL_ERR_SUCCESS);
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
    for (int i = 0; i < TEST_RELIABILITY_RUN_TIME_1000; i++) {
        sptr<NetworkState> networkState = GetProxy()->GetNetworkState(SLOT_ID);
        if (networkState == nullptr) {
            FAIL();
        }
        std::u16string countryCode = GetProxy()->GetIsoCountryCodeForNetwork(SLOT_ID);
        std::string str = Str16ToStr8(countryCode);
        ASSERT_STREQ(str.c_str(), "cn");
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_0800
 * @tc.name    Test the  GetPreferredNetwork interface query function executed 1000 times, each time the data is not
 * false
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_0800, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RELIABILITY_RUN_TIME_1000; i++) {
        hasNewData[GET_PREFERRED_NETWORK_MODE] = false;
        bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
        ASSERT_TRUE(getPreferredMode);
        LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        ASSERT_EQ(getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_AUTO));
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_0700
 * @tc.name    Test the  SetPreferredNetwork interface query function executed 1000 times, each time the data is not
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_0700, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RELIABILITY_RUN_TIME_1000; i++) {
        hasNewData[SET_PREFERRED_NETWORK_MODE] = false;
        bool setPreferredMode = GetProxy()->SetPreferredNetwork(
            SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_LTE), g_callback);
        ASSERT_TRUE(setPreferredMode);
        LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        ASSERT_TRUE(setPreferredNetworkModeResult);
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCellInfoList_0600
 * @tc.name    Test the  GetCellInfoList interface query function executed 1000 times, each time the data is not false
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCellInfoList_0600, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RELIABILITY_RUN_TIME_1000; i++) {
        std::vector<sptr<CellInformation>> cellInfoList = GetProxy()->GetCellInfoList(SLOT_ID);
        ASSERT_FALSE(cellInfoList.empty());
        CellInformation::CellType type;
        for (const auto &cellList : cellInfoList) {
            ASSERT_NE(cellList, nullptr);
            type = cellList->GetNetworkType();
            if (type == CellInformation::CellType::CELL_TYPE_GSM) {
                GsmCellInformation *gsm = reinterpret_cast<GsmCellInformation *>(cellList.GetRefPtr());
                ASSERT_GE(gsm->GetLac(), CELL_INFO_MIN);
                ASSERT_LE(gsm->GetLac(), CELL_INFO_LAC_TAC_MAX);
                ASSERT_GE(gsm->GetCellId(), CELL_INFO_MIN);
                ASSERT_LE(gsm->GetCellId(), CELL_INFO_GSM_CELLID_MAX);
                ASSERT_GE(gsm->GetArfcn(), CELL_INFO_MIN);
                ASSERT_LE(gsm->GetArfcn(), CELL_INFO_ARFCN_MAX);
                ASSERT_GE(gsm->GetBsic(), CELL_INFO_MIN);
                ASSERT_LE(gsm->GetBsic(), CELL_INFO_BSIC_MAX);
                ASSERT_EQ(gsm->GetMcc(), CELL_INFO_MCC);
                ASSERT_GE(gsm->GetMnc(), CELL_INFO_MIN);
                ASSERT_LE(gsm->GetMnc(), CELL_INFO_MNC_MAX);
            } else if (type == CellInformation::CellType::CELL_TYPE_WCDMA) {
                WcdmaCellInformation *wcdma = reinterpret_cast<WcdmaCellInformation *>(cellList.GetRefPtr());
                ASSERT_GE(wcdma->GetLac(), CELL_INFO_MIN);
                ASSERT_LE(wcdma->GetLac(), CELL_INFO_LAC_TAC_MAX);
                ASSERT_GE(wcdma->GetCellId(), CELL_INFO_MIN);
                ASSERT_LE(wcdma->GetCellId(), CELL_INFO_WCDMA_CELLID_MAX);
                ASSERT_GE(wcdma->GetArfcn(), CELL_INFO_MIN);
                ASSERT_LE(wcdma->GetArfcn(), CELL_INFO_ARFCN_MAX);
                ASSERT_GE(wcdma->GetPsc(), CELL_INFO_MIN);
                ASSERT_LE(wcdma->GetPsc(), CELL_INFO_PSC_MAX);
                ASSERT_EQ(wcdma->GetMcc(), CELL_INFO_MCC);
                ASSERT_GE(wcdma->GetMnc(), CELL_INFO_MIN);
                ASSERT_LE(wcdma->GetMnc(), CELL_INFO_MNC_MAX);
            } else if (type == CellInformation::CellType::CELL_TYPE_LTE) {
                LteCellInformation *lte = reinterpret_cast<LteCellInformation *>(cellList.GetRefPtr());
                ASSERT_GE(lte->GetTac(), CELL_INFO_MIN);
                ASSERT_LE(lte->GetTac(), CELL_INFO_LAC_TAC_MAX);
                ASSERT_GE(lte->GetCellId(), CELL_INFO_MIN);
                ASSERT_LE(lte->GetCellId(), CELL_INFO_LTE_CELLID_MAX);
                ASSERT_GE(lte->GetArfcn(), CELL_INFO_MIN);
                ASSERT_LE(lte->GetArfcn(), CELL_INFO_EARFCN_MAX);
                ASSERT_GE(lte->GetPci(), CELL_INFO_MIN);
                ASSERT_LE(lte->GetPci(), CELL_INFO_PCI_MAX);
                ASSERT_EQ(lte->GetMcc(), CELL_INFO_MCC);
                ASSERT_GE(lte->GetMnc(), CELL_INFO_MIN);
                ASSERT_LE(lte->GetMnc(), CELL_INFO_MNC_MAX);
            } else {
                LOG("GetCellInfoList is RAT_TYPE_NONE");
            }
        }
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_SendUpdateCellLocationRequest_0300
 * @tc.name    Test the  SendUpdateCellLocationRequest interface query function executed 1000 times, each time the data
 * is not false
 * @tc.desc    Reliability test
 */
HWTEST_F(
    NetworkSearchTest, Telephony_NetworkSearch_SendUpdateCellLocationRequest_0300, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RELIABILITY_RUN_TIME_1000; i++) {
        bool requestResult = GetProxy()->SendUpdateCellLocationRequest(SLOT_ID);
        ASSERT_TRUE(requestResult);
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetImei_0600
 * @tc.name    Test the  GetImei interface query function executed 1000 times, each time the data is not false
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetImei_0600, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RELIABILITY_RUN_TIME_1000; i++) {
        std::u16string getImei = GetProxy()->GetImei(SLOT_ID);
        std::string str = Str16ToStr8(getImei);
        ASSERT_STRNE(str.c_str(), "");
        int size = str.size();
        ASSERT_EQ(size, NetworkSearchTest::IMEI_SIZE);
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetMeid_0600
 * @tc.name    Test the  GetMeid interface query function executed 1000 times, each time the data is not false
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetMeid_0600, Reliability | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_CDMA);
    for (int i = 0; i < TEST_RELIABILITY_RUN_TIME_1000; i++) {
        std::u16string getMeid = GetProxy()->GetMeid(SLOT_ID);
        std::string str = Str16ToStr8(getMeid);
        ASSERT_STRNE(str.c_str(), "");
        int size = str.size();
        ASSERT_EQ(size, NetworkSearchTest::MEID_SIZE);
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetUniqueDeviceId_0600
 * @tc.name    Test the  GetUniqueDeviceId interface query function executed 1000 times, each time the data is not false
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetUniqueDeviceId_0600, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RELIABILITY_RUN_TIME_1000; i++) {
        std::u16string getDeviceId = GetProxy()->GetUniqueDeviceId(SLOT_ID);
        std::string str = Str16ToStr8(getDeviceId);
        ASSERT_STRNE(str.c_str(), "");
        int size = str.size();
        ASSERT_TRUE(size == NetworkSearchTest::IMEI_SIZE || size == NetworkSearchTest::MEID_SIZE);
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNrOptionMode_0500
 * @tc.name    Test the  GetNrOptionMode interface query function executed 1000 times, each time the data is not false
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNrOptionMode_0500, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RELIABILITY_RUN_TIME_1000; i++) {
        NrMode nrMode = GetProxy()->GetNrOptionMode(SLOT_ID);
        ASSERT_GE(nrMode, NrMode::NR_MODE_UNKNOWN);
        ASSERT_LE(nrMode, NrMode::NR_MODE_NSA_AND_SA);
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_IsNrSupported_0300
 * @tc.name    Test the  IsNrSupported interface query function executed 1000 times, each time the data is not false
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_IsNrSupported_0300, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RELIABILITY_RUN_TIME_1000; i++) {
        bool nrResult = GetProxy()->IsNrSupported(SLOT_ID);
        ASSERT_TRUE(nrResult);
    }
}