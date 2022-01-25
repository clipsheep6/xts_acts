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
    bool setRadioState = GetProxy()->SetRadioState(SLOT_ID, false, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getRadioState = GetProxy()->GetRadioState(SLOT_ID, g_callback);
    ASSERT_TRUE(getRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_FALSE(getRadioStatusCallback);
    std::u16string getImei = GetProxy()->GetImei(SLOT_ID);
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
    bool setRadioState = GetProxy()->SetRadioState(SLOT_ID, false, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getRadioState = GetProxy()->GetRadioState(SLOT_ID, g_callback);
    ASSERT_TRUE(getRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_FALSE(getRadioStatusCallback);
    std::u16string getDeviceId = GetProxy()->GetUniqueDeviceId(SLOT_ID);
    std::string str = Str16ToStr8(getDeviceId);
    EXPECT_STRNE(str.c_str(), "");
    int size = str.size();
    EXPECT_TRUE(size == NetworkSearchTest::IMEI_SIZE || size == NetworkSearchTest::MEID_SIZE);
}

/*
 * @tc.number  Telephony_NetworkSearch_GetNrOptionMode_0700
 * @tc.name    If radio is off,to test the GetNrOptionMode() is wrong and return NR_MODE_UNKNOWN
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNrOptionMode_0700, Function | MediumTest | Level3)
{
    bool setRadioState = GetProxy()->SetRadioState(SLOT_ID, false, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getRadioState = GetProxy()->GetRadioState(SLOT_ID, g_callback);
    ASSERT_TRUE(getRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_FALSE(getRadioStatusCallback);
    NrMode nrMode = GetProxy()->GetNrOptionMode(SLOT_ID);
    EXPECT_EQ(nrMode, NrMode::NR_MODE_UNKNOWN);
}

/*
 * @tc.number  Telephony_NetworkSearch_IsNrSupported_0200
 * @tc.name    If radio is off,to test the IsNrSupported() is wrong and return true
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_IsNrSupported_0200, Function | MediumTest | Level3)
{
    bool setRadioState = GetProxy()->SetRadioState(SLOT_ID, false, g_callback);
    ASSERT_TRUE(setRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool getRadioState = GetProxy()->GetRadioState(SLOT_ID, g_callback);
    ASSERT_TRUE(getRadioState);
    LOCK_NUM_WHILE_NE(hasNewData[GET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_FALSE(getRadioStatusCallback);
    bool nrResult = GetProxy()->IsNrSupported(SLOT_ID);
    EXPECT_TRUE(nrResult);
}
