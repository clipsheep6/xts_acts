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
const int32_t SimTest::SLOTID_0 = 0;
const int32_t SimTest::SLOTID_MINUS = -1;
const int32_t SimTest::OTHER_ABNORMAL = -2;
const int32_t SimTest::OPEN = 1;
const int32_t SimTest::CLOSE = 0;
const unsigned int SimTest::PHONE_NUMBER_LENGTH = 11;

/**
 * @tc.number   Telephony_Sim_SetVoiceMailInfo_0900
 * @tc.name     The test executed the SetVoiceMailInfo interface setting function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Function test
 */
HWTEST_F(SimSetVoiceMailTest, Telephony_Sim_SetVoiceMailInfo_0900, Function | MediumTest | Level1)
{
    std::u16string mailName = Str8ToStr16("123#@\%_ABCDE");
    std::u16string mailNumber = Str8ToStr16("01234567890123456789");
    for (int32_t loopNumber = 0; loopNumber < SimTest::LOOP_NUMBER; loopNumber++) {
        bool ret = g_proxy.GetHandler()->SetVoiceMailInfo(SimTest::SLOTID_0, mailName, mailNumber);
        ASSERT_TRUE(ret);
        std::u16string retMailNumber = g_proxy.GetHandler()->GetVoiceMailNumber(SimTest::SLOTID_0);
        ASSERT_STREQ(Str16ToStr8(retMailNumber).c_str(), Str16ToStr8(mailNumber).c_str());
        std::u16string retMailName = g_proxy.GetHandler()->GetVoiceMailIdentifier(SimTest::SLOTID_0);
        ASSERT_STREQ(Str16ToStr8(retMailName).c_str(), Str16ToStr8(mailName).c_str());
    }
}

