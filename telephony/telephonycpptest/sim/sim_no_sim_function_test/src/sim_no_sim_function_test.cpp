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

#include <vector>
#include "sim_test.h"

using namespace testing::ext;
using namespace OHOS;
const int32_t SimTest::SLOTID_0 = 0;
const int32_t SimTest::CLOSE = 0;
const int SimTest::TYPE_ADN = 1;
const std::string SimTest::CONTACT_NAME = "test";
const std::string SimTest::CONTACT_NUMBER = "12345678";
const int SimTest::CONTACT_INDEX_1 = 1;
const std::string SimTest::NEW_CONTACT_NAME = "tset_Update";
const std::string SimTest::NEW_CONTACT_NUMBER = "87654321";
const int32_t SimTest::OTHER_ABNORMAL = -2;
const std::string SimTest::ERROR_FDN_PIN2 = "123@#ABCD";

/**************************************************Phase four*****************************************************/
/**
 * @tc.number   Telephony_Sim_IsSimActive_0800
 * @tc.name     Test the IsSimActive interface when there is no card and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_IsSimActive_0800, Function | MediumTest | Level2)
{
    bool result = g_proxy.GetHandler()->IsSimActive(SLOTID_0);
    ASSERT_FALSE(result);
    int32_t state = g_proxy.GetHandler()->GetSimState(SLOTID_0);
    ASSERT_EQ(state, (int32_t)OHOS::Telephony::SimState::SIM_STATE_NOT_PRESENT);
}

/**
 * @tc.number   Telephony_Sim_SetActiveSim_0900
 * @tc.name     When there is no card, test the SetActiveSim interface and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetActiveSim_0900, Function | MediumTest | Level4)
{
    bool ret = g_proxy.GetHandler()->SetActiveSim(CLOSE, SLOTID_0);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_GetShowName_0800
 * @tc.name     When there is no card, test the GetShowName interface and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowName_0800, Function | MediumTest | Level2)
{
    std::u16string cardName = Str8ToStr16("1");
    bool ret = g_proxy.GetHandler()->SetShowName(SLOTID_0, cardName);
    ASSERT_FALSE(ret);
    std::u16string result = g_proxy.GetHandler()->GetShowName(SLOTID_0);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetShowNumber_0700
 * @tc.name     When there is no card, test the GetShowNumber interface and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowNumber_0700, Function | MediumTest | Level2)
{
    std::u16string cardNumber = Str8ToStr16("1");
    bool ret = g_proxy.GetHandler()->SetShowNumber(SLOTID_0, cardNumber);
    ASSERT_FALSE(ret);
    std::u16string result = g_proxy.GetHandler()->GetShowNumber(SLOTID_0);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetOperatorConfigs_0500
 * @tc.name     Test the GetOperatorConfigs interface entry parameter.
 *              Prerequisites: Manually push the 'carrier_config_20404.xml' configuration file to
 *              the 'data/OperatorConfig' path on the development board.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetOperatorConfigs_0500, Function | MediumTest | Level2)
{
    OHOS::Telephony::OperatorConfig poc;
    bool ret = g_proxy.GetHandler()->GetOperatorConfigs(SLOTID_0, poc);
    ASSERT_TRUE(ret);
    ASSERT_FALSE(poc.configValue.empty());
}

/**
 * @tc.number   Telephony_Sim_GetSimTelephoneNumber_0700
 * @tc.name     f there is no card, test the GetSimTelephoneNumber interface and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimTelephoneNumber_0700, Function | MediumTest | Level4)
{
    std::u16string ret = g_proxy.GetHandler()->GetSimTelephoneNumber(SLOTID_0);
    ASSERT_STREQ(Str16ToStr8(ret).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailIdentifier_0700
 * @tc.name     When there is no card, test the GetVoiceMailIdentifier interface and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailIdentifier_0700, Function | MediumTest | Level4)
{
    std::u16string ret = g_proxy.GetHandler()->GetVoiceMailIdentifier(SLOTID_0);
    ASSERT_STREQ(Str16ToStr8(ret).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailNumber_0600
 * @tc.name     When there is no card, test the GetVoiceMailNumber interface and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailNumber_0600, Function | MediumTest | Level1)
{
    std::u16string ret = g_proxy.GetHandler()->GetVoiceMailNumber(SLOTID_0);
    ASSERT_STREQ(Str16ToStr8(ret).c_str(), "");
}

/**
 * @tc.number   Telephony_Sim_QueryIccDiallingNumbers_1100
 * @tc.name     When there is no card, test the QueryIccDiallingNumbers interface and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_QueryIccDiallingNumbers_1100, Function | MediumTest | Level4)
{
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    bool result = vecDialNumInfo.empty();
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_1200
 * @tc.name     When there is no card, test the AddIccDiallingNumbers interface and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_1200, Function | MediumTest | Level4)
{
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = CONTACT_INDEX_1;
    delDiallingInfo->alphaTag_ = Str8ToStr16(CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(ERROR_FDN_PIN2);

    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    ASSERT_FALSE(result);

    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    bool ret = vecDialNumInfo.empty();
    ASSERT_TRUE(ret);
}

/**
 * @tc.number   Telephony_Sim_DelIccDiallingNumbers_1200
 * @tc.name     When there is no card, test the DelIccDiallingNumbers interface and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_DelIccDiallingNumbers_1200, Function | MediumTest | Level4)
{
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = CONTACT_INDEX_1;
    delDiallingInfo->alphaTag_ = Str8ToStr16(CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(ERROR_FDN_PIN2);
    bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    ASSERT_FALSE(ret);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_1500
 * @tc.name     When there is no card, test the UpdateIccDiallingNumbers interface and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_1500, Function | MediumTest | Level4)
{
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = CONTACT_INDEX_1;
    delDiallingInfo->alphaTag_ = Str8ToStr16(NEW_CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(NEW_CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(ERROR_FDN_PIN2);
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    ASSERT_FALSE(retUpdate);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin2_1100
 * @tc.name     When there is no card, test the UnlockPin2 interface and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin2_1100, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("1234");

    bool retValue = g_proxy.GetHandler()->UnlockPin2(pin2, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk2_1300
 * @tc.name     When there is no card, test the UnlockPuk2 interface and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk2_1300, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("1234");
    std::u16string puk2 = Str8ToStr16("12345678");

    bool retValue = g_proxy.GetHandler()->UnlockPuk2(pin2, puk2, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_AlterPin2_1200
 * @tc.name     When there is no card, test the AlterPin2 interface and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin2_1200, Function | MediumTest | Level4)
{
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin2 = Str8ToStr16("1234");
    std::u16string newPin2 = Str8ToStr16("1234");

    bool retValue = g_proxy.GetHandler()->AlterPin2(newPin2, oldPin2, response, SLOTID_0);
    ASSERT_TRUE(retValue);
    ASSERT_EQ(response.result, OTHER_ABNORMAL);
}

/**
 * @tc.number   Telephony_Sim_GetActiveSimAccountInfoList_0500
 * @tc.name     Test when no card, call GetActiveSimAccountInfoList interface to get the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetActiveSimAccountInfoList_0500, Function | MediumTest | Level3)
{
    std::vector<OHOS::Telephony::IccAccountInfo> vecAccountInfo;
    bool result = g_proxy.GetHandler()->GetActiveSimAccountInfoList(vecAccountInfo);
    ASSERT_TRUE(result);
    ASSERT_TRUE(vecAccountInfo.empty());
}

/**************************************************Phase five*****************************************************/
/**
 * @tc.number   Telephony_Sim_SetVoiceMailInfo_0700
 * @tc.name     If there is no card, test the SetVoiceMailInfo interface and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetVoiceMailInfo_0700, Function | MediumTest | Level1)
{
    std::u16string mailName = Str8ToStr16("123#@\%_ABCDE");
    std::u16string mailNumber = Str8ToStr16("01234567890123456789");
    bool ret = g_proxy.GetHandler()->SetVoiceMailInfo(mailName, mailNumber, SLOTID_0);
    ASSERT_FALSE(ret);
}
