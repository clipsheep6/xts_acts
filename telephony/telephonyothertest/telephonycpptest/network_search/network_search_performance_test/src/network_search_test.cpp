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
#include "time_count_helper.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;
using namespace OHOS::Telephony::NetworkSearch;
using namespace NetworkSearch;

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkState_0300
 * @tc.name    Test the GetNetworkState interface query function is executed 1000 times, and the output delay is less
 *             than 10ms
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkState_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        // Performance test, do not care even if it returns empty
        GetNetworkState();
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOGE("use %d us per test", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPsRadioTech_0300
 * @tc.name    Test GetPsRadioTech interface query function is executed 1000 times, the output delay is less than 10ms
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPsRadioTech_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        // Performance test, do not care even if it returns empty
        GetProxy()->GetPsRadioTech(SLOT_0);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOGE("use %d us per test", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCsRadioTech_0300
 * @tc.name    Test GetCsRadioTech interface query function is executed 1000 times, the output delay is less than 10ms
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCsRadioTech_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        // Performance test, do not care even if it returns empty
        GetProxy()->GetCsRadioTech(SLOT_0);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOGE("use %d us per test", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetOperatorNumeric_0300
 * @tc.name    Test GetOperatorNumeric interface query function is executed 1000 times, and data is returned each time
 *             successfully
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetOperatorNumeric_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        // Performance test, do not care even if it returns empty
        GetProxy()->GetOperatorNumeric(SLOT_0);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOGE("use %d us per test", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetOperatorName_0300
 * @tc.name    Test the GetOperatorName interface query function is executed 1000 times, and the output delay is less
 *             than 10ms
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetOperatorName_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        // Performance test, do not care even if it returns empty
        GetProxy()->GetOperatorName(SLOT_0);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOGE("use %d us per test", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetSignalInfoList_0300
 * @tc.name    Test the GetSignalInfoList interface query function is executed 1000 times, and the output delay is less
 *             than 10ms
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetSignalInfoList_0300, Performance | MediumTest | Level3)
{
    int totalTimeUs = 0;
    int useTimeUs = 0;
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        TimeCountHelper timeHelper;
        timeHelper.StartCountUs();
        GetProxy()->GetSignalInfoList(SLOT_0);
        useTimeUs = timeHelper.GetUseTimeUs();
        totalTimeUs += useTimeUs;
    }
    int avgTimeUs = totalTimeUs / TEST_RUN_TIME_1000;
    LOGE("use %d us per test", avgTimeUs);
    EXPECT_LE(avgTimeUs, USEC_500);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkSelectionMode_0400
 * @tc.name    Test the network selection mode is manual to test the result is MODE_TYPE_MANUAL
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkSelectionMode_0400, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        hasNewData[GET_NETWORK_MODEL] = false;
        GetProxy()->GetNetworkSelectionMode(SLOT_0, g_callback);
        LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetNetworkSelectionMode_0900
 * @tc.name    Test the network selection mode is automatic to test the result is MODE_TYPE_AUTO
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetNetworkSelectionMode_0900, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    SelectionMode selectionMode = MODE_TYPE_AUTO;
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        hasNewData[SET_NETWORK_MODEL] = false;
        GetProxy()->SetNetworkSelectionMode(
            SLOT_0, selectionMode, SetNetworkInformation(selectionMode), false, g_callback);
        LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkSearchResult_0400
 * @tc.name    Test the result from GetNetworkSearchResult
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkSearchResult_0400, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        hasNewData[GET_NETWORK_SEARCH_RESULT] = false;
        GetProxy()->GetNetworkSearchResult(SLOT_0, g_callback);
        LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_SEARCH_RESULT], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetRadioState_0500
 * @tc.name    Test the result from GetRadioState
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetRadioState_0500, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        hasNewData[GET_RADIO_STATUS] = false;
        GetProxy()->GetRadioState(SLOT_0, g_callback);
        LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/*
 * @tc.number  Telephony_NetworkSearch_SetRadioState_0500
 * @tc.name    Test the result from SetRadioState
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetRadioState_0500, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        hasNewData[SET_RADIO_STATUS] = false;
        GetProxy()->SetRadioState(SLOT_0, true, g_callback);
        LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetIsoCountryCodeForNetwork_0300
 * @tc.name    Test the result from GetIsoCountryCodeForNetwork
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetIsoCountryCodeForNetwork_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        GetProxy()->GetIsoCountryCodeForNetwork(SLOT_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}
