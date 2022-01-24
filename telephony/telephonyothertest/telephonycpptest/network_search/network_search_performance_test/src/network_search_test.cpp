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
#include "time_count_helper.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;
using namespace OHOS::Telephony::NetworkSearch;
using namespace NetworkSearch;

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkState_0300
 * @tc.name    Test the GetNetworkState interface query function is executed 10 times, and the output delay is less
 *             than 500ms
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkState_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_PERFORMANCE_RUN_TIME_10; i++) {
        // Performance test, do not care even if it returns empty
        GetNetworkState();
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_PERFORMANCE_RUN_TIME_10;
    LOGE("use %d us per test", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPsRadioTech_0300
 * @tc.name    Test GetPsRadioTech interface query function is executed 10 times, the output delay is less than 500ms
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPsRadioTech_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_PERFORMANCE_RUN_TIME_10; i++) {
        // Performance test, do not care even if it returns empty
        GetProxy()->GetPsRadioTech(SLOT_ID);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_PERFORMANCE_RUN_TIME_10;
    LOGE("use %d us per test", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCsRadioTech_0300
 * @tc.name    Test GetCsRadioTech interface query function is executed 10 times, the output delay is less than 500ms
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCsRadioTech_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_PERFORMANCE_RUN_TIME_10; i++) {
        // Performance test, do not care even if it returns empty
        GetProxy()->GetCsRadioTech(SLOT_ID);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_PERFORMANCE_RUN_TIME_10;
    LOGE("use %d us per test", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetOperatorNumeric_0300
 * @tc.name    Test GetOperatorNumeric interface query function is executed 10 times, the output delay is less than
 *             500ms
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetOperatorNumeric_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_PERFORMANCE_RUN_TIME_10; i++) {
        // Performance test, do not care even if it returns empty
        GetProxy()->GetOperatorNumeric(SLOT_ID);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_PERFORMANCE_RUN_TIME_10;
    LOGE("use %d us per test", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetOperatorName_0300
 * @tc.name    Test the GetOperatorName interface query function is executed 10 times, and the output delay is less
 *             than 500ms
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetOperatorName_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_PERFORMANCE_RUN_TIME_10; i++) {
        // Performance test, do not care even if it returns empty
        GetProxy()->GetOperatorName(SLOT_ID);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_PERFORMANCE_RUN_TIME_10;
    LOGE("use %d us per test", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetSignalInfoList_0300
 * @tc.name    Test the GetSignalInfoList interface query function is executed 10 times, and the output delay is less
 *             than 500ms
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetSignalInfoList_0300, Performance | MediumTest | Level3)
{
    int totalTimeUs = 0;
    int useTimeUs = 0;
    for (int i = 0; i < TEST_PERFORMANCE_RUN_TIME_10; i++) {
        TimeCountHelper timeHelper;
        timeHelper.StartCountUs();
        GetProxy()->GetSignalInfoList(SLOT_ID);
        useTimeUs = timeHelper.GetUseTimeUs();
        totalTimeUs += useTimeUs;
    }
    int avgTimeUs = totalTimeUs / TEST_PERFORMANCE_RUN_TIME_10;
    LOGE("use %d us per test", avgTimeUs);
    EXPECT_LE(avgTimeUs, USEC_1000);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkSelectionMode_0400
 * @tc.name    Test GetNetworkSelectionMode interface query function is executed 10 times, the output delay is less
 *             than 500ms
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkSelectionMode_0400, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_PERFORMANCE_RUN_TIME_10; i++) {
        hasNewData[GET_NETWORK_MODEL] = false;
        GetProxy()->GetNetworkSelectionMode(SLOT_ID, g_callback);
        LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_PERFORMANCE_RUN_TIME_10;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetNetworkSelectionMode_0700
 * @tc.name    Test SetNetworkSelectionMode interface query function is executed 10 times, the output delay is less
 *             than 500ms
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetNetworkSelectionMode_0700, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    SelectionMode selectionMode = SelectionMode::MODE_TYPE_AUTO;
    for (int i = 0; i < TEST_PERFORMANCE_RUN_TIME_10; i++) {
        hasNewData[SET_NETWORK_MODEL] = false;
        GetProxy()->SetNetworkSelectionMode(SLOT_ID, static_cast<int32_t>(selectionMode),
            SetNetworkInformation(static_cast<int32_t>(selectionMode)), false, g_callback);
        LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_PERFORMANCE_RUN_TIME_10;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkSearchInformation_0400
 * @tc.name    Test GetNetworkSearchInformation interface query function is executed 10 times, the output delay is
 *             less than 500ms
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkSearchInformation_0400, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_PERFORMANCE_RUN_TIME_10; i++) {
        hasNewData[GET_NETWORK_SEARCH_RESULT] = false;
        GetProxy()->GetNetworkSearchInformation(SLOT_ID, g_callback);
        LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_SEARCH_RESULT], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_PERFORMANCE_RUN_TIME_10;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetRadioState_0500
 * @tc.name    Test GetRadioState interface query function is executed 10 times, the output delay is less than 500ms
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetRadioState_0500, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_PERFORMANCE_RUN_TIME_10; i++) {
        hasNewData[GET_RADIO_STATUS] = false;
        GetProxy()->GetRadioState(SLOT_ID, g_callback);
        LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_PERFORMANCE_RUN_TIME_10;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetRadioState_0500
 * @tc.name    Test SetRadioState interface query function is executed 10 times, the output delay is less than 500ms
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetRadioState_0500, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_PERFORMANCE_RUN_TIME_10; i++) {
        hasNewData[SET_RADIO_STATUS] = false;
        GetProxy()->SetRadioState(SLOT_ID, true, g_callback);
        LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_PERFORMANCE_RUN_TIME_10;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetIsoCountryCodeForNetwork_0300
 * @tc.name    Test GetIsoCountryCodeForNetwork interface query function is executed 10 times, the output delay is
 *             less than 500ms
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetIsoCountryCodeForNetwork_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_PERFORMANCE_RUN_TIME_10; i++) {
        GetProxy()->GetIsoCountryCodeForNetwork(SLOT_ID);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_PERFORMANCE_RUN_TIME_10;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_0900
 * @tc.name    Test GetPreferredNetwork interface query function is executed 10 times, the output delay is less
 *             than 500ms
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_0900, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_PERFORMANCE_RUN_TIME_10; i++) {
        hasNewData[GET_PREFERRED_NETWORK_MODE] = false;
        GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
        LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_PERFORMANCE_RUN_TIME_10;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_0800
 * @tc.name    Test SetPreferredNetwork interface query function is executed 10 times, the output delay is less
 *             than 500ms
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_0800, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_PERFORMANCE_RUN_TIME_10; i++) {
        hasNewData[SET_PREFERRED_NETWORK_MODE] = false;
        GetProxy()->SetPreferredNetwork(
            SLOT_ID, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_LTE), g_callback);
        LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_PERFORMANCE_RUN_TIME_10;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCellInfoList_0700
 * @tc.name    Test GetCellInfoList interface query function is executed 10 times, the output delay is less than 500ms
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCellInfoList_0700, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_PERFORMANCE_RUN_TIME_10; i++) {
        GetProxy()->GetCellInfoList(SLOT_ID);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_PERFORMANCE_RUN_TIME_10;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/*
 * @tc.number  Telephony_NetworkSearch_SendUpdateCellLocationRequest_0400
 * @tc.name    Test SendUpdateCellLocationRequest interface query function is executed 10 times, the output delay is
 *             less than 500ms
 * @tc.desc    Performance test
 */
HWTEST_F(
    NetworkSearchTest, Telephony_NetworkSearch_SendUpdateCellLocationRequest_0400, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_PERFORMANCE_RUN_TIME_10; i++) {
        GetProxy()->SendUpdateCellLocationRequest(SLOT_ID);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_PERFORMANCE_RUN_TIME_10;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetImei_0700
 * @tc.name    Test GetImei interface query function is executed 10 times, the output delay is less than 500ms
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetImei_0700, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_PERFORMANCE_RUN_TIME_10; i++) {
        GetProxy()->GetImei(SLOT_ID);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_PERFORMANCE_RUN_TIME_10;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetMeid_0700
 * @tc.name    Test GetMeid interface query function is executed 10 times, the output delay is less than 500ms
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetMeid_0700, Performance | MediumTest | Level3)
{
    VendorTestCDMA(PreferredNetworkMode::CORE_NETWORK_MODE_CDMA);
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_PERFORMANCE_RUN_TIME_10; i++) {
        GetProxy()->GetMeid(SLOT_ID);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_PERFORMANCE_RUN_TIME_10;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetUniqueDeviceId_0700
 * @tc.name    Test GetUniqueDeviceId interface query function is executed 10 times, the output delay is less than
 *             500ms
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetUniqueDeviceId_0700, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_PERFORMANCE_RUN_TIME_10; i++) {
        GetProxy()->GetUniqueDeviceId(SLOT_ID);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_PERFORMANCE_RUN_TIME_10;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNrOptionMode_0600
 * @tc.name    Test GetNrOptionMode interface query function is executed 10 times, the output delay is less than 500ms
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNrOptionMode_0600, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_PERFORMANCE_RUN_TIME_10; i++) {
        GetProxy()->GetNrOptionMode(SLOT_ID);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_PERFORMANCE_RUN_TIME_10;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/*
 * @tc.number  Telephony_NetworkSearch_IsNrSupported_0400
 * @tc.name    Test IsNrSupported interface query function is executed 10 times, the output delay is less than 500ms
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_IsNrSupported_0400, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_PERFORMANCE_RUN_TIME_10; i++) {
        GetProxy()->IsNrSupported(SLOT_ID);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_PERFORMANCE_RUN_TIME_10;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}