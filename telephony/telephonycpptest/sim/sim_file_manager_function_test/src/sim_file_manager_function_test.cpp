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
#include <vector>
#include <fstream>
#include "sim_test.h"
#include "sim_set_test.h"

using namespace testing::ext;
using namespace OHOS;
const int32_t SimTest::INVALID_VALUE = -1;
const int32_t SimTest::OTHER_ABNORMAL = -2;
const int32_t SimTest::SLOT_ID_2 = 2;
const int32_t SimTest::SLOT_ID_3 = 3;
const int32_t SimTest::VAILD_SLOT_ID = EFFECTIVE_SLOT_ID;
const int32_t SimTest::SLOTID_MINUS = -1;
const int32_t SimTest::CLOSE = 0;
const int32_t SimTest::OPEN = 1;
const int32_t SimTest::PARAMETERS_ERR = -1;
const unsigned int SimTest::ICCID_LENGTH = 20;
const unsigned int SimTest::IMSI_LENGTH = 15;
const unsigned int SimTest::OPERATOR_NUM_LENGTH = 5;
const unsigned int SimTest::MIN_LENGTH = 1;
const unsigned int SimTest::PHONE_NUMBER_LENGTH = 11;

/**
 * @tc.number   Telephony_Sim_SetVoiceMailInfo_0200
 * @tc.name     Test SetVoiceMailInfo interface, slotId exception input parameter -1, check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetVoiceMailInfo_0200, Function | MediumTest | Level1)
{
    std::u16string mailName = Str8ToStr16("123#@\%_ABCDE");
    std::u16string mailNumber = Str8ToStr16("01234567890123456789");
    bool ret = g_proxy.GetHandler()->SetVoiceMailInfo(SLOTID_MINUS, mailName, mailNumber);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetVoiceMailInfo_0300
 * @tc.name     Test SetVoiceMailInfo interface, slotId exception input parameter 1, check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetVoiceMailInfo_0300, Function | MediumTest | Level1)
{
    std::u16string mailName = Str8ToStr16("123#@\%_ABCDE");
    std::u16string mailNumber = Str8ToStr16("01234567890123456789");
    bool ret = g_proxy.GetHandler()->SetVoiceMailInfo(SLOT_ID_3, mailName, mailNumber);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetVoiceMailInfo_0400
 * @tc.name     Test SetVoiceMailInfo interface, slotId exception input parameter 2, check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetVoiceMailInfo_0400, Function | MediumTest | Level1)
{
    std::u16string mailName = Str8ToStr16("123#@\%_ABCDE");
    std::u16string mailNumber = Str8ToStr16("01234567890123456789");
    bool ret = g_proxy.GetHandler()->SetVoiceMailInfo(SLOT_ID_2, mailName, mailNumber);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetVoiceMailInfo_1000
 * @tc.name     Test SetVoiceMailInfo interface, mailName input parameter null, check return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetVoiceMailInfo_1000, Function | MediumTest | Level1)
{
    std::u16string mailName = Str8ToStr16("");
    std::u16string mailNumber = Str8ToStr16("01234567890123456789");
    bool ret = g_proxy.GetHandler()->SetVoiceMailInfo(VAILD_SLOT_ID, mailName, mailNumber);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetVoiceMailInfo_1100
 * @tc.name     Test SetVoiceMailInfo interface, mailNumber input parameter is null, check return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetVoiceMailInfo_1100, Function | MediumTest | Level1)
{
    std::u16string mailName = Str8ToStr16("123#@\%_ABCDE");
    std::u16string mailNumber = Str8ToStr16("");
    bool ret = g_proxy.GetHandler()->SetVoiceMailInfo(VAILD_SLOT_ID, mailName, mailNumber);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetVoiceMailInfo_1400
 * @tc.name     Test the SetVoiceMailInfo interface. The mailNumber input parameter is an impure number.
 *              Check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetVoiceMailInfo_1400, Function | MediumTest | Level1)
{
    std::u16string mailName = Str8ToStr16("123#@\%_ABCDE");
    std::u16string mailNumber = Str8ToStr16("ABCD_#$%^1234");
    bool ret = g_proxy.GetHandler()->SetVoiceMailInfo(VAILD_SLOT_ID, mailName, mailNumber);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_IsSimActive_0100
 * @tc.name     Test that the IsSimActive interface is called when the SIM card is activated
 *              and the parameters are normal.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_IsSimActive_0100, Function | MediumTest | Level2)
{
    bool result = g_proxy.GetHandler()->IsSimActive(VAILD_SLOT_ID);
    ASSERT_TRUE(result);
    int32_t state = g_proxy.GetHandler()->GetSimState(VAILD_SLOT_ID);
    ASSERT_EQ(state, (int32_t)OHOS::Telephony::SimState::SIM_STATE_READY);
}

/**
 * @tc.number   Telephony_Sim_IsSimActive_0200
 * @tc.name     Test to call the IsSimActive interface and enter exception parameters when the SIM card is active.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_IsSimActive_0200, Function | MediumTest | Level4)
{
    bool result = g_proxy.GetHandler()->IsSimActive(SLOTID_MINUS);
    ASSERT_FALSE(result);
    int32_t state = g_proxy.GetHandler()->GetSimState(VAILD_SLOT_ID);
    ASSERT_EQ(state, (int32_t)OHOS::Telephony::SimState::SIM_STATE_READY);
}

/**
 * @tc.number   Telephony_Sim_IsSimActive_0300
 * @tc.name     Test that the IsSimActive interface is called when the SIM card is not activated
 *              and the parameters are normal.
 * @tc.desc     Function test
 */
