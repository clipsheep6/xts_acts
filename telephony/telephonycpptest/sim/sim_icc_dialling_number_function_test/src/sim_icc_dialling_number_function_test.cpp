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

using namespace testing::ext;
using namespace OHOS;
const int32_t SimTest::SLOTID_2 = 2;
const int32_t SimTest::SLOTID_1 = 1;
const int32_t SimTest::SLOTID_0 = 0;
const int32_t SimTest::SLOTID_MINUS = -1;
const int SimTest::TYPE_THREE = 3;
const int SimTest::TYPE_FDN = 2;
const int SimTest::TYPE_ADN = 1;
const int SimTest::TYPE_ZERO = 0;
const int SimTest::TYPE_MINUS = -1;
const std::string SimTest::CONTACT_NAME = "test";
const std::string SimTest::CONTACT_NUMBER = "12345678";
const std::string SimTest::NEW_CONTACT_NAME = "tset_Update";
const std::string SimTest::NEW_CONTACT_NUMBER = "87654321";
const int SimTest::CONTACT_INDEX_1 = 1;
const std::string SimTest::ERROR_FDN_PIN2 = "123@#ABCD";
const std::u16string SimTest::WRONG_PIN2 = Str8ToStr16("202110");
const int32_t SimTest::UNLOCKED = 0;

