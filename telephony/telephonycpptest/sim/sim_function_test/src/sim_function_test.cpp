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
#include <map>
#include <set>
#include <fstream>
#include "sim_test.h"
#include "sim_state_type.h"

using namespace testing::ext;
using namespace OHOS;
const int32_t SimTest::SLOTID_4 = 4;
const int32_t SimTest::SLOTID_3 = 3;
const int32_t SimTest::SLOTID_2 = 2;
const int32_t SimTest::SLOTID_1 = 1;
const int32_t SimTest::SLOTID_0 = 0;
const int32_t SimTest::SLOTID_MINUS = -1;
const int32_t SimTest::CLOSE = 0;
const int32_t SimTest::OPEN = 1;
const int32_t SimTest::PARAMETERS_ERR = -1;
const int SimTest::TYPE_THREE = -1;
const int SimTest::TYPE_FDN = 2;
const int SimTest::TYPE_ADN = 1;
const int SimTest::TYPE_ZERO = 0;
const int SimTest::TYPE_MINUS = -1;
const std::string SimTest::CARD_NAME = "test";
const std::string SimTest::CARD_NUMBER = "12345678";
const std::string SimTest::NEW_CARD_NAME = "tset_Update";
const std::string SimTest::NEW_CARD_NUMBER = "12345678_Update";
const int SimTest::CONTACT_INDEX_1 = 1;
const int SimTest::CONTACT_INDEX_2 = 2;
const unsigned int SimTest::PHONE_NUMBER_LENGTH = 11;

