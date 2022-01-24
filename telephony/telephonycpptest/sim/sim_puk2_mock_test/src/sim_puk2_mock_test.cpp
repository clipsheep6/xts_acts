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

#define SIM_MOCK_TEST
#include <cstring>
#include "sim_puk2_mock_test.h"
#include "sim_test.h"
#include "log.h"
#include "time_count_helper.h"

using namespace testing::ext;
using namespace OHOS;
const int32_t SimTest::DATA_LENGTH = 0;
const int32_t SimTest::OTHER_ABNORMAL = -2;
const int32_t SimTest::VAILD_SLOT_ID = EFFECTIVE_SLOT_ID;
const std::u16string SimTest::WRONG_PIN2 = Str8ToStr16("202110");

/**
 * @tc.number   Telephony_Sim_UnlockPuk2_0700
 * @tc.name     Test the UnlockPuk2 interface with puk2 code input error, call 11 times trigger lock.PUK2 code
 *              will only be entered 10 times. If the PUK2 code is entered incorrectly 10 times,
 *              the PUK2 function of the SIM card will be locked.
 * @tc.desc     Function test
 */
HWTEST_F(SimPuk2MockTest, Telephony_Sim_UnlockPuk2_0700, Function | MediumTest | Level1)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("1234");
    std::u16string puk2 = Str8ToStr16("87654321");
    std::string defaultPin2 = "1234";
    std::string defaultPuk2 = "12345678";
    int32_t errorTimes = 3;
    int32_t wrongNumber = 11;

    // Use the analog vendor library to set the PIN2 to 1234
    g_simPuk2Mock->MockPin2CodeSet(defaultPin2);
    // Use the analog vendor library to set the PUK2 to 12345678
    g_simPuk2Mock->MockPuk2CodeSet(defaultPuk2);

    // Entering incorrect pin2 code three times causes the puk2 lock to be triggered.
    OHOS::Telephony::LockStatusResponse responseInfo;
    for (int32_t loopNumber = 0; loopNumber < errorTimes; loopNumber++) {
        g_proxy.GetHandler()->UnlockPin2(SimTest::VAILD_SLOT_ID, SimTest::WRONG_PIN2, responseInfo);
    }

    bool retValue = false;
    // PUK2 code has a maximum of ten input opportunities.On the eleventh call to the interface, PUK2 has been locked.
    for (int32_t loopNumber = 0; loopNumber < wrongNumber; loopNumber++) {
        retValue = g_proxy.GetHandler()->UnlockPuk2(SimTest::VAILD_SLOT_ID, pin2, puk2, response);
    }
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, SimTest::OTHER_ABNORMAL);
}