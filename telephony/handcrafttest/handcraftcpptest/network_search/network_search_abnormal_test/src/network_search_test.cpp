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
 * @tc.number  Telephony_NetworkSearch_GetNetworkSelectionMode_0500
 * @tc.name    When the telephony process is abnormal to test the GetNetworkSelectionMode() request is false
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkSelectionMode_0500, Function | MediumTest | Level3)
{
    int system(const char *string);
    system("pkill telephony");
    bool getSelectModeResult = GetProxy()->GetNetworkSelectionMode(SLOT_0, g_callback);
    EXPECT_FALSE(getSelectModeResult);
    sleep(WAIT_TELEPHONY_RUN); // Wait for the telephony process to restart
}

/*
 * @tc.number  Telephony_NetworkSearch_SetNetworkSelectionMode_0800
 * @tc.name    When the telephony process is abnormal to test the SetNetworkSelectionMode() request is false
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetNetworkSelectionMode_0800, Function | MediumTest | Level3)
{
    int system(const char *string);
    system("pkill telephony");
    SelectionMode selectionMode = SelectionMode::MODE_TYPE_AUTO;
    bool setSelectModeResult =
        GetProxy()->SetNetworkSelectionMode(SLOT_0, static_cast<int32_t>(selectionMode), nullptr, false, g_callback);
    EXPECT_FALSE(setSelectModeResult);
    sleep(WAIT_TELEPHONY_RUN); // Wait for the telephony process to restart
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNetworkSearchInformation_0800
 * @tc.name    When the telephony process is abnormal to test the GetNetworkSearchInformation() request is false
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkSearchInformation_0800, Function | MediumTest | Level3)
{
    int system(const char *string);
    system("pkill telephony");
    bool networkSearchResult = GetProxy()->GetNetworkSearchInformation(SLOT_0, g_callback);
    EXPECT_FALSE(networkSearchResult);
    sleep(WAIT_TELEPHONY_RUN); // Wait for the telephony process to restart
}

/*
 * @tc.number  Telephony_NetworkSearch_GetRadioState_0300
 * @tc.name    When the telephony process is abnormal to test the GetRadioState() request is false
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetRadioState_0300, Function | MediumTest | Level3)
{
    int system(const char *string);
    system("pkill telephony");
    bool getRadioState = GetProxy()->GetRadioState(SLOT_0, g_callback);
    EXPECT_FALSE(getRadioState);
    sleep(WAIT_TELEPHONY_RUN); // Wait for the telephony process to restart
}

/*
 * @tc.number  Telephony_NetworkSearch_SetRadioState_0300
 * @tc.name    When the telephony process is abnormal to test the SetRadioState() request is false
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetRadioState_0300, Function | MediumTest | Level3)
{
    int system(const char *string);
    system("pkill telephony");
    bool setRadioState = GetProxy()->SetRadioState(SLOT_0, true, g_callback);
    EXPECT_FALSE(setRadioState);
    sleep(WAIT_TELEPHONY_RUN); // Wait for the telephony process to restart
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_0600
 * @tc.name    When the telephony process is abnormal to test the GetPreferredNetwork() request is false
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_0600, Function | MediumTest | Level3)
{
    int system(const char *string);
    system("pkill telephony");
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_0, g_callback);
    EXPECT_FALSE(getPreferredMode);
    sleep(WAIT_TELEPHONY_RUN); // Wait for the telephony process to restart
}

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_0400
 * @tc.name    When the telephony process is abnormal to test the SetPreferredNetwork() request is false
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_0400, Function | MediumTest | Level3)
{
    int system(const char *string);
    system("pkill telephony");
    system("pkill riladapter_host");
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_0, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_GSM), g_callback);
    EXPECT_FALSE(setPreferredMode);
    sleep(WAIT_CACHE_DATA); // Wait for the telephony process to restart
}