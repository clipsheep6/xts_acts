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
#define SMS_MMS_NETWORSEARCH_CDMA_TEST
#include "sms_manager_test.h"
#include "string_ex.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace Telephony;
using namespace OHOS::Telephony;
using namespace SmsMmsManagerTest;
using namespace OHOS::Telephony::SmsMmsManagerTest;

/**
 * @tc.number   Telephony_SmsMms_GetImsShortMessageFormat_0200
 * @tc.name     CDMA network system, Call the GetImsShortMessageFormat interface, view the results
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_GetImsShortMessageFormat_0200, Function | MediumTest | Level3)
{
    // CDMA
    std::u16string result = g_smsClientPtr->GetPtr()->GetImsShortMessageFormat();
    EXPECT_TRUE(Str16ToStr8(result) == "3gpp2");
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_CDMA_0100
 * @tc.name     CDMA network system, When SLOTID is the correct value,Save a text message to the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_AddSimMessage_CDMA_0100, Function | MediumTest | Level3)
{
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(curSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = curSmsRecord[0];
    std::string SmsPdu = (StringUtils::StringToHex(addMessages.GetPdu()));
    std::u16string originPdu = InterceptionPdu(StringUtils::ToUtf16(SmsPdu), PDU_LENGTH[CORRECT_SMS_PDU]);
    bool isAdd =
        (pdu == originPdu && PduDataMatch(addMessages) && addMessages.GetIccMessageStatus() ==
                               OHOS::Telephony::ShortMessage::SmsSimMessageStatus::SMS_SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(isAdd);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, addMessages.GetIndexOnSim());
    ASSERT_TRUE(isDel);
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_CDMA_0200
 * @tc.name     CDMA network system, When SLOTID is the wrong value,Failed to save SMS to SIM
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_AddSimMessage_CDMA_0200, Function | MediumTest | Level3)
{
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        ERROR_SLOT_ID, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_CDMA_0300
 * @tc.name     CDMA network system,
 *              Set the length of SMS service address "SMSC" exceeding the limit,Failed to save SMS to SIM
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_AddSimMessage_CDMA_0300, Function | MediumTest | Level3)
{
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"13800755500012222222";
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_FALSE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_TRUE(curSmsRecord.empty());
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_CDMA_0400
 * @tc.name     CDMA network system, Set the SMS center service address "SMSC" to Chinese,
 *              Save a text message to the SIM card,
 *              The saved SMS center service address will be overwritten by the default value
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_AddSimMessage_CDMA_0400, Function | MediumTest | Level3)
{
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"短信中心服务地址";
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(curSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = curSmsRecord[0];
    std::string SmsPdu = (StringUtils::StringToHex(addMessages.GetPdu()));
    std::u16string originPdu = InterceptionPdu(StringUtils::ToUtf16(SmsPdu), PDU_LENGTH[CORRECT_SMS_PDU]);
    bool isAdd =
        (pdu == originPdu && PduDataMatch(addMessages) && addMessages.GetIccMessageStatus() ==
                                 OHOS::Telephony::ShortMessage::SmsSimMessageStatus::SMS_SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(isAdd);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, addMessages.GetIndexOnSim());
    ASSERT_TRUE(isDel);
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_CDMA_0500
 * @tc.name     CDMA network system, Set the SMS center service address "SMSC" to English,Failed to save SMS to SIM
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_AddSimMessage_CDMA_0500, Function | MediumTest | Level3)
{
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"English";
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_FALSE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_TRUE(curSmsRecord.empty());
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_CDMA_0600
 * @tc.name     CDMA network system, Set the SMS center service address "SMSC" to Special characters,
 *              Save a text message to the SIM card,
 *              The saved SMS center service address will be overwritten by the default value
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_AddSimMessage_CDMA_0600, Function | MediumTest | Level3)
{
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"%&^*#！";
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(curSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = curSmsRecord[0];
    std::string SmsPdu = (StringUtils::StringToHex(addMessages.GetPdu()));
    std::u16string originPdu = InterceptionPdu(StringUtils::ToUtf16(SmsPdu), PDU_LENGTH[CORRECT_SMS_PDU]);
    bool isAdd =
        (pdu == originPdu && PduDataMatch(addMessages) && addMessages.GetIccMessageStatus() ==
                               OHOS::Telephony::ShortMessage::SmsSimMessageStatus::SMS_SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(isAdd);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, addMessages.GetIndexOnSim());
    ASSERT_TRUE(isDel);
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_CDMA_0700
 * @tc.name     CDMA network system,
 *              Set the SMS center service address "SMSC" to Mixed character,Failed to save SMS to SIM
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_AddSimMessage_CDMA_0700, Function | MediumTest | Level3)
{
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"gsSG**^$%#@短信中心123";
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_FALSE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_TRUE(curSmsRecord.empty());
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_CDMA_0800
 * @tc.name     CDMA network system, Set the PDU to empty,Failed to save SMS to SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_AddSimMessage_CDMA_0800, Function | MediumTest | Level3)
{
    std::u16string pdu = u"";
    std::u16string smsc = u"";
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_FALSE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_TRUE(curSmsRecord.empty());
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_CDMA_0900
 * @tc.name     CDMA network system, Set PDU to Chinese,Failed to save SMS to SIM
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_AddSimMessage_CDMA_0900, Function | MediumTest | Level3)
{
    std::u16string pdu = u"短信中心服务地址";
    std::u16string smsc = u"";
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_FALSE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_TRUE(curSmsRecord.empty());
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_CDMA_1000
 * @tc.name     CDMA network system, Set PDU to English,Failed to save SMS to SIM
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_AddSimMessage_CDMA_1000, Function | MediumTest | Level3)
{
    std::u16string pdu = u"scSA";
    std::u16string smsc = u"";
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_FALSE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_TRUE(curSmsRecord.empty());
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_CDMA_1100
 * @tc.name     CDMA network system, Set PDU to figure,Failed to save SMS to SIM
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_AddSimMessage_CDMA_1100, Function | MediumTest | Level3)
{
    std::u16string pdu = u"1233";
    std::u16string smsc = u"";
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_FALSE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_TRUE(curSmsRecord.empty());
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_CDMA_1200
 * @tc.name     CDMA network system, Set PDU to Special characters,Failed to save SMS to SIM
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_AddSimMessage_CDMA_1200, Function | MediumTest | Level3)
{
    std::u16string pdu = u"*&^%$#@!";
    std::u16string smsc = u"";
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_FALSE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_TRUE(curSmsRecord.empty());
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_CDMA_1300
 * @tc.name     CDMA network system, Set PDU to Mixed character,Failed to save SMS to SIM
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_AddSimMessage_CDMA_1300, Function | MediumTest | Level3)
{
    std::u16string pdu = u"23xsGJ张三*&^%$#@!";
    std::u16string smsc = u"";
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_FALSE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_TRUE(curSmsRecord.empty());
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_CDMA_1400
 * @tc.name     CDMA network system, When status is equal to the correct value of SIM_MESSAGE_STATUS_READ,
 *              Save a text message to the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_AddSimMessage_CDMA_1400, Function | MediumTest | Level3)
{
    std::u16string pdu = RECEIVE_OTHER_SMS_PDU;
    std::u16string smsc = u"";
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
    ASSERT_TRUE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(curSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = curSmsRecord[0];
    std::string SmsPdu = (StringUtils::StringToHex(addMessages.GetPdu()));
    std::u16string originPdu = InterceptionPdu(StringUtils::ToUtf16(SmsPdu), PDU_LENGTH[RECEIVE_OTHER_SMS_PDU]);
    bool isAdd =
        (pdu == originPdu && ReceivePduDataMatch(addMessages) && addMessages.GetIccMessageStatus() ==
                               OHOS::Telephony::ShortMessage::SmsSimMessageStatus::SMS_SIM_MESSAGE_STATUS_READ);
    ASSERT_TRUE(isAdd);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, addMessages.GetIndexOnSim());
    ASSERT_TRUE(isDel);
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_CDMA_1500
 * @tc.name     CDMA network system, When status is equal to the correct value of SIM_MESSAGE_STATUS_UNREAD,
 *              Save a text message to the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_AddSimMessage_CDMA_1500, Function | MediumTest | Level3)
{
    std::u16string pdu = RECEIVE_OTHER_SMS_PDU;
    std::u16string smsc = u"";
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD);
    ASSERT_TRUE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(curSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = curSmsRecord[0];
    std::string SmsPdu = (StringUtils::StringToHex(addMessages.GetPdu()));
    std::u16string originPdu = InterceptionPdu(StringUtils::ToUtf16(SmsPdu), PDU_LENGTH[RECEIVE_OTHER_SMS_PDU]);
    bool isAdd =
        (pdu == originPdu && ReceivePduDataMatch(addMessages) && addMessages.GetIccMessageStatus() ==
                               OHOS::Telephony::ShortMessage::SmsSimMessageStatus::SMS_SIM_MESSAGE_STATUS_UNREAD);
    ASSERT_TRUE(isAdd);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, addMessages.GetIndexOnSim());
    ASSERT_TRUE(isDel);
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_CDMA_1600
 * @tc.name     CDMA network system, When status is equal to the correct value of SIM_MESSAGE_STATUS_UNSENT,
 *              Save a text message to the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_AddSimMessage_CDMA_1600, Function | MediumTest | Level3)
{
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNSENT);
    ASSERT_TRUE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(curSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = curSmsRecord[0];
    std::string SmsPdu = (StringUtils::StringToHex(addMessages.GetPdu()));
    std::u16string originPdu = InterceptionPdu(StringUtils::ToUtf16(SmsPdu), PDU_LENGTH[CORRECT_SMS_PDU]);
    bool isAdd =
        (pdu == originPdu && PduDataMatch(addMessages) && addMessages.GetIccMessageStatus() ==
                               OHOS::Telephony::ShortMessage::SmsSimMessageStatus::SMS_SIM_MESSAGE_STATUS_UNSENT);
    ASSERT_TRUE(isAdd);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, addMessages.GetIndexOnSim());
    ASSERT_TRUE(isDel);
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_CDMA_1700
 * @tc.name     CDMA network system, Example Set the SMS status to SIM_MESSAGE_STATUS_UNSENT,
 *              pdu is data of the received type,Failed to save SMS to SIM
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_AddSimMessage_CDMA_1700, Function | MediumTest | Level3)
{
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNSENT);
    ASSERT_FALSE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_TRUE(curSmsRecord.empty());
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_CDMA_1800
 * @tc.name     CDMA network system,
 *              Set the SMS status to SIM_MESSAGE_STATUS_UNREAD and PDU to pdu data of the sent type
 *              Failed to save SMS to SIM
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_AddSimMessage_CDMA_1800, Function | MediumTest | Level3)
{
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD);
    ASSERT_FALSE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_TRUE(curSmsRecord.empty());
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_CDMA_0100
 * @tc.name     CDMA network system, When SLOTID is the wrong value,Failed to update SIM card SMS record
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_UpdateSimMessage_CDMA_0100, Function | MediumTest | Level3)
{
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    int index = 0;
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        ERROR_SLOT_ID, index, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNSENT, pdu,
        smsc);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_CDMA_0200
 * @tc.name     CDMA network system,
 *              Example Change the SMS status from SIM_MESSAGE_STATUS_READ to SIM_MESSAGE_STATUS_UNREAD,
 *              Update a SIM card SMS record.
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_UpdateSimMessage_CDMA_0200, Function | MediumTest | Level3)
{
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    bool isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
    ASSERT_TRUE(isAddSms);
    std::vector<OHOS::Telephony::ShortMessage> beforSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(beforSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = beforSmsRecord[0];
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_0, addMessages.GetIndexOnSim(),
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD, pdu, smsc);
    ASSERT_TRUE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(curSmsRecord.empty());
    OHOS::Telephony::ShortMessage updataMessages = curSmsRecord[0];
    bool isUpdata = (updataMessages.GetIccMessageStatus() ==
                     OHOS::Telephony::ShortMessage::SmsSimMessageStatus::SMS_SIM_MESSAGE_STATUS_UNREAD);
    ASSERT_TRUE(isUpdata);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, updataMessages.GetIndexOnSim());
    ASSERT_TRUE(isDel);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_CDMA_0300
 * @tc.name     CDMA network system,
 *              Example Change the SMS status from SIM_MESSAGE_STATUS_READ to SIM_MESSAGE_STATUS_SENT,
 *              Failed to update the SMS record of the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_UpdateSimMessage_CDMA_0300, Function | MediumTest | Level3)
{
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    bool isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
    ASSERT_TRUE(isAddSms);
    std::vector<OHOS::Telephony::ShortMessage> beforSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(beforSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = beforSmsRecord[0];
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_0, addMessages.GetIndexOnSim(),
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT, pdu, smsc);
    ASSERT_FALSE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(curSmsRecord.empty());
    OHOS::Telephony::ShortMessage updataMessages = curSmsRecord[0];
    bool isUpdata = (updataMessages.GetIccMessageStatus() ==
                     OHOS::Telephony::ShortMessage::SmsSimMessageStatus::SMS_SIM_MESSAGE_STATUS_READ);
    ASSERT_TRUE(isUpdata);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, updataMessages.GetIndexOnSim());
    ASSERT_TRUE(isDel);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_CDMA_0400
 * @tc.name     CDMA network system,
 *              Example Change the SMS status from SIM_MESSAGE_STATUS_READ to SIM_MESSAGE_STATUS_UNSENT,
 *              Failed to update the SMS record of the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_UpdateSimMessage_CDMA_0400, Function | MediumTest | Level3)
{
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    bool isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
    ASSERT_TRUE(isAddSms);
    std::vector<OHOS::Telephony::ShortMessage> beforSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(beforSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = beforSmsRecord[0];
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_0, addMessages.GetIndexOnSim(),
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNSENT, pdu, smsc);
    ASSERT_FALSE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(curSmsRecord.empty());
    OHOS::Telephony::ShortMessage updataMessages = curSmsRecord[0];
    bool isUpdata = (updataMessages.GetIccMessageStatus() ==
                     OHOS::Telephony::ShortMessage::SmsSimMessageStatus::SMS_SIM_MESSAGE_STATUS_READ);
    ASSERT_TRUE(isUpdata);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, updataMessages.GetIndexOnSim());
    ASSERT_TRUE(isDel);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_CDMA_0500
 * @tc.name     CDMA network system,
 *              Example Change the SMS status from SIM_MESSAGE_STATUS_UNREAD to SIM_MESSAGE_STATUS_READ,
 *              Update a SIM card SMS record.
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_UpdateSimMessage_CDMA_0500, Function | MediumTest | Level3)
{
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    bool isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD);
    ASSERT_TRUE(isAddSms);
    std::vector<OHOS::Telephony::ShortMessage> beforSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(beforSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = beforSmsRecord[0];
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_0, addMessages.GetIndexOnSim(),
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ, pdu, smsc);
    ASSERT_TRUE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(curSmsRecord.empty());
    OHOS::Telephony::ShortMessage updataMessages = curSmsRecord[0];
    bool isUpdata = (updataMessages.GetIccMessageStatus() ==
                     OHOS::Telephony::ShortMessage::SmsSimMessageStatus::SMS_SIM_MESSAGE_STATUS_READ);
    ASSERT_TRUE(isUpdata);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, updataMessages.GetIndexOnSim());
    ASSERT_TRUE(isDel);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_CDMA_0600
 * @tc.name     CDMA network system,
 *              Example Change the SMS status from SIM_MESSAGE_STATUS_UNREAD to SIM_MESSAGE_STATUS_SENT,
 *              Failed to update the SMS record of the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_UpdateSimMessage_CDMA_0600, Function | MediumTest | Level3)
{
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    bool isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD);
    ASSERT_TRUE(isAddSms);
    std::vector<OHOS::Telephony::ShortMessage> beforSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(beforSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = beforSmsRecord[0];
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_0, addMessages.GetIndexOnSim(),
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT, pdu, smsc);
    ASSERT_FALSE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(curSmsRecord.empty());
    OHOS::Telephony::ShortMessage updataMessages = curSmsRecord[0];
    bool isUpdata = (updataMessages.GetIccMessageStatus() ==
                     OHOS::Telephony::ShortMessage::SmsSimMessageStatus::SMS_SIM_MESSAGE_STATUS_UNREAD);
    ASSERT_TRUE(isUpdata);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, updataMessages.GetIndexOnSim());
    ASSERT_TRUE(isDel);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_CDMA_0700
 * @tc.name     CDMA network system,
 *              Example Change the SMS status from SIM_MESSAGE_STATUS_UNREAD to SIM_MESSAGE_STATUS_UNSENT,
 *              Failed to update the SMS record of the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_UpdateSimMessage_CDMA_0700, Function | MediumTest | Level3)
{
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    bool isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD);
    ASSERT_TRUE(isAddSms);
    std::vector<OHOS::Telephony::ShortMessage> beforSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(beforSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = beforSmsRecord[0];
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_0, addMessages.GetIndexOnSim(),
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNSENT, pdu, smsc);
    ASSERT_FALSE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(curSmsRecord.empty());
    OHOS::Telephony::ShortMessage updataMessages = curSmsRecord[0];
    bool isUpdata = (updataMessages.GetIccMessageStatus() ==
                     OHOS::Telephony::ShortMessage::SmsSimMessageStatus::SMS_SIM_MESSAGE_STATUS_UNREAD);
    ASSERT_TRUE(isUpdata);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, updataMessages.GetIndexOnSim());
    ASSERT_TRUE(isDel);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_CDMA_0800
 * @tc.name     CDMA network system,
 *              Example Change the SMS status from SIM_MESSAGE_STATUS_SENT to SIM_MESSAGE_STATUS_UNSENT,
 *              Update a SIM card SMS record.
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_UpdateSimMessage_CDMA_0800, Function | MediumTest | Level3)
{
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    bool isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(isAddSms);
    std::vector<OHOS::Telephony::ShortMessage> beforSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(beforSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = beforSmsRecord[0];
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_0, addMessages.GetIndexOnSim(),
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNSENT, pdu, smsc);
    ASSERT_TRUE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(curSmsRecord.empty());
    OHOS::Telephony::ShortMessage updataMessages = curSmsRecord[0];
    bool isUpdata = (updataMessages.GetIccMessageStatus() ==
                     OHOS::Telephony::ShortMessage::SmsSimMessageStatus::SMS_SIM_MESSAGE_STATUS_UNSENT);
    ASSERT_TRUE(isUpdata);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, updataMessages.GetIndexOnSim());
    ASSERT_TRUE(isDel);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_CDMA_0900
 * @tc.name     CDMA network system,
 *              Example Change the SMS status from SIM_MESSAGE_STATUS_SENT to SIM_MESSAGE_STATUS_READ,
 *              Failed to update the SMS record of the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_UpdateSimMessage_CDMA_0900, Function | MediumTest | Level3)
{
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    bool isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(isAddSms);
    std::vector<OHOS::Telephony::ShortMessage> beforSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(beforSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = beforSmsRecord[0];
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_0, addMessages.GetIndexOnSim(),
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ, pdu, smsc);
    ASSERT_FALSE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(curSmsRecord.empty());
    OHOS::Telephony::ShortMessage updataMessages = curSmsRecord[0];
    bool isUpdata = (updataMessages.GetIccMessageStatus() ==
                     OHOS::Telephony::ShortMessage::SmsSimMessageStatus::SMS_SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(isUpdata);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, updataMessages.GetIndexOnSim());
    ASSERT_TRUE(isDel);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_CDMA_1000
 * @tc.name     CDMA network system,
 *              Example Change the SMS status from SIM_MESSAGE_STATUS_SENT to SIM_MESSAGE_STATUS_UNREAD,
 *              Failed to update the SMS record of the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_UpdateSimMessage_CDMA_1000, Function | MediumTest | Level3)
{
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    bool isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(isAddSms);
    std::vector<OHOS::Telephony::ShortMessage> beforSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(beforSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = beforSmsRecord[0];
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_0, addMessages.GetIndexOnSim(),
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD, pdu, smsc);
    ASSERT_FALSE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(curSmsRecord.empty());
    OHOS::Telephony::ShortMessage updataMessages = curSmsRecord[0];
    bool isUpdata = (updataMessages.GetIccMessageStatus() ==
                     OHOS::Telephony::ShortMessage::SmsSimMessageStatus::SMS_SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(isUpdata);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, updataMessages.GetIndexOnSim());
    ASSERT_TRUE(isDel);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_CDMA_1100
 * @tc.name     CDMA network system,
 *              Example Change the SMS status from SIM_MESSAGE_STATUS_UNSENT to SIM_MESSAGE_STATUS_SENT,
 *              Update a SIM card SMS record.
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_UpdateSimMessage_CDMA_1100, Function | MediumTest | Level3)
{
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    bool isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNSENT);
    ASSERT_TRUE(isAddSms);
    std::vector<OHOS::Telephony::ShortMessage> beforSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(beforSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = beforSmsRecord[0];
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_0, addMessages.GetIndexOnSim(),
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT, pdu, smsc);
    ASSERT_TRUE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(curSmsRecord.empty());
    OHOS::Telephony::ShortMessage updataMessages = curSmsRecord[0];
    bool isUpdata = (updataMessages.GetIccMessageStatus() ==
                     OHOS::Telephony::ShortMessage::SmsSimMessageStatus::SMS_SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(isUpdata);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, updataMessages.GetIndexOnSim());
    ASSERT_TRUE(isDel);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_CDMA_1200
 * @tc.name     CDMA network system,
 *              Example Change the SMS status from SIM_MESSAGE_STATUS_UNSENT to SIM_MESSAGE_STATUS_READ,
 *              Failed to update the SMS record of the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_UpdateSimMessage_CDMA_1200, Function | MediumTest | Level3)
{
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    bool isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNSENT);
    ASSERT_TRUE(isAddSms);
    std::vector<OHOS::Telephony::ShortMessage> beforSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(beforSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = beforSmsRecord[0];
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_0, addMessages.GetIndexOnSim(),
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ, pdu, smsc);
    ASSERT_FALSE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(curSmsRecord.empty());
    OHOS::Telephony::ShortMessage updataMessages = curSmsRecord[0];
    bool isUpdata = (updataMessages.GetIccMessageStatus() ==
                     OHOS::Telephony::ShortMessage::SmsSimMessageStatus::SMS_SIM_MESSAGE_STATUS_UNSENT);
    ASSERT_TRUE(isUpdata);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, updataMessages.GetIndexOnSim());
    ASSERT_TRUE(isDel);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_CDMA_1300
 * @tc.name     CDMA network system,
 *              Example Change the SMS status from SIM_MESSAGE_STATUS_UNSENT to SIM_MESSAGE_STATUS_UNREAD,
 *              Failed to update the SMS record of the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_UpdateSimMessage_CDMA_1300, Function | MediumTest | Level3)
{
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    bool isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNSENT);
    ASSERT_TRUE(isAddSms);
    std::vector<OHOS::Telephony::ShortMessage> beforSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(beforSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = beforSmsRecord[0];
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_0, addMessages.GetIndexOnSim(),
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD, pdu, smsc);
    ASSERT_FALSE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(curSmsRecord.empty());
    OHOS::Telephony::ShortMessage updataMessages = curSmsRecord[0];
    bool isUpdata = (updataMessages.GetIccMessageStatus() ==
                     OHOS::Telephony::ShortMessage::SmsSimMessageStatus::SMS_SIM_MESSAGE_STATUS_UNSENT);
    ASSERT_TRUE(isUpdata);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, updataMessages.GetIndexOnSim());
    ASSERT_TRUE(isDel);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_CDMA_1400
 * @tc.name     CDMA network system, Set the PDU to empty,Failed to update SIM card SMS record
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_UpdateSimMessage_CDMA_1400, Function | MediumTest | Level3)
{
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    bool isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(isAddSms);
    std::vector<OHOS::Telephony::ShortMessage> beforSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(beforSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = beforSmsRecord[0];
    std::u16string newPdu = u"";
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_0, addMessages.GetIndexOnSim(),
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT, newPdu, smsc);
    ASSERT_FALSE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(curSmsRecord.empty());
    OHOS::Telephony::ShortMessage updataMessages = curSmsRecord[0];
    std::string SmsPdu = (StringUtils::StringToHex(updataMessages.GetPdu()));
    std::u16string originPdu = InterceptionPdu(StringUtils::ToUtf16(SmsPdu), PDU_LENGTH[CORRECT_SMS_PDU]);
    ASSERT_TRUE(originPdu == pdu);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, updataMessages.GetIndexOnSim());
    ASSERT_TRUE(isDel);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_CDMA_1500
 * @tc.name     CDMA network system, Set the PDU to chinese,Failed to update SIM card SMS record
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_UpdateSimMessage_CDMA_1500, Function | MediumTest | Level3)
{
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    bool isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(isAddSms);
    std::vector<OHOS::Telephony::ShortMessage> beforSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(beforSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = beforSmsRecord[0];
    std::u16string newPdu = u"这是一段用于测试的中文文本";
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_0, addMessages.GetIndexOnSim(),
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT, newPdu, smsc);
    ASSERT_FALSE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(curSmsRecord.empty());
    OHOS::Telephony::ShortMessage updataMessages = curSmsRecord[0];
    std::string SmsPdu = (StringUtils::StringToHex(updataMessages.GetPdu()));
    std::u16string originPdu = InterceptionPdu(StringUtils::ToUtf16(SmsPdu), PDU_LENGTH[CORRECT_SMS_PDU]);
    ASSERT_TRUE(originPdu == pdu);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, updataMessages.GetIndexOnSim());
    ASSERT_TRUE(isDel);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_CDMA_1600
 * @tc.name     CDMA network system, Set the PDU to English,Failed to update SIM card SMS record
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_UpdateSimMessage_CDMA_1600, Function | MediumTest | Level3)
{
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    bool isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(isAddSms);
    std::vector<OHOS::Telephony::ShortMessage> beforSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(beforSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = beforSmsRecord[0];
    std::u16string newPdu = u"This is an English text for the test";
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_0, addMessages.GetIndexOnSim(),
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT, newPdu, smsc);
    ASSERT_FALSE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(curSmsRecord.empty());
    OHOS::Telephony::ShortMessage updataMessages = curSmsRecord[0];
    std::string SmsPdu = (StringUtils::StringToHex(updataMessages.GetPdu()));
    std::u16string originPdu = InterceptionPdu(StringUtils::ToUtf16(SmsPdu), PDU_LENGTH[CORRECT_SMS_PDU]);
    ASSERT_TRUE(originPdu == pdu);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, updataMessages.GetIndexOnSim());
    ASSERT_TRUE(isDel);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_CDMA_1700
 * @tc.name     CDMA network system, Set the PDU to figure,Failed to update SIM card SMS record
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_UpdateSimMessage_CDMA_1700, Function | MediumTest | Level3)
{
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    bool isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(isAddSms);
    std::vector<OHOS::Telephony::ShortMessage> beforSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(beforSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = beforSmsRecord[0];
    std::u16string newPdu = u"123123123123123123123";
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_0, addMessages.GetIndexOnSim(),
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT, newPdu, smsc);
    ASSERT_FALSE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(curSmsRecord.empty());
    OHOS::Telephony::ShortMessage updataMessages = curSmsRecord[0];
    std::string SmsPdu = (StringUtils::StringToHex(updataMessages.GetPdu()));
    std::u16string originPdu = InterceptionPdu(StringUtils::ToUtf16(SmsPdu), PDU_LENGTH[CORRECT_SMS_PDU]);
    ASSERT_TRUE(originPdu == pdu);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, updataMessages.GetIndexOnSim());
    ASSERT_TRUE(isDel);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_CDMA_1800
 * @tc.name     CDMA network system, Set the PDU to Special characters,Failed to update SIM card SMS record
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_UpdateSimMessage_CDMA_1800, Function | MediumTest | Level3)
{
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    bool isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(isAddSms);
    std::vector<OHOS::Telephony::ShortMessage> beforSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(beforSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = beforSmsRecord[0];
    std::u16string newPdu = u"《》？*……%）（";
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_0, addMessages.GetIndexOnSim(),
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT, newPdu, smsc);
    ASSERT_FALSE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(curSmsRecord.empty());
    OHOS::Telephony::ShortMessage updataMessages = curSmsRecord[0];
    std::string SmsPdu = (StringUtils::StringToHex(updataMessages.GetPdu()));
    std::u16string originPdu = InterceptionPdu(StringUtils::ToUtf16(SmsPdu), PDU_LENGTH[CORRECT_SMS_PDU]);
    ASSERT_TRUE(originPdu == pdu);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, updataMessages.GetIndexOnSim());
    ASSERT_TRUE(isDel);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_CDMA_1900
 * @tc.name     CDMA network system, Set the PDU to Mixed character,Failed to update SIM card SMS record
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_UpdateSimMessage_CDMA_1900, Function | MediumTest | Level3)
{
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    bool isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(isAddSms);
    std::vector<OHOS::Telephony::ShortMessage> beforSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(beforSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = beforSmsRecord[0];
    std::u16string newPdu = u"《123zw中文?";
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_0, addMessages.GetIndexOnSim(),
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT, newPdu, smsc);
    ASSERT_FALSE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(curSmsRecord.empty());
    OHOS::Telephony::ShortMessage updataMessages = curSmsRecord[0];
    std::string SmsPdu = (StringUtils::StringToHex(updataMessages.GetPdu()));
    std::u16string originPdu = InterceptionPdu(StringUtils::ToUtf16(SmsPdu), PDU_LENGTH[CORRECT_SMS_PDU]);
    ASSERT_TRUE(originPdu == pdu);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, updataMessages.GetIndexOnSim());
    ASSERT_TRUE(isDel);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_CDMA_2000
 * @tc.name     CDMA network system, Example Update a PDU of the sent type to a PDU of the received type,
 *              Failed to update SIM card SMS record
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_UpdateSimMessage_CDMA_2000, Function | MediumTest | Level3)
{
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    bool isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(isAddSms);
    std::vector<OHOS::Telephony::ShortMessage> beforSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(beforSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = beforSmsRecord[0];
    std::u16string newPdu = RECEIVE_SMS_PDU;
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_0, addMessages.GetIndexOnSim(),
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT, newPdu, smsc);
    ASSERT_FALSE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(curSmsRecord.empty());
    OHOS::Telephony::ShortMessage updataMessages = curSmsRecord[0];
    std::string SmsPdu = (StringUtils::StringToHex(updataMessages.GetPdu()));
    std::u16string originPdu = InterceptionPdu(StringUtils::ToUtf16(SmsPdu), PDU_LENGTH[CORRECT_SMS_PDU]);
    ASSERT_TRUE(originPdu == pdu);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, updataMessages.GetIndexOnSim());
    ASSERT_TRUE(isDel);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_CDMA_2100
 * @tc.name     CDMA network system, Example Update the received PDU to the sent PDU,
 *              Failed to update SIM card SMS record
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_UpdateSimMessage_CDMA_2100, Function | MediumTest | Level3)
{
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    bool isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
    ASSERT_TRUE(isAddSms);
    std::vector<OHOS::Telephony::ShortMessage> beforSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(beforSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = beforSmsRecord[0];
    std::u16string newPdu = CORRECT_SMS_PDU;
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_0, addMessages.GetIndexOnSim(),
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ, newPdu, smsc);
    ASSERT_FALSE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(curSmsRecord.empty());
    OHOS::Telephony::ShortMessage updataMessages = curSmsRecord[0];
    std::string SmsPdu = (StringUtils::StringToHex(updataMessages.GetPdu()));
    std::u16string originPdu = InterceptionPdu(StringUtils::ToUtf16(SmsPdu), PDU_LENGTH[RECEIVE_SMS_PDU]);
    ASSERT_TRUE(originPdu == pdu);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, updataMessages.GetIndexOnSim());
    ASSERT_TRUE(isDel);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_CDMA_2200
 * @tc.name     CDMA network system, Update the sent PDU to another PDU of the same type.
 *              The SIM card SMS message is updated successfully
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_UpdateSimMessage_CDMA_2200, Function | MediumTest | Level3)
{
    std::u16string pdu = OTHER_SMS_PDU;
    std::u16string smsc = u"";
    bool isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(isAddSms);
    std::vector<OHOS::Telephony::ShortMessage> beforSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(beforSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = beforSmsRecord[0];
    std::u16string newPdu = CORRECT_SMS_PDU;
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_0, addMessages.GetIndexOnSim(),
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT, newPdu, smsc);
    ASSERT_TRUE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(curSmsRecord.empty());
    OHOS::Telephony::ShortMessage updataMessages = curSmsRecord[0];
    std::string SmsPdu = (StringUtils::StringToHex(updataMessages.GetPdu()));
    std::u16string originPdu = InterceptionPdu(StringUtils::ToUtf16(SmsPdu), PDU_LENGTH[CORRECT_SMS_PDU]);
    ASSERT_TRUE(originPdu == newPdu);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, updataMessages.GetIndexOnSim());
    ASSERT_TRUE(isDel);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_CDMA_2300
 * @tc.name     CDMA network system, Update the received PDU to another PDU of the same type.
 *              The SIM card SMS message is updated successfully
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_UpdateSimMessage_CDMA_2300, Function | MediumTest | Level3)
{
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    bool isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
    ASSERT_TRUE(isAddSms);
    std::vector<OHOS::Telephony::ShortMessage> beforSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(beforSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = beforSmsRecord[0];
    std::u16string newPdu = RECEIVE_OTHER_SMS_PDU;
    bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
        SLOT_ID_0, addMessages.GetIndexOnSim(),
        OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ, newPdu, smsc);
    ASSERT_TRUE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(curSmsRecord.empty());
    OHOS::Telephony::ShortMessage updataMessages = curSmsRecord[0];
    std::string SmsPdu = (StringUtils::StringToHex(updataMessages.GetPdu()));
    std::u16string originPdu = InterceptionPdu(StringUtils::ToUtf16(SmsPdu), PDU_LENGTH[RECEIVE_OTHER_SMS_PDU]);
    ASSERT_TRUE(originPdu == newPdu);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, updataMessages.GetIndexOnSim());
    ASSERT_TRUE(isDel);
}


/**
 * @tc.number   Telephony_SmsMms_DelSimMessage_CDMA_0100
 * @tc.name     CDMA network system, When SLOTID is the correct value,Deletes a text message from the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_DelSimMessage_CDMA_0100, Function | MediumTest | Level3)
{
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    bool isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(isAddSms);
    std::vector<OHOS::Telephony::ShortMessage> beforSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(beforSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = beforSmsRecord[0];
    bool result = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, addMessages.GetIndexOnSim());
    ASSERT_TRUE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_TRUE(curSmsRecord.empty());
}

/**
 * @tc.number   Telephony_SmsMms_DelSimMessage_CDMA_0200
 * @tc.name     CDMA network system, When SLOTID is the wrong value,Deletes a text message from the SIM card fail
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_DelSimMessage_CDMA_0200, Function | MediumTest | Level3)
{
    bool result = g_smsClientPtr->GetPtr()->DelSimMessage(ERROR_SLOT_ID, 0);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_SmsMms_DelSimMessage_CDMA_0300
 * @tc.name     CDMA network system,
 *              When the value corresponding to msgIndex is invalid,Deletes a text message from the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_DelSimMessage_CDMA_0300, Function | MediumTest | Level3)
{
    bool result = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, 0);
    ASSERT_TRUE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_TRUE(curSmsRecord.empty());
}

/**
 * @tc.number   Telephony_SmsMms_DelSimMessage_CDMA_0400
 * @tc.name     CDMA network system,
 *              When the value corresponding to msgIndex is invalid,Deletes a text message from the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_DelSimMessage_CDMA_0400, Function | MediumTest | Level3)
{
    uint32_t addIndex = UINT32_MAX;
    bool result = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, addIndex);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_SmsMms_GetAllSimMessages_CDMA_0100
 * @tc.name     CDMA network system, When SLOTID is the correct value,Query all SMS records of the SIM card.
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_GetAllSimMessages_CDMA_0100, Function | MediumTest | Level3)
{
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(result);
    std::vector<OHOS::Telephony::ShortMessage> addSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(addSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = addSmsRecord[0];
    std::string getPdu = (StringUtils::StringToHex(addMessages.GetPdu()));
    std::u16string originPdu = InterceptionPdu(StringUtils::ToUtf16(getPdu), PDU_LENGTH[CORRECT_SMS_PDU]);
    bool isAdd =
        (originPdu == pdu && addMessages.GetIccMessageStatus() ==
                               OHOS::Telephony::ShortMessage::SmsSimMessageStatus::SMS_SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(isAdd);
    bool isDelete = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, addMessages.GetIndexOnSim());
    ASSERT_TRUE(isDelete);
    std::vector<OHOS::Telephony::ShortMessage> delSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_TRUE(delSmsRecord.empty());
}

/**
 * @tc.number   Telephony_SmsMms_GetAllSimMessages_CDMA_0200
 * @tc.name     CDMA network system, When "SLOTID" is an error value,Failed to query all SMS records for SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_GetAllSimMessages_CDMA_0200, Function | MediumTest | Level3)
{
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord =
        g_smsClientPtr->GetPtr()->GetAllSimMessages(ERROR_SLOT_ID);
    ASSERT_TRUE(curSmsRecord.empty());
}
