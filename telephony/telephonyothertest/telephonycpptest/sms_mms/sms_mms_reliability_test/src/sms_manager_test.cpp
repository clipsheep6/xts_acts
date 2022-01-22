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
using namespace OHOS::Telephony::SmsMmsManagerTest;
using namespace SmsMmsManagerTest;
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

/**
 * @tc.number   Telephony_SmsMms_GetSmsSegmentsInfo_2100
 * @tc.name     The GetSmsSegmentsInfo interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetSmsSegmentsInfo_2100, Reliability | MediumTest | Level3)
{
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        ISmsServiceInterface::SmsSegmentsInfo result;
        string message;
        for (int i = 0; i < MAX_CHINESE_MESSAGE_LENTH + 1; ++i) {
            message += "中";
        }
        bool isInfo = SmsMmsManagerTest::g_smsClientPtr->GetPtr()->GetSmsSegmentsInfo(
            SLOT_ID_0, Str8ToStr16(message), false, result);
        ASSERT_TRUE(isInfo);
        EXPECT_TRUE(result.msgSegCount == MessageSize::SIZE_2);
        EXPECT_TRUE(result.msgEncodingCount == MAX_CHINESE_MESSAGE_LENTH + 1);
        int remaining = result.msgSegCount * MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH - result.msgEncodingCount;
        EXPECT_TRUE(result.msgRemainCount == remaining);
        EXPECT_TRUE(
            result.msgCodeScheme == ISmsServiceInterface::SmsSegmentsInfo::SmsSegmentCodeScheme::SMS_ENCODING_16BIT);
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetImsShortMessageFormat_0300
 * @tc.name     The GetImsShortMessageFormat interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_GetImsShortMessageFormat_0300, Reliability | MediumTest | Level3)
{
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        std::u16string result = SmsMmsManagerTest::g_smsClientPtr->GetPtr()->GetImsShortMessageFormat();
        EXPECT_TRUE(Str16ToStr8(result) == "3gpp");
    }
}

/**
 * @tc.number   Telephony_SmsMms_HasSmsCapability_0200
 * @tc.name     The HasSmsCapability interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_HasSmsCapability_0200, Reliability | MediumTest | Level3)
{
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        bool result = SmsMmsManagerTest::g_smsClientPtr->GetPtr()->HasSmsCapability();
        EXPECT_TRUE(result);
    }
}

/**
 * @tc.number   Telephony_SmsMms_IsImsSmsSupported_0200
 * @tc.name     The IsImsSmsSupported interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_IsImsSmsSupported_0200, Reliability | MediumTest | Level3)
{
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        bool result = SmsMmsManagerTest::g_smsClientPtr->GetPtr()->IsImsSmsSupported();
        EXPECT_FALSE(result);
    }
}

#include "mms_manager_test.h"
#include "mms_codec_type.h"

using namespace OHOS::Telephony::MmsManager;
using namespace MmsManager;

/**
 * @tc.number   Telephony_SmsMms_DecodeMsg_1100
 * @tc.name     Cycle call DecodeMsg interface LOOP_MULTITUDE_NUMBER times, normal entry, check the return result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_DecodeMsg_1100, Reliability | MediumTest | Level1)
{
    std::string strPath = "/data/telephony/deSrc/ReadOrigInd.mms";
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        MmsMsg decodeMsg;
        EXPECT_TRUE(decodeMsg.DecodeMsg(strPath));
    }
}

/**
 * @tc.number   Telephony_SmsMms_EncodeMsg_1900
 * @tc.name     The EncodeMsg interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_EncodeMsg_1900, Reliability | MediumTest | Level1)
{
    // encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_NOTIFYRESP_IND));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2920.1410"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_UNREACHABLE)));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = nullptr;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        result = encodeMsg.EncodeMsg(len);
        EXPECT_TRUE(result != nullptr);
    }
}

/**
 * @tc.number   Telephony_SmsMms_DecodeMsg_PDU_0100
 * @tc.name     The EncodeMsg() interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_DecodeMsg_PDU_0100, Reliability | MediumTest | Level1)
{
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        // encode
        MmsMsg encodeMsg;
        EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_NOTIFYRESP_IND));
        EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2920.1410"));
        EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0)));
        EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_UNREACHABLE)));
        uint32_t len = 0;
        std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
        ASSERT_TRUE(result != nullptr);

        // decode
        MmsMsg decodeMsg;
        EXPECT_TRUE(decodeMsg.DecodeMsg(std::move(result), len));
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsVersion_0300
 * @tc.name     The SetMmsVersion interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsVersion_0300, Reliability | MediumTest | Level1)
{
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        MmsMsg encodeMsg;
        EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_2)));
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetMmsVersion_0100
 * @tc.name     The GetMmsVersion interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetMmsVersion_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_2)));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(encodeMsg.GetMmsVersion() == static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_2));
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsMessageType_0300
 * @tc.name     The SetMmsMessageType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsMessageType_0300, Reliability | MediumTest | Level1)
{
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        MmsMsg encodeMsg;
        EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_SEND_REQ));
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetMmsMessageType_0100
 * @tc.name     The GetMmsMessageType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetMmsMessageType_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_SEND_REQ));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(encodeMsg.GetMmsMessageType() == MMS_MSGTYPE_SEND_REQ);
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsTransactionId_0200
 * @tc.name     The SetMmsTransactionId interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsTransactionId_0200, Reliability | MediumTest | Level1)
{
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        MmsMsg encodeMsg;
        EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2077.1427358451410"));
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetMmsTransactionId_0100
 * @tc.name     The GetMmsTransactionId interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetMmsTransactionId_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2077.1427358451410"));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(encodeMsg.GetMmsTransactionId() == "2077.1427358451410");
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsDate_0100
 * @tc.name     The SetMmsDate interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsDate_0100, Reliability | MediumTest | Level1)
{
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        MmsMsg encodeMsg;
        EXPECT_TRUE(encodeMsg.SetMmsDate(1639378126));
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetMmsDate_0100
 * @tc.name     The GetMmsDate interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetMmsDate_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsDate(1639378126));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(encodeMsg.GetMmsDate() == 1639378126);
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsSubject_0200
 * @tc.name     The SetMmsSubject interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsSubject_0200, Reliability | MediumTest | Level1)
{
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        MmsMsg encodeMsg;
        EXPECT_TRUE(encodeMsg.SetMmsSubject("Test mms"));
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetMmsSubject_0100
 * @tc.name     The GetMmsSubject interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetMmsSubject_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsSubject("Test mms"));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(encodeMsg.GetMmsSubject() == "Test mms");
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsFrom_0100
 * @tc.name     The SetMmsFrom interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsFrom_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    MmsAddress fromAddress;
    fromAddress.SetMmsAddressString("+8613812345678/TYPE=PLMN");
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(encodeMsg.SetMmsFrom(fromAddress));
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetMmsFrom_0100
 * @tc.name     The GetMmsFrom interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetMmsFrom_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    MmsAddress fromAddress;
    fromAddress.SetMmsAddressString("+8613812345678/TYPE=PLMN");
    EXPECT_TRUE(encodeMsg.SetMmsFrom(fromAddress));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        MmsAddress fromAddr = encodeMsg.GetMmsFrom();
        EXPECT_TRUE(fromAddr.GetAddressString() == "+8613812345678/TYPE=PLMN");
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsTo_0100
 * @tc.name     The SetMmsTo interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsTo_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    std::vector<MmsAddress> vecAddrs;
    MmsAddress toAddrs("+8613888888888/TYPE=PLMN");
    vecAddrs.push_back(toAddrs);
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(encodeMsg.SetMmsTo(vecAddrs));
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetMmsTo_0100
 * @tc.name     The GetMmsTo interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetMmsTo_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    std::vector<MmsAddress> vecAddrs;
    MmsAddress toAddrs("+8613888888888/TYPE=PLMN");
    vecAddrs.push_back(toAddrs);
    EXPECT_TRUE(encodeMsg.SetMmsTo(vecAddrs));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        std::vector<MmsAddress> toAddress;
        ASSERT_TRUE(encodeMsg.GetMmsTo(toAddress));
        ASSERT_FALSE(toAddress.empty());
        EXPECT_TRUE(toAddress[0].GetAddressString() == "+8613888888888/TYPE=PLMN");
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_2000
 * @tc.name     The SetHeaderOctetValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_2000, Reliability | MediumTest | Level1)
{
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        MmsMsg encodeMsg;
        EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_MMS_UNRECOGNISED)));
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetHeaderOctetValue_0100
 * @tc.name     The GetHeaderOctetValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetHeaderOctetValue_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_MMS_UNRECOGNISED)));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        std::vector<MmsAddress> toAddress;
        EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_STATUS) == static_cast<uint8_t>(MmsStatus::MMS_MMS_UNRECOGNISED));
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderIntegerValue_0200
 * @tc.name     The SetHeaderIntegerValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderIntegerValue_0200, Reliability | MediumTest | Level1)
{
    int32_t value = 100;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        MmsMsg encodeMsg;
        EXPECT_TRUE(encodeMsg.SetHeaderIntegerValue(MMS_LIMIT, value));
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetHeaderIntegerValue_0100
 * @tc.name     The GetHeaderIntegerValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetHeaderIntegerValue_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    int32_t value = 100;
    EXPECT_TRUE(encodeMsg.SetHeaderIntegerValue(MMS_LIMIT, value));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        std::vector<MmsAddress> toAddress;
        EXPECT_TRUE(encodeMsg.GetHeaderIntegerValue(MMS_LIMIT) == value);
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderLongValue_0100
 * @tc.name     The SetHeaderLongValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderLongValue_0100, Reliability | MediumTest | Level1)
{
    int32_t value = 123456;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        MmsMsg encodeMsg;
        EXPECT_TRUE(encodeMsg.SetHeaderLongValue(MMS_MESSAGE_SIZE, value));
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetHeaderLongValue_0100
 * @tc.name     The GetHeaderLongValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetHeaderLongValue_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    int32_t value = 123456;
    EXPECT_TRUE(encodeMsg.SetHeaderLongValue(MMS_MESSAGE_SIZE, value));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        std::vector<MmsAddress> toAddress;
        EXPECT_TRUE(encodeMsg.GetHeaderLongValue(MMS_MESSAGE_SIZE) == value);
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderStringValue_0200
 * @tc.name     The SetHeaderStringValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderStringValue_0200, Reliability | MediumTest | Level1)
{
    std::string strMessageID = "0001";
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        MmsMsg encodeMsg;
        EXPECT_TRUE(encodeMsg.SetHeaderStringValue(MMS_MESSAGE_ID, strMessageID));
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetHeaderStringValue_0100
 * @tc.name     The GetHeaderStringValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetHeaderStringValue_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    std::string strMessageID = "0001";
    EXPECT_TRUE(encodeMsg.SetHeaderStringValue(MMS_MESSAGE_ID, strMessageID));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        std::vector<MmsAddress> toAddress;
        EXPECT_TRUE(encodeMsg.GetHeaderStringValue(MMS_MESSAGE_ID) == strMessageID);
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderEncodedStringValue_0200
 * @tc.name     The SetHeaderEncodedStringValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderEncodedStringValue_0200, Reliability | MediumTest | Level1)
{
    std::string retrieveTest = "1000";
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        MmsMsg encodeMsg;
        EXPECT_TRUE(encodeMsg.SetHeaderEncodedStringValue(
            MMS_RETRIEVE_TEXT, retrieveTest, static_cast<uint32_t>(MmsCharSets::UTF_8)));
    }
}

/**
 * @tc.number   Telephony_SmsMms_AddHeaderAddressValue_0200
 * @tc.name     The AddHeaderAddressValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_AddHeaderAddressValue_0200, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    MmsAddress ccAddress;
    ccAddress.SetMmsAddressString("+8613811111111/TYPE=PLMN");
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(encodeMsg.AddHeaderAddressValue(MMS_CC, ccAddress));
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetHeaderAllAddressValue_0100
 * @tc.name     The GetHeaderAllAddressValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetHeaderAllAddressValue_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    MmsAddress ccAddress;
    ccAddress.SetMmsAddressString("+8613811111111/TYPE=PLMN");
    EXPECT_TRUE(encodeMsg.AddHeaderAddressValue(MMS_CC, ccAddress));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        std::vector<MmsAddress> ccAddress;
        EXPECT_TRUE(encodeMsg.GetHeaderAllAddressValue(MMS_CC, ccAddress));
        ASSERT_FALSE(ccAddress.empty());
        EXPECT_TRUE(ccAddress[0].GetAddressString() == "+8613811111111/TYPE=PLMN");
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderContentType_0200
 * @tc.name     The SetHeaderContentType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderContentType_0200, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(encodeMsg.SetHeaderContentType("application/vnd.wap.multipart.related"));
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetHeaderContentType_0100
 * @tc.name     The GetHeaderContentType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetHeaderContentType_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderContentType("application/vnd.wap.multipart.related"));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(encodeMsg.GetHeaderContentType() == "application/vnd.wap.multipart.related");
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetHeaderContentTypeStart_0100
 * @tc.name     The GetHeaderContentTypeStart interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetHeaderContentTypeStart_0100, Reliability | MediumTest | Level1)
{
    // encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_SEND_REQ));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2077.1427358451410"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_2)));
    MmsAddress fromAddress;
    fromAddress.SetMmsAddressString("+8613812345678/TYPE=PLMN");
    EXPECT_TRUE(encodeMsg.SetMmsFrom(fromAddress));
    EXPECT_TRUE(encodeMsg.SetHeaderContentType("application/vnd.wap.multipart.related"));
    EXPECT_TRUE(encodeMsg.SetMmsSubject("Test mms"));
    std::vector<MmsAddress> vecAddrs;
    MmsAddress toAddrs("+8613888888888/TYPE=PLMN");
    vecAddrs.push_back(toAddrs);
    MmsAddress toAddrs2("+8613812345678/TYPE=PLMN");
    vecAddrs.push_back(toAddrs2);
    EXPECT_TRUE(encodeMsg.SetMmsTo(vecAddrs));
    EXPECT_TRUE(encodeMsg.SetMmsDate(1639378126));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_MESSAGE_CLASS, static_cast<uint8_t>(MmsMessageClass::INFORMATIONAL)));
    EXPECT_TRUE(encodeMsg.SetHeaderLongValue(MMS_EXPIRY, 1639378126));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_PRIORITY, static_cast<uint8_t>(MmsPriority::MMS_LOW)));
    EXPECT_TRUE(
        encodeMsg.SetHeaderOctetValue(MMS_SENDER_VISIBILITY, static_cast<uint8_t>(MmsSenderVisibility::MMS_SHOW)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_DELIVERY_REPORT, static_cast<uint8_t>(MmsBoolType::MMS_YES)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_READ_REPORT, static_cast<uint8_t>(MmsBoolType::MMS_NO)));
    // add smil file
    const std::string filePathNameSmil = "/data/telephony/enSrc/618C0A89.smil";
    MmsAttachment smilAttachment;
    EXPECT_TRUE(smilAttachment.SetAttachmentFilePath(filePathNameSmil, true));
    EXPECT_TRUE(smilAttachment.SetFileName("618C0A89.smil"));
    EXPECT_TRUE(smilAttachment.SetContentId("<0000>"));
    EXPECT_TRUE(smilAttachment.SetContentLocation("618C0A89.smil"));
    EXPECT_TRUE(smilAttachment.SetContentType("application/smil"));
    EXPECT_TRUE(smilAttachment.SetContentDisposition("618C0A89.smil"));
    EXPECT_TRUE(encodeMsg.AddAttachment(smilAttachment));
    EXPECT_TRUE(smilAttachment.IsSmilFile());
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);
    // decode
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(std::move(result), len));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_FALSE(decodeMsg.GetHeaderContentTypeStart().empty());
    }
}

/**
 * @tc.number   Telephony_SmsMms_AddAttachment_0100
 * @tc.name     The AddAttachment interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_AddAttachment_0100, Reliability | MediumTest | Level1)
{
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        MmsMsg encodeMsg;
        MmsAttachment smilAttachment;
        const std::string filePathNameSmil = "/data/telephony/enSrc/618C0A89.smil";
        EXPECT_TRUE(smilAttachment.SetAttachmentFilePath(filePathNameSmil, true));
        EXPECT_TRUE(smilAttachment.SetFileName("618C0A89.smil"));
        EXPECT_TRUE(smilAttachment.SetContentId("<0000>"));
        EXPECT_TRUE(smilAttachment.SetContentLocation("618C0A89.smil"));
        EXPECT_TRUE(smilAttachment.SetContentType("application/smil"));
        EXPECT_TRUE(encodeMsg.AddAttachment(smilAttachment));
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetAllAttachment_0100
 * @tc.name     The GetAllAttachment interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetAllAttachment_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    MmsAttachment smilAttachment;
    const std::string filePathNameSmil = "/data/telephony/enSrc/618C0A89.smil";
    EXPECT_TRUE(smilAttachment.SetAttachmentFilePath(filePathNameSmil, true));
    EXPECT_TRUE(smilAttachment.SetFileName("618C0A89.smil"));
    EXPECT_TRUE(smilAttachment.SetContentId("<0000>"));
    EXPECT_TRUE(smilAttachment.SetContentLocation("618C0A89.smil"));
    EXPECT_TRUE(smilAttachment.SetContentType("application/smil"));
    EXPECT_TRUE(encodeMsg.AddAttachment(smilAttachment));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        std::vector<MmsAttachment> smilAttachment;
        EXPECT_TRUE(encodeMsg.GetAllAttachment(smilAttachment));
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsAddressString_0100
 * @tc.name     The SetMmsAddressString interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsAddressString_0100, Reliability | MediumTest | Level1)
{
    MmsAddress fromAddress;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        fromAddress.SetMmsAddressString("+8613812345678/TYPE=PLMN");
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetAddressString_0100
 * @tc.name     The GetAddressString interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetAddressString_0100, Reliability | MediumTest | Level1)
{
    MmsAddress fromAddress;
    fromAddress.SetMmsAddressString("+8613812345678/TYPE=PLMN");
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(fromAddress.GetAddressString() == "+8613812345678/TYPE=PLMN");
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetAddressCharset_0100
 * @tc.name     The GetAddressCharset interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetAddressCharset_0100, Reliability | MediumTest | Level1)
{
    MmsAddress fromAddress;
    fromAddress.SetMmsAddressString("+8613812345678/TYPE=PLMN");
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(fromAddress.GetAddressCharset() == MmsCharSets::UTF_8);
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetAddressType_0100
 * @tc.name     The GetAddressType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetAddressType_0100, Reliability | MediumTest | Level1)
{
    MmsAddress fromAddress;
    fromAddress.SetMmsAddressString("+8613812345678/TYPE=PLMN");
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(fromAddress.GetAddressType() == MmsAddress::ADDRESS_TYPE_PLMN);
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetAttachmentFilePath_0200
 * @tc.name     The SetAttachmentFilePath interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetAttachmentFilePath_0200, Reliability | MediumTest | Level1)
{
    const std::string filePathNameSmil = "/data/telephony/enSrc/618C0A89.smil";
    MmsAttachment smilAttachment;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(smilAttachment.SetAttachmentFilePath(filePathNameSmil, true));
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetAttachmentFilePath_0100
 * @tc.name     The GetAttachmentFilePath interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetAttachmentFilePath_0100, Reliability | MediumTest | Level1)
{
    const std::string filePathNameSmil = "/data/telephony/enSrc/618C0A89.smil";
    MmsAttachment smilAttachment;
    EXPECT_TRUE(smilAttachment.SetAttachmentFilePath(filePathNameSmil, true));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(smilAttachment.GetAttachmentFilePath() == filePathNameSmil);
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetContentId_0200
 * @tc.name     The SetContentId interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetContentId_0200, Reliability | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(smilAttachment.SetContentId("<0000>"));
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetContentId_0100
 * @tc.name     The GetContentId interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetContentId_0100, Reliability | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    EXPECT_TRUE(smilAttachment.SetContentId("<0000>"));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(smilAttachment.GetContentId() == "<0000>");
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetContentLocation_0200
 * @tc.name     The SetContentLocation interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetContentLocation_0200, Reliability | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(smilAttachment.SetContentLocation("618C0A89.smil"));
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetContentLocation_0100
 * @tc.name     The GetContentId interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetContentLocation_0100, Reliability | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    EXPECT_TRUE(smilAttachment.SetContentLocation("618C0A89.smil"));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(smilAttachment.GetContentLocation() == "618C0A89.smil");
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetContentDisposition_0200
 * @tc.name     The SetContentDisposition interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetContentDisposition_0200, Reliability | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(smilAttachment.SetContentDisposition("content.text"));
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetContentDisposition_0100
 * @tc.name     The GetContentDisposition interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetContentDisposition_0100, Reliability | MediumTest | Level1)
{
    MmsAttachment textAttachment;
    EXPECT_TRUE(textAttachment.SetContentDisposition("content.text"));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(textAttachment.GetContentDisposition() == "content.text");
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetContentTransferEncoding_0200
 * @tc.name     The SetContentTransferEncoding interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetContentTransferEncoding_0200, Reliability | MediumTest | Level1)
{
    std::string contentTransferEncoding = "base64";
    MmsAttachment smilAttachment;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(smilAttachment.SetContentTransferEncoding(contentTransferEncoding));
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetContentTransferEncoding_0100
 * @tc.name     The GetContentTransferEncoding interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetContentTransferEncoding_0100, Reliability | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    std::string contentTransferEncoding = "base64";
    EXPECT_TRUE(smilAttachment.SetContentTransferEncoding(contentTransferEncoding));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(smilAttachment.GetContentTransferEncoding() == contentTransferEncoding);
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetContentType_0200
 * @tc.name     The SetContentType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetContentType_0200, Reliability | MediumTest | Level1)
{
    MmsAttachment imageAttachment;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(imageAttachment.SetContentType("image/gif"));
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetContentType_0100
 * @tc.name     The GetContentType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetContentType_0100, Reliability | MediumTest | Level1)
{
    MmsAttachment imageAttachment;
    EXPECT_TRUE(imageAttachment.SetContentType("image/gif"));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(imageAttachment.GetContentType() == "image/gif");
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetFileName_0200
 * @tc.name     The SetFileName interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetFileName_0200, Reliability | MediumTest | Level1)
{
    MmsAttachment imageAttachment;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(imageAttachment.SetFileName("content.text"));
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetFileName_0100
 * @tc.name     The GetContentType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetFileName_0100, Reliability | MediumTest | Level1)
{
    MmsAttachment imageAttachment;
    EXPECT_TRUE(imageAttachment.SetFileName("content.text"));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(imageAttachment.GetFileName() == "content.text");
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetCharSet_0100
 * @tc.name     The SetCharSet interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetCharSet_0100, Reliability | MediumTest | Level1)
{
    MmsAttachment imageAttachment;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        imageAttachment.SetCharSet(static_cast<uint32_t>(MmsCharSets::UTF_8));
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetCharSet_0100
 * @tc.name     The GetCharSet interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetCharSet_0100, Reliability | MediumTest | Level1)
{
    MmsAttachment imageAttachment;
    imageAttachment.SetCharSet(static_cast<uint32_t>(MmsCharSets::UTF_8));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(imageAttachment.GetCharSet() == static_cast<uint32_t>(MmsCharSets::UTF_8));
    }
}

/**
 * @tc.number   Telephony_SmsMms_IsSmilFile_0100
 * @tc.name     The IsSmilFile interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_IsSmilFile_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    const std::string filePathNameSmil = "/data/telephony/enSrc/618C0A89.smil";
    MmsAttachment smilAttachment;
    EXPECT_TRUE(smilAttachment.SetAttachmentFilePath(filePathNameSmil, true));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(smilAttachment.IsSmilFile());
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetDataBuffer_0200
 * @tc.name     The SetDataBuffer interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetDataBuffer_0200, Reliability | MediumTest | Level1)
{
    MmsAttachment inBuffAttachment;
    uint32_t inBuffLen = 3;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        std::unique_ptr<char[]> inBuff = std::make_unique<char[]>(inBuffLen);
        memcpy_s(inBuff.get(), inBuffLen, "123", inBuffLen);
        EXPECT_TRUE(inBuffAttachment.SetDataBuffer(std::move(inBuff), inBuffLen));
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetDataBuffer_0100
 * @tc.name     The GetDataBuffer interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetDataBuffer_0100, Reliability | MediumTest | Level1)
{
    MmsAttachment inBuffAttachment;
    uint32_t inBuffLen = 3;
    char str[] = "123";
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        std::unique_ptr<char[]> inBuff = std::make_unique<char[]>(inBuffLen);
        memcpy_s(inBuff.get(), inBuffLen, "123", inBuffLen);
        EXPECT_TRUE(inBuffAttachment.SetDataBuffer(std::move(inBuff), inBuffLen));
        std::unique_ptr<char[]> buff = inBuffAttachment.GetDataBuffer(inBuffLen);
        std::string buffData(buff.get(), inBuffLen);
        EXPECT_TRUE(buffData == str);
    }
}