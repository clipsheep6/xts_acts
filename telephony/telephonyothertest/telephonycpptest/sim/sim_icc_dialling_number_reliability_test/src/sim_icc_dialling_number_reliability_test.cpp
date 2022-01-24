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
#include "sim_contact_test.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;

const int32_t SimTest::VAILD_SLOT_ID = EFFECTIVE_SLOT_ID;
const int32_t SimTest::LOOP_NUMBER = 100;
const int SimTest::TYPE_ADN = 1;
const std::string SimTest::CONTACT_NAME = "test";
const std::string SimTest::CONTACT_NUMBER = "12345678";
const std::string SimTest::NEW_CONTACT_NAME = "tset_Update";
const std::string SimTest::NEW_CONTACT_NUMBER = "87654321";
const int SimTest::CONTACT_INDEX_1 = 1;
const std::string SimTest::ERROR_FDN_PIN2 = "123@#ABCD";

/**
 * @tc.number   Telephony_Sim_QueryIccDiallingNumbers_0600
 * @tc.name     The test executed the QueryIccDiallingNumbers interface query function 10 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimADNContactTest, Telephony_Sim_QueryIccDiallingNumbers_0600, Reliability | MediumTest | Level3)
{
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> contactInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    contactInfo->index_ = SimTest::CONTACT_INDEX_1;
    contactInfo->name_ = Str8ToStr16(SimTest::CONTACT_NAME);
    contactInfo->number_ = Str8ToStr16(SimTest::CONTACT_NUMBER);
    contactInfo->pin2_ = Str8ToStr16(SimTest::ERROR_FDN_PIN2);
    g_simContact->DeleteADNContact(SimTest::VAILD_SLOT_ID, contactInfo);

    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SimTest::VAILD_SLOT_ID, SimTest::TYPE_ADN, contactInfo);
    ASSERT_TRUE(ret);
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> diallingNumbersList;
    bool findRecordNum = false;
    for (int32_t loopNumber = 0; loopNumber < SimTest::LOOP_NUMBER; loopNumber++) {
        diallingNumbersList = g_proxy.GetHandler()->QueryIccDiallingNumbers(SimTest::VAILD_SLOT_ID, SimTest::TYPE_ADN);
        for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter =
                 diallingNumbersList.begin();
             iter != diallingNumbersList.end(); iter++) {
            if ((*iter)->index_ == SimTest::CONTACT_INDEX_1) {
                findRecordNum = true;
                ASSERT_EQ((*iter)->index_, SimTest::CONTACT_INDEX_1);
                ASSERT_STREQ(Str16ToStr8((*iter)->name_).c_str(), SimTest::CONTACT_NAME.c_str());
                ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), SimTest::CONTACT_NUMBER.c_str());
                ASSERT_STREQ(Str16ToStr8((*iter)->pin2_).c_str(), "");
                break;
            }
        }
        ASSERT_TRUE(findRecordNum);
        findRecordNum = false;
    }
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_0700
 * @tc.name     The test executed the QueryIccDiallingNumbers interface query function 10 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimADNContactTest, Telephony_Sim_AddIccDiallingNumbers_0900, Function | MediumTest | Level1)
{
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> contactInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    contactInfo->index_ = SimTest::CONTACT_INDEX_1;
    contactInfo->name_ = Str8ToStr16(SimTest::CONTACT_NAME);
    contactInfo->number_ = Str8ToStr16(SimTest::CONTACT_NUMBER);

    for (int32_t loopNumber = 0; loopNumber < SimTest::LOOP_NUMBER; loopNumber++) {
        contactInfo->pin2_ = Str8ToStr16(SimTest::ERROR_FDN_PIN2);
        g_simContact->DeleteADNContact(SimTest::VAILD_SLOT_ID, contactInfo);

        bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SimTest::VAILD_SLOT_ID, SimTest::TYPE_ADN, contactInfo);
        ASSERT_TRUE(ret);

        std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> diallingNumbersList =
            g_proxy.GetHandler()->QueryIccDiallingNumbers(SimTest::VAILD_SLOT_ID, SimTest::TYPE_ADN);
        bool findRecordNum = false;
        for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter =
                 diallingNumbersList.begin();
             iter != diallingNumbersList.end(); iter++) {
            if ((*iter)->index_ == SimTest::CONTACT_INDEX_1) {
                findRecordNum = true;
                ASSERT_EQ((*iter)->index_, SimTest::CONTACT_INDEX_1);
                ASSERT_STREQ(Str16ToStr8((*iter)->name_).c_str(), SimTest::CONTACT_NAME.c_str());
                ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), SimTest::CONTACT_NUMBER.c_str());
                ASSERT_STREQ(Str16ToStr8((*iter)->pin2_).c_str(), "");
                break;
            }
        }
        ASSERT_TRUE(findRecordNum);
    }
}

/**
 * @tc.number   Telephony_Sim_DelIccDiallingNumbers_0700
 * @tc.name     The test executed the DelIccDiallingNumbers interface query function 10 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimADNContactTest, Telephony_Sim_DelIccDiallingNumbers_0700, Function | MediumTest | Level1)
{
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> diallingNumbersList =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SimTest::VAILD_SLOT_ID, SimTest::TYPE_ADN);
    int32_t freeIndex = g_simContact->QueryContactListFreeIndex(diallingNumbersList);

    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> contactInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    contactInfo->index_ = freeIndex;
    contactInfo->name_ = Str8ToStr16(SimTest::NEW_CONTACT_NAME);
    contactInfo->number_ = Str8ToStr16(SimTest::NEW_CONTACT_NUMBER);
    contactInfo->pin2_ = Str8ToStr16(SimTest::ERROR_FDN_PIN2);

    for (int32_t loopNumber = 0; loopNumber < SimTest::LOOP_NUMBER; loopNumber++) {
        bool result =
            g_proxy.GetHandler()->AddIccDiallingNumbers(SimTest::VAILD_SLOT_ID, SimTest::TYPE_ADN, contactInfo);
        ASSERT_TRUE(result);
        bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(SimTest::VAILD_SLOT_ID, SimTest::TYPE_ADN, contactInfo);
        ASSERT_TRUE(ret);
        std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> diallingNumbersList =
            g_proxy.GetHandler()->QueryIccDiallingNumbers(SimTest::VAILD_SLOT_ID, SimTest::TYPE_ADN);
        // After the deletion is successful, check whether it still exists.
        g_simContact->QueryDeletionResult(SimTest::VAILD_SLOT_ID, SimTest::TYPE_ADN, freeIndex);
    }
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_1100
 * @tc.name     The test executed the UpdateIccDiallingNumbers interface query function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimADNContactTest, Telephony_Sim_UpdateIccDiallingNumbers_1100, Reliability | MediumTest | Level3)
{
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> contactInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    contactInfo->index_ = SimTest::CONTACT_INDEX_1;
    contactInfo->name_ = Str8ToStr16(SimTest::CONTACT_NAME);
    contactInfo->number_ = Str8ToStr16(SimTest::CONTACT_NUMBER);
    contactInfo->pin2_ = Str8ToStr16(SimTest::ERROR_FDN_PIN2);
    g_simContact->DeleteADNContact(SimTest::VAILD_SLOT_ID, contactInfo);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SimTest::VAILD_SLOT_ID, SimTest::TYPE_ADN, contactInfo);
    ASSERT_TRUE(ret);

    contactInfo->name_ = Str8ToStr16(SimTest::NEW_CONTACT_NAME);
    contactInfo->number_ = Str8ToStr16(SimTest::NEW_CONTACT_NUMBER);
    for (int32_t loopNumber = 0; loopNumber < SimTest::LOOP_NUMBER; loopNumber++) {
        bool retUpdate =
            g_proxy.GetHandler()->UpdateIccDiallingNumbers(SimTest::VAILD_SLOT_ID, SimTest::TYPE_ADN, contactInfo);
        ASSERT_TRUE(retUpdate);
    }

    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> diallingNumbersList =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SimTest::VAILD_SLOT_ID, SimTest::TYPE_ADN);
    bool findRecordNum = false;
    for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter =
             diallingNumbersList.begin();
         iter != diallingNumbersList.end(); iter++) {
        if ((*iter)->index_ == SimTest::CONTACT_INDEX_1) {
            findRecordNum = true;
            ASSERT_EQ((*iter)->index_, SimTest::CONTACT_INDEX_1);
            ASSERT_STREQ(Str16ToStr8((*iter)->name_).c_str(), SimTest::NEW_CONTACT_NAME.c_str());
            ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), SimTest::NEW_CONTACT_NUMBER.c_str());
            ASSERT_STREQ(Str16ToStr8((*iter)->pin2_).c_str(), "");
            break;
        }
    }
    ASSERT_TRUE(findRecordNum);
}