/**
 * @tc.number   Telephony_Sim_IsSimActive_0100
 * @tc.name     Test that the IsSimActive interface is called when the SIM card is activated
 *              and the parameters are normal.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_IsSimActive_0100, Function | MediumTest | Level2)
{
    bool result = g_proxy.GetHandler()->IsSimActive(SLOTID_0);
    ASSERT_TRUE(result);
    int32_t state = g_proxy.GetHandler()->GetSimState(SLOTID_0);
    ASSERT_EQ(state, (int32_t)OHOS::Telephony::SimState::SIM_STATE_READY);
}

/**
 * @tc.number   Telephony_Sim_IsSimActive_0200
 * @tc.name     Test to call the IsSimActive interface and enter exception parameters when the SIM card is active.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_IsSimActive_0200, Function | MediumTest | Level4)
{
    bool result = g_proxy.GetHandler()->IsSimActive(SLOTID_4);
    ASSERT_FALSE(result);
    int32_t state = g_proxy.GetHandler()->GetSimState(SLOTID_0);
    ASSERT_EQ(state, (int32_t)OHOS::Telephony::SimState::SIM_STATE_READY);
}

/**
 * @tc.number   Telephony_Sim_IsSimActive_0300
 * @tc.name     Test that the IsSimActive interface is called when the SIM card is not activated
 *              and the parameters are normal.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_IsSimActive_0300, Function | MediumTest | Level3)
{
    bool ret = g_proxy.GetHandler()->SetSimActive(CLOSE, SLOTID_0);
    ASSERT_TRUE(ret);
    bool result = g_proxy.GetHandler()->IsSimActive(SLOTID_0);
    ASSERT_FALSE(result);
    // Delay one second to obtain the refreshed card status.
    sleep(1);
    int32_t state = g_proxy.GetHandler()->GetSimState(SLOTID_0);
    ASSERT_EQ(state, (int32_t)OHOS::Telephony::SimState::SIM_STATE_NOT_PRESENT);

    // Restore initial state.
    bool setResult = g_proxy.GetHandler()->SetSimActive(OPEN, SLOTID_0);
    ASSERT_TRUE(setResult);
}

/**
 * @tc.number   Telephony_Sim_IsSimActive_0600
 * @tc.name     Test the slotId exception during IsSimActive interface card activation.
 *              Enter parameter 1 and check the returned value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_IsSimActive_0600, Function | MediumTest | Level2)
{
    bool result = g_proxy.GetHandler()->IsSimActive(SLOTID_1);
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
    bool result = g_proxy.GetHandler()->IsSimActive(SLOTID_2);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_SetSimActive_0100
 * @tc.name     When the SIM card is activated, the test calls the SetSimActive interface and enters
 *              normal parameters.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetSimActive_0100, Function | MediumTest | Level2)
{
    bool ret = g_proxy.GetHandler()->SetSimActive(CLOSE, SLOTID_0);
    ASSERT_TRUE(ret);
    bool result = g_proxy.GetHandler()->IsSimActive(SLOTID_0);
    ASSERT_FALSE(result);
    ret = g_proxy.GetHandler()->SetSimActive(OPEN, SLOTID_0);
    ASSERT_TRUE(ret);
    result = g_proxy.GetHandler()->IsSimActive(SLOTID_0);
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_Sim_SetSimActive_0200
 * @tc.name     When the SIM card is activated, the test calls the SetSimActive interface
 *              and enters an abnormal slotId parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetSimActive_0200, Function | MediumTest | Level4)
{
    bool ret = g_proxy.GetHandler()->SetSimActive(CLOSE, SLOTID_MINUS);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetSimActive_0300
 * @tc.name     When the SIM card is activated, the test calls the SetSimActive interface
 *              and enters an normal slotId parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetSimActive_0300, Function | MediumTest | Level4)
{
    bool ret = g_proxy.GetHandler()->SetSimActive(OPEN, SLOTID_0);
    ASSERT_TRUE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetSimActive_0400
 * @tc.name     When the SIM card is activated, the test calls the SetSimActive interface
 *              and enters an abnormal enable parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetSimActive_0400, Function | MediumTest | Level4)
{
    bool ret = g_proxy.GetHandler()->SetSimActive(PARAMETERS_ERR, SLOTID_0);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetSimActive_0700
 * @tc.name     Test SetSimActive slotId exception input parameter 1 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetSimActive_0700, Function | MediumTest | Level4)
{
    bool ret = g_proxy.GetHandler()->SetSimActive(CLOSE, SLOTID_1);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetSimActive_0800
 * @tc.name     Test SetSimActive slotId exception input parameter 2 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetSimActive_0800, Function | MediumTest | Level4)
{
    bool ret = g_proxy.GetHandler()->SetSimActive(CLOSE, SLOTID_2);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_GetActiveSimAccountInfoList_0100
 * @tc.name     Test call GetActiveSimAccountInfoList interface when the card is activated.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetActiveSimAccountInfoList_0100, Function | MediumTest | Level2)
{
    std::u16string cardName = Str8ToStr16("1234");
    std::u16string cardNumber = Str8ToStr16("1234");
    bool ret = g_proxy.GetHandler()->SetSimActive(OPEN, SLOTID_0);
    ASSERT_TRUE(ret);
    ret = g_proxy.GetHandler()->SetShowName(SLOTID_0, cardName);
    ASSERT_TRUE(ret);
    ret = g_proxy.GetHandler()->SetShowNumber(SLOTID_0, cardNumber);
    ASSERT_TRUE(ret);

    std::vector<OHOS::Telephony::IccAccountInfo> vecAccountInfo;
    bool result = g_proxy.GetHandler()->GetActiveSimAccountInfoList(vecAccountInfo);
    ASSERT_TRUE(result);
    std::u16string retIccId = g_proxy.GetHandler()->GetSimIccId(SLOTID_0);

    bool findSlotIndex = false;
    for (std::vector<OHOS::Telephony::IccAccountInfo>::iterator iter = vecAccountInfo.begin();
         iter != vecAccountInfo.end(); iter++) {
        if ((*iter).slotIndex == SLOTID_0) {
            findSlotIndex = true;
            ASSERT_EQ((*iter).simId, SLOTID_0);
            ASSERT_FALSE((*iter).isEsim);
            ASSERT_TRUE((*iter).isActive);
            ASSERT_STREQ(Str16ToStr8((*iter).iccId).c_str(), Str16ToStr8(retIccId).c_str());
            ASSERT_STREQ(Str16ToStr8((*iter).showName).c_str(), Str16ToStr8(cardName).c_str());
            ASSERT_STREQ(Str16ToStr8((*iter).showNumber).c_str(), Str16ToStr8(cardNumber).c_str());
        }
    }
    if (findSlotIndex == false) {
        LOG("No corresponding data was found");
        FAIL();
    }

    // Restore initial state.
    std::u16string defaultCardName;
    std::u16string retName = g_proxy.GetHandler()->GetOperatorName(SLOTID_0);
    if (Str16ToStr8(retName) != "") {
        defaultCardName = retName;
    } else {
        defaultCardName = Str8ToStr16("Card0");
    }
    bool setResult = g_proxy.GetHandler()->SetShowName(SLOTID_0, defaultCardName);
    ASSERT_TRUE(setResult);
}

/**
 * @tc.number   Telephony_Sim_GetActiveSimAccountInfoList_0200
 * @tc.name     Test call GetActiveSimAccountInfoList interface when the card is not active.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetActiveSimAccountInfoList_0200, Function | MediumTest | Level3)
{
    std::u16string cardName = Str8ToStr16("1234");
    std::u16string cardNumber = Str8ToStr16("1234");
    bool ret = g_proxy.GetHandler()->SetShowName(SLOTID_0, cardName);
    ASSERT_TRUE(ret);
    ret = g_proxy.GetHandler()->SetShowNumber(SLOTID_0, cardNumber);
    ASSERT_TRUE(ret);
    ret = g_proxy.GetHandler()->SetSimActive(CLOSE, SLOTID_0);
    ASSERT_TRUE(ret);

    std::vector<OHOS::Telephony::IccAccountInfo> vecAccountInfo;
    bool result = g_proxy.GetHandler()->GetActiveSimAccountInfoList(vecAccountInfo);
    ASSERT_TRUE(result);
    bool isEmpty = vecAccountInfo.empty();
    ASSERT_TRUE(isEmpty);

    // Restore initial state.
    bool setResult = g_proxy.GetHandler()->SetSimActive(OPEN, SLOTID_0);
    ASSERT_TRUE(setResult);
    std::u16string defaultCardName;
    std::u16string retName = g_proxy.GetHandler()->GetOperatorName(SLOTID_0);
    if (Str16ToStr8(retName) != "") {
        defaultCardName = retName;
    } else {
        defaultCardName = Str8ToStr16("Card0");
    }
    setResult = g_proxy.GetHandler()->SetShowName(SLOTID_0, defaultCardName);
    ASSERT_TRUE(setResult);
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
    bool ret = g_proxy.GetHandler()->SetShowName(SLOTID_0, cardName);
    ASSERT_FALSE(ret);
    std::u16string result = g_proxy.GetHandler()->GetShowName(SLOTID_0);
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
    bool ret = g_proxy.GetHandler()->SetShowName(SLOTID_0, cardName);
    ASSERT_FALSE(ret);
    std::u16string result = g_proxy.GetHandler()->GetShowName(SLOTID_0);
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
    bool ret = g_proxy.GetHandler()->SetShowName(SLOTID_1, cardName);
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
    bool ret = g_proxy.GetHandler()->SetShowName(SLOTID_2, cardName);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_SetShowName_0800
 * @tc.name     Test SetShowName Interface name enter mixed valid values, check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowName_0800, Function | MediumTest | Level2)
{
    std::u16string cardName = Str8ToStr16("01234567890123456789_测@#$\%ABCDE");
    bool ret = g_proxy.GetHandler()->SetShowName(SLOTID_0, cardName);
    ASSERT_TRUE(ret);
    std::u16string result = g_proxy.GetHandler()->GetShowName(SLOTID_0);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), Str16ToStr8(cardName).c_str());
}

/**
 * @tc.number   Telephony_Sim_GetShowName_0100
 * @tc.name     Test the GetShowName interface input parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowName_0100, Function | MediumTest | Level2)
{
    std::u16string cardName = Str8ToStr16("1234");
    bool ret = g_proxy.GetHandler()->SetShowName(SLOTID_0, cardName);
    ASSERT_TRUE(ret);
    std::u16string result = g_proxy.GetHandler()->GetShowName(SLOTID_0);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), Str16ToStr8(cardName).c_str());

    // Restore initial state.
    std::u16string defaultCardName;
    std::u16string retName = g_proxy.GetHandler()->GetOperatorName(SLOTID_0);
    if (Str16ToStr8(retName) != "") {
        defaultCardName = retName;
    } else {
        defaultCardName = Str8ToStr16("Card0");
    }
    bool setResult = g_proxy.GetHandler()->SetShowName(SLOTID_0, defaultCardName);
    ASSERT_TRUE(setResult);
}

/**
 * @tc.number   Telephony_Sim_GetShowName_0200
 * @tc.name     Tests that the GetShowName interface gets the default value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowName_0200, Function | MediumTest | Level3)
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
    std::u16string result = g_proxy.GetHandler()->GetShowName(SLOTID_MINUS);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetShowName_0700
 * @tc.name     Test the slotId exception input parameter 2 of GetShowName and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowName_0700, Function | MediumTest | Level3)
{
    std::u16string result = g_proxy.GetHandler()->GetShowName(SLOTID_MINUS);
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
    bool ret = g_proxy.GetHandler()->SetShowNumber(SLOTID_0, cardNumber);
    ASSERT_FALSE(ret);
    std::u16string result = g_proxy.GetHandler()->GetShowNumber(SLOTID_0);
    ASSERT_STRNE(Str16ToStr8(result).c_str(), Str16ToStr8(cardNumber).c_str());
}

/**
 * @tc.number   Telephony_Sim_SetShowNumber_0300
 * @tc.name     Test SetShowNumber Interface parameter number Specifies an empty value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowNumber_0300, Function | MediumTest | Level4)
{
    std::u16string cardNumber = Str8ToStr16("");
    bool ret = g_proxy.GetHandler()->SetShowNumber(SLOTID_0, cardNumber);
    ASSERT_FALSE(ret);
    std::u16string result = g_proxy.GetHandler()->GetShowNumber(SLOTID_0);
    ASSERT_STRNE(Str16ToStr8(result).c_str(), Str16ToStr8(cardNumber).c_str());
}

/**
 * @tc.number   Telephony_Sim_SetShowNumber_0600
 * @tc.name     Test SetShowNumber slotId exception input parameter 1 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowNumber_0600, Function | MediumTest | Level4)
{
    std::u16string cardNumber = Str8ToStr16("1234");
    bool ret = g_proxy.GetHandler()->SetShowNumber(SLOTID_1, cardNumber);
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
    bool ret = g_proxy.GetHandler()->SetShowNumber(SLOTID_2, cardNumber);
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
    bool ret = g_proxy.GetHandler()->SetShowNumber(SLOTID_0, cardNumber);
    ASSERT_TRUE(ret);
    std::u16string result = g_proxy.GetHandler()->GetShowNumber(SLOTID_0);
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
    bool ret = g_proxy.GetHandler()->SetShowNumber(SLOTID_0, cardNumber);
    ASSERT_TRUE(ret);
    std::u16string result = g_proxy.GetHandler()->GetShowNumber(SLOTID_0);
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
    std::u16string result = g_proxy.GetHandler()->GetShowNumber(SLOTID_1);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetShowNumber_0600
 * @tc.name     Test the slotId exception input parameter 2 of GetShowNumber and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowNumber_0600, Function | MediumTest | Level4)
{
    std::u16string result = g_proxy.GetHandler()->GetShowNumber(SLOTID_2);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), "");
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
    OHOS::Telephony::OperatorConfig poc;
    bool ret = g_proxy.GetHandler()->GetOperatorConfigs(SLOTID_0, poc);
    ASSERT_TRUE(ret);
    ASSERT_FALSE(poc.configValue.empty());
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
 * @tc.name     Test GetOperatorConfigs slotId exception input parameter 3 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetOperatorConfigs_0600, Function | MediumTest | Level4)
{
    OHOS::Telephony::OperatorConfig poc;
    bool ret = g_proxy.GetHandler()->GetOperatorConfigs(SLOTID_3, poc);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_QueryIccDiallingNumbers_0100
 * @tc.name     Test the QueryIccDiallingNumbers interface and the slotId parameter is valid.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_QueryIccDiallingNumbers_0100, Function | MediumTest | Level2)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_TRUE(ret);
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    bool notEmpty = !vecDialNumInfo.empty();
    bool findRecordNum = false;
    if (notEmpty) {
        for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
             iter != vecDialNumInfo.end(); iter++) {
            if ((*iter)->recordNumber_ == CONTACT_INDEX_1) {
                findRecordNum = true;
                ASSERT_EQ((*iter)->recordNumber_, CONTACT_INDEX_1);
                ASSERT_STREQ(Str16ToStr8((*iter)->alphaTag_).c_str(), CARD_NAME.c_str());
                ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), CARD_NUMBER.c_str());
                break;
            }
        }
    } else {
        LOG("Vector is empty...");
        FAIL();
    }
    if (findRecordNum == false) {
        LOG("No corresponding data was found");
        FAIL();
    }

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
}

/**
 * @tc.number   Telephony_Sim_QueryIccDiallingNumbers_0200
 * @tc.name     Test the slotId exception input parameter -1 of QueryIccDiallingNumbers and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_QueryIccDiallingNumbers_0200, Function | MediumTest | Level4)
{
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_MINUS, TYPE_ADN);
    bool result = vecDialNumInfo.empty();
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_Sim_QueryIccDiallingNumbers_0300
 * @tc.name     Test the QueryIccDiallingNumbers interface to query "Type" for fixed-dial contacts.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_QueryIccDiallingNumbers_0300, Function | MediumTest | Level3)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_FDN, info);
    ASSERT_TRUE(ret);
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_FDN);
    bool notEmpty = !vecDialNumInfo.empty();
    bool findRecordNum = false;
    if (notEmpty) {
        for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
             iter != vecDialNumInfo.end(); iter++) {
            if ((*iter)->recordNumber_ == CONTACT_INDEX_1) {
                findRecordNum = true;
                ASSERT_EQ((*iter)->recordNumber_, CONTACT_INDEX_1);
                ASSERT_STREQ(Str16ToStr8((*iter)->alphaTag_).c_str(), CARD_NAME.c_str());
                ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), CARD_NUMBER.c_str());
                break;
            }
        }
    } else {
        LOG("Vector is empty...");
        FAIL();
    }
    if (findRecordNum == false) {
        LOG("No corresponding data was found");
        FAIL();
    }

    // Delete the added contact and restore the default status.
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
}

/**
 * @tc.number   Telephony_Sim_QueryIccDiallingNumbers_0400
 * @tc.name     Test the QueryIccDiallingNumbers interface with the "type" parameter as an exception.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_QueryIccDiallingNumbers_0400, Function | MediumTest | Level4)
{
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_MINUS);
    bool result = vecDialNumInfo.empty();
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_Sim_QueryIccDiallingNumbers_0700
 * @tc.name     Test QueryIccDiallingNumbers slotId exception input parameter 1 to check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_QueryIccDiallingNumbers_0700, Function | MediumTest | Level4)
{
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_1, TYPE_ADN);
    bool result = vecDialNumInfo.empty();
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_Sim_QueryIccDiallingNumbers_0800
 * @tc.name     Test QueryIccDiallingNumbers slotId exception input parameter 2 to check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_QueryIccDiallingNumbers_0800, Function | MediumTest | Level4)
{
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_2, TYPE_ADN);
    bool result = vecDialNumInfo.empty();
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_Sim_QueryIccDiallingNumbers_0900
 * @tc.name     Test the QueryIccDiallingNumbers interface type parameter exception input parameter 0,
 *              check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_QueryIccDiallingNumbers_0900, Function | MediumTest | Level4)
{
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ZERO);
    bool result = vecDialNumInfo.empty();
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_Sim_QueryIccDiallingNumbers_1000
 * @tc.name     Test the QueryIccDiallingNumbers interface type parameter exception input parameter 3,
 *              check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_QueryIccDiallingNumbers_1000, Function | MediumTest | Level4)
{
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_THREE);
    bool result = vecDialNumInfo.empty();
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_0100
 * @tc.name     Test the AddIccDiallingNumbers interface, slotId parameter is normal.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_0100, Function | MediumTest | Level2)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_TRUE(ret);
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    bool notEmpty = !vecDialNumInfo.empty();
    bool findRecordNum = false;
    if (notEmpty) {
        for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
             iter != vecDialNumInfo.end(); iter++) {
            if ((*iter)->recordNumber_ == CONTACT_INDEX_1) {
                findRecordNum = true;
                ASSERT_EQ((*iter)->recordNumber_, CONTACT_INDEX_1);
                ASSERT_STREQ(Str16ToStr8((*iter)->alphaTag_).c_str(), CARD_NAME.c_str());
                ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), CARD_NUMBER.c_str());
                break;
            }
        }
    } else {
        LOG("Vector is empty...");
        FAIL();
    }
    if (findRecordNum == false) {
        LOG("No corresponding data was found");
        FAIL();
    }

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_0200
 * @tc.name     Test the AddIccDiallingNumbers interface, slotId exception parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_0200, Function | MediumTest | Level4)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_4, TYPE_ADN, info);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_0300
 * @tc.name     Tests the AddIccDiallingNumbers interface with the "type" parameter as a fixed-dial contact.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_0300, Function | MediumTest | Level3)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_FDN, info);
    ASSERT_TRUE(ret);
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_FDN);
    bool notEmpty = !vecDialNumInfo.empty();
    bool findRecordNum = false;
    if (notEmpty) {
        for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
             iter != vecDialNumInfo.end(); iter++) {
            if ((*iter)->recordNumber_ == CONTACT_INDEX_1) {
                findRecordNum = true;
                ASSERT_EQ((*iter)->recordNumber_, CONTACT_INDEX_1);
                ASSERT_STREQ(Str16ToStr8((*iter)->alphaTag_).c_str(), CARD_NAME.c_str());
                ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), CARD_NUMBER.c_str());
                break;
            }
        }
    } else {
        LOG("Vector is empty...");
        FAIL();
    }
    if (findRecordNum == false) {
        LOG("No corresponding data was found");
        FAIL();
    }

    // Delete the added contact and restore the default status.
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_0400
 * @tc.name     Testing the AddIccDiallingNumbers interface, the "type" parameter is an exception parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_0400, Function | MediumTest | Level4)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_MINUS, info);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_0500
 * @tc.name     Tests whether the AddIccDiallingNumbers interface can insert "recordNumber"
 *              when it already exists and is an empty string
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_0500, Function | MediumTest | Level3)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16("");
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_TRUE(result);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_FALSE(ret);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_0600
 * @tc.name     Tests whether the AddIccDiallingNumbers interface can be inserted again
 *              when the "recordNumber" already exists and is normal.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_0600, Function | MediumTest | Level3)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_TRUE(result);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_FALSE(ret);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_0700
 * @tc.name     Test the AddIccDiallingNumbers interface, slotId parameter is normal.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_0700, Function | MediumTest | Level3)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16("");
    info->number_ = Str8ToStr16("");
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_1000
 * @tc.name     Test the slotId exception input parameter 1 of the AddIccDiallingNumbers interface
 *              and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_1000, Function | MediumTest | Level4)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_1, TYPE_ADN, info);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_1100
 * @tc.name     Test the slotId exception input parameter 2 of the AddIccDiallingNumbers interface
 *              and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_1100, Function | MediumTest | Level4)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_2, TYPE_ADN, info);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_1200
 * @tc.name     Test the AddIccDiallingNumbers interface type parameter exception parameter 0
 *              and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_1200, Function | MediumTest | Level4)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ZERO, info);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_1300
 * @tc.name     Test the AddIccDiallingNumbers interface type parameter exception parameter 3
 *              and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_1300, Function | MediumTest | Level4)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_THREE, info);
    ASSERT_FALSE(result);
}


/**
 * @tc.number   Telephony_Sim_DelIccDiallingNumbers_0100
 * @tc.name     Test DelIccDiallingNumbers interface, slotId normal entry.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_DelIccDiallingNumbers_0100, Function | MediumTest | Level2)
{
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    bool notEmpty = !vecDialNumInfo.empty();
    std::set<int32_t> saveRecordNum;
    int32_t initIndex = 1;
    int32_t freeIndex = 0;
    if (notEmpty) {
        for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
             iter != vecDialNumInfo.end(); iter++) {
            saveRecordNum.insert((*iter)->recordNumber_);
        }
        for (std::set<int32_t>::iterator setIter = saveRecordNum.begin(); setIter != saveRecordNum.end(); setIter++) {
            if (*setIter != initIndex) {
                freeIndex = initIndex;
                break;
            }
            initIndex++;
            freeIndex = initIndex;
        }
    } else {
        freeIndex = initIndex;
    }

    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = freeIndex;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_TRUE(result);
    bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_ADN, freeIndex);
    ASSERT_TRUE(ret);

    // After the deletion is successful, check whether it still exists.
    g_proxy.QueryDeletionResult(SLOTID_0, TYPE_ADN, freeIndex);
}

/**
 * @tc.number   Telephony_Sim_DelIccDiallingNumbers_0200
 * @tc.name     Test the DelIccDiallingNumbers interface slotId exception input parameter -1 to check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_DelIccDiallingNumbers_0200, Function | MediumTest | Level4)
{
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    bool notEmpty = !vecDialNumInfo.empty();
    std::set<int32_t> saveRecordNum;
    int32_t initIndex = 1;
    int32_t freeIndex = 0;
    if (notEmpty) {
        for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
             iter != vecDialNumInfo.end(); iter++) {
            saveRecordNum.insert((*iter)->recordNumber_);
        }
        for (std::set<int32_t>::iterator setIter = saveRecordNum.begin(); setIter != saveRecordNum.end(); setIter++) {
            if (*setIter != initIndex) {
                freeIndex = initIndex;
                break;
            }
            initIndex++;
            freeIndex = initIndex;
        }
    } else {
        freeIndex = initIndex;
    }

    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = freeIndex;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_TRUE(result);
    bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_MINUS, TYPE_ADN, freeIndex);
    ASSERT_FALSE(ret);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, freeIndex);
}

/**
 * @tc.number   Telephony_Sim_DelIccDiallingNumbers_0300
 * @tc.name     Tests the DelIccDiallingNumbers interface with the index parameter entering a non-existent value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_DelIccDiallingNumbers_0300, Function | MediumTest | Level3)
{
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    bool notEmpty = !vecDialNumInfo.empty();
    std::set<int32_t> saveRecordNum;
    int32_t initIndex = 1;
    int32_t freeIndex = 0;
    if (notEmpty) {
        for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
             iter != vecDialNumInfo.end(); iter++) {
            saveRecordNum.insert((*iter)->recordNumber_);
        }
        for (std::set<int32_t>::iterator setIter = saveRecordNum.begin(); setIter != saveRecordNum.end(); setIter++) {
            if (*setIter != initIndex) {
                freeIndex = initIndex;
                break;
            }
            initIndex++;
            freeIndex = initIndex;
        }
    } else {
        freeIndex = initIndex;
    }
    bool result = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_ADN, freeIndex);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_DelIccDiallingNumbers_0400
 * @tc.name     Tests the DelIccDiallingNumbers interface with the "type" parameter as a fixed-dial contact.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_DelIccDiallingNumbers_0400, Function | MediumTest | Level3)
{
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_FDN);
    bool notEmpty = !vecDialNumInfo.empty();
    std::set<int32_t> saveRecordNum;
    int32_t initIndex = 1;
    int32_t freeIndex = 0;
    if (notEmpty) {
        for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
             iter != vecDialNumInfo.end(); iter++) {
            saveRecordNum.insert((*iter)->recordNumber_);
        }
        for (std::set<int32_t>::iterator setIter = saveRecordNum.begin(); setIter != saveRecordNum.end(); setIter++) {
            if (*setIter != initIndex) {
                freeIndex = initIndex;
                break;
            }
            initIndex++;
            freeIndex = initIndex;
        }
    } else {
        freeIndex = initIndex;
    }

    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = freeIndex;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_FDN, info);
    ASSERT_TRUE(result);
    bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_FDN, freeIndex);
    ASSERT_TRUE(ret);

    // After the deletion is successful, check whether it still exists.
    g_proxy.QueryDeletionResult(SLOTID_0, TYPE_FDN, freeIndex);
}

/**
 * @tc.number   Telephony_Sim_DelIccDiallingNumbers_0500
 * @tc.name     Test the DelIccDiallingNumbers interface, the 'type' parameter is an exception parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_DelIccDiallingNumbers_0500, Function | MediumTest | Level4)
{
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_FDN);
    bool notEmpty = !vecDialNumInfo.empty();
    std::set<int32_t> saveRecordNum;
    int32_t initIndex = 1;
    int32_t freeIndex = 0;
    if (notEmpty) {
        for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
             iter != vecDialNumInfo.end(); iter++) {
            saveRecordNum.insert((*iter)->recordNumber_);
        }
        for (std::set<int32_t>::iterator setIter = saveRecordNum.begin(); setIter != saveRecordNum.end(); setIter++) {
            if (*setIter != initIndex) {
                freeIndex = initIndex;
                break;
            }
            initIndex++;
            freeIndex = initIndex;
        }
    } else {
        freeIndex = initIndex;
    }
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = freeIndex;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_FDN, info);
    ASSERT_TRUE(result);
    bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_MINUS, freeIndex);
    ASSERT_FALSE(ret);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteFDNContact(SLOTID_0, freeIndex);
}

/**
 * @tc.number   Telephony_Sim_DelIccDiallingNumbers_0800
 * @tc.name     Test the DelIccDiallingNumbers interface slotId exception entry 1 to check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_DelIccDiallingNumbers_0800, Function | MediumTest | Level4)
{
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    bool notEmpty = !vecDialNumInfo.empty();
    std::set<int32_t> saveRecordNum;
    int32_t initIndex = 1;
    int32_t freeIndex = 0;
    if (notEmpty) {
        for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
             iter != vecDialNumInfo.end(); iter++) {
            saveRecordNum.insert((*iter)->recordNumber_);
        }
        for (std::set<int32_t>::iterator setIter = saveRecordNum.begin(); setIter != saveRecordNum.end(); setIter++) {
            if (*setIter != initIndex) {
                freeIndex = initIndex;
                break;
            }
            initIndex++;
            freeIndex = initIndex;
        }
    } else {
        freeIndex = initIndex;
    }
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = freeIndex;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_TRUE(result);
    bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_1, TYPE_ADN, freeIndex);
    ASSERT_FALSE(ret);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, freeIndex);
}

/**
 * @tc.number   Telephony_Sim_DelIccDiallingNumbers_0900
 * @tc.name     Test the DelIccDiallingNumbers interface slotId exception input 2 to check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_DelIccDiallingNumbers_0900, Function | MediumTest | Level4)
{
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    bool notEmpty = !vecDialNumInfo.empty();
    std::set<int32_t> saveRecordNum;
    int32_t initIndex = 1;
    int32_t freeIndex = 0;
    if (notEmpty) {
        for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
             iter != vecDialNumInfo.end(); iter++) {
            saveRecordNum.insert((*iter)->recordNumber_);
        }
        for (std::set<int32_t>::iterator setIter = saveRecordNum.begin(); setIter != saveRecordNum.end(); setIter++) {
            if (*setIter != initIndex) {
                freeIndex = initIndex;
                break;
            }
            initIndex++;
            freeIndex = initIndex;
        }
    } else {
        freeIndex = initIndex;
    }
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = freeIndex;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_TRUE(result);
    bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_2, TYPE_ADN, freeIndex);
    ASSERT_FALSE(ret);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, freeIndex);
}

/**
 * @tc.number   Telephony_Sim_DelIccDiallingNumbers_1000
 * @tc.name     Tests the DelIccDiallingNumbers interface type parameter exception parameter 0
 *              and checks the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_DelIccDiallingNumbers_1000, Function | MediumTest | Level4)
{
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_FDN);
    bool notEmpty = !vecDialNumInfo.empty();
    std::set<int32_t> saveRecordNum;
    int32_t initIndex = 1;
    int32_t freeIndex = 0;
    if (notEmpty) {
        for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
             iter != vecDialNumInfo.end(); iter++) {
            saveRecordNum.insert((*iter)->recordNumber_);
        }
        for (std::set<int32_t>::iterator setIter = saveRecordNum.begin(); setIter != saveRecordNum.end(); setIter++) {
            if (*setIter != initIndex) {
                freeIndex = initIndex;
                break;
            }
            initIndex++;
            freeIndex = initIndex;
        }
    } else {
        freeIndex = initIndex;
    }
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = freeIndex;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_FDN, info);
    ASSERT_TRUE(result);
    bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_ZERO, freeIndex);
    ASSERT_FALSE(ret);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteFDNContact(SLOTID_0, freeIndex);
}

/**
 * @tc.number   Telephony_Sim_DelIccDiallingNumbers_1100
 * @tc.name     Test the DelIccDiallingNumbers interface type parameter exception parameter 3
 *              and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_DelIccDiallingNumbers_1100, Function | MediumTest | Level4)
{
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_FDN);
    bool notEmpty = !vecDialNumInfo.empty();
    std::set<int32_t> saveRecordNum;
    int32_t initIndex = 1;
    int32_t freeIndex = 0;
    if (notEmpty) {
        for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
             iter != vecDialNumInfo.end(); iter++) {
            saveRecordNum.insert((*iter)->recordNumber_);
        }
        for (std::set<int32_t>::iterator setIter = saveRecordNum.begin(); setIter != saveRecordNum.end(); setIter++) {
            if (*setIter != initIndex) {
                freeIndex = initIndex;
                break;
            }
            initIndex++;
            freeIndex = initIndex;
        }
    } else {
        freeIndex = initIndex;
    }
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = freeIndex;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_FDN, info);
    ASSERT_TRUE(result);
    bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_THREE, freeIndex);
    ASSERT_FALSE(ret);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteFDNContact(SLOTID_0, freeIndex);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_0100
 * @tc.name     Test the UpdateIccDiallingNumbers interface and enter the normal slotId parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_0100, Function | MediumTest | Level2)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_TRUE(ret);

    info->alphaTag_ = Str8ToStr16(NEW_CARD_NAME);
    info->number_ = Str8ToStr16(NEW_CARD_NUMBER);
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ADN, info, CONTACT_INDEX_1);
    ASSERT_TRUE(retUpdate);

    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    bool notEmpty = !vecDialNumInfo.empty();
    bool findRecordNum = false;
    if (notEmpty) {
        for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
             iter != vecDialNumInfo.end(); iter++) {
            if ((*iter)->recordNumber_ == CONTACT_INDEX_1) {
                findRecordNum = true;
                ASSERT_EQ((*iter)->recordNumber_, CONTACT_INDEX_1);
                ASSERT_STREQ(Str16ToStr8((*iter)->alphaTag_).c_str(), NEW_CARD_NAME.c_str());
                ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), NEW_CARD_NUMBER.c_str());
                break;
            }
        }
    } else {
        LOG("Vector is empty...");
        FAIL();
    }
    if (findRecordNum == false) {
        LOG("No corresponding data was found");
        FAIL();
    }

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_0200
 * @tc.name     Test the slotId exception input parameter -1 of UpdateIccDiallingNumbers and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_0200, Function | MediumTest | Level4)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_TRUE(ret);

    info->alphaTag_ = Str8ToStr16(NEW_CARD_NAME);
    info->number_ = Str8ToStr16(NEW_CARD_NUMBER);
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_MINUS, TYPE_ADN, info, CONTACT_INDEX_1);
    ASSERT_FALSE(retUpdate);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_0300
 * @tc.name     Test the UpdateIccDiallingNumbers interface and enter a non-existent value for the index parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_0300, Function | MediumTest | Level3)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(NEW_CARD_NAME);
    info->number_ = Str8ToStr16(NEW_CARD_NUMBER);
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_4, TYPE_ADN, info, CONTACT_INDEX_1);
    ASSERT_FALSE(retUpdate);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_0400
 * @tc.name     Test the UpdateIccDiallingNumbers interface. The "type" parameter is a fixed-dial contact.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_0400, Function | MediumTest | Level3)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_FDN, info);
    ASSERT_TRUE(ret);

    info->alphaTag_ = Str8ToStr16(NEW_CARD_NAME);
    info->number_ = Str8ToStr16(NEW_CARD_NUMBER);
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_FDN, info, CONTACT_INDEX_1);
    ASSERT_TRUE(retUpdate);

    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_FDN);
    bool notEmpty = !vecDialNumInfo.empty();
    bool findRecordNum = false;
    if (notEmpty) {
        for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
             iter != vecDialNumInfo.end(); iter++) {
            if ((*iter)->recordNumber_ == CONTACT_INDEX_1) {
                findRecordNum = true;
                ASSERT_EQ((*iter)->recordNumber_, CONTACT_INDEX_1);
                ASSERT_STREQ(Str16ToStr8((*iter)->alphaTag_).c_str(), NEW_CARD_NAME.c_str());
                ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), NEW_CARD_NUMBER.c_str());
                break;
            }
        }
    } else {
        LOG("Vector is empty...");
        FAIL();
    }
    if (findRecordNum == false) {
        LOG("No corresponding data was found");
        FAIL();
    }

    // Delete the added contact and restore the default status.
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_0500
 * @tc.name     Test the UpdateIccDiallingNumbers interface type exception parameter -1 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_0500, Function | MediumTest | Level4)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_TRUE(ret);

    info->alphaTag_ = Str8ToStr16(NEW_CARD_NAME);
    info->number_ = Str8ToStr16(NEW_CARD_NUMBER);
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_MINUS, info, CONTACT_INDEX_1);
    ASSERT_FALSE(retUpdate);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_0600
 * @tc.name     Test the UpdateIccDiallingNumbers interface where "number_" is an empty string.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_0600, Function | MediumTest | Level3)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_TRUE(ret);

    info->alphaTag_ = Str8ToStr16(NEW_CARD_NAME);
    info->number_ = Str8ToStr16("");
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ADN, info, CONTACT_INDEX_1);
    ASSERT_TRUE(retUpdate);

    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    bool notEmpty = !vecDialNumInfo.empty();
    bool findRecordNum = false;
    if (notEmpty) {
        for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
             iter != vecDialNumInfo.end(); iter++) {
            if ((*iter)->recordNumber_ == CONTACT_INDEX_1) {
                findRecordNum = true;
                ASSERT_EQ((*iter)->recordNumber_, CONTACT_INDEX_1);
                ASSERT_STREQ(Str16ToStr8((*iter)->alphaTag_).c_str(), NEW_CARD_NAME.c_str());
                ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), "");
                break;
            }
        }
    } else {
        LOG("Vector is empty...");
        FAIL();
    }
    if (findRecordNum == false) {
        LOG("No corresponding data was found");
        FAIL();
    }

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_0700
 * @tc.name     Test the UpdateIccDiallingNumbers interface where "alphaTag_" is an empty string.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_0700, Function | MediumTest | Level3)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_TRUE(ret);

    info->alphaTag_ = Str8ToStr16("");
    info->number_ = Str8ToStr16(NEW_CARD_NUMBER);
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ADN, info, CONTACT_INDEX_1);
    ASSERT_TRUE(retUpdate);

    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    bool notEmpty = !vecDialNumInfo.empty();
    bool findRecordNum = false;
    if (notEmpty) {
        for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
             iter != vecDialNumInfo.end(); iter++) {
            if ((*iter)->recordNumber_ == CONTACT_INDEX_1) {
                findRecordNum = true;
                ASSERT_EQ((*iter)->recordNumber_, CONTACT_INDEX_1);
                ASSERT_STREQ(Str16ToStr8((*iter)->alphaTag_).c_str(), "");
                ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), NEW_CARD_NUMBER.c_str());
                break;
            }
        }
    } else {
        LOG("Vector is empty...");
        FAIL();
    }
    if (findRecordNum == false) {
        LOG("No corresponding data was found");
        FAIL();
    }

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_0800
 * @tc.name     Test UpdateIccDiallingNumbers where "recordNumber" does not exist.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_0800, Function | MediumTest | Level3)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(NEW_CARD_NAME);
    info->number_ = Str8ToStr16(NEW_CARD_NUMBER);
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ADN, info, CONTACT_INDEX_1);
    ASSERT_FALSE(retUpdate);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_0900
 * @tc.name     Test the UpdateIccDiallingNumbers interface, where "recordNumber" does not exist
 *              and "alphaTag" and "number_" are empty strings.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_0900, Function | MediumTest | Level3)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16("");
    info->number_ = Str8ToStr16("");
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ADN, info, CONTACT_INDEX_1);
    ASSERT_FALSE(retUpdate);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_1200
 * @tc.name     Test the slotId exception input parameter 1 of UpdateIccDiallingNumbers and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_1200, Function | MediumTest | Level4)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_TRUE(ret);

    info->alphaTag_ = Str8ToStr16(NEW_CARD_NAME);
    info->number_ = Str8ToStr16(NEW_CARD_NUMBER);
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_1, TYPE_ADN, info, CONTACT_INDEX_1);
    ASSERT_FALSE(retUpdate);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_1300
 * @tc.name     Test the slotId exception input parameter 2 of UpdateIccDiallingNumbers and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_1300, Function | MediumTest | Level4)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_TRUE(ret);

    info->alphaTag_ = Str8ToStr16(NEW_CARD_NAME);
    info->number_ = Str8ToStr16(NEW_CARD_NUMBER);
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_2, TYPE_ADN, info, CONTACT_INDEX_1);
    ASSERT_FALSE(retUpdate);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_1400
 * @tc.name     Test the UpdateIccDiallingNumbers interface type parameter 0 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_1400, Function | MediumTest | Level4)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_TRUE(ret);

    info->alphaTag_ = Str8ToStr16(NEW_CARD_NAME);
    info->number_ = Str8ToStr16(NEW_CARD_NUMBER);
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ZERO, info, CONTACT_INDEX_1);
    ASSERT_FALSE(retUpdate);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_1500
 * @tc.name     Test the UpdateIccDiallingNumbers interface type exception parameter 3 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_1500, Function | MediumTest | Level4)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_TRUE(ret);

    info->alphaTag_ = Str8ToStr16(NEW_CARD_NAME);
    info->number_ = Str8ToStr16(NEW_CARD_NUMBER);
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_THREE, info, CONTACT_INDEX_1);
    ASSERT_FALSE(retUpdate);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_1600
 * @tc.name     Test the slotId exception input parameter 1 of UpdateIccDiallingNumbers and check the return value.
 * @tc.desc     Function test
 */
