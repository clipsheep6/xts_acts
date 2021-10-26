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