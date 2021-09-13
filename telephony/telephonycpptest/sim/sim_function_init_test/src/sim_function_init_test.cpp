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

#include "sim_test.h"
#include <cstring>

using namespace testing::ext;
using namespace OHOS;
const int32_t SimTest::SLOTID_0 = 0;

/**
 * @tc.number   Telephony_Sim_GetShowName_0200
 * @tc.name     Tests that the GetShowName interface gets the default value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowName_0200, Function | MediumTest | Level1)
{
    std::u16string defaultCardName = Str8ToStr16("Card0");
    std::u16string result = g_proxy.GetHandler()->GetShowName(SLOTID_0);
    std::u16string retName = g_proxy.GetHandler()->GetOperatorName(SLOTID_0);
    if (result == defaultCardName || result == retName) {
        SUCCEED();
    } else {
        FAIL();
    }
}

/**
 * @tc.number   Telephony_Sim_GetShowNumber_0200
 * @tc.name     Tests that the GetShowNumber interface gets the default value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowNumber_0200, Function | MediumTest | Level1)
{
    std::u16string result = g_proxy.GetHandler()->GetShowNumber(SLOTID_0);
    std::u16string ret = g_proxy.GetHandler()->GetSimTelephoneNumber(SLOTID_0);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), Str16ToStr8(ret).c_str());
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailNumber_0100
 * @tc.name     Test the GetVoiceMailNumber interface input parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailNumber_0100, Function | MediumTest | Level1)
{
    std::u16string operatorNum1 = Str8ToStr16("46000");
    std::u16string operatorNum2 = Str8ToStr16("46002");
    std::u16string operatorNum3 = Str8ToStr16("46004");
    std::u16string operatorNum4 = Str8ToStr16("46007");
    std::string mobileVoiceMail = "12599";
    std::u16string ret = g_proxy.GetHandler()->GetVoiceMailNumber(SLOTID_0);
    std::u16string result = g_proxy.GetHandler()->GetSimOperatorNumeric(SLOTID_0);
    if (result == operatorNum1 || result == operatorNum2 || result == operatorNum3 || result == operatorNum4) {
        ASSERT_STREQ(Str16ToStr8(ret).c_str(), mobileVoiceMail.c_str());
    } else {
        ASSERT_STRNE(Str16ToStr8(ret).c_str(), "");
    }
}

