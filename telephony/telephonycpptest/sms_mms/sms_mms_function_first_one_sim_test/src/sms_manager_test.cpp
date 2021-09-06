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

#include "sms_manager_test.h"
#include "string_ex.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace Telephony;
using namespace OHOS::Telephony::SmsManager;
using namespace SmsManager;
using namespace OHOS::Telephony;

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_0100
 * @tc.name     When SLOTID is the correct value,Save a text message to the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_AddSimMessage_0100, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            addIndex = i;
            break;
        }
    }

    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_1, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
    ASSERT_TRUE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string addPdu = InterceptionPdu(curSmsRecord[addIndex], PDU_LENGTH[RECEIVE_SMS_PDU]);
    bool isPdu = (addPdu == RECEIVE_SMS_PDU);
    ASSERT_TRUE(isPdu);
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_0200
 * @tc.name     When SLOTID is the wrong value,Failed to save SMS to SIM
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_AddSimMessage_0200, Function | MediumTest | Level3)
{
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_0300
 * @tc.name     Set the SMS center service address "smsc" to the correct value,Save a text message to the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_AddSimMessage_0300, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = OTHER_SMSC;
    int addIndex = 0;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            addIndex = i;
            break;
        }
    }
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_1, smsc, pdu,
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
    ASSERT_TRUE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string addPdu = InterceptionPdu(curSmsRecord[addIndex], PDU_LENGTH[RECEIVE_SMS_PDU]);
    bool isPdu = (addPdu == RECEIVE_SMS_PDU);
    ASSERT_TRUE(isPdu);
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_0400
 * @tc.name     Set the SMS center service address "SMSC" to empty,Save a text message to the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_AddSimMessage_0400, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            addIndex = i;
            break;
        }
    }
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_1, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
    ASSERT_TRUE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string addPdu = InterceptionPdu(curSmsRecord[addIndex], PDU_LENGTH[RECEIVE_SMS_PDU]);
    bool isPdu = (addPdu == RECEIVE_SMS_PDU);
    ASSERT_TRUE(isPdu);
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_0500
 * @tc.name     Set the length of SMS service address "SMSC" exceeding the limit,Failed to save SMS to SIM
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_AddSimMessage_0500, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"9123456789123123123123123";
    int addIndex = 0;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            addIndex = i;
            break;
        }
    }
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_1, smsc, pdu,
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
    ASSERT_FALSE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = (curSmsRecord[addIndex] == INVALID_SMS_VALUES || curSmsRecord[addIndex].empty());
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_0600
 * @tc.name     Set the SMS center service address "SMSC" to Chinese,Save a text message to the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_AddSimMessage_0600, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"短信中心服务地址";
    int addIndex = 0;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            addIndex = i;
            break;
        }
    }
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_1, smsc, pdu,
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
    ASSERT_TRUE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string addPdu = InterceptionPdu(curSmsRecord[addIndex], PDU_LENGTH[RECEIVE_SMS_PDU]);
    bool isPdu = (addPdu == RECEIVE_SMS_PDU);
    ASSERT_TRUE(isPdu);
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_0700
 * @tc.name     Set the SMS center service address "SMSC" to English,Failed to save SMS to SIM
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_AddSimMessage_0700, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"English";
    int addIndex = 0;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            addIndex = i;
            break;
        }
    }
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_1, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_FALSE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = (curSmsRecord[addIndex] == INVALID_SMS_VALUES || curSmsRecord[addIndex].empty());
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_0800
 * @tc.name     Set the SMS center service address "SMSC" to Special characters,Save a text message to the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_AddSimMessage_0800, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"$%&**^?";
    int addIndex = 0;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            addIndex = i;
            break;
        }
    }
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_1, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string addPdu = InterceptionPdu(curSmsRecord[addIndex], PDU_LENGTH[CORRECT_SMS_PDU]);
    bool isPdu = (addPdu == CORRECT_SMS_PDU);
    ASSERT_TRUE(isPdu);
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_0900
 * @tc.name     Set the SMS center service address "SMSC" to Mixed character,Failed to save SMS to SIM
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_AddSimMessage_0900, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"#Qs地址12？?";
    int addIndex = 0;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            addIndex = i;
            break;
        }
    }
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_1, smsc, pdu,
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_FALSE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = (curSmsRecord[addIndex] == INVALID_SMS_VALUES || curSmsRecord[addIndex].empty());
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_1000
 * @tc.name     Set the normal PUD,Save a text message to the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_AddSimMessage_1000, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            addIndex = i;
            break;
        }
    }
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_1, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
    ASSERT_TRUE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string addPdu = InterceptionPdu(curSmsRecord[addIndex], PDU_LENGTH[RECEIVE_SMS_PDU]);
    bool isPdu = (addPdu == RECEIVE_SMS_PDU);
    ASSERT_TRUE(isPdu);
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_1100
 * @tc.name     Set the length of PDU to exceed the upper limit(176),Save a text message to the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_AddSimMessage_1100, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = BEYOND_MAX_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            addIndex = i;
            break;
        }
    }
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_1, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string addPdu = InterceptionPdu(curSmsRecord[addIndex], PDU_LENGTH[BEYOND_MAX_PDU]);
    bool isPdu = (addPdu == BEYOND_MAX_PDU);
    ASSERT_TRUE(isPdu);
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_1200
 * @tc.name     Set the PDU to empty,Failed to save SMS to SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_AddSimMessage_1200, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = u"";
    std::u16string smsc = u"";
    int addIndex = 0;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            addIndex = i;
            break;
        }
    }
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_1, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
    ASSERT_FALSE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = (curSmsRecord[addIndex] == INVALID_SMS_VALUES || curSmsRecord[addIndex].empty());
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_1300
 * @tc.name     Set PDU to Chinese,Failed to save SMS to SIM
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_AddSimMessage_1300, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = u"中文文本";
    std::u16string smsc = u"";
    int addIndex = 0;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            addIndex = i;
            break;
        }
    }
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_1, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
    ASSERT_FALSE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = (curSmsRecord[addIndex] == INVALID_SMS_VALUES || curSmsRecord[addIndex].empty());
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_1400
 * @tc.name     Set PDU to English,Failed to save SMS to SIM
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_AddSimMessage_1400, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = u"English";
    std::u16string smsc = u"";
    int addIndex = 0;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            addIndex = i;
            break;
        }
    }
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_1, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
    ASSERT_FALSE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = (curSmsRecord[addIndex] == INVALID_SMS_VALUES || curSmsRecord[addIndex].empty());
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_1500
 * @tc.name     Set PDU to figure,Failed to save SMS to SIM
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_AddSimMessage_1500, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = u"123456789";
    std::u16string smsc = u"";
    int addIndex = 0;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            addIndex = i;
            break;
        }
    }
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_1, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
    ASSERT_FALSE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = (curSmsRecord[addIndex] == INVALID_SMS_VALUES || curSmsRecord[addIndex].empty());
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_1600
 * @tc.name     Set PDU to Special characters,Failed to save SMS to SIM
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_AddSimMessage_1600, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = u"……%#￥……？》";
    std::u16string smsc = u"";
    int addIndex = 0;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            addIndex = i;
            break;
        }
    }
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_1, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
    ASSERT_FALSE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = (curSmsRecord[addIndex] == INVALID_SMS_VALUES || curSmsRecord[addIndex].empty());
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_1700
 * @tc.name     Set PDU to Mixed character,Failed to save SMS to SIM
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_AddSimMessage_1700, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = u"12中文English<>?$";
    std::u16string smsc = u"";
    int addIndex = 0;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            addIndex = i;
            break;
        }
    }
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_1, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
    ASSERT_FALSE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = (curSmsRecord[addIndex] == INVALID_SMS_VALUES || curSmsRecord[addIndex].empty());
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_1800
 * @tc.name     When status is equal to the correct value of SIM_MESSAGE_STATUS_READ,
 *              Save a text message to the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_AddSimMessage_1800, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            addIndex = i;
            break;
        }
    }
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_1, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
    ASSERT_TRUE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string addPdu = InterceptionPdu(curSmsRecord[addIndex], PDU_LENGTH[RECEIVE_SMS_PDU]);
    bool isPdu = (addPdu == RECEIVE_SMS_PDU);
    ASSERT_TRUE(isPdu);
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_1900
 * @tc.name     When status is equal to the correct value of SIM_MESSAGE_STATUS_UNREAD,
 *              Save a text message to the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_AddSimMessage_1900, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            addIndex = i;
            break;
        }
    }
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_1, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD);
    ASSERT_TRUE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string addPdu = InterceptionPdu(curSmsRecord[addIndex], PDU_LENGTH[RECEIVE_SMS_PDU]);
    bool isPdu = (addPdu == RECEIVE_SMS_PDU);
    ASSERT_TRUE(isPdu);
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_2000
 * @tc.name     When status is equal to the correct value of SIM_MESSAGE_STATUS_SENT,
 *              Save a text message to the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_AddSimMessage_2000, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            addIndex = i;
            break;
        }
    }
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_1, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string addPdu = InterceptionPdu(curSmsRecord[addIndex], PDU_LENGTH[CORRECT_SMS_PDU]);
    bool isPdu = (addPdu == CORRECT_SMS_PDU);
    ASSERT_TRUE(isPdu);
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_2100
 * @tc.name     When status is equal to the correct value of SIM_MESSAGE_STATUS_UNSENT,
 *              Save a text message to the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_AddSimMessage_2100, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            addIndex = i;
            break;
        }
    }
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_1, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNSENT);
    ASSERT_TRUE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string addPdu = InterceptionPdu(curSmsRecord[addIndex], PDU_LENGTH[CORRECT_SMS_PDU]);
    bool isPdu = (addPdu == CORRECT_SMS_PDU);
    ASSERT_TRUE(isPdu);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_0100
 * @tc.name     When SLOTID is the correct value,Update a SIM card SMS record.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_UpdateSimMessage_0100, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    int nextIndex = 0;
    bool isSecond = false;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            if (isSecond) {
                nextIndex = i;
                break;
            } else {
                addIndex = i;
            }
            isSecond = true;
        }
    }
    if (nextIndex == 0) {
        nextIndex = addIndex;
    }
    bool isAddSms = false;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        if (!isAddSms) {
            isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
                SLOT_ID_1, smsc, pdu,
                OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD);
        } else {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_1, addIndex, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ, pdu,
        smsc);
    ASSERT_TRUE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = false;
    if (nextIndex == addIndex) {
        isThere = (curSmsRecord[addIndex] != INVALID_SMS_VALUES || !curSmsRecord[addIndex].empty());
    } else {
        isThere = (curSmsRecord[nextIndex] != INVALID_SMS_VALUES || !curSmsRecord[nextIndex].empty());
    }
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_0200
 * @tc.name     When SLOTID is the wrong value,Failed to update SIM card SMS record
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_UpdateSimMessage_0200, Function | MediumTest | Level3)
{
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    int index = 0;
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_0, index, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ, pdu, smsc);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_0300
 * @tc.name     Example Change the SMS status from SIM_MESSAGE_STATUS_READ to SIM_MESSAGE_STATUS_UNREAD,
 *              Update a SIM card SMS record.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_UpdateSimMessage_0300, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    int nextIndex = 0;
    bool isSecond = false;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            if (isSecond) {
                nextIndex = i;
                break;
            } else {
                addIndex = i;
            }
            isSecond = true;
        }
    }
    if (nextIndex == 0) {
        nextIndex = addIndex;
    }
    bool isAddSms = false;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        if (!isAddSms) {
            isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
                SLOT_ID_1, smsc, pdu,
                OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
        } else {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_1, addIndex, 
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD, pdu, smsc);
    ASSERT_TRUE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = false;
    if (nextIndex == addIndex) {
        isThere = (curSmsRecord[addIndex] != INVALID_SMS_VALUES || !curSmsRecord[addIndex].empty());
    } else {
        isThere = (curSmsRecord[nextIndex] == INVALID_SMS_VALUES || curSmsRecord[nextIndex].empty());
    }
    if (curSmsRecord[addIndex] != INVALID_SMS_VALUES && !curSmsRecord[addIndex].empty()) {
        isThere = (curSmsRecord[addIndex][1] == SMS_STATUS_UNREAD);
    }
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_0400
 * @tc.name     Example Change the SMS status from SIM_MESSAGE_STATUS_READ to SIM_MESSAGE_STATUS_SENT,
 *              Failed to update the SMS record of the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_UpdateSimMessage_0400, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    int nextIndex = 0;
    bool isSecond = false;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            if (isSecond) {
                nextIndex = i;
                break;
            } else {
                addIndex = i;
            }
            isSecond = true;
        }
    }
    if (nextIndex == 0) {
        nextIndex = addIndex;
    }
    bool isAddSms = false;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        if (!isAddSms) {
            isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
                SLOT_ID_1, smsc, pdu,
                OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
        } else {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_1, addIndex, 
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT, pdu, smsc);
    ASSERT_FALSE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = false;
    if (nextIndex == addIndex) {
        isThere = (curSmsRecord[addIndex] != INVALID_SMS_VALUES || !curSmsRecord[addIndex].empty());
    } else {
        isThere = (curSmsRecord[nextIndex] == INVALID_SMS_VALUES || curSmsRecord[nextIndex].empty());
    }
    if (curSmsRecord[addIndex] != INVALID_SMS_VALUES && !curSmsRecord[addIndex].empty()) {
        isThere = (curSmsRecord[addIndex][1] == SMS_STATUS_READ);
    }
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_0500
 * @tc.name     Example Change the SMS status from SIM_MESSAGE_STATUS_READ to SIM_MESSAGE_STATUS_UNSENT,
 *              Failed to update the SMS record of the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_UpdateSimMessage_0500, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    int nextIndex = 0;
    bool isSecond = false;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            if (isSecond) {
                nextIndex = i;
                break;
            } else {
                addIndex = i;
            }
            isSecond = true;
        }
    }
    if (nextIndex == 0) {
        nextIndex = addIndex;
    }
    bool isAddSms = false;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        if (!isAddSms) {
            isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
                SLOT_ID_1, smsc, pdu,
                OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
        } else {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_1, addIndex, 
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNSENT, pdu, smsc);
    ASSERT_FALSE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = false;
    if (nextIndex == addIndex) {
        isThere = (curSmsRecord[addIndex] != INVALID_SMS_VALUES || !curSmsRecord[addIndex].empty());
    } else {
        isThere = (curSmsRecord[nextIndex] == INVALID_SMS_VALUES || curSmsRecord[nextIndex].empty());
    }
    if (curSmsRecord[addIndex] != INVALID_SMS_VALUES && !curSmsRecord[addIndex].empty()) {
        isThere = (curSmsRecord[addIndex][1] == SMS_STATUS_READ);
    }
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_0600
 * @tc.name     Example Change the SMS status from SIM_MESSAGE_STATUS_UNREAD to SIM_MESSAGE_STATUS_READ,
 *              Update a SIM card SMS record.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_UpdateSimMessage_0600, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    int nextIndex = 0;
    bool isSecond = false;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            if (isSecond) {
                nextIndex = i;
                break;
            } else {
                addIndex = i;
            }
            isSecond = true;
        }
    }
    if (nextIndex == 0) {
        nextIndex = addIndex;
    }
    bool isAddSms = false;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        if (!isAddSms) {
            isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
                SLOT_ID_1, smsc, pdu,
                OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD);
        } else {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_1, addIndex, 
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ, pdu, smsc);
    ASSERT_TRUE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = false;
    if (nextIndex == addIndex) {
        isThere = (curSmsRecord[addIndex] != INVALID_SMS_VALUES || !curSmsRecord[addIndex].empty());
    } else {
        isThere = (curSmsRecord[nextIndex] == INVALID_SMS_VALUES || curSmsRecord[nextIndex].empty());
    }
    if (curSmsRecord[addIndex] != INVALID_SMS_VALUES && !curSmsRecord[addIndex].empty()) {
        isThere = (curSmsRecord[addIndex][1] == SMS_STATUS_READ);
    }
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_0700
 * @tc.name     Example Change the SMS status from SIM_MESSAGE_STATUS_UNREAD to SIM_MESSAGE_STATUS_SENT,
 *              Failed to update the SMS record of the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_UpdateSimMessage_0700, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    int nextIndex = 0;
    bool isSecond = false;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            if (isSecond) {
                nextIndex = i;
                break;
            } else {
                addIndex = i;
            }
            isSecond = true;
        }
    }
    if (nextIndex == 0) {
        nextIndex = addIndex;
    }
    bool isAddSms = false;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        if (!isAddSms) {
            isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
                SLOT_ID_1, smsc, pdu,
                OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD);
        } else {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_1, addIndex, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT, pdu,
        smsc);
    ASSERT_FALSE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = false;
    if (nextIndex == addIndex) {
        isThere = (curSmsRecord[addIndex] != INVALID_SMS_VALUES || !curSmsRecord[addIndex].empty());
    } else {
        isThere = (curSmsRecord[nextIndex] == INVALID_SMS_VALUES || curSmsRecord[nextIndex].empty());
    }
    if (curSmsRecord[addIndex] != INVALID_SMS_VALUES && !curSmsRecord[addIndex].empty()) {
        isThere = (curSmsRecord[addIndex][1] == SMS_STATUS_UNREAD);
    }
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_0800
 * @tc.name     Example Change the SMS status from SIM_MESSAGE_STATUS_UNREAD to SIM_MESSAGE_STATUS_UNSENT,
 *              Failed to update the SMS record of the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_UpdateSimMessage_0800, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    int nextIndex = 0;
    bool isSecond = false;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            if (isSecond) {
                nextIndex = i;
                break;
            } else {
                addIndex = i;
            }
            isSecond = true;
        }
    }
    if (nextIndex == 0) {
        nextIndex = addIndex;
    }
    bool isAddSms = false;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        if (!isAddSms) {
            isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
                SLOT_ID_1, smsc, pdu,
                OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD);
        } else {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_1, addIndex, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNSENT, pdu,
        smsc);
    ASSERT_FALSE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = false;
    if (nextIndex == addIndex) {
        isThere = (curSmsRecord[addIndex] != INVALID_SMS_VALUES || !curSmsRecord[addIndex].empty());
    } else {
        isThere = (curSmsRecord[nextIndex] == INVALID_SMS_VALUES || curSmsRecord[nextIndex].empty());
    }
    if (curSmsRecord[addIndex] != INVALID_SMS_VALUES && !curSmsRecord[addIndex].empty()) {
        isThere = (curSmsRecord[addIndex][1] == SMS_STATUS_UNREAD);
    }
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_0900
 * @tc.name     Example Change the SMS status from SIM_MESSAGE_STATUS_SENT to SIM_MESSAGE_STATUS_UNSENT,
 *              Update a SIM card SMS record.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_UpdateSimMessage_0900, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    int nextIndex = 0;
    bool isSecond = false;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            if (isSecond) {
                nextIndex = i;
                break;
            } else {
                addIndex = i;
            }
            isSecond = true;
        }
    }
    if (nextIndex == 0) {
        nextIndex = addIndex;
    }
    bool isAddSms = false;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        if (!isAddSms) {
            isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
                SLOT_ID_1, smsc, pdu,
                OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
        } else {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_1, addIndex, 
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNSENT, pdu, smsc);
    ASSERT_TRUE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = false;
    if (nextIndex == addIndex) {
        isThere = (curSmsRecord[addIndex] != INVALID_SMS_VALUES || !curSmsRecord[addIndex].empty());
    } else {
        isThere = (curSmsRecord[nextIndex] == INVALID_SMS_VALUES || curSmsRecord[nextIndex].empty());
    }
    if (curSmsRecord[addIndex] != INVALID_SMS_VALUES && !curSmsRecord[addIndex].empty()) {
        isThere = (curSmsRecord[addIndex][1] == SMS_STATUS_UNSENT);
    }
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_1000
 * @tc.name     Example Change the SMS status from SIM_MESSAGE_STATUS_SENT to SIM_MESSAGE_STATUS_READ,
 *              Failed to update the SMS record of the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_UpdateSimMessage_1000, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    int nextIndex = 0;
    bool isSecond = false;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            if (isSecond) {
                nextIndex = i;
                break;
            } else {
                addIndex = i;
            }
            isSecond = true;
        }
    }
    if (nextIndex == 0) {
        nextIndex = addIndex;
    }
    bool isAddSms = false;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        if (!isAddSms) {
            isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
                SLOT_ID_1, smsc, pdu,
                OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
        } else {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_1, addIndex, 
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ, pdu, smsc);
    ASSERT_FALSE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = false;
    if (nextIndex == addIndex) {
        isThere = (curSmsRecord[addIndex] != INVALID_SMS_VALUES || !curSmsRecord[addIndex].empty());
    } else {
        isThere = (curSmsRecord[nextIndex] == INVALID_SMS_VALUES || curSmsRecord[nextIndex].empty());
    }
    if (curSmsRecord[addIndex] != INVALID_SMS_VALUES && !curSmsRecord[addIndex].empty()) {
        isThere = (curSmsRecord[addIndex][1] == SMS_STATUS_SENT);
    }
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_1100
 * @tc.name     Example Change the SMS status from SIM_MESSAGE_STATUS_SENT to SIM_MESSAGE_STATUS_UNREAD,
 *              Failed to update the SMS record of the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_UpdateSimMessage_1100, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    int nextIndex = 0;
    bool isSecond = false;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            if (isSecond) {
                nextIndex = i;
                break;
            } else {
                addIndex = i;
            }
            isSecond = true;
        }
    }
    if (nextIndex == 0) {
        nextIndex = addIndex;
    }
    bool isAddSms = false;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        if (!isAddSms) {
            isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
                SLOT_ID_1, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
        } else {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_1, addIndex, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD, pdu,
        smsc);
    ASSERT_FALSE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = false;
    if (nextIndex == addIndex) {
        isThere = (curSmsRecord[addIndex] != INVALID_SMS_VALUES || !curSmsRecord[addIndex].empty());
    } else {
        isThere = (curSmsRecord[nextIndex] == INVALID_SMS_VALUES || curSmsRecord[nextIndex].empty());
    }
    if (curSmsRecord[addIndex] != INVALID_SMS_VALUES && !curSmsRecord[addIndex].empty()) {
        isThere = (curSmsRecord[addIndex][1] == SMS_STATUS_SENT);
    }
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_1200
 * @tc.name     Example Change the SMS status from SIM_MESSAGE_STATUS_UNSENT to SIM_MESSAGE_STATUS_SENT,
 *              Update a SIM card SMS record.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_UpdateSimMessage_1200, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    int nextIndex = 0;
    bool isSecond = false;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            if (isSecond) {
                nextIndex = i;
                break;
            } else {
                addIndex = i;
            }
            isSecond = true;
        }
    }
    if (nextIndex == 0) {
        nextIndex = addIndex;
    }
    bool isAddSms = false;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        if (!isAddSms) {
            isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
                SLOT_ID_1, smsc, pdu,
                OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNSENT);
        } else {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_1, addIndex, 
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT, pdu, smsc);
    ASSERT_TRUE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = false;
    if (nextIndex == addIndex) {
        isThere = (curSmsRecord[addIndex] != INVALID_SMS_VALUES || !curSmsRecord[addIndex].empty());
    } else {
        isThere = (curSmsRecord[nextIndex] == INVALID_SMS_VALUES || curSmsRecord[nextIndex].empty());
    }
    if (curSmsRecord[addIndex] != INVALID_SMS_VALUES && !curSmsRecord[addIndex].empty()) {
        isThere = (curSmsRecord[addIndex][1] == SMS_STATUS_SENT);
    }
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_1300
 * @tc.name     Example Change the SMS status from SIM_MESSAGE_STATUS_UNSENT to SIM_MESSAGE_STATUS_READ,
 *              Failed to update the SMS record of the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_UpdateSimMessage_1300, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    int nextIndex = 0;
    bool isSecond = false;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            if (isSecond) {
                nextIndex = i;
                break;
            } else {
                addIndex = i;
            }
            isSecond = true;
        }
    }
    if (nextIndex == 0) {
        nextIndex = addIndex;
    }
    bool isAddSms = false;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        if (!isAddSms) {
            isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
                SLOT_ID_1, smsc, pdu,
                OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNSENT);
        } else {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_1, addIndex, 
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ, pdu, smsc);
    ASSERT_FALSE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = false;
    if (nextIndex == addIndex) {
        isThere = (curSmsRecord[addIndex] != INVALID_SMS_VALUES || !curSmsRecord[addIndex].empty());
    } else {
        isThere = (curSmsRecord[nextIndex] == INVALID_SMS_VALUES || curSmsRecord[nextIndex].empty());
    }
    if (curSmsRecord[addIndex] != INVALID_SMS_VALUES && !curSmsRecord[addIndex].empty()) {
        isThere = (curSmsRecord[addIndex][1] == SMS_STATUS_UNSENT);
    }
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_1400
 * @tc.name     Example Change the SMS status from SIM_MESSAGE_STATUS_UNSENT to SIM_MESSAGE_STATUS_UNREAD,
 *              Failed to update the SMS record of the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_UpdateSimMessage_1400, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    int nextIndex = 0;
    bool isSecond = false;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            if (isSecond) {
                nextIndex = i;
                break;
            } else {
                addIndex = i;
            }
            isSecond = true;
        }
    }
    if (nextIndex == 0) {
        nextIndex = addIndex;
    }
    bool isAddSms = false;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        if (!isAddSms) {
            isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
                SLOT_ID_1, smsc, pdu,
                OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNSENT);
        } else {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_1, addIndex, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD, pdu,
        smsc);
    ASSERT_FALSE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = false;
    if (nextIndex == addIndex) {
        isThere = (curSmsRecord[addIndex] != INVALID_SMS_VALUES || !curSmsRecord[addIndex].empty());
    } else {
        isThere = (curSmsRecord[nextIndex] == INVALID_SMS_VALUES || curSmsRecord[nextIndex].empty());
    }
    if (curSmsRecord[addIndex] != INVALID_SMS_VALUES && !curSmsRecord[addIndex].empty()) {
        isThere = (curSmsRecord[addIndex][1] == SMS_STATUS_UNSENT);
    }
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_1500
 * @tc.name     Set PDU to the correct value,Update a SIM card SMS record.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_UpdateSimMessage_1500, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    int nextIndex = 0;
    bool isSecond = false;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            if (isSecond) {
                nextIndex = i;
                break;
            } else {
                addIndex = i;
            }
            isSecond = true;
        }
    }
    if (nextIndex == 0) {
        nextIndex = addIndex;
    }
    bool isAddSms = false;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        if (!isAddSms) {
            isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
                SLOT_ID_1, smsc, pdu,
                OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
        } else {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    std::u16string newPdu = RECEIVE_OTHER_SMS_PDU;
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_1, addIndex, 
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ, newPdu, smsc);
    ASSERT_TRUE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = false;
    if (nextIndex == addIndex) {
        isThere = (curSmsRecord[addIndex] != INVALID_SMS_VALUES || !curSmsRecord[addIndex].empty());
    } else {
        isThere = (curSmsRecord[nextIndex] == INVALID_SMS_VALUES || curSmsRecord[nextIndex].empty());
    }
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_1600
 * @tc.name     Set the length of the PDU to exceed the maximum（176）,Update a SIM card SMS record.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_UpdateSimMessage_1600, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    int nextIndex = 0;
    bool isSecond = false;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            if (isSecond) {
                nextIndex = i;
                break;
            } else {
                addIndex = i;
            }
            isSecond = true;
        }
    }
    if (nextIndex == 0) {
        nextIndex = addIndex;
    }
    bool isAddSms = false;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        if (!isAddSms) {
            isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
                SLOT_ID_1, smsc, pdu,
                OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
        } else {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    int index = addIndex;
    std::u16string newPdu = BEYOND_MAX_PDU;
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_1, index, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT, newPdu,
        smsc);
    ASSERT_TRUE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = false;
    if (nextIndex == addIndex) {
        isThere = (curSmsRecord[addIndex] != INVALID_SMS_VALUES || !curSmsRecord[addIndex].empty());
    } else {
        isThere = (curSmsRecord[nextIndex] == INVALID_SMS_VALUES || curSmsRecord[nextIndex].empty());
    }
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_1700
 * @tc.name     Set the PDU to empty,Failed to update SIM card SMS record
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_UpdateSimMessage_1700, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    int nextIndex = 0;
    bool isSecond = false;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            if (isSecond) {
                nextIndex = i;
                break;
            } else {
                addIndex = i;
            }
            isSecond = true;
        }
    }
    if (nextIndex == 0) {
        nextIndex = addIndex;
    }
    bool isAddSms = false;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        if (!isAddSms) {
            isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
                SLOT_ID_1, smsc, pdu,
                OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD);
        } else {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    int index = addIndex;
    std::u16string newPdu = u"";
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_1, index, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD, newPdu,
        smsc);
    ASSERT_FALSE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = false;
    if (nextIndex == addIndex) {
        isThere = (curSmsRecord[addIndex] != INVALID_SMS_VALUES || !curSmsRecord[addIndex].empty());
    } else {
        isThere = (curSmsRecord[nextIndex] == INVALID_SMS_VALUES || curSmsRecord[nextIndex].empty());
    }
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_1800
 * @tc.name     Set the PDU to chinese,Failed to update SIM card SMS record
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_UpdateSimMessage_1800, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    int nextIndex = 0;
    bool isSecond = false;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            if (isSecond) {
                nextIndex = i;
                break;
            } else {
                addIndex = i;
            }
            isSecond = true;
        }
    }
    if (nextIndex == 0) {
        nextIndex = addIndex;
    }
    bool isAddSms = false;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        if (!isAddSms) {
            isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
                SLOT_ID_1, smsc, pdu,
                OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD);
        } else {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    int index = addIndex;
    std::u16string newPdu = u"这是一段用于测试的中文文本";
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_1, index, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD, newPdu,
        smsc);
    ASSERT_FALSE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = false;
    if (nextIndex == addIndex) {
        isThere = (curSmsRecord[addIndex] != INVALID_SMS_VALUES || !curSmsRecord[addIndex].empty());
    } else {
        isThere = (curSmsRecord[nextIndex] == INVALID_SMS_VALUES || curSmsRecord[nextIndex].empty());
    }
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_1900
 * @tc.name     Set the PDU to English,Failed to update SIM card SMS record
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_UpdateSimMessage_1900, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    int nextIndex = 0;
    bool isSecond = false;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            if (isSecond) {
                nextIndex = i;
                break;
            } else {
                addIndex = i;
            }
            isSecond = true;
        }
    }
    if (nextIndex == 0) {
        nextIndex = addIndex;
    }
    bool isAddSms = false;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        if (!isAddSms) {
            isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
                SLOT_ID_1, smsc, pdu,
                OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD);
        } else {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    int index = addIndex;
    std::u16string newPdu = u"This is an English text for the test";
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_1, index, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD, newPdu,
        smsc);
    ASSERT_FALSE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = false;
    if (nextIndex == addIndex) {
        isThere = (curSmsRecord[addIndex] != INVALID_SMS_VALUES || !curSmsRecord[addIndex].empty());
    } else {
        isThere = (curSmsRecord[nextIndex] == INVALID_SMS_VALUES || curSmsRecord[nextIndex].empty());
    }
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_2000
 * @tc.name     Set the PDU to figure,Failed to update SIM card SMS record
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_UpdateSimMessage_2000, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    int nextIndex = 0;
    bool isSecond = false;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            if (isSecond) {
                nextIndex = i;
                break;
            } else {
                addIndex = i;
            }
            isSecond = true;
        }
    }
    if (nextIndex == 0) {
        nextIndex = addIndex;
    }
    bool isAddSms = false;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        if (!isAddSms) {
            isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
                SLOT_ID_1, smsc, pdu,
                OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD);
        } else {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    int index = addIndex;
    std::u16string newPdu = u"123123123123123123123";
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_1, index, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD, newPdu,
        smsc);
    ASSERT_FALSE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = false;
    if (nextIndex == addIndex) {
        isThere = (curSmsRecord[addIndex] != INVALID_SMS_VALUES || !curSmsRecord[addIndex].empty());
    } else {
        isThere = (curSmsRecord[nextIndex] == INVALID_SMS_VALUES || curSmsRecord[nextIndex].empty());
    }
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_2100
 * @tc.name     Set the PDU to Special characters,Failed to update SIM card SMS record
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_UpdateSimMessage_2100, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    int nextIndex = 0;
    bool isSecond = false;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            if (isSecond) {
                nextIndex = i;
                break;
            } else {
                addIndex = i;
            }
            isSecond = true;
        }
    }
    if (nextIndex == 0) {
        nextIndex = addIndex;
    }
    bool isAddSms = false;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        if (!isAddSms) {
            isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
                SLOT_ID_1, smsc, pdu,
                OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD);
        } else {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    int index = addIndex;
    std::u16string newPdu = u"《》？*……%）（";
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_1, index, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD, newPdu,
        smsc);
    ASSERT_FALSE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = false;
    if (nextIndex == addIndex) {
        isThere = (curSmsRecord[addIndex] != INVALID_SMS_VALUES || !curSmsRecord[addIndex].empty());
    } else {
        isThere = (curSmsRecord[nextIndex] == INVALID_SMS_VALUES || curSmsRecord[nextIndex].empty());
    }
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_2200
 * @tc.name     Set the PDU to Mixed character,Failed to update SIM card SMS record
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_UpdateSimMessage_2200, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    int nextIndex = 0;
    bool isSecond = false;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            if (isSecond) {
                nextIndex = i;
                break;
            } else {
                addIndex = i;
            }
            isSecond = true;
        }
    }
    if (nextIndex == 0) {
        nextIndex = addIndex;
    }
    bool isAddSms = false;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        if (!isAddSms) {
            isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
                SLOT_ID_1, smsc, pdu,
                OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD);
        } else {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    int index = addIndex;
    std::u16string newPdu = u"《123zw中文?";
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_1, index, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD, newPdu,
        smsc);
    ASSERT_FALSE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = false;
    if (nextIndex == addIndex) {
        isThere = (curSmsRecord[addIndex] != INVALID_SMS_VALUES || !curSmsRecord[addIndex].empty());
    } else {
        isThere = (curSmsRecord[nextIndex] == INVALID_SMS_VALUES || curSmsRecord[nextIndex].empty());
    }
    ASSERT_TRUE(isThere);
}