HWTEST_F(SimSetTest, Telephony_Sim_IsSimActive_0300, Function | MediumTest | Level3)
{
    bool ret = g_proxy.GetHandler()->SetActiveSim(SimTest::VAILD_SLOT_ID, SimTest::CLOSE);
    ASSERT_TRUE(ret);
    bool result = g_proxy.GetHandler()->IsSimActive(SimTest::VAILD_SLOT_ID);
    ASSERT_FALSE(result);
    // Delay two second to obtain the refreshed card status.
    sleep(2);
    int32_t state = g_proxy.GetHandler()->GetSimState(SimTest::VAILD_SLOT_ID);
    ASSERT_EQ(state, (int32_t)OHOS::Telephony::SimState::SIM_STATE_NOT_PRESENT);
}

/**
 * @tc.number   Telephony_Sim_IsSimActive_0600
 * @tc.name     Test the slotId exception during IsSimActive interface card activation.
 *              Enter parameter 1 and check the returned value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_IsSimActive_0600, Function | MediumTest | Level2)
{
    bool result = g_proxy.GetHandler()->IsSimActive(SLOT_ID_3);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_IsSimActive_0700
 * @tc.name     Test the slotId exception during IsSimActive interface card activation.
 *              Enter parameter 2 and check the returned value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_IsSimActive_0700, Function | MediumTest | Level2)
{
    bool result = g_proxy.GetHandler()->IsSimActive(SLOT_ID_2);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_SetActiveSim_0100
 * @tc.name     When the SIM card is activated, the test calls the SetActiveSim interface and enters
 *              normal parameters.
 * @tc.desc     Function test
 */