/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_1700
 * @tc.name     Test for inconsistency between the UpdateIccDiallingNumbers interface index input parameter
 *              and the DiallingNumbersInfo structure field recordNumber.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_1700, Function | MediumTest | Level2)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_TRUE(ret);

    info->recordNumber_ = CONTACT_INDEX_2;
    info->alphaTag_ = Str8ToStr16(NEW_CARD_NAME);
    info->number_ = Str8ToStr16(NEW_CARD_NUMBER);
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ADN, info, CONTACT_INDEX_1);
    ASSERT_TRUE(retUpdate);

    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    bool notEmpty = !vecDialNumInfo.empty();
    bool findRecordNum = false;
    if (notEmpty) {
        for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
             iter != vecDialNumInfo.end(); iter++) {
            if ((*iter)->recordNumber_ == CONTACT_INDEX_1) {
                findRecordNum = true;
                ASSERT_EQ((*iter)->recordNumber_, CONTACT_INDEX_1);
                ASSERT_STREQ(Str16ToStr8((*iter)->alphaTag_).c_str(), NEW_CARD_NAME.c_str());
                ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), NEW_CARD_NUMBER.c_str());
                break;
            }
        }
    } else {
        LOG("Vector is empty...");
        FAIL();
    }
    if (findRecordNum == false) {
        LOG("No corresponding data was found");
        FAIL();
    }

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
}