/**************************************************Phase four*****************************************************/
/**
 * @tc.number   Telephony_Sim_QueryIccDiallingNumbers_0100
 * @tc.name     Test the QueryIccDiallingNumbers interface and the slotId parameter is valid.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_QueryIccDiallingNumbers_0100, Function | MediumTest | Level2)
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

    std::string contactName = "测试测试测试";
    std::string contactNumber = "01234567890123456789";
    delDiallingInfo->alphaTag_ = Str8ToStr16(contactName);
    delDiallingInfo->number_ = Str8ToStr16(contactNumber);
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
            ASSERT_STREQ(Str16ToStr8((*iter)->alphaTag_).c_str(), contactName.c_str());
            ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), contactNumber.c_str());
            ASSERT_STREQ(Str16ToStr8((*iter)->pin2_).c_str(), "");
            break;
        }
    }
    ASSERT_TRUE(findRecordNum);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
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
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = CONTACT_INDEX_1;
    delDiallingInfo->alphaTag_ = Str8ToStr16(CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(ERROR_FDN_PIN2);
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
    delDiallingInfo->pin2_ = Str8ToStr16(CORRECT_PIN2);
    g_proxy.DeleteFDNContact(SLOTID_0, delDiallingInfo);

    std::string contactName = "test_!@#1234";
    std::string contactNumber = "01234567890123456789";
    delDiallingInfo->alphaTag_ = Str8ToStr16(contactName);
    delDiallingInfo->number_ = Str8ToStr16(contactNumber);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_FDN, delDiallingInfo);
    ASSERT_TRUE(ret);
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_FDN);
    bool findRecordNum = false;
    for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
         iter != vecDialNumInfo.end(); iter++) {
        if ((*iter)->recordNumber_ == CONTACT_INDEX_1) {
            findRecordNum = true;
            ASSERT_EQ((*iter)->recordNumber_, CONTACT_INDEX_1);
            ASSERT_STREQ(Str16ToStr8((*iter)->alphaTag_).c_str(), contactName.c_str());
            ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), contactNumber.c_str());
            ASSERT_STREQ(Str16ToStr8((*iter)->pin2_).c_str(), "");
            break;
        }
    }
    ASSERT_TRUE(findRecordNum);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteFDNContact(SLOTID_0, delDiallingInfo);
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
 * @tc.number   Telephony_Sim_QueryIccDiallingNumbers_1200
 * @tc.name     When the PUK2 lock is triggered, test the QueryIccDiallingNumbers interface to query ordinary contacts
 *              (type input 1) and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_QueryIccDiallingNumbers_1200, Function | MediumTest | Level2)
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

    // Trigger puk2 lock.
    g_proxy.TriggerPuk2Lock(WRONG_PIN2);

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

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
    // Input the correct puk2 code to restore the normal status of puk2.
    int32_t resetResult = g_proxy.RestoreNormalPuk2Status(Str8ToStr16(CORRECT_PIN2), Str8ToStr16(CORRECT_PUK2));
    ASSERT_EQ(resetResult, UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_QueryIccDiallingNumbers_1300
 * @tc.name     When the PUK2 lock is triggered, test the QueryIccDiallingNumbers interface to query
 *              fixed-dial contacts (type input 2) and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_QueryIccDiallingNumbers_1300, Function | MediumTest | Level2)
{
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = CONTACT_INDEX_1;
    delDiallingInfo->alphaTag_ = Str8ToStr16(CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(ERROR_FDN_PIN2);
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
    delDiallingInfo->pin2_ = Str8ToStr16(CORRECT_PIN2);
    g_proxy.DeleteFDNContact(SLOTID_0, delDiallingInfo);

    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_FDN, delDiallingInfo);
    ASSERT_TRUE(ret);

    // Trigger puk2 lock.
    g_proxy.TriggerPuk2Lock(WRONG_PIN2);

    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_FDN);
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

    // Delete the added contact and restore the default status.
    g_proxy.DeleteFDNContact(SLOTID_0, delDiallingInfo);
    // Input the correct puk2 code to restore the normal status of puk2.
    int32_t resetResult = g_proxy.RestoreNormalPuk2Status(Str8ToStr16(CORRECT_PIN2), Str8ToStr16(CORRECT_PUK2));
    ASSERT_EQ(resetResult, UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_0100
 * @tc.name     Test the slotId exception input parameter -1 of the AddIccDiallingNumbers
 *              interface and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_0100, Function | MediumTest | Level4)
{
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = CONTACT_INDEX_1;
    delDiallingInfo->alphaTag_ = Str8ToStr16(CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(ERROR_FDN_PIN2);
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
    delDiallingInfo->pin2_ = Str8ToStr16(ERROR_FDN_PIN2);
    g_proxy.DeleteFDNContact(SLOTID_0, delDiallingInfo);

    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_MINUS, TYPE_ADN, delDiallingInfo);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_0200
 * @tc.name     Test the AddIccDiallingNumbers interface type parameter exception input parameter
 *              and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_0200, Function | MediumTest | Level4)
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

    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_MINUS, delDiallingInfo);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_0300
 * @tc.name     Test the AddIccDiallingNumbers interface DiallingNumbersInfo structure if recordNumber is present,
 *              alphaTag is normal, and Number_ is empty.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_0300, Function | MediumTest | Level3)
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

    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    ASSERT_TRUE(result);
    delDiallingInfo->number_ = Str8ToStr16("");
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    ASSERT_FALSE(ret);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_0400
 * @tc.name     The AddIccDiallingNumbers interface DiallingNumbersInfo structure recordNumber exists, alphaTag is
 *              empty, number_ is a normal scenario, check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_0400, Function | MediumTest | Level3)
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

    delDiallingInfo->alphaTag_ = Str8ToStr16("");
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    ASSERT_TRUE(result);
    delDiallingInfo->pin2_ = Str8ToStr16(CORRECT_PIN2);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    ASSERT_FALSE(ret);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_0500
 * @tc.name     Test the AddIccDiallingNumbers interface DiallingNumbersInfo structure for the case where
 *              recordNumber does not exist, alphaTag is empty, and Number_ is empty, and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_0500, Function | MediumTest | Level3)
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

    delDiallingInfo->alphaTag_ = Str8ToStr16("");
    delDiallingInfo->number_ = Str8ToStr16("");
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_0800
 * @tc.name     Test the slotId exception input parameter 1 of the AddIccDiallingNumbers interface
 *              and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_0800, Function | MediumTest | Level4)
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

    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_1, TYPE_ADN, delDiallingInfo);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_0900
 * @tc.name     Test the slotId exception input parameter 2 of the AddIccDiallingNumbers interface
 *              and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_0900, Function | MediumTest | Level4)
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

    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_2, TYPE_ADN, delDiallingInfo);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_1000
 * @tc.name     Test the AddIccDiallingNumbers interface type parameter exception parameter 0
 *              and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_1000, Function | MediumTest | Level4)
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

    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ZERO, delDiallingInfo);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_1100
 * @tc.name     Test the AddIccDiallingNumbers interface type parameter exception parameter 3
 *              and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_1100, Function | MediumTest | Level4)
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

    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_THREE, delDiallingInfo);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_1300
 * @tc.name     When triggering the PUK2 lock, test the AddIccDiallingNumbers interface to add a common
 *              contact (type=1) and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_1300, Function | MediumTest | Level2)
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

    // Trigger puk2 lock.
    g_proxy.TriggerPuk2Lock(WRONG_PIN2);

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

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
    // Input the correct puk2 code to restore the normal status of puk2.
    int32_t resetResult = g_proxy.RestoreNormalPuk2Status(Str8ToStr16(CORRECT_PIN2), Str8ToStr16(CORRECT_PUK2));
    ASSERT_EQ(resetResult, UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_1400
 * @tc.name     When triggering the PUK2 lock, test the AddIccDiallingNumbers interface to add fixed-dial
 *              contacts (type=2) and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_1400, Function | MediumTest | Level2)
{
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = CONTACT_INDEX_1;
    delDiallingInfo->alphaTag_ = Str8ToStr16(CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(ERROR_FDN_PIN2);
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
    delDiallingInfo->pin2_ = Str8ToStr16(CORRECT_PIN2);
    g_proxy.DeleteFDNContact(SLOTID_0, delDiallingInfo);

    // Trigger puk2 lock.
    g_proxy.TriggerPuk2Lock(WRONG_PIN2);

    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_FDN, delDiallingInfo);
    ASSERT_FALSE(ret);
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_FDN);
    bool findRecordNum = false;
    for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
         iter != vecDialNumInfo.end(); iter++) {
        if ((*iter)->recordNumber_ == CONTACT_INDEX_1) {
            findRecordNum = true;
        }
    }
    ASSERT_FALSE(findRecordNum);

    // Input the correct puk2 code to restore the normal status of puk2.
    int32_t resetResult = g_proxy.RestoreNormalPuk2Status(Str8ToStr16(CORRECT_PIN2), Str8ToStr16(CORRECT_PUK2));
    ASSERT_EQ(resetResult, UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_1500
 * @tc.name     Error typing the pin2 parameter when adding a fixed-dial contact to the AddIccDiallingNumbers
 *              interface check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_1500, Function | MediumTest | Level2)
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

    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_FDN, delDiallingInfo);
    ASSERT_FALSE(ret);
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_FDN);
    bool findRecordNum = false;
    for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
         iter != vecDialNumInfo.end(); iter++) {
        if ((*iter)->recordNumber_ == CONTACT_INDEX_1) {
            findRecordNum = true;
        }
    }
    ASSERT_FALSE(findRecordNum);

    // Input the correct pin2 code to restore the normal status of pin2.
    int32_t resetResult = g_proxy.RestoreNormalPin2Status(Str8ToStr16(CORRECT_PIN2));
    ASSERT_EQ(resetResult, UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_1600
 * @tc.name     Test AddIccDiallingNumbers Interface name (alphaTag_) enter more than 12 characters that
 *              do not contain Chinese characters and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_1600, Function | MediumTest | Level2)
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

    std::string contactNameOverlength = "123#@\%_ABCDEF";
    std::string contactName = "123#@\%_ABCDE";
    delDiallingInfo->alphaTag_ = Str8ToStr16(contactNameOverlength);
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
            ASSERT_STREQ(Str16ToStr8((*iter)->alphaTag_).c_str(), contactName.c_str());
            ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), CONTACT_NUMBER.c_str());
            ASSERT_STREQ(Str16ToStr8((*iter)->pin2_).c_str(), "");
            break;
        }
    }
    ASSERT_TRUE(findRecordNum);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_1700
 * @tc.name     Test AddIccDiallingNumbers Interface name (alphaTag_) Enter more than 6 characters containing Chinese
 *              characters and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_1700, Function | MediumTest | Level2)
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

    std::string contactNameOverlength = "测试12345";
    std::string contactName = "测试1234";
    delDiallingInfo->alphaTag_ = Str8ToStr16(contactNameOverlength);
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
            ASSERT_STREQ(Str16ToStr8((*iter)->alphaTag_).c_str(), contactName.c_str());
            ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), CONTACT_NUMBER.c_str());
            ASSERT_STREQ(Str16ToStr8((*iter)->pin2_).c_str(), "");
            break;
        }
    }
    ASSERT_TRUE(findRecordNum);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_1800
 * @tc.name     Test AddIccDiallingNumbers Interface number (number_) Check the returned value when
 *              the AddIccDiallingNumbers exceeds 20 digits.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_1800, Function | MediumTest | Level2)
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

    std::string contactNumberOverlength = "012345678901234567890";
    std::string contactNumber = "01234567890123456789";
    delDiallingInfo->number_ = Str8ToStr16(contactNumberOverlength);
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
            ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), contactNumber.c_str());
            ASSERT_STREQ(Str16ToStr8((*iter)->pin2_).c_str(), "");
            break;
        }
    }
    ASSERT_TRUE(findRecordNum);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_1900
 * @tc.name     Test AddIccDiallingNumbers Interface number (number_) Enter non-pure numbers
 *              and check the returned value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_1900, Function | MediumTest | Level2)
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

    std::string contactNumberError = "ABCD_#$%^1234";
    delDiallingInfo->number_ = Str8ToStr16(contactNumberError);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    ASSERT_FALSE(ret);
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    bool findRecordNum = false;
    for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
         iter != vecDialNumInfo.end(); iter++) {
        if ((*iter)->recordNumber_ == CONTACT_INDEX_1) {
            findRecordNum = true;
        }
    }
    ASSERT_FALSE(findRecordNum);
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
    int32_t freeIndex = QueryContactListFreeIndex(vecDialNumInfo);

    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = freeIndex;
    delDiallingInfo->alphaTag_ = Str8ToStr16(CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(ERROR_FDN_PIN2);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    ASSERT_TRUE(result);

    std::string contactName = "";
    std::string contactNumber = "";
    delDiallingInfo->alphaTag_ = Str8ToStr16(contactName);
    delDiallingInfo->number_ = Str8ToStr16(contactNumber);
    bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
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
    int32_t freeIndex = QueryContactListFreeIndex(vecDialNumInfo);

    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = freeIndex;
    delDiallingInfo->alphaTag_ = Str8ToStr16(CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(ERROR_FDN_PIN2);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    ASSERT_TRUE(result);
    bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_MINUS, TYPE_ADN, delDiallingInfo);
    ASSERT_FALSE(ret);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
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
    int32_t freeIndex = QueryContactListFreeIndex(vecDialNumInfo);

    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = freeIndex;
    delDiallingInfo->alphaTag_ = Str8ToStr16(CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(ERROR_FDN_PIN2);
    bool result = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
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
    int32_t freeIndex = QueryContactListFreeIndex(vecDialNumInfo);

    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = freeIndex;
    delDiallingInfo->alphaTag_ = Str8ToStr16(CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(CORRECT_PIN2);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_FDN, delDiallingInfo);
    ASSERT_TRUE(result);
    bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_FDN, delDiallingInfo);
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
    int32_t freeIndex = QueryContactListFreeIndex(vecDialNumInfo);

    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = freeIndex;
    delDiallingInfo->alphaTag_ = Str8ToStr16(CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(CORRECT_PIN2);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_FDN, delDiallingInfo);
    ASSERT_TRUE(result);
    bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_MINUS, delDiallingInfo);
    ASSERT_FALSE(ret);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteFDNContact(SLOTID_0, delDiallingInfo);
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
    int32_t freeIndex = QueryContactListFreeIndex(vecDialNumInfo);

    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = freeIndex;
    delDiallingInfo->alphaTag_ = Str8ToStr16(CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(ERROR_FDN_PIN2);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    ASSERT_TRUE(result);
    bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_1, TYPE_ADN, delDiallingInfo);
    ASSERT_FALSE(ret);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
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
    int32_t freeIndex = QueryContactListFreeIndex(vecDialNumInfo);

    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = freeIndex;
    delDiallingInfo->alphaTag_ = Str8ToStr16(CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(ERROR_FDN_PIN2);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    ASSERT_TRUE(result);
    bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_2, TYPE_ADN, delDiallingInfo);
    ASSERT_FALSE(ret);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
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
    int32_t freeIndex = QueryContactListFreeIndex(vecDialNumInfo);

    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = freeIndex;
    delDiallingInfo->alphaTag_ = Str8ToStr16(CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(CORRECT_PIN2);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_FDN, delDiallingInfo);
    ASSERT_TRUE(result);
    bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_ZERO, delDiallingInfo);
    ASSERT_FALSE(ret);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteFDNContact(SLOTID_0, delDiallingInfo);
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
    int32_t freeIndex = QueryContactListFreeIndex(vecDialNumInfo);

    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = freeIndex;
    delDiallingInfo->alphaTag_ = Str8ToStr16(CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(CORRECT_PIN2);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_FDN, delDiallingInfo);
    ASSERT_TRUE(result);
    bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_THREE, delDiallingInfo);
    ASSERT_FALSE(ret);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteFDNContact(SLOTID_0, delDiallingInfo);
}

/**
 * @tc.number   Telephony_Sim_DelIccDiallingNumbers_1300
 * @tc.name     When PUK2 is triggered, test the DelIccDiallingNumbers interface to remove the normal
 *              contact and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_DelIccDiallingNumbers_1300, Function | MediumTest | Level2)
{
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_FDN);
    int32_t freeIndex = QueryContactListFreeIndex(vecDialNumInfo);

    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = freeIndex;
    delDiallingInfo->alphaTag_ = Str8ToStr16(CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(ERROR_FDN_PIN2);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    ASSERT_TRUE(result);

    // Trigger puk2 lock.
    g_proxy.TriggerPuk2Lock(WRONG_PIN2);

    bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    ASSERT_TRUE(ret);

    vecDialNumInfo = g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    bool findRecordNum = false;
    for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
         iter != vecDialNumInfo.end(); iter++) {
        if ((*iter)->recordNumber_ == freeIndex) {
            findRecordNum = true;
        }
    }
    ASSERT_FALSE(findRecordNum);

    // Input the correct puk2 code to restore the normal status of puk2.
    int32_t resetResult = g_proxy.RestoreNormalPuk2Status(Str8ToStr16(CORRECT_PIN2), Str8ToStr16(CORRECT_PUK2));
    ASSERT_EQ(resetResult, UNLOCKED);
}

/**
 * @tc.number   Telephony_Sim_DelIccDiallingNumbers_1400
 * @tc.name     When PUK2 is triggered, test the DelIccDiallingNumbers interface to remove the fixed-dial
 *              contact and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_DelIccDiallingNumbers_1400, Function | MediumTest | Level2)
{
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_FDN);
    int32_t freeIndex = QueryContactListFreeIndex(vecDialNumInfo);

    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = freeIndex;
    delDiallingInfo->alphaTag_ = Str8ToStr16(CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(CORRECT_PIN2);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_FDN, delDiallingInfo);
    ASSERT_TRUE(result);

    // Trigger puk2 lock.
    g_proxy.TriggerPuk2Lock(WRONG_PIN2);

    bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_FDN, delDiallingInfo);
    ASSERT_FALSE(ret);

    vecDialNumInfo = g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_FDN);
    bool findRecordNum = false;
    for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
         iter != vecDialNumInfo.end(); iter++) {
        if ((*iter)->recordNumber_ == freeIndex) {
            findRecordNum = true;
            ASSERT_EQ((*iter)->recordNumber_, freeIndex);
            ASSERT_STREQ(Str16ToStr8((*iter)->alphaTag_).c_str(), CONTACT_NAME.c_str());
            ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), CONTACT_NUMBER.c_str());
            ASSERT_STREQ(Str16ToStr8((*iter)->pin2_).c_str(), "");
            break;
        }
    }
    ASSERT_TRUE(findRecordNum);

    // Input the correct puk2 code to restore the normal status of puk2.
    int32_t resetResult = g_proxy.RestoreNormalPuk2Status(Str8ToStr16(CORRECT_PIN2), Str8ToStr16(CORRECT_PUK2));
    ASSERT_EQ(resetResult, UNLOCKED);
    // Delete the added contact and restore the default status.
    g_proxy.DeleteFDNContact(SLOTID_0, delDiallingInfo);
}

/**
 * @tc.number   Telephony_Sim_DelIccDiallingNumbers_1500
 * @tc.name     Test the DelIccDiallingNumbers interface to remove the pin2 parameter entered incorrectly
 *              by the fixed-dial contact and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_DelIccDiallingNumbers_1500, Function | MediumTest | Level2)
{
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_FDN);
    int32_t freeIndex = QueryContactListFreeIndex(vecDialNumInfo);

    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = freeIndex;
    delDiallingInfo->alphaTag_ = Str8ToStr16(CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(CORRECT_PIN2);
    bool result = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_FDN, delDiallingInfo);
    ASSERT_TRUE(result);

    delDiallingInfo->pin2_ = Str8ToStr16(ERROR_FDN_PIN2);
    bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_FDN, delDiallingInfo);
    ASSERT_FALSE(ret);

    vecDialNumInfo = g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_FDN);
    bool findRecordNum = false;
    for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
         iter != vecDialNumInfo.end(); iter++) {
        if ((*iter)->recordNumber_ == freeIndex) {
            findRecordNum = true;
            ASSERT_EQ((*iter)->recordNumber_, freeIndex);
            ASSERT_STREQ(Str16ToStr8((*iter)->alphaTag_).c_str(), CONTACT_NAME.c_str());
            ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), CONTACT_NUMBER.c_str());
            ASSERT_STREQ(Str16ToStr8((*iter)->pin2_).c_str(), "");
            break;
        }
    }
    ASSERT_TRUE(findRecordNum);

    // Input the correct pin2 code to restore the normal status of pin2.
    int32_t resetResult = g_proxy.RestoreNormalPin2Status(Str8ToStr16(CORRECT_PIN2));
    ASSERT_EQ(resetResult, UNLOCKED);
    // Delete the added contact and restore the default status.
    g_proxy.DeleteFDNContact(SLOTID_0, delDiallingInfo);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_0100
 * @tc.name     Test the UpdateIccDiallingNumbers interface and enter the normal slotId parameter.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_0100, Function | MediumTest | Level2)
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
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    ASSERT_TRUE(retUpdate);

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

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_0200
 * @tc.name     Test the slotId exception input parameter -1 of UpdateIccDiallingNumbers and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_0200, Function | MediumTest | Level4)
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
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_MINUS, TYPE_ADN, delDiallingInfo);
    ASSERT_FALSE(retUpdate);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteFDNContact(SLOTID_0, delDiallingInfo);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_0300
 * @tc.name     Test UpdateIccDiallingNumbers. The interface type parameter is a fixed-dial contact.
 *              Check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_0300, Function | MediumTest | Level3)
{
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = CONTACT_INDEX_1;
    delDiallingInfo->alphaTag_ = Str8ToStr16(CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(ERROR_FDN_PIN2);
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
    delDiallingInfo->pin2_ = Str8ToStr16(CORRECT_PIN2);
    g_proxy.DeleteFDNContact(SLOTID_0, delDiallingInfo);

    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_FDN, delDiallingInfo);
    ASSERT_TRUE(ret);

    delDiallingInfo->alphaTag_ = Str8ToStr16(NEW_CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(NEW_CONTACT_NUMBER);
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_FDN, delDiallingInfo);
    ASSERT_TRUE(retUpdate);

    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_FDN);
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
    g_proxy.DeleteFDNContact(SLOTID_0, delDiallingInfo);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_0400
 * @tc.name     Test the UpdateIccDiallingNumbers interface type exception parameter -1 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_0400, Function | MediumTest | Level4)
{
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = CONTACT_INDEX_1;
    delDiallingInfo->alphaTag_ = Str8ToStr16(CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(ERROR_FDN_PIN2);
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
    delDiallingInfo->pin2_ = Str8ToStr16(CORRECT_PIN2);
    g_proxy.DeleteFDNContact(SLOTID_0, delDiallingInfo);

    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_FDN, delDiallingInfo);
    ASSERT_TRUE(ret);

    delDiallingInfo->alphaTag_ = Str8ToStr16(NEW_CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(NEW_CONTACT_NUMBER);
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_MINUS, delDiallingInfo);
    ASSERT_FALSE(retUpdate);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteFDNContact(SLOTID_0, delDiallingInfo);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_0500
 * @tc.name     The UpdateIccDiallingNumbers interface DiallingNumbersInfo structure recordNumber exists,
 *              alphaTag is normal, number_ is empty, and the return value is checked.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_0500, Function | MediumTest | Level3)
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
    delDiallingInfo->number_ = Str8ToStr16("");
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    ASSERT_FALSE(retUpdate);

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

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_0600
 * @tc.name     The UpdateIccDiallingNumbers DiallingNumbersInfo structure exists, alphaTag is empty,
 *              and number_ is normal.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_0600, Function | MediumTest | Level3)
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

    delDiallingInfo->alphaTag_ = Str8ToStr16("");
    delDiallingInfo->number_ = Str8ToStr16(NEW_CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(ERROR_FDN_PIN2);
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    ASSERT_FALSE(retUpdate);

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

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_0700
 * @tc.name     The UpdateIccDiallingNumbers DiallingNumbersInfo structure does not exist, alphaTag is normal,
 *              number_ is normal, and the returned value is checked.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_0700, Function | MediumTest | Level3)
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

    delDiallingInfo->alphaTag_ = Str8ToStr16(NEW_CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(NEW_CONTACT_NUMBER);
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    ASSERT_FALSE(retUpdate);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_0800
 * @tc.name     UpdateIccDiallingNumbers DiallingNumbersInfo struct recordNumber does not exist, alphaTag is null,
 *              number_ is null, and the return value is checked.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_0800, Function | MediumTest | Level3)
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

    delDiallingInfo->alphaTag_ = Str8ToStr16("");
    delDiallingInfo->number_ = Str8ToStr16("");
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    ASSERT_FALSE(retUpdate);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_1100
 * @tc.name     Test the slotId exception input parameter 1 of UpdateIccDiallingNumbers and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_1100, Function | MediumTest | Level4)
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
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_1, TYPE_ADN, delDiallingInfo);
    ASSERT_FALSE(retUpdate);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_1200
 * @tc.name     Test the slotId exception input parameter 2 of UpdateIccDiallingNumbers and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_1200, Function | MediumTest | Level4)
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
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_2, TYPE_ADN, delDiallingInfo);
    ASSERT_FALSE(retUpdate);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_1300
 * @tc.name     Test the UpdateIccDiallingNumbers interface type parameter 0 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_1300, Function | MediumTest | Level4)
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
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ZERO, delDiallingInfo);
    ASSERT_FALSE(retUpdate);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_1400
 * @tc.name     Test the UpdateIccDiallingNumbers interface type exception parameter 3 and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_1400, Function | MediumTest | Level4)
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
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_THREE, delDiallingInfo);
    ASSERT_FALSE(retUpdate);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_1600
 * @tc.name     When puK2 is triggered, the UpdateIccDiallingNumbers interface is tested to update regular contacts.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_1600, Function | MediumTest | Level2)
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

    // Trigger puk2 lock.
    g_proxy.TriggerPuk2Lock(WRONG_PIN2);

    delDiallingInfo->alphaTag_ = Str8ToStr16(NEW_CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(NEW_CONTACT_NUMBER);
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    ASSERT_TRUE(retUpdate);

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

    // Input the correct puk2 code to restore the normal status of puk2.
    int32_t resetResult = g_proxy.RestoreNormalPuk2Status(Str8ToStr16(CORRECT_PIN2), Str8ToStr16(CORRECT_PUK2));
    ASSERT_EQ(resetResult, UNLOCKED);
    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_1700
 * @tc.name     When puK2 is triggered, the UpdateIccDiallingNumbers interface is tested to update fixed-dial contacts.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_1700, Function | MediumTest | Level2)
{
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = CONTACT_INDEX_1;
    delDiallingInfo->alphaTag_ = Str8ToStr16(CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(ERROR_FDN_PIN2);
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
    delDiallingInfo->pin2_ = Str8ToStr16(CORRECT_PIN2);
    g_proxy.DeleteFDNContact(SLOTID_0, delDiallingInfo);

    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_FDN, delDiallingInfo);
    ASSERT_TRUE(ret);

    // Trigger puk2 lock.
    g_proxy.TriggerPuk2Lock(WRONG_PIN2);

    delDiallingInfo->alphaTag_ = Str8ToStr16(NEW_CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(NEW_CONTACT_NUMBER);
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_FDN, delDiallingInfo);
    ASSERT_FALSE(retUpdate);

    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_FDN);
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

    // Input the correct puk2 code to restore the normal status of puk2.
    int32_t resetResult = g_proxy.RestoreNormalPuk2Status(Str8ToStr16(CORRECT_PIN2), Str8ToStr16(CORRECT_PUK2));
    ASSERT_EQ(resetResult, UNLOCKED);
    // Delete the added contact and restore the default status.
    g_proxy.DeleteFDNContact(SLOTID_0, delDiallingInfo);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_1800
 * @tc.name     Error pin2 parameter was entered when the UpdateIccDiallingNumbers interface
 *              updated a fixed-dial contact. Procedure.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_1800, Function | MediumTest | Level2)
{
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = CONTACT_INDEX_1;
    delDiallingInfo->alphaTag_ = Str8ToStr16(CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(ERROR_FDN_PIN2);
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
    delDiallingInfo->pin2_ = Str8ToStr16(CORRECT_PIN2);
    g_proxy.DeleteFDNContact(SLOTID_0, delDiallingInfo);

    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_FDN, delDiallingInfo);
    ASSERT_TRUE(ret);

    delDiallingInfo->alphaTag_ = Str8ToStr16(NEW_CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(NEW_CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(ERROR_FDN_PIN2);
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_FDN, delDiallingInfo);
    ASSERT_FALSE(retUpdate);

    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_FDN);
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

    // Input the correct pin2 code to restore the normal status of pin2.
    int32_t resetResult = g_proxy.RestoreNormalPin2Status(Str8ToStr16(CORRECT_PIN2));
    ASSERT_EQ(resetResult, UNLOCKED);
    // Delete the added contact and restore the default status.
    g_proxy.DeleteFDNContact(SLOTID_0, delDiallingInfo);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_1900
 * @tc.name     Test the UpdateIccDiallingNumbers interface input name (alphaTag_) for more than 12 characters
 *              without Chinese characters.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_1900, Function | MediumTest | Level2)
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

    std::string newContactNameOverlength = "123#@\%_ABCDEF";
    std::string newContactName = "123#@\%_ABCDE";
    delDiallingInfo->alphaTag_ = Str8ToStr16(newContactNameOverlength);
    delDiallingInfo->number_ = Str8ToStr16(NEW_CONTACT_NUMBER);
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    ASSERT_TRUE(retUpdate);

    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    bool findRecordNum = false;
    for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
         iter != vecDialNumInfo.end(); iter++) {
        if ((*iter)->recordNumber_ == CONTACT_INDEX_1) {
            findRecordNum = true;
            ASSERT_EQ((*iter)->recordNumber_, CONTACT_INDEX_1);
            ASSERT_STREQ(Str16ToStr8((*iter)->alphaTag_).c_str(), newContactName.c_str());
            ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), NEW_CONTACT_NUMBER.c_str());
            ASSERT_STREQ(Str16ToStr8((*iter)->pin2_).c_str(), "");
            break;
        }
    }
    ASSERT_TRUE(findRecordNum);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_2000
 * @tc.name     Test the UpdateIccDiallingNumbers interface input name (alphaTag_) for more than 6 characters
 *              containing Chinese characters.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_2000, Function | MediumTest | Level2)
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

    std::string newContactNameOverlength = "测试12345";
    std::string newContactName = "测试1234";
    delDiallingInfo->alphaTag_ = Str8ToStr16(newContactNameOverlength);
    delDiallingInfo->number_ = Str8ToStr16(NEW_CONTACT_NUMBER);
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    ASSERT_TRUE(retUpdate);

    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    bool findRecordNum = false;
    for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
         iter != vecDialNumInfo.end(); iter++) {
        if ((*iter)->recordNumber_ == CONTACT_INDEX_1) {
            findRecordNum = true;
            ASSERT_EQ((*iter)->recordNumber_, CONTACT_INDEX_1);
            ASSERT_STREQ(Str16ToStr8((*iter)->alphaTag_).c_str(), newContactName.c_str());
            ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), NEW_CONTACT_NUMBER.c_str());
            ASSERT_STREQ(Str16ToStr8((*iter)->pin2_).c_str(), "");
            break;
        }
    }
    ASSERT_TRUE(findRecordNum);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_2100
 * @tc.name     UpdateIccDiallingNumbers The interface input number (number_) exceeds 20 digits.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_2100, Function | MediumTest | Level2)
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

    std::string newContactNumberOverlength = "012345678901234567890";
    std::string newContactNumber = "01234567890123456789";
    delDiallingInfo->alphaTag_ = Str8ToStr16(NEW_CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(newContactNumberOverlength);
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    ASSERT_TRUE(retUpdate);

    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    bool findRecordNum = false;
    for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
         iter != vecDialNumInfo.end(); iter++) {
        if ((*iter)->recordNumber_ == CONTACT_INDEX_1) {
            findRecordNum = true;
            ASSERT_EQ((*iter)->recordNumber_, CONTACT_INDEX_1);
            ASSERT_STREQ(Str16ToStr8((*iter)->alphaTag_).c_str(), NEW_CONTACT_NAME.c_str());
            ASSERT_STREQ(Str16ToStr8((*iter)->number_).c_str(), newContactNumber.c_str());
            ASSERT_STREQ(Str16ToStr8((*iter)->pin2_).c_str(), "");
            break;
        }
    }
    ASSERT_TRUE(findRecordNum);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_2200
 * @tc.name     Test UpdateIccDiallingNumbers Interface input number (number_) Impure numbers.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_2200, Function | MediumTest | Level2)
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

    std::string newContactNumberError = "ABCD_#$%^1234";
    delDiallingInfo->alphaTag_ = Str8ToStr16(NEW_CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(newContactNumberError);
    bool retUpdate = g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    ASSERT_FALSE(retUpdate);

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

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
}
