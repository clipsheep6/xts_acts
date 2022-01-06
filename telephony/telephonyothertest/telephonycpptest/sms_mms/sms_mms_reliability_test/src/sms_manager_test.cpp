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
#include "delivery_short_message_callback_stub.h"
#include "string_ex.h"
#include "condition_lock.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace Telephony;
using namespace OHOS::Telephony::SmsManager;
using namespace SmsManager;
using namespace SendCallback;
using namespace DeliveryShortback;

/**
 * @tc.number   Telephony_SmsMms_SendMessageData_1200
 * @tc.name     send data stability test,Loop calls LOOP_NUMBER times
 * @tc.desc     Reliability test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageData_1200, Reliability | MediumTest | Level3)
{
    LOG("> ---------- send data stability test LOOP_NUMBER");
    int32_t cardId = 1;
    std::string dest(SMS_SEND_DST_NUMBER);
    std::string sca("");
    uint16_t port = 0x00;
    uint8_t data[] = "hello world";

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    for (int i = 0; i < LOOP_NUMBER; ++i) {
        g_smsClientPtr->GetPtr()->SendMessage(cardId, OHOS::Telephony::StringUtils::ToUtf16(dest),
                                              OHOS::Telephony::StringUtils::ToUtf16(sca), port, data,
                                              sizeof(data) / sizeof(data[0]), sendCallBackPtr, deliveryCallBackPtr);

        LOCK_NUM_WHILE_NE((sendCallBackPtr->GetSendCallbackResult() || deliveryCallBackPtr->GetDeliverybackResult()),
                      true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
        bool isCallback = (SendCallback::res == SendCallback::CALLBACK_SUCCESSFUL ||
                       DeliveryShortback::res == DeliveryShortback::CALLBACK_SUCCESSFUL);
        EXPECT_TRUE(isCallback);
    }
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageText_1200
 * @tc.name     send text stability test,Loop calls LOOP_NUMBER times
 * @tc.desc     Reliability test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_1200, Reliability | MediumTest | Level3)
{
    LOG("> ---------- send text stability test LOOP_NUMBER");
    int32_t cardId = 1;
    std::string dest(SMS_SEND_DST_NUMBER);
    std::string sca("");
    std::string text(MAX_USER_DATA_LEN - 1, 't');

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    for (int i = 0; i < LOOP_NUMBER; ++i) {
        g_smsClientPtr->GetPtr()->SendMessage(
            cardId, OHOS::Telephony::StringUtils::ToUtf16(dest), OHOS::Telephony::StringUtils::ToUtf16(sca),
            OHOS::Telephony::StringUtils::ToUtf16(text), sendCallBackPtr, deliveryCallBackPtr);

        LOCK_NUM_WHILE_NE((sendCallBackPtr->GetSendCallbackResult() || deliveryCallBackPtr->GetDeliverybackResult()),
                            true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
        bool isCallback = (SendCallback::res == SendCallback::CALLBACK_SUCCESSFUL ||
                            DeliveryShortback::res == DeliveryShortback::CALLBACK_SUCCESSFUL);
        EXPECT_TRUE(isCallback);
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetVisibleMessageBody_0200
 * @tc.name     Get Visible Message Body ,Loop calls LOOP_NUMBER times
 * @tc.desc     Reliability test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetVisibleMessageBody_0200, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        std::u16string result = g_message->GetVisibleMessageBody();
        ASSERT_EQ(result, g_messageSmsData.visibleMessageBody);
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetVisibleRawAddress_0200
 * @tc.name     Get Visible Raw Address,Loop calls LOOP_NUMBER times
 * @tc.desc     Reliability test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetVisibleRawAddress_0200, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        std::u16string result = g_message->GetVisibleRawAddress();
        ASSERT_EQ(result, g_messageSmsData.visibleRawAddress);
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetScAddress_0200
 * @tc.name     Get ScAddress,Loop calls LOOP_NUMBER times
 * @tc.desc     Reliability test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetScAddress_0200, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        std::u16string result = g_message->GetScAddress();
        ASSERT_EQ(result, g_messageSmsData.scAddress);
    }
}

/**
 * @tc.number   Telephony_SmsMms_IsReplaceMessage_0200
 * @tc.name     Is Replace Message,Loop calls LOOP_NUMBER times
 * @tc.desc     Reliability test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_IsReplaceMessage_0200, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        bool result = g_message->IsReplaceMessage();
        ASSERT_FALSE(result);
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetStatus_0200
 * @tc.name     Get Status,Loop calls LOOP_NUMBER times
 * @tc.desc     Reliability test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetStatus_0200, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        int32_t result = g_message->GetStatus();
        ASSERT_EQ(result, g_messageSmsData.status);
    }
}

/**
 * @tc.number   Telephony_SmsMms_IsSmsStatusReportMessage_0200
 * @tc.name     Is Sms Status Report Message,Loop calls LOOP_NUMBER times
 * @tc.desc     Reliability test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_IsSmsStatusReportMessage_0200, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        bool result = g_message->IsSmsStatusReportMessage();
        ASSERT_TRUE(result);
    }
}

/**
 * @tc.number   Telephony_SmsMms_HasReplyPath_0200
 * @tc.name     Has Reply Path,Loop calls,Determine that the running time is less than TIME_USEC_500
 * @tc.desc     Reliability test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_HasReplyPath_0200, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        bool result = g_message->HasReplyPath();
        ASSERT_FALSE(result);
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetProtocolId_0200
 * @tc.name     Get Protocol Id,Loop calls,Determine that the running time is less than TIME_USEC_500
 * @tc.desc     Reliability test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetProtocolId_0200, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        int32_t result = g_message->GetProtocolId();
        ASSERT_EQ(result, g_messageSmsData.protocolId);
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetPdu_0200
 * @tc.name     Get Pdu,Loop calls LOOP_NUMBER times
 * @tc.desc     Reliability test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetPdu_0200, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        std::vector<unsigned char> result = g_message->GetPdu();
        bool isValue = true;
        if (result.empty()) {
            isValue = false;
        }
        ASSERT_TRUE(isValue);
    }
}

/**
 * @tc.number   Telephony_SmsMms_CreateMessage_0300
 * @tc.name     Error get CreateMessage,Loop calls LOOP_NUMBER times
 * @tc.desc     Reliability test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_CreateMessage_0300, Reliability | MediumTest | Level3)
{
    std::vector<unsigned char> pdu = OHOS::Telephony::StringUtils::HexToByteVector("");
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        Telephony::ShortMessage *tempMessage = Telephony::ShortMessage::CreateMessage(pdu, u"3gpp");
        ASSERT_EQ(tempMessage, nullptr);
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetMessageClass_0200
 * @tc.name     Get Message Class,Loop calls LOOP_NUMBER times
 * @tc.desc     Reliability test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetMessageClass_0200, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        int32_t result = g_message->GetMessageClass();
        ASSERT_GE(result, (int32_t)Telephony::SmsMessageClass::SMS_INSTANT_MESSAGE);
        ASSERT_LE(result, (int32_t)Telephony::SmsMessageClass::SMS_CLASS_UNKNOWN);
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetScTimestamp_0200
 * @tc.name     Get ScTimestamp,Loop calls LOOP_NUMBER times
 * @tc.desc     Reliability test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetScTimestamp_0200, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        int32_t result = g_message->GetScTimestamp();
        ASSERT_NE(result, g_messageSmsData.scTimestamp);
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetIndexOnSim_0200
 * @tc.name     Gets the index ID of the SMS in the SIM
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetIndexOnSim_0200, Function | MediumTest | Level3)
{
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        int32_t result = g_message->GetIndexOnSim();
        ASSERT_EQ(result, g_messageSmsData.indexOnSim);
    }

}


/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_2300
 * @tc.name     The loop calls UpdateSimMessage() LOOP_MULTITUDE_NUMBER times
 * @tc.desc     Reliability test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_UpdateSimMessage_2300, Reliability | MediumTest | Level3)
{
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    bool isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(SLOT_ID_0, smsc, pdu,
                OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD);
    ASSERT_TRUE(isAddSms);
    std::vector<OHOS::Telephony::ShortMessage> beforSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(beforSmsRecord.empty());
    OHOS::Telephony::ShortMessage addSmsRecord = beforSmsRecord[0];
    std::u16string newPdu = RECEIVE_OTHER_SMS_PDU;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        bool result = g_smsClientPtr->GetPtr()->UpdateSimMessage(
            SLOT_ID_0, addSmsRecord.GetIndexOnSim(),
            OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD, newPdu, smsc);
        EXPECT_TRUE(result);
    }
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    bool isDel = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, curSmsRecord[0].GetIndexOnSim());
    ASSERT_TRUE(isDel);
}


/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_2200
 * @tc.name     loops Failed to save SMS to SIM LOOP_MULTITUDE_NUMBER
 * @tc.desc     Reliability test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_AddSimMessage_2200, Reliability | MediumTest | Level3)
{
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
            SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
        EXPECT_TRUE(result);
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetDefaultSmsSlotId_0300
 * @tc.name     The loop calls GetDefaultSmsSlotId() LOOP_MULTITUDE_NUMBER times
 * @tc.desc     Reliability test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_GetDefaultSmsSlotId_0300, Reliability | MediumTest | Level3)
{
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        bool result = g_smsClientPtr->GetPtr()->GetDefaultSmsSlotId();
        EXPECT_TRUE(result);
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetDefaultSmsSlotId_0300
 * @tc.name     The loop calls SetDefaultSmsSlotId() LOOP_MULTITUDE_NUMBER times
 * @tc.desc     Reliability test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetDefaultSmsSlotId_0300, Reliability | MediumTest | Level3)
{
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        bool result = g_smsClientPtr->GetPtr()->SetDefaultSmsSlotId(SLOT_ID_0);
        EXPECT_TRUE(result);
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetCBConfig_1200
 * @tc.name     The loop calls SetCBConfig() LOOP_MULTITUDE_NUMBER times
 * @tc.desc     Reliability test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetCBConfig_1200, Reliability | MediumTest | Level3)
{
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        bool result = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_0, true, 0, 1, 0);
        EXPECT_TRUE(result);
    }
}

/**
 * @tc.number   Telephony_SmsMms_ISmsServiceInterface_GetSmscAddr_0300
 * @tc.name     The loop calls GetSmscAddr() LOOP_MULTITUDE_NUMBER times
 * @tc.desc     Reliability test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_ISmsServiceInterface_GetSmscAddr_0300, Reliability | MediumTest | Level3)
{
    std::u16string newSmsc = StringUtils::ToUtf16(USABLE_SMSC_NUMBER);
    bool result = g_smsClientPtr->GetPtr()->SetSmscAddr(SLOT_ID_0, newSmsc);
    EXPECT_TRUE(result);
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        std::u16string curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_0);
        bool isGetScAddr = (curSmsc == newSmsc);
        EXPECT_TRUE(isGetScAddr);
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetSmscAddr_1000
 * @tc.name     The loop calls SetSmscAddr() LOOP_MULTITUDE_NUMBER times
 * @tc.desc     Reliability test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetSmscAddr_1000, Reliability | MediumTest | Level3)
{
    std::u16string newSmsc = StringUtils::ToUtf16(OTHER_SMSC_NUMBER);
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        bool result = g_smsClientPtr->GetPtr()->SetSmscAddr(SLOT_ID_0, newSmsc);
        EXPECT_TRUE(result);
    }
    std::u16string curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_0);
    bool isSetScAddr = false;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        if (curSmsc.empty()) {
            curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_0);
        } else if (curSmsc == newSmsc) {
            isSetScAddr = true;
            break;
        } else {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    EXPECT_TRUE(isSetScAddr);
}

/**
 * @tc.number   Telephony_SmsMms_GetAllSimMessages_0300
 * @tc.name     The loop calls GetAllSimMessages() LOOP_MULTITUDE_NUMBER times
 * @tc.desc     Reliability test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_GetAllSimMessages_0300, Reliability | MediumTest | Level3)
{
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    bool isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(SLOT_ID_0, smsc, pdu,
                OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD);
    ASSERT_TRUE(isAddSms);
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        bool isGetMessage = true;
        std::vector<OHOS::Telephony::ShortMessage> tempSmsRecord =
            g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
        if (tempSmsRecord.empty()) {
            isGetMessage = false;
        }
        ASSERT_TRUE(isGetMessage);
    }
}

/**
 * @tc.number   Telephony_SmsMms_DelSimMessage_0400
 * @tc.name     loops Deletes a text message from the SIM card LOOP_MULTITUDE_NUMBER
 * @tc.desc     Reliability test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_DelSimMessage_0400, Reliability | MediumTest | Level3)
{
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        bool result = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, 0);
        EXPECT_TRUE(result);
    }
}

/**
 * @tc.number   Telephony_SmsMms_SplitMessage_1900
 * @tc.name     Loop call SplitMessage interface 10 times, normal input parameters, each time successfully split.
 * @tc.desc     Reliability test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SplitMessage_1900, Reliability | MediumTest | Level3)
{
    std::vector<std::u16string> result;
    string message;
    for (int i = 0; i < MAX_CHINESE_MESSAGE_LENTH + 1; ++i) {
        message += "中";
    }
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; i++) {
        result = g_smsClientPtr->GetPtr()->SplitMessage(Str8ToStr16(message));
        ASSERT_TRUE(result.size() == MessageSize::SIZE_2);
        u16string newReseult;
        for (uint i = 0; i < result.size(); ++i) {
            newReseult += result[i];
        }
        ASSERT_TRUE(newReseult == Str8ToStr16(message));
    }
}