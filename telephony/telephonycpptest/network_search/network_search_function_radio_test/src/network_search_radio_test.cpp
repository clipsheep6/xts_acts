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

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;
using namespace OHOS::Telephony::NetworkSearch;
using namespace NetworkSearch;

/*
 * @tc.number  Telephony_NetworkSearch_GetImei_0500
 * @tc.name    If radio is off,to test the GetImei() and the result is not empty and the length is 15
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetImei_0500, Function | MediumTest | Level3)
{
    bool setRadioState = GetProxy()->SetRadioState(false, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getRadioState = GetProxy()->GetRadioState(g_callback);
    ASSERT_TRUE(getRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_FALSE(getRadioStatusCallback);
    std::u16string getImei = GetProxy()->GetImei(SLOT_0);
    std::string str = Str16ToStr8(getImei);
    EXPECT_STRNE(str.c_str(), "");
    int size = str.size();
    EXPECT_EQ(size, NetworkSearchTest::IMEI_SIZE);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetUniqueDeviceId_0500
 * @tc.name    If radio is off,to test the GetUniqueDeviceId() and the result is not empty and the length is 14 or 15
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetUniqueDeviceId_0500, Function | MediumTest | Level3)
{
    bool setRadioState = GetProxy()->SetRadioState(false, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getRadioState = GetProxy()->GetRadioState(g_callback);
    ASSERT_TRUE(getRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_FALSE(getRadioStatusCallback);
    std::u16string getDeviceId = GetProxy()->GetUniqueDeviceId(SLOT_0);
    std::string str = Str16ToStr8(getDeviceId);
    EXPECT_STRNE(str.c_str(), "");
    int size = str.size();
    EXPECT_TRUE(size == NetworkSearchTest::IMEI_SIZE || size == NetworkSearchTest::MEID_SIZE);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetMeid_0500
 * @tc.name    If radio is off,to test the GetMeid() and the result is not empty and the length is 14
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetMeid_0500, Function | MediumTest | Level3)
{
    bool setRadioState = GetProxy()->SetRadioState(false, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getRadioState = GetProxy()->GetRadioState(g_callback);
    ASSERT_TRUE(getRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_FALSE(getRadioStatusCallback);
    VendorTestCDMA(PreferredNetwork::CORE_NETWORK_MODE_CDMA);
    std::u16string getMeid = GetProxy()->GetMeid(SLOT_0);
    std::string str = Str16ToStr8(getMeid);
    EXPECT_STRNE(str.c_str(), "");
    int size = str.size();
    EXPECT_EQ(size, NetworkSearchTest::MEID_SIZE);
}
