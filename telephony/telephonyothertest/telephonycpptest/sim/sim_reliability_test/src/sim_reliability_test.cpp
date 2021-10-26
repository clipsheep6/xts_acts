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
#include "sim_state_type.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;

const int32_t SimTest::LOOP_NUMBER = 1000;
const int32_t SimTest::LOOP_TEN_TIMES = 10;
const int32_t SimTest::SLOTID_0 = 0;
const int32_t SimTest::SLOTID_1 = 1;
const int32_t SimTest::SLOTID_MINUS = -1;
const int32_t SimTest::OTHER_ABNORMAL = -2;
const int32_t SimTest::OPEN = 1;
const int32_t SimTest::CLOSE = 0;
const int SimTest::TYPE_FDN = 2;
const int SimTest::TYPE_ADN = 1;
const std::string SimTest::CARD_NAME = "test";
const std::string SimTest::CARD_NUMBER = "12345678";
const std::string SimTest::NEW_CARD_NAME = "tset_Update";
const std::string SimTest::NEW_CARD_NUMBER = "12345678_Update";
const int SimTest::CONTACT_INDEX_1 = 1;
const unsigned int SimTest::PHONE_NUMBER_LENGTH = 11;

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
HWTEST_F(SimTest, Telephony_Sim_GetActiveSimAccountInfoList_0400, Reliability | MediumTest | Level3)
{
    std::u16string cardName = Str8ToStr16("1234");
    std::u16string cardNumber = Str8ToStr16("1234");
    bool ret = g_proxy.GetHandler()->SetShowName(SLOTID_0, cardName);
    ASSERT_TRUE(ret);
    ret = g_proxy.GetHandler()->SetShowNumber(SLOTID_0, cardNumber);
    ASSERT_TRUE(ret);

    std::vector<OHOS::Telephony::IccAccountInfo> vecAccountInfo;
    bool findSlotIndex = false;
    std::u16string retIccId = g_proxy.GetHandler()->GetSimIccId(SLOTID_0);
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool result = g_proxy.GetHandler()->GetActiveSimAccountInfoList(vecAccountInfo);
        ASSERT_TRUE(result);
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
        findSlotIndex = false;
        usleep(100000);
    }

    // Restore initial state.
    std::u16string defaultCardName;
    std::u16string retName = g_proxy.GetHandler()->GetOperatorName(SLOTID_0);
    if (Str16ToStr8(retName) != "") {
        defaultCardName = retName;
    } else {
        defaultCardName= Str8ToStr16("Card0");
    }
    bool setResult = g_proxy.GetHandler()->SetShowName(SLOTID_0, defaultCardName);
    ASSERT_TRUE(setResult);
}