/**
 * @tc.number   Telephony_Sim_IsSimActive_0500
 * @tc.name     The test executed the IsSimActive interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_IsSimActive_0500, Reliability | MediumTest | Level3)
{
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool result = g_proxy.GetHandler()->IsSimActive(SLOTID_0);
        ASSERT_TRUE(result);
    }
}

/**
 * @tc.number   Telephony_Sim_GetActiveSimAccountInfoList_0400
 * @tc.name     The test executed the IsSimActive interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimSetTest, Telephony_Sim_GetActiveSimAccountInfoList_0400, Reliability | MediumTest | Level3)
{
    std::u16string cardName = Str8ToStr16("1234");
    std::u16string cardNumber = Str8ToStr16("1234");
    bool ret = g_proxy.GetHandler()->SetShowName(SimTest::SLOTID_0, cardName);
    ASSERT_TRUE(ret);
    ret = g_proxy.GetHandler()->SetShowNumber(SimTest::SLOTID_0, cardNumber);
    ASSERT_TRUE(ret);

    std::vector<OHOS::Telephony::IccAccountInfo> vecAccountInfo;
    bool findSlotIndex = false;
    std::u16string retIccId = g_proxy.GetHandler()->GetSimIccId(SimTest::SLOTID_0);
    for (int32_t loopNumber = 0; loopNumber < SimTest::LOOP_NUMBER; loopNumber++) {
        bool result = g_proxy.GetHandler()->GetActiveSimAccountInfoList(vecAccountInfo);
        ASSERT_TRUE(result);
        for (std::vector<OHOS::Telephony::IccAccountInfo>::iterator iter = vecAccountInfo.begin();
             iter != vecAccountInfo.end(); iter++) {
            if ((*iter).slotIndex == SimTest::SLOTID_0) {
                findSlotIndex = true;
                ASSERT_EQ((*iter).simId, SimTest::SLOTID_0);
                ASSERT_FALSE((*iter).isEsim);
                ASSERT_TRUE((*iter).isActive);
                ASSERT_STREQ(Str16ToStr8((*iter).iccId).c_str(), Str16ToStr8(retIccId).c_str());
                ASSERT_STREQ(Str16ToStr8((*iter).showName).c_str(), Str16ToStr8(cardName).c_str());
                ASSERT_STREQ(Str16ToStr8((*iter).showNumber).c_str(), Str16ToStr8(cardNumber).c_str());
            }
        }
        ASSERT_TRUE(findSlotIndex);
        findSlotIndex = false;
        usleep(100000);
    }
}

/**
 * @tc.number   Telephony_Sim_SetShowName_0500
 * @tc.name     The test executed the SetShowName interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimSetTest, Telephony_Sim_SetShowName_0500, Reliability | MediumTest | Level3)
{
    std::u16string cardName = Str8ToStr16("1234");
    for (int32_t loopNumber = 0; loopNumber < SimTest::LOOP_NUMBER; loopNumber++) {
        bool ret = g_proxy.GetHandler()->SetShowName(SimTest::SLOTID_0, cardName);
        ASSERT_TRUE(ret);
    }
    std::u16string result = g_proxy.GetHandler()->GetShowName(SimTest::SLOTID_0);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), Str16ToStr8(cardName).c_str());
}

/**
 * @tc.number   Telephony_Sim_GetShowName_0500
 * @tc.name     The test executed the GetShowName interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimSetTest, Telephony_Sim_GetShowName_0500, Reliability | MediumTest | Level3)
{
    std::u16string cardName = Str8ToStr16("1234");
    bool ret = g_proxy.GetHandler()->SetShowName(SimTest::SLOTID_0, cardName);
    ASSERT_TRUE(ret);
    for (int32_t loopNumber = 0; loopNumber < SimTest::LOOP_NUMBER; loopNumber++) {
        std::u16string result = g_proxy.GetHandler()->GetShowName(SimTest::SLOTID_0);
        ASSERT_STREQ(Str16ToStr8(result).c_str(), Str16ToStr8(cardName).c_str());
    }
}

/**
 * @tc.number   Telephony_Sim_SetShowNumber_0500
 * @tc.name     The test executed the SetShowNumber interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowNumber_0500, Reliability | MediumTest | Level3)
{
    std::u16string cardNumber = Str8ToStr16("1234");
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool ret = g_proxy.GetHandler()->SetShowNumber(SLOTID_0, cardNumber);
        ASSERT_TRUE(ret);
        std::u16string result = g_proxy.GetHandler()->GetShowNumber(SLOTID_0);
        ASSERT_STREQ(Str16ToStr8(result).c_str(), Str16ToStr8(cardNumber).c_str());
    }
}

/**
 * @tc.number   Telephony_Sim_GetShowNumber_0400
 * @tc.name     The test executed the GetShowNumber interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowNumber_0400, Reliability | MediumTest | Level3)
{
    std::u16string cardNumber = Str8ToStr16("1234");
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool ret = g_proxy.GetHandler()->SetShowNumber(SLOTID_0, cardNumber);
        ASSERT_TRUE(ret);
        std::u16string result = g_proxy.GetHandler()->GetShowNumber(SLOTID_0);
        ASSERT_STREQ(Str16ToStr8(result).c_str(), Str16ToStr8(cardNumber).c_str());
    }
}

/**
 * @tc.number   Telephony_Sim_GetOperatorConfigs_0400
 * @tc.name     The test executed the GetOperatorConfigs interface query function 1000 times,
 *              expecting to execute successfully each time.
 *              Prerequisites: Mobile card.Manually push the XML configuration file corresponding to the
 *              mobile card to the 'data/OperatorConfig' path on the development board.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetOperatorConfigs_0400, Reliability | MediumTest | Level3)
{
    OHOS::Telephony::OperatorConfig poc;
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool ret = g_proxy.GetHandler()->GetOperatorConfigs(SLOTID_0, poc);
        ASSERT_TRUE(ret);
        ASSERT_FALSE(poc.configValue.empty());
    }
}

/**
 * @tc.number   Telephony_Sim_GetSimTelephoneNumber_0400
 * @tc.name     The test executed the GetSimTelephoneNumber interface query function 1000 times,
 *              expecting to execute successfully each time.Prerequisite: The card number has been
 *              written into the SIM card.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimTelephoneNumber_0400, Reliability | MediumTest | Level3)
{
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        std::u16string ret = g_proxy.GetHandler()->GetSimTelephoneNumber(SLOTID_0);
        ASSERT_STRNE(Str16ToStr8(ret).c_str(), "");
        // The length of a mobile phone number in mainland China is greater than or equal to 11 digits.
        ASSERT_GE(Str16ToStr8(ret).length(), PHONE_NUMBER_LENGTH);
    }
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailIdentifier_0400
 * @tc.name     The test executed the GetSimTelephoneNumber interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailIdentifier_0400, Reliability | MediumTest | Level3)
{
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        std::u16string ret = g_proxy.GetHandler()->GetVoiceMailIdentifier(SLOTID_0);
        ASSERT_STRNE(Str16ToStr8(ret).c_str(), "");
    }
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailNumber_0400
 * @tc.name     The test executed the GetVoiceMailNumber interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailNumber_0400, Reliability | MediumTest | Level3)
{
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        std::u16string ret = g_proxy.GetHandler()->GetVoiceMailNumber(SLOTID_0);
        ASSERT_STRNE(Str16ToStr8(ret).c_str(), "");
    }
}

/**
 * @tc.number   Telephony_Sim_UnlockPin2_0700
 * @tc.name     Loop to call UnlockPin2 interface for 1000 times and get the retValueurn value,
 *              and count the number of failures.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin2_0700, Reliability | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    std::string pin2 = "123";

    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool retValue = g_proxy.GetHandler()->UnlockPin2(SLOTID_0, Str8ToStr16(pin2), response);
        ASSERT_TRUE(retValue);
        ASSERT_EQ(response.result, OTHER_ABNORMAL);
    }
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk2_0900
 * @tc.name     Loop to call UnlockPuk2 interface for 1000 times and get the retValueurn value,
 *              and count the number of failures.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk2_0900, Reliability | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("1234");
    std::u16string puk2 = Str8ToStr16("12345678");

    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool retValue = g_proxy.GetHandler()->UnlockPuk2(SLOTID_0, pin2, puk2, response);
        ASSERT_TRUE(retValue);
        ASSERT_EQ(response.result, OTHER_ABNORMAL);
    }
}

/**
 * @tc.number   Telephony_Sim_AlterPin2_0900
 * @tc.name     Loop to call UnlockPuk2 interface for 1000 times and get the retValueurn value,
 *              and count the number of failures.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin2_0900, Reliability | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin2 = Str8ToStr16("123");
    std::u16string newPin2 = Str8ToStr16("1234");

    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool retValue = g_proxy.GetHandler()->AlterPin2(SLOTID_MINUS, newPin2, oldPin2, response);
        ASSERT_FALSE(retValue);
    }
}

/**
 * @tc.number   Telephony_Sim_SetActiveSim_0600
 * @tc.name     The test executed the IsSimActive interface setting function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimSetTest, Telephony_Sim_SetActiveSim_0600, Reliability | MediumTest | Level3)
{
    for (int32_t loopNumber = 0; loopNumber < SimTest::LOOP_NUMBER / 2; loopNumber++) {
        bool ret = g_proxy.GetHandler()->SetActiveSim(SimTest::SLOTID_0, SimTest::CLOSE);
        ASSERT_TRUE(ret);
        bool result = g_proxy.GetHandler()->SetActiveSim(SimTest::SLOTID_0, SimTest::OPEN);
        ASSERT_TRUE(result);
    }
}

/**
 * @tc.number   Telephony_Sim_GetSimAccountInfo_0400
 * @tc.name     The test executed the GetSimAccountInfo interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimSetTest, Telephony_Sim_GetSimAccountInfo_0400, Reliability | MediumTest | Level3)
{
    OHOS::Telephony::IccAccountInfo simInfo;
    std::u16string cardName = Str8ToStr16("1234");
    std::u16string cardNumber = Str8ToStr16("1234");
    bool setNameResult = g_proxy.GetHandler()->SetShowName(SimTest::SLOTID_0, cardName);
    ASSERT_TRUE(setNameResult);
    bool setNumResult = g_proxy.GetHandler()->SetShowNumber(SimTest::SLOTID_0, cardNumber);
    ASSERT_TRUE(setNumResult);
    std::u16string retIccId = g_proxy.GetHandler()->GetSimIccId(SimTest::SLOTID_0);
    bool ret = g_proxy.GetHandler()->SetActiveSim(SimTest::SLOTID_0, SimTest::CLOSE);
    ASSERT_TRUE(ret);

    for (int32_t loopNumber = 0; loopNumber < SimTest::LOOP_NUMBER; loopNumber++) {
        bool result = g_proxy.GetHandler()->GetSimAccountInfo(SimTest::SLOTID_0, simInfo);
        ASSERT_TRUE(result);
        ASSERT_EQ(simInfo.simId, SimTest::SLOTID_0);
        ASSERT_EQ(simInfo.slotIndex, SimTest::SLOTID_0);
        ASSERT_FALSE(simInfo.isEsim);
        ASSERT_FALSE(simInfo.isActive);
        ASSERT_STREQ(Str16ToStr8(simInfo.iccId).c_str(), Str16ToStr8(retIccId).c_str());
        ASSERT_STREQ(Str16ToStr8(simInfo.showName).c_str(), Str16ToStr8(cardName).c_str());
        ASSERT_STREQ(Str16ToStr8(simInfo.showNumber).c_str(), Str16ToStr8(cardNumber).c_str());
        usleep(100000);
    }
}
