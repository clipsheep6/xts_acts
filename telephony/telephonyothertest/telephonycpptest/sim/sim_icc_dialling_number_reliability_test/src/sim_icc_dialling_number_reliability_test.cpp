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

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;

const int32_t SimTest::LOOP_TEN_TIMES = 10;
const int32_t SimTest::SLOTID_0 = 0;
const int SimTest::TYPE_ADN = 1;
const std::string SimTest::CONTACT_NAME = "test";
const std::string SimTest::CONTACT_NUMBER = "12345678";
const std::string SimTest::NEW_CONTACT_NAME = "tset_Update";
const std::string SimTest::NEW_CONTACT_NUMBER = "87654321";
const int SimTest::CONTACT_INDEX_1 = 1;
const std::string SimTest::ERROR_FDN_PIN2 = "123@#ABCD";

/**************************************************Phase four*****************************************************/
/**
 * @tc.number   Telephony_Sim_QueryIccDiallingNumbers_0600
 * @tc.name     The test executed the QueryIccDiallingNumbers interface query function 10 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_QueryIccDiallingNumbers_0600, Reliability | MediumTest | Level3)
{
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = CONTACT_INDEX_1;
    delDiallingInfo->alphaTag_ = Str8ToStr16(CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(CORRECT_PIN2);
    g_proxy.DeleteFDNContact(SLOTID_0, delDiallingInfo);
    delDiallingInfo->pin2_ = Str8ToStr16(ERROR_FDN_PIN2);
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);

    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    ASSERT_TRUE(ret);
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo;
    bool findRecordNum = false;
    for (int32_t loopNumber = 0; loopNumber < LOOP_TEN_TIMES; loopNumber++) {
        vecDialNumInfo = g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
        for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
             iter != vecDialNumInfo.end(); iter++) {
            if ((*iter)->recordNumber_ == CONTACT_INDEX_1) {
                findRecordNum = true;
                ASSERT_EQ((*iter)->recordNumber_, CONTACT_INDEX_1);
                ASSERT_STREQ(Str16ToStr8((*iter)->alphaTag_).c_str(), CONTACT_NAME.c_str());
                ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), CONTACT_NUMBER.c_str());
                ASSERT_STREQ(Str16ToStr8((*iter)->pin2_).c_str(), "");
                break;
            }
        }
        ASSERT_TRUE(findRecordNum);
        findRecordNum = false;
    }

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_0700
 * @tc.name     The test executed the QueryIccDiallingNumbers interface query function 10 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Reliability test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_0900, Function | MediumTest | Level1)
{
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = CONTACT_INDEX_1;
    delDiallingInfo->alphaTag_ = Str8ToStr16(CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(CONTACT_NUMBER);

    for (int32_t loopNumber = 0; loopNumber < LOOP_TEN_TIMES; loopNumber++) {
        delDiallingInfo->pin2_ = Str8ToStr16(CORRECT_PIN2);
        g_proxy.DeleteFDNContact(SLOTID_0, delDiallingInfo);
        delDiallingInfo->pin2_ = Str8ToStr16(ERROR_FDN_PIN2);
        g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);

        bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
        ASSERT_TRUE(ret);

        std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
            g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
        bool findRecordNum = false;
        for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
             iter != vecDialNumInfo.end(); iter++) {
            if ((*iter)->recordNumber_ == CONTACT_INDEX_1) {
                findRecordNum = true;
                ASSERT_EQ((*iter)->recordNumber_, CONTACT_INDEX_1);
                ASSERT_STREQ(Str16ToStr8((*iter)->alphaTag_).c_str(), CONTACT_NAME.c_str());
                ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), CONTACT_NUMBER.c_str());
                ASSERT_STREQ(Str16ToStr8((*iter)->pin2_).c_str(), "");
                break;
            }
        }
        ASSERT_TRUE(findRecordNum);
    }

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
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
    int32_t freeIndex = QueryContactListFreeIndex(vecDialNumInfo);

    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = freeIndex;
    delDiallingInfo->alphaTag_ = Str8ToStr16(NEW_CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(NEW_CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(ERROR_FDN_PIN2);

    for (int32_t loopNumber = 0; loopNumber < LOOP_TEN_TIMES; loopNumber++) {
        bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
        ASSERT_TRUE(result);
        bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
        ASSERT_TRUE(ret);
        std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
            g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
        // After the deletion is successful, check whether it still exists.
        g_proxy.QueryDeletionResult(SLOTID_0, TYPE_ADN, freeIndex);
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
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = CONTACT_INDEX_1;
    delDiallingInfo->alphaTag_ = Str8ToStr16(CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(CORRECT_PIN2);
    g_proxy.DeleteFDNContact(SLOTID_0, delDiallingInfo);
    delDiallingInfo->pin2_ = Str8ToStr16(ERROR_FDN_PIN2);
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    ASSERT_TRUE(ret);

    delDiallingInfo->alphaTag_ = Str8ToStr16(NEW_CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(NEW_CONTACT_NUMBER);
    for (int32_t loopNumber = 0; loopNumber < LOOP_TEN_TIMES; loopNumber++) {
        bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
        ASSERT_TRUE(retUpdate);
    }

    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    bool findRecordNum = false;
    for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
         iter != vecDialNumInfo.end(); iter++) {
        if ((*iter)->recordNumber_ == CONTACT_INDEX_1) {
            findRecordNum = true;
            ASSERT_EQ((*iter)->recordNumber_, CONTACT_INDEX_1);
            ASSERT_STREQ(Str16ToStr8((*iter)->alphaTag_).c_str(), NEW_CONTACT_NAME.c_str());
            ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), NEW_CONTACT_NUMBER.c_str());
            ASSERT_STREQ(Str16ToStr8((*iter)->pin2_).c_str(), "");
            break;
        }
    }
    ASSERT_TRUE(findRecordNum);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
}