HWTEST_F(SimSetTest, Telephony_Sim_SetActiveSim_0100, Function | MediumTest | Level2)
{
    bool setCloseResult = g_proxy.GetHandler()->SetActiveSim(SimTest::VAILD_SLOT_ID, SimTest::CLOSE);
    ASSERT_TRUE(setCloseResult);
    sleep(1);
    bool result = g_proxy.GetHandler()->IsSimActive(SimTest::VAILD_SLOT_ID);
    ASSERT_FALSE(result);
    bool setOpenResult = g_proxy.GetHandler()->SetActiveSim(SimTest::VAILD_SLOT_ID, SimTest::OPEN);
    ASSERT_TRUE(setOpenResult);
    sleep(1);
    bool ret = g_proxy.GetHandler()->IsSimActive(SimTest::VAILD_SLOT_ID);
    ASSERT_TRUE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetActiveSim_0200
 * @tc.name     When the SIM card is activated, the test calls the SetActiveSim interface
 *              and enters an abnormal slotId parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetActiveSim_0200, Function | MediumTest | Level4)
{
    bool ret = g_proxy.GetHandler()->SetActiveSim(SLOTID_MINUS, CLOSE);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetActiveSim_0300
 * @tc.name     When the SIM card is activated, the test calls the SetActiveSim interface
 *              and enters an normal slotId parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetActiveSim_0300, Function | MediumTest | Level4)
{
    bool ret = g_proxy.GetHandler()->SetActiveSim(VAILD_SLOT_ID, OPEN);
    ASSERT_TRUE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetActiveSim_0400
 * @tc.name     When the SIM card is activated, the test calls the SetActiveSim interface
 *              and enters an abnormal enable parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetActiveSim_0400, Function | MediumTest | Level4)
{
    bool ret = g_proxy.GetHandler()->SetActiveSim(VAILD_SLOT_ID, PARAMETERS_ERR);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetActiveSim_0700
 * @tc.name     Test SetActiveSim slotId exception input parameter 1 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetActiveSim_0700, Function | MediumTest | Level4)
{
    bool ret = g_proxy.GetHandler()->SetActiveSim(SLOT_ID_3, CLOSE);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetActiveSim_0800
 * @tc.name     Test SetActiveSim slotId exception input parameter 2 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetActiveSim_0800, Function | MediumTest | Level4)
{
    bool ret = g_proxy.GetHandler()->SetActiveSim(SLOT_ID_2, CLOSE);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_GetActiveSimAccountInfoList_0100
 * @tc.name     Test call GetActiveSimAccountInfoList interface when the card is activated.
 * @tc.desc     Function test
 */
HWTEST_F(SimSetTest, Telephony_Sim_GetActiveSimAccountInfoList_0100, Function | MediumTest | Level2)
{
    std::u16string cardName = Str8ToStr16("1234");
    std::u16string cardNumber = Str8ToStr16("1234");
    bool ret = g_proxy.GetHandler()->SetActiveSim(SimTest::VAILD_SLOT_ID, SimTest::OPEN);
    ASSERT_TRUE(ret);
    ret = g_proxy.GetHandler()->SetShowName(SimTest::VAILD_SLOT_ID, cardName);
    ASSERT_TRUE(ret);
    ret = g_proxy.GetHandler()->SetShowNumber(SimTest::VAILD_SLOT_ID, cardNumber);
    ASSERT_TRUE(ret);
    std::u16string retIccId = g_proxy.GetHandler()->GetSimIccId(SimTest::VAILD_SLOT_ID);

    std::vector<OHOS::Telephony::IccAccountInfo> vecAccountInfo;
    bool result = g_proxy.GetHandler()->GetActiveSimAccountInfoList(vecAccountInfo);
    ASSERT_TRUE(result);

    bool findSlotIndex = false;
    for (std::vector<OHOS::Telephony::IccAccountInfo>::iterator iter = vecAccountInfo.begin();
         iter != vecAccountInfo.end(); iter++) {
        if ((*iter).slotIndex == SimTest::VAILD_SLOT_ID) {
            findSlotIndex = true;
            EXPECT_FALSE((*iter).isEsim);
            EXPECT_TRUE((*iter).isActive);
            EXPECT_STREQ(Str16ToStr8((*iter).iccId).c_str(), Str16ToStr8(retIccId).c_str());
            EXPECT_STREQ(Str16ToStr8((*iter).showName).c_str(), Str16ToStr8(cardName).c_str());
            EXPECT_STREQ(Str16ToStr8((*iter).showNumber).c_str(), Str16ToStr8(cardNumber).c_str());
        }
    }
    ASSERT_TRUE(findSlotIndex);
}

/**
 * @tc.number   Telephony_Sim_GetActiveSimAccountInfoList_0200
 * @tc.name     Test call GetActiveSimAccountInfoList interface when the card is not active.
 * @tc.desc     Function test
 */
HWTEST_F(SimSetTest, Telephony_Sim_GetActiveSimAccountInfoList_0200, Function | MediumTest | Level3)
{
    std::u16string cardName = Str8ToStr16("1234");
    std::u16string cardNumber = Str8ToStr16("1234");
    bool ret = g_proxy.GetHandler()->SetShowName(SimTest::VAILD_SLOT_ID, cardName);
    ASSERT_TRUE(ret);
    ret = g_proxy.GetHandler()->SetShowNumber(SimTest::VAILD_SLOT_ID, cardNumber);
    ASSERT_TRUE(ret);
    ret = g_proxy.GetHandler()->SetActiveSim(SimTest::VAILD_SLOT_ID, SimTest::CLOSE);
    ASSERT_TRUE(ret);

    std::vector<OHOS::Telephony::IccAccountInfo> vecAccountInfo;
    bool result = g_proxy.GetHandler()->GetActiveSimAccountInfoList(vecAccountInfo);
    ASSERT_FALSE(result);
    ASSERT_TRUE(vecAccountInfo.empty());
}

/**
 * @tc.number   Telephony_Sim_SetShowName_0100
 * @tc.name     Test SetShowName slotId exception input parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowName_0100, Function | MediumTest | Level4)
{
    std::u16string cardName = Str8ToStr16("1234");
    bool ret = g_proxy.GetHandler()->SetShowName(SLOTID_MINUS, cardName);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetShowName_0200
 * @tc.name     Test SetShowName Interface parameter name The value contains more than 32 characters.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowName_0200, Function | MediumTest | Level4)
{
    std::u16string cardName = Str8ToStr16("012345678901234567890123456789qQ@");
    bool ret = g_proxy.GetHandler()->SetShowName(VAILD_SLOT_ID, cardName);
    ASSERT_FALSE(ret);
    std::u16string result = g_proxy.GetHandler()->GetShowName(VAILD_SLOT_ID);
    ASSERT_STRNE(Str16ToStr8(result).c_str(), Str16ToStr8(cardName).c_str());
}

/**
 * @tc.number   Telephony_Sim_SetShowName_0300
 * @tc.name     Test SetShowName Interface parameter name Specifies an empty value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowName_0300, Function | MediumTest | Level4)
{
    std::u16string cardName = Str8ToStr16("");
    bool ret = g_proxy.GetHandler()->SetShowName(VAILD_SLOT_ID, cardName);
    ASSERT_FALSE(ret);
    std::u16string result = g_proxy.GetHandler()->GetShowName(VAILD_SLOT_ID);
    ASSERT_STRNE(Str16ToStr8(result).c_str(), Str16ToStr8(cardName).c_str());
}

/**
 * @tc.number   Telephony_Sim_SetShowName_0600
 * @tc.name     Test SetShowName slotId exception input parameter 1 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowName_0600, Function | MediumTest | Level4)
{
    std::u16string cardName = Str8ToStr16("1234");
    bool ret = g_proxy.GetHandler()->SetShowName(SLOT_ID_3, cardName);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetShowName_0700
 * @tc.name     Test SetShowName slotId exception input parameter 2 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowName_0700, Function | MediumTest | Level4)
{
    std::u16string cardName = Str8ToStr16("1234");
    bool ret = g_proxy.GetHandler()->SetShowName(SLOT_ID_2, cardName);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetShowName_0800
 * @tc.name     Test SetShowName Interface name enter mixed valid values, check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimSetTest, Telephony_Sim_SetShowName_0800, Function | MediumTest | Level2)
{
    std::u16string cardName = Str8ToStr16("01234567890123456789_测@#$\%ABCD");
    bool ret = g_proxy.GetHandler()->SetShowName(SimTest::VAILD_SLOT_ID, cardName);
    ASSERT_TRUE(ret);
    std::u16string result = g_proxy.GetHandler()->GetShowName(SimTest::VAILD_SLOT_ID);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), Str16ToStr8(cardName).c_str());
}

/**
 * @tc.number   Telephony_Sim_GetShowName_0100
 * @tc.name     Test the GetShowName interface input parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimSetTest, Telephony_Sim_GetShowName_0100, Function | MediumTest | Level2)
{
    std::u16string cardName = Str8ToStr16("1234");
    bool ret = g_proxy.GetHandler()->SetShowName(SimTest::VAILD_SLOT_ID, cardName);
    ASSERT_TRUE(ret);
    std::u16string result = g_proxy.GetHandler()->GetShowName(SimTest::VAILD_SLOT_ID);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), Str16ToStr8(cardName).c_str());
}

/**
 * @tc.number   Telephony_Sim_GetShowName_0200
 * @tc.name     Tests that the GetShowName interface gets the default value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowName_0200, Function | MediumTest | Level3)
{
    std::u16string result = g_proxy.GetHandler()->GetShowName(VAILD_SLOT_ID);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), Str16ToStr8(g_defaultCardName).c_str());
}

/**
 * @tc.number   Telephony_Sim_GetShowName_0300
 * @tc.name     Test the GetShowName slotId exception input parameter -1 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowName_0300, Function | MediumTest | Level3)
{
    std::u16string result = g_proxy.GetHandler()->GetShowName(SLOTID_MINUS);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetShowName_0600
 * @tc.name     Test the slotId exception input parameter 1 of GetShowName and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowName_0600, Function | MediumTest | Level3)
{
    std::u16string result = g_proxy.GetHandler()->GetShowName(SLOT_ID_3);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetShowName_0700
 * @tc.name     Test the slotId exception input parameter 2 of GetShowName and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowName_0700, Function | MediumTest | Level3)
{
    std::u16string result = g_proxy.GetHandler()->GetShowName(SLOT_ID_2);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_SetShowNumber_0100
 * @tc.name     Test SetShowNumber slotId exception input parameter -1 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowNumber_0100, Function | MediumTest | Level4)
{
    std::u16string cardNumber = Str8ToStr16("1234");
    bool ret = g_proxy.GetHandler()->SetShowNumber(SLOTID_MINUS, cardNumber);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetShowNumber_0200
 * @tc.name     Test SetShowNumber Interface parameter number Specifies a value that contains more than 32 characters.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowNumber_0200, Function | MediumTest | Level4)
{
    std::u16string cardNumber = Str8ToStr16("012345678901234567890123456789qQ@");
    bool ret = g_proxy.GetHandler()->SetShowNumber(VAILD_SLOT_ID, cardNumber);
    ASSERT_FALSE(ret);
    std::u16string result = g_proxy.GetHandler()->GetShowNumber(VAILD_SLOT_ID);
    ASSERT_STRNE(Str16ToStr8(result).c_str(), Str16ToStr8(cardNumber).c_str());
}

/**
 * @tc.number   Telephony_Sim_SetShowNumber_0300
 * @tc.name     Test SetShowNumber Interface parameter number Specifies an empty value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowNumber_0300, Function | MediumTest | Level4)
{
    std::u16string cardNumber = Str8ToStr16("1234");
    bool result = g_proxy.GetHandler()->SetShowNumber(VAILD_SLOT_ID, cardNumber);
    ASSERT_TRUE(result);

    std::u16string emptyNumber = Str8ToStr16("");
    bool ret = g_proxy.GetHandler()->SetShowNumber(VAILD_SLOT_ID, emptyNumber);
    ASSERT_FALSE(ret);
    std::u16string value = g_proxy.GetHandler()->GetShowNumber(VAILD_SLOT_ID);
    ASSERT_STRNE(Str16ToStr8(value).c_str(), Str16ToStr8(emptyNumber).c_str());
}

/**
 * @tc.number   Telephony_Sim_SetShowNumber_0600
 * @tc.name     Test SetShowNumber slotId exception input parameter 1 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowNumber_0600, Function | MediumTest | Level4)
{
    std::u16string cardNumber = Str8ToStr16("1234");
    bool ret = g_proxy.GetHandler()->SetShowNumber(SLOT_ID_3, cardNumber);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetShowNumber_0700
 * @tc.name     Test SetShowNumber slotId exception input parameter 2 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowNumber_0700, Function | MediumTest | Level4)
{
    std::u16string cardNumber = Str8ToStr16("1234");
    bool ret = g_proxy.GetHandler()->SetShowNumber(SLOT_ID_2, cardNumber);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetShowNumber_0800
 * @tc.name     Test SetShowNumber interface number Enter valid mixed values and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowNumber_0800, Function | MediumTest | Level4)
{
    std::u16string cardNumber = Str8ToStr16("01234567890123456789_测@#$\%ABCDE");
    bool ret = g_proxy.GetHandler()->SetShowNumber(VAILD_SLOT_ID, cardNumber);
    ASSERT_TRUE(ret);
    std::u16string result = g_proxy.GetHandler()->GetShowNumber(VAILD_SLOT_ID);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), Str16ToStr8(cardNumber).c_str());
}

/**
 * @tc.number   Telephony_Sim_GetShowNumber_0100
 * @tc.name     Test the GetShowNumber interface input parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowNumber_0100, Function | MediumTest | Level2)
{
    std::u16string cardNumber = Str8ToStr16("1234");
    bool ret = g_proxy.GetHandler()->SetShowNumber(VAILD_SLOT_ID, cardNumber);
    ASSERT_TRUE(ret);
    std::u16string result = g_proxy.GetHandler()->GetShowNumber(VAILD_SLOT_ID);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), Str16ToStr8(cardNumber).c_str());
}

/**
 * @tc.number   Telephony_Sim_GetShowNumber_0200
 * @tc.name     Test the GetShowNumber slotId exception input parameter -1 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowNumber_0200, Function | MediumTest | Level4)
{
    std::u16string result = g_proxy.GetHandler()->GetShowNumber(SLOTID_MINUS);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetShowNumber_0500
 * @tc.name     Test the slotId exception input parameter 1 of GetShowNumber and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowNumber_0500, Function | MediumTest | Level4)
{
    std::u16string result = g_proxy.GetHandler()->GetShowNumber(SLOT_ID_3);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetShowNumber_0600
 * @tc.name     Test the slotId exception input parameter 2 of GetShowNumber and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowNumber_0600, Function | MediumTest | Level4)
{
    std::u16string result = g_proxy.GetHandler()->GetShowNumber(SLOT_ID_2);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetOperatorConfigs_0200
 * @tc.name     Test the GetOperatorConfigs slotId exception input parameter -1 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetOperatorConfigs_0200, Function | MediumTest | Level4)
{
    OHOS::Telephony::OperatorConfig poc;
    bool ret = g_proxy.GetHandler()->GetOperatorConfigs(SLOTID_MINUS, poc);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_GetOperatorConfigs_0600
 * @tc.name     Test GetOperatorConfigs slotId exception input parameter 1 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetOperatorConfigs_0600, Function | MediumTest | Level4)
{
    OHOS::Telephony::OperatorConfig poc;
    bool ret = g_proxy.GetHandler()->GetOperatorConfigs(SLOT_ID_3, poc);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_GetOperatorConfigs_0700
 * @tc.name     Test the GetOperatorConfigs slotId exception input parameter 2 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetOperatorConfigs_0700, Function | MediumTest | Level4)
{
    OHOS::Telephony::OperatorConfig poc;
    bool ret = g_proxy.GetHandler()->GetOperatorConfigs(SLOT_ID_2, poc);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_GetSimTelephoneNumber_0200
 * @tc.name     Test GetSimTelephoneNumber slotId exception input parameter -1 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimTelephoneNumber_0200, Function | MediumTest | Level4)
{
    std::u16string ret = g_proxy.GetHandler()->GetSimTelephoneNumber(SLOTID_MINUS);
    ASSERT_STREQ(Str16ToStr8(ret).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetSimTelephoneNumber_0500
 * @tc.name     Test slotId exception input parameter 1 of GetSimTelephoneNumber and check the returned value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimTelephoneNumber_0500, Function | MediumTest | Level4)
{
    std::u16string ret = g_proxy.GetHandler()->GetSimTelephoneNumber(SLOT_ID_3);
    ASSERT_STREQ(Str16ToStr8(ret).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetSimTelephoneNumber_0600
 * @tc.name     Test slotId exception input parameter 2 of GetSimTelephoneNumber and check the returned value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimTelephoneNumber_0600, Function | MediumTest | Level4)
{
    std::u16string ret = g_proxy.GetHandler()->GetSimTelephoneNumber(SLOT_ID_2);
    ASSERT_STREQ(Str16ToStr8(ret).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailIdentifier_0200
 * @tc.name     Test GetVoiceMailIdentifier interface slotId exception input parameter -1 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailIdentifier_0200, Function | MediumTest | Level4)
{
    std::u16string ret = g_proxy.GetHandler()->GetVoiceMailIdentifier(SLOTID_MINUS);
    ASSERT_STREQ(Str16ToStr8(ret).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailIdentifier_0500
 * @tc.name     Test GetVoiceMailIdentifier slotId exception input parameter 1 and check the returned value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailIdentifier_0500, Function | MediumTest | Level4)
{
    std::u16string ret = g_proxy.GetHandler()->GetVoiceMailIdentifier(SLOT_ID_3);
    ASSERT_STREQ(Str16ToStr8(ret).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailIdentifier_0600
 * @tc.name     Test GetVoiceMailIdentifier slotId exception input parameter 2 and check the returned value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailIdentifier_0600, Function | MediumTest | Level4)
{
    std::u16string ret = g_proxy.GetHandler()->GetVoiceMailIdentifier(SLOT_ID_2);
    ASSERT_STREQ(Str16ToStr8(ret).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailNumber_0200
 * @tc.name     Test GetVoiceMailNumber slotId exception input parameter -1 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailNumber_0200, Function | MediumTest | Level1)
{
    std::u16string ret = g_proxy.GetHandler()->GetVoiceMailNumber(SLOTID_MINUS);
    ASSERT_STREQ(Str16ToStr8(ret).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailNumber_0500
 * @tc.name     Test GetVoiceMailNumber slotId exception input parameter 1 and check the returned value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailNumber_0500, Function | MediumTest | Level1)
{
    std::u16string ret = g_proxy.GetHandler()->GetVoiceMailNumber(SLOT_ID_3);
    ASSERT_STREQ(Str16ToStr8(ret).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailNumber_0600
 * @tc.name     Test GetVoiceMailNumber slotId exception input parameter 2 and check the returned value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailNumber_0600, Function | MediumTest | Level1)
{
    std::u16string ret = g_proxy.GetHandler()->GetVoiceMailNumber(SLOT_ID_2);
    ASSERT_STREQ(Str16ToStr8(ret).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetSimAccountInfo_0100
 * @tc.name     Get the return value by calling the GetSimAccountInfo interface SIM ID input parameter 0.
 * @tc.desc     Function test
 */
HWTEST_F(SimSetTest, Telephony_Sim_GetSimAccountInfo_0100, Function | MediumTest | Level2)
{
    OHOS::Telephony::IccAccountInfo simInfo;
    std::u16string cardName = Str8ToStr16("1234");
    std::u16string cardNumber = Str8ToStr16("1234");
    bool setNameResult = g_proxy.GetHandler()->SetShowName(SimTest::VAILD_SLOT_ID, cardName);
    ASSERT_TRUE(setNameResult);
    bool setNumResult = g_proxy.GetHandler()->SetShowNumber(SimTest::VAILD_SLOT_ID, cardNumber);
    ASSERT_TRUE(setNumResult);
    std::u16string retIccId = g_proxy.GetHandler()->GetSimIccId(SimTest::VAILD_SLOT_ID);

    bool result = g_proxy.GetHandler()->GetSimAccountInfo(SimTest::VAILD_SLOT_ID, simInfo);
    ASSERT_TRUE(result);
    EXPECT_EQ(simInfo.slotIndex, SimTest::VAILD_SLOT_ID);
    EXPECT_FALSE(simInfo.isEsim);
    EXPECT_TRUE(simInfo.isActive);
    EXPECT_STREQ(Str16ToStr8(simInfo.iccId).c_str(), Str16ToStr8(retIccId).c_str());
    EXPECT_STREQ(Str16ToStr8(simInfo.showName).c_str(), Str16ToStr8(cardName).c_str());
    EXPECT_STREQ(Str16ToStr8(simInfo.showNumber).c_str(), Str16ToStr8(cardNumber).c_str());
}

/**
 * @tc.number   Telephony_Sim_GetSimAccountInfo_0200
 * @tc.name     Get the return value by calling the GetSimAccountInfo interface SIM ID input parameter -1.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimAccountInfo_0200, Function | MediumTest | Level4)
{
    OHOS::Telephony::IccAccountInfo simInfo;
    bool result = g_proxy.GetHandler()->GetSimAccountInfo(SLOTID_MINUS, simInfo);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_GetSimAccountInfo_0500
 * @tc.name     Get the return value by calling the GetSimAccountInfo interface SIM ID input parameter 1.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimAccountInfo_0500, Function | MediumTest | Level4)
{
    OHOS::Telephony::IccAccountInfo simInfo;
    bool result = g_proxy.GetHandler()->GetSimAccountInfo(SLOT_ID_3, simInfo);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_GetSimAccountInfo_0600
 * @tc.name     Get the return value by calling the GetSimAccountInfo interface SIM ID input parameter 2.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimAccountInfo_0600, Function | MediumTest | Level4)
{
    OHOS::Telephony::IccAccountInfo simInfo;
    bool result = g_proxy.GetHandler()->GetSimAccountInfo(SLOT_ID_2, simInfo);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_SetVoiceMailInfo_0100
 * @tc.name     Test SetVoiceMailInfo interface, slotId normal input parameter, check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimSetVoiceMailTest, Telephony_Sim_SetVoiceMailInfo_0100, Function | MediumTest | Level1)
{
    std::u16string mailName = Str8ToStr16("123#@\%_ABCDE");
    std::u16string mailNumber = Str8ToStr16("01234567890123456789");
    bool ret = g_proxy.GetHandler()->SetVoiceMailInfo(SimTest::VAILD_SLOT_ID, mailName, mailNumber);
    if (ret) {
        std::u16string retMailNumber = g_proxy.GetHandler()->GetVoiceMailNumber(SimTest::VAILD_SLOT_ID);
        EXPECT_STREQ(Str16ToStr8(retMailNumber).c_str(), Str16ToStr8(mailNumber).c_str());
        std::u16string retMailName = g_proxy.GetHandler()->GetVoiceMailIdentifier(SimTest::VAILD_SLOT_ID);
        EXPECT_STREQ(Str16ToStr8(retMailName).c_str(), Str16ToStr8(mailName).c_str());
    } else {
        LOG("Set Voice Mail Info Fail.");
    }
}

/**
 * @tc.number   Telephony_Sim_SetVoiceMailInfo_0500
 * @tc.name     Test SetVoiceMailInfo interface, mailName more than 12 digits abnormal input parameter,
 *              check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimSetVoiceMailTest, Telephony_Sim_SetVoiceMailInfo_0500, Function | MediumTest | Level1)
{
    std::u16string mailNameOverlength = Str8ToStr16("123#@\%_ABCDEF");
    std::u16string mailName = Str8ToStr16("123#@\%_ABCDE");
    std::u16string mailNumber = Str8ToStr16("01234567890123456789");
    bool ret = g_proxy.GetHandler()->SetVoiceMailInfo(SimTest::VAILD_SLOT_ID, mailNameOverlength, mailNumber);
    if (ret) {
        std::u16string retMailNumber = g_proxy.GetHandler()->GetVoiceMailNumber(SimTest::VAILD_SLOT_ID);
        EXPECT_STREQ(Str16ToStr8(retMailNumber).c_str(), Str16ToStr8(mailNumber).c_str());
        std::u16string retMailName = g_proxy.GetHandler()->GetVoiceMailIdentifier(SimTest::VAILD_SLOT_ID);
        EXPECT_STREQ(Str16ToStr8(retMailName).c_str(), Str16ToStr8(mailName).c_str());
    } else {
        LOG("Set Voice Mail Info Fail.");
    }
}

/**
 * @tc.number   Telephony_Sim_SetVoiceMailInfo_0600
 * @tc.name     Test SetVoiceMailInfo interface. If the mailNumber exceeds 20 digits, check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimSetVoiceMailTest, Telephony_Sim_SetVoiceMailInfo_0600, Function | MediumTest | Level1)
{
    std::u16string mailName = Str8ToStr16("123#@\%_ABCDE");
    std::u16string mailNumberOverlength = Str8ToStr16("012345678901234567890");
    std::u16string mailNumber = Str8ToStr16("01234567890123456789");
    bool ret = g_proxy.GetHandler()->SetVoiceMailInfo(SimTest::VAILD_SLOT_ID, mailName, mailNumberOverlength);
    if (ret) {
        std::u16string retMailNumber = g_proxy.GetHandler()->GetVoiceMailNumber(SimTest::VAILD_SLOT_ID);
        EXPECT_STREQ(Str16ToStr8(retMailNumber).c_str(), Str16ToStr8(mailNumber).c_str());
        std::u16string retMailName = g_proxy.GetHandler()->GetVoiceMailIdentifier(SimTest::VAILD_SLOT_ID);
        EXPECT_STREQ(Str16ToStr8(retMailName).c_str(), Str16ToStr8(mailName).c_str());
    } else {
        LOG("Set Voice Mail Info Fail.");
    }
}

/**
 * @tc.number   Telephony_Sim_SetVoiceMailInfo_1200
 * @tc.name     Test SetVoiceMailInfo interface. The normal input parameter of mailName is 6 Chinese characters,
 *              Check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimSetVoiceMailTest, Telephony_Sim_SetVoiceMailInfo_1200, Function | MediumTest | Level1)
{
    std::u16string mailName = Str8ToStr16("测试1234");
    std::u16string mailNumber = Str8ToStr16("01234567890123456789");
    bool ret = g_proxy.GetHandler()->SetVoiceMailInfo(SimTest::VAILD_SLOT_ID, mailName, mailNumber);
    if (ret) {
        std::u16string retMailNumber = g_proxy.GetHandler()->GetVoiceMailNumber(SimTest::VAILD_SLOT_ID);
        EXPECT_STREQ(Str16ToStr8(retMailNumber).c_str(), Str16ToStr8(mailNumber).c_str());
        std::u16string retMailName = g_proxy.GetHandler()->GetVoiceMailIdentifier(SimTest::VAILD_SLOT_ID);
        EXPECT_STREQ(Str16ToStr8(retMailName).c_str(), Str16ToStr8(mailName).c_str());
    } else {
        LOG("Set Voice Mail Info Fail.");
    }
}

/**
 * @tc.number   Telephony_Sim_SetVoiceMailInfo_1300
 * @tc.name     Test SetVoiceMailInfo interface, mailName abnormal input parameter is more than 6 Chinese characters,
 *              check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimSetVoiceMailTest, Telephony_Sim_SetVoiceMailInfo_1300, Function | MediumTest | Level1)
{
    std::u16string mailNameOverlength = Str8ToStr16("测试12345");
    std::u16string mailName = Str8ToStr16("测试1234");
    std::u16string mailNumber = Str8ToStr16("01234567890123456789");
    bool ret = g_proxy.GetHandler()->SetVoiceMailInfo(SimTest::VAILD_SLOT_ID, mailNameOverlength, mailNumber);
    if (ret) {
        std::u16string retMailNumber = g_proxy.GetHandler()->GetVoiceMailNumber(SimTest::VAILD_SLOT_ID);
        EXPECT_STREQ(Str16ToStr8(retMailNumber).c_str(), Str16ToStr8(mailNumber).c_str());
        std::u16string retMailName = g_proxy.GetHandler()->GetVoiceMailIdentifier(SimTest::VAILD_SLOT_ID);
        EXPECT_STREQ(Str16ToStr8(retMailName).c_str(), Str16ToStr8(mailName).c_str());
    } else {
        LOG("Set Voice Mail Info Fail.");
    }
}

/**
 * @tc.number   Telephony_Sim_GetOperatorConfigs_0100
 * @tc.name     Test the GetOperatorConfigs interface entry parameter.
 *              Prerequisites: Mobile card.Manually push the XML configuration file corresponding to the
 *              mobile card to the 'data/OperatorConfig' path on the development board.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetOperatorConfigs_0100, Function | MediumTest | Level2)
{
    int32_t theTopFive = 5;
    std::string value = Str16ToStr8(g_proxy.GetHandler()->GetIMSI(VAILD_SLOT_ID));
    std::string fileName = "operator_config_" + value.substr(0, theTopFive) + ".xml";
    std::string filePath = "/system/etc/telephony/" + fileName;
    LOG("File Path is %s", filePath.c_str());
    std::fstream file;
    file.open(filePath);
    if (file) {
        OHOS::Telephony::OperatorConfig poc;
        bool ret = g_proxy.GetHandler()->GetOperatorConfigs(VAILD_SLOT_ID, poc);
        EXPECT_TRUE(ret);
        EXPECT_FALSE(poc.configValue.empty());
        file.close();
    } else {
        LOG("File Do Not Exist!");
    }
}

/**
 * @tc.number   Telephony_Sim_GetSimTelephoneNumber_0100
 * @tc.name     Test the GetSimTelephoneNumber interface input parameters.
 *              Prerequisite: The card number has been written into the SIM card.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimTelephoneNumber_0100, Function | MediumTest | Level3)
{
    std::u16string ret = g_proxy.GetHandler()->GetSimTelephoneNumber(VAILD_SLOT_ID);
    if (OHOS::Str16ToStr8(ret) != "") {
        // The length of a mobile phone number in mainland China is greater than or equal to 11 digits.
        EXPECT_GE(Str16ToStr8(ret).length(), PHONE_NUMBER_LENGTH);
    } else {
        LOG("Get Sim Telephone Number Is Null.");
    }
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailIdentifier_0100
 * @tc.name     Test the GetVoiceMailIdentifier interface input parameter.
 *              Prerequisite:Data is written into the SIM card before delivery.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailIdentifier_0100, Function | MediumTest | Level2)
{
    std::u16string ret = g_proxy.GetHandler()->GetVoiceMailIdentifier(VAILD_SLOT_ID);
    if (OHOS::Str16ToStr8(ret) != "") {
        SUCCEED();
    } else {
        LOG("Get Voice Mail Identifier Is Null.");
    }
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailNumber_0100
 * @tc.name     Test the GetVoiceMailNumber interface input parameter.
 *              Prerequisite:Data is written into the SIM card before delivery.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailNumber_0100, Function | MediumTest | Level2)
{
    std::u16string ret = g_proxy.GetHandler()->GetVoiceMailNumber(VAILD_SLOT_ID);
    if (OHOS::Str16ToStr8(ret) != "") {
        SUCCEED();
    } else {
        LOG("Get Voice Mail Number Is Null.");
    }
}