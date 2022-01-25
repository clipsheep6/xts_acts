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
 * @tc.number  Telephony_NetworkSearch_GetNetworkSelectionMode_0700
 * @tc.name    Test the network selection initial value is MODE_TYPE_AUTO
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNetworkSelectionMode_0700, Function | MediumTest | Level3)
{
    bool getSelectModeResult = GetProxy()->GetNetworkSelectionMode(SLOT_ID, g_callback);
    ASSERT_TRUE(getSelectModeResult);
    LOCK_NUM_WHILE_NE(hasNewData[GET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(getNetworkModeCallbackResult, static_cast<int32_t>(SelectionMode::MODE_TYPE_AUTO));
}

/*
 * @tc.number  Telephony_NetworkSearch_GetRadioState_0600
 * @tc.name    Test the radio state initial value is true
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetRadioState_0600, Function | MediumTest | Level3)
{
    bool getRadioState = GetProxy()->GetRadioState(SLOT_ID, g_callback);
    ASSERT_TRUE(getRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_TRUE(getRadioStatusCallback);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetPreferredNetwork_0100
 * @tc.name    Test the preferred network initial value is CORE_NETWORK_MODE_AUTO
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetPreferredNetwork_0100, Function | MediumTest | Level3)
{
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_ID, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_AUTO));
}