/**
 * @tc.number   Telephony_Sim_GetSimTelephoneNumber_0100
 * @tc.name     Test the GetSimTelephoneNumber interface input parameters.
 *              Prerequisite: The card number has been written into the SIM card.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimTelephoneNumber_0100, Function | MediumTest | Level3)
{
    std::u16string ret = g_proxy.GetHandler()->GetSimTelephoneNumber(SLOTID_0);
    ASSERT_STRNE(Str16ToStr8(ret).c_str(), "");
    // The length of a mobile phone number in mainland China is greater than or equal to 11 digits.
    if (Str16ToStr8(ret).length() >= PHONE_NUMBER_LENGTH) {
        SUCCEED();
    } else {
        FAIL();
        LOG("The length of the mobile phone number is different...");
    }
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
    std::u16string ret = g_proxy.GetHandler()->GetSimTelephoneNumber(SLOTID_1);
    ASSERT_STREQ(Str16ToStr8(ret).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetSimTelephoneNumber_0600
 * @tc.name     Test slotId exception input parameter 2 of GetSimTelephoneNumber and check the returned value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimTelephoneNumber_0600, Function | MediumTest | Level4)
{
    std::u16string ret = g_proxy.GetHandler()->GetSimTelephoneNumber(SLOTID_2);
    ASSERT_STREQ(Str16ToStr8(ret).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailIdentifier_0100
 * @tc.name     Test the GetVoiceMailIdentifier interface input parameter.
 *              Prerequisite:Data is written into the SIM card before delivery.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailIdentifier_0100, Function | MediumTest | Level2)
{
    std::u16string ret = g_proxy.GetHandler()->GetVoiceMailIdentifier(SLOTID_0);
    ASSERT_STRNE(Str16ToStr8(ret).c_str(), "");
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
    std::u16string ret = g_proxy.GetHandler()->GetVoiceMailIdentifier(SLOTID_1);
    ASSERT_STREQ(Str16ToStr8(ret).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailIdentifier_0600
 * @tc.name     Test GetVoiceMailIdentifier slotId exception input parameter 2 and check the returned value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailIdentifier_0600, Function | MediumTest | Level4)
{
    std::u16string ret = g_proxy.GetHandler()->GetVoiceMailIdentifier(SLOTID_2);
    ASSERT_STREQ(Str16ToStr8(ret).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailNumber_0100
 * @tc.name     Test the GetVoiceMailNumber interface input parameter.
 *              Prerequisite:Data is written into the SIM card before delivery.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailNumber_0100, Function | MediumTest | Level2)
{
    std::u16string ret = g_proxy.GetHandler()->GetVoiceMailNumber(SLOTID_0);
    ASSERT_STRNE(Str16ToStr8(ret).c_str(), "");
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
    std::u16string ret = g_proxy.GetHandler()->GetVoiceMailNumber(SLOTID_1);
    ASSERT_STREQ(Str16ToStr8(ret).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailNumber_0600
 * @tc.name     Test GetVoiceMailNumber slotId exception input parameter 2 and check the returned value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailNumber_0600, Function | MediumTest | Level1)
{
    std::u16string ret = g_proxy.GetHandler()->GetVoiceMailNumber(SLOTID_2);
    ASSERT_STREQ(Str16ToStr8(ret).c_str(), "");
}