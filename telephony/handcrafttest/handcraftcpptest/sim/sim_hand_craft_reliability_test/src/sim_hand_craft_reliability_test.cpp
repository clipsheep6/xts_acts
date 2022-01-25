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

#include <cstring>
#include <fstream>
#include "sim_test.h"
#include "sim_set_test.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;

const int32_t SimTest::LOOP_NUMBER = 1000;
const int32_t SimTest::VAILD_SLOT_ID = 0;
const unsigned int SimTest::PHONE_NUMBER_LENGTH = 11;

/**
 * @tc.number   Telephony_Sim_SetVoiceMailInfo_09001
 * @tc.name     The test executed the SetVoiceMailInfo interface setting function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimSetVoiceMailTest, Telephony_Sim_SetVoiceMailInfo_09001, Function | MediumTest | Level1)
{
    std::u16string mailName = Str8ToStr16("123#@\%_ABCDE");
    std::u16string mailNumber = Str8ToStr16("01234567890123456789");
    for (int32_t loopNumber = 0; loopNumber < SimTest::LOOP_NUMBER; loopNumber++) {
        bool ret = g_proxy.GetHandler()->SetVoiceMailInfo(SimTest::VAILD_SLOT_ID, mailName, mailNumber);
        ASSERT_TRUE(ret);
        std::u16string retMailNumber = g_proxy.GetHandler()->GetVoiceMailNumber(SimTest::VAILD_SLOT_ID);
        ASSERT_STREQ(Str16ToStr8(retMailNumber).c_str(), Str16ToStr8(mailNumber).c_str());
        std::u16string retMailName = g_proxy.GetHandler()->GetVoiceMailIdentifier(SimTest::VAILD_SLOT_ID);
        ASSERT_STREQ(Str16ToStr8(retMailName).c_str(), Str16ToStr8(mailName).c_str());
    }
}

/**
 * @tc.number   Telephony_Sim_GetOperatorConfigs_04001
 * @tc.name     The test executed the GetOperatorConfigs interface query function 1000 times,
 *              expecting to execute successfully each time.
 *              Prerequisites: Mobile card.Manually push the XML configuration file corresponding to the
 *              mobile card to the 'data/OperatorConfig' path on the development board.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetOperatorConfigs_04001, Reliability | MediumTest | Level3)
{
    OHOS::Telephony::OperatorConfig poc;
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool ret = g_proxy.GetHandler()->GetOperatorConfigs(VAILD_SLOT_ID, poc);
        ASSERT_TRUE(ret);
        ASSERT_FALSE(poc.configValue.empty());
    }
}

/**
 * @tc.number   Telephony_Sim_GetSimTelephoneNumber_04001
 * @tc.name     The test executed the GetSimTelephoneNumber interface query function 1000 times,
 *              expecting to execute successfully each time.Prerequisite: The card number has been
 *              written into the SIM card.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimTelephoneNumber_04001, Reliability | MediumTest | Level3)
{
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        std::u16string ret = g_proxy.GetHandler()->GetSimTelephoneNumber(VAILD_SLOT_ID);
        ASSERT_STRNE(Str16ToStr8(ret).c_str(), "");
        // The length of a mobile phone number in mainland China is greater than or equal to 11 digits.
        ASSERT_GE(Str16ToStr8(ret).length(), PHONE_NUMBER_LENGTH);
    }
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailIdentifier_04001
 * @tc.name     The test executed the GetSimTelephoneNumber interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailIdentifier_04001, Reliability | MediumTest | Level3)
{
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        std::u16string ret = g_proxy.GetHandler()->GetVoiceMailIdentifier(VAILD_SLOT_ID);
        ASSERT_STRNE(Str16ToStr8(ret).c_str(), "");
    }
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailNumber_04001
 * @tc.name     The test executed the GetVoiceMailNumber interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailNumber_04001, Reliability | MediumTest | Level3)
{
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        std::u16string ret = g_proxy.GetHandler()->GetVoiceMailNumber(VAILD_SLOT_ID);
        ASSERT_STRNE(Str16ToStr8(ret).c_str(), "");
    }
}