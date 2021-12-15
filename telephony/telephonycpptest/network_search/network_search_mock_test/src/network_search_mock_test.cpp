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

#define NETWORSEARCH_MOCK_TEST
#include "network_search_test.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;
using namespace OHOS::Telephony::NetworkSearch;
using namespace NetworkSearch;

/*
 * @tc.number  Telephony_NetworkSearch_SetPreferredNetwork_1100
 * @tc.name    Use SetPreferredNetwork to set the preferred network mode is CORE_NETWORK_MODE_LTE_WCDMA_GSM to test the
 *             network type from 4G to 3G to 2G
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SetPreferredNetwork_1100, Function | MediumTest | Level3)
{
    bool setPreferredMode = GetProxy()->SetPreferredNetwork(
        SLOT_0, static_cast<int32_t>(PreferredNetwork::CORE_NETWORK_MODE_LTE_WCDMA_GSM), g_callback);
    ASSERT_TRUE(setPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getPreferredMode = GetProxy()->GetPreferredNetwork(SLOT_0, g_callback);
    ASSERT_TRUE(getPreferredMode);
    LOCK_NUM_WHILE_NE(hasNewData[GET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_EQ(getPreferredNetworkModeResult, static_cast<int32_t>(PreferredNetwork::CORE_NETWORK_MODE_AUTO));
    // Analog resident 4G
    g_mockVender.MockVendorSetTech(DOMAIN_TYPE_PS, static_cast<int>(RadioTech::RADIO_TECHNOLOGY_LTE));
    g_mockVender.MockVendorSetTech(DOMAIN_TYPE_CS, static_cast<int>(RadioTech::RADIO_TECHNOLOGY_LTE));
    sleep(1);
    RadioTech getPsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetPsRadioTech());
    EXPECT_EQ(getPsRadioTech, RadioTech::RADIO_TECHNOLOGY_LTE);
    RadioTech getCsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetCsRadioTech());
    EXPECT_EQ(getCsRadioTech, RadioTech::RADIO_TECHNOLOGY_LTE);
    // Analog resident 3G
    g_mockVender.MockVendorSetTech(DOMAIN_TYPE_PS, static_cast<int>(RadioTech::RADIO_TECHNOLOGY_WCDMA));
    g_mockVender.MockVendorSetTech(DOMAIN_TYPE_CS, static_cast<int>(RadioTech::RADIO_TECHNOLOGY_WCDMA));
    sleep(1);
    getPsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetPsRadioTech());
    EXPECT_EQ(getPsRadioTech, RadioTech::RADIO_TECHNOLOGY_WCDMA);
    getCsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetCsRadioTech());
    EXPECT_EQ(getCsRadioTech, RadioTech::RADIO_TECHNOLOGY_WCDMA);
    // Analog resident 2G
    g_mockVender.MockVendorSetTech(DOMAIN_TYPE_PS, static_cast<int>(RadioTech::RADIO_TECHNOLOGY_GSM));
    g_mockVender.MockVendorSetTech(DOMAIN_TYPE_CS, static_cast<int>(RadioTech::RADIO_TECHNOLOGY_GSM));
    sleep(1);
    getPsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetPsRadioTech());
    EXPECT_EQ(getPsRadioTech, RadioTech::RADIO_TECHNOLOGY_GSM);
    getCsRadioTech = static_cast<RadioTech>(GetNetworkState()->GetCsRadioTech());
    EXPECT_EQ(getCsRadioTech, RadioTech::RADIO_TECHNOLOGY_GSM);
}