/**
 * @tc.number   Telephony_Sim_SetShowName_0500
 * @tc.name     The test executed the SetShowName interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowName_0500, Reliability | MediumTest | Level3)
{
    std::u16string cardName = Str8ToStr16("1234");
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        bool ret = g_proxy.GetHandler()->SetShowName(SLOTID_0, cardName);
        ASSERT_TRUE(ret);
    }
    std::u16string result = g_proxy.GetHandler()->GetShowName(SLOTID_0);
    ASSERT_STREQ(Str16ToStr8(result).c_str(), Str16ToStr8(cardName).c_str());

    // Restore initial state.
    std::u16string defaultCardName;
    std::u16string retName = g_proxy.GetHandler()->GetOperatorName(SLOTID_0);
    if (Str16ToStr8(retName) != "") {
        defaultCardName = retName;
    } else {
        defaultCardName= Str8ToStr16("Card0");
    }
    bool setResult = g_proxy.GetHandler()->SetShowName(SLOTID_0, defaultCardName);
    ASSERT_TRUE(setResult);
}

/**
 * @tc.number   Telephony_Sim_GetShowName_0500
 * @tc.name     The test executed the GetShowName interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowName_0500, Reliability | MediumTest | Level3)
{
    std::u16string cardName = Str8ToStr16("1234");
    bool ret = g_proxy.GetHandler()->SetShowName(SLOTID_0, cardName);
    ASSERT_TRUE(ret);
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER; loopNumber++) {
        std::u16string result = g_proxy.GetHandler()->GetShowName(SLOTID_0);
        ASSERT_STREQ(Str16ToStr8(result).c_str(), Str16ToStr8(cardName).c_str());
    }

    // Restore initial state.
    std::u16string defaultCardName;
    std::u16string retName = g_proxy.GetHandler()->GetOperatorName(SLOTID_0);
    if (Str16ToStr8(retName) != "") {
        defaultCardName = retName;
    } else {
        defaultCardName= Str8ToStr16("Card0");
    }
    bool setResult = g_proxy.GetHandler()->SetShowName(SLOTID_0, defaultCardName);
    ASSERT_TRUE(setResult);
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
        if (Str16ToStr8(ret).length() >= PHONE_NUMBER_LENGTH) {
            SUCCEED();
        } else {
            FAIL();
            LOG("The length of the mobile phone number is different...");
        }
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
 * @tc.number   Telephony_Sim_QueryIccDiallingNumbers_0600
 * @tc.name     The test executed the QueryIccDiallingNumbers interface query function 10 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_QueryIccDiallingNumbers_0600, Reliability | MediumTest | Level3)
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
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo;
    bool findRecordNum = false;
    for (int32_t loopNumber = 0; loopNumber < LOOP_TEN_TIMES; loopNumber++) {
        vecDialNumInfo = g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
        bool notEmpty = !vecDialNumInfo.empty();
        if (notEmpty) {
            for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter =
            vecDialNumInfo.begin(); iter != vecDialNumInfo.end(); iter++) {
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
        findRecordNum = false;
    }
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_0900
 * @tc.name     The test executed the QueryIccDiallingNumbers interface query function 10 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_0900, Function | MediumTest | Level1)
{
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    for (int32_t loopNumber = 0; loopNumber < LOOP_TEN_TIMES; loopNumber++) {
        g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_ADN, CONTACT_INDEX_1);
        g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_FDN, CONTACT_INDEX_1);
        bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
        ASSERT_TRUE(ret);
        std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
            g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
        bool notEmpty = !vecDialNumInfo.empty();
        bool findRecordNum = false;
        if (notEmpty) {
            for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter =
            vecDialNumInfo.begin(); iter != vecDialNumInfo.end(); iter++) {
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
    }
}

/**
 * @tc.number   Telephony_Sim_DelIccDiallingNumbers_0700
 * @tc.name     The test executed the DelIccDiallingNumbers interface query function 10 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_DelIccDiallingNumbers_0700, Function | MediumTest | Level1)
{
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
    g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    bool notEmpty = !vecDialNumInfo.empty();
    std::set<int32_t> saveRecordNum;
    int32_t initIndex = 1;
    int32_t freeIndex = 0;
    if (notEmpty) {
        for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter =
        vecDialNumInfo.begin(); iter != vecDialNumInfo.end(); iter++) {
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
    info->alphaTag_ = Str8ToStr16(NEW_CARD_NAME);
    info->number_ = Str8ToStr16(NEW_CARD_NUMBER);
    for (int32_t loopNumber = 0; loopNumber < LOOP_TEN_TIMES; loopNumber++) {
        bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
        ASSERT_TRUE(result);
        bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_ADN, freeIndex);
        ASSERT_TRUE(ret);
        std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
            g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
        bool empty = vecDialNumInfo.empty();
        if (empty) {
            LOG("Vector is empty,successfully delete...");
            SUCCEED();
        } else {
            for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter =
            vecDialNumInfo.begin(); iter != vecDialNumInfo.end(); iter++) {
                if ((*iter)->recordNumber_ == freeIndex) {
                    LOG("Fail to delete...");
                    FAIL();
                }
            }
        }
    }
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_1100
 * @tc.name     The test executed the UpdateIccDiallingNumbers interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_1100, Reliability | MediumTest | Level3)
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
    for (int32_t loopNumber = 0; loopNumber < LOOP_TEN_TIMES; loopNumber++) {
        bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ADN, info, CONTACT_INDEX_1);
        ASSERT_TRUE(retUpdate);
    }

    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    bool notEmpty = !vecDialNumInfo.empty();
    bool findRecordNum = false;
    if (notEmpty) {
        for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter =
        vecDialNumInfo.begin(); iter != vecDialNumInfo.end(); iter++) {
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
        bool retValue = g_proxy.GetHandler()->UnlockPin2(Str8ToStr16(pin2), response, SLOTID_0);
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
        bool retValue = g_proxy.GetHandler()->UnlockPuk2(pin2, puk2, response, SLOTID_0);
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
        bool retValue = g_proxy.GetHandler()->AlterPin2(newPin2, oldPin2, response, SLOTID_MINUS);
        ASSERT_FALSE(retValue);
    }
}

/**
 * @tc.number   Telephony_Sim_SetSimActive_0600
 * @tc.name     The test executed the IsSimActive interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_SetSimActive_0600, Reliability | MediumTest | Level3)
{
    for (int32_t loopNumber = 0; loopNumber < LOOP_NUMBER / 2; loopNumber++) {
        bool ret = g_proxy.GetHandler()->SetSimActive(CLOSE, SLOTID_0);
        ASSERT_TRUE(ret);
        ret = g_proxy.GetHandler()->SetSimActive(OPEN, SLOTID_0);
        ASSERT_TRUE(ret);
    }
}