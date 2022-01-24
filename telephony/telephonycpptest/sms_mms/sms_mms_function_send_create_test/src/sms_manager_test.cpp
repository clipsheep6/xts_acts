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
#include "condition_lock.h"
#include "string_ex.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace Telephony;
using namespace OHOS::Telephony::SmsManager;
using namespace SmsManager;
using namespace SendCallback;
using namespace DeliveryShortback;
using namespace OHOS::Telephony;

/**
 * @tc.number   Telephony_SmsMms_GetVisibleMessageBody_0100
 * @tc.name     Get Visible Message Body
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetVisibleMessageBody_0100, Function | MediumTest | Level3)
{
    std::u16string result = g_message->GetVisibleMessageBody();
    EXPECT_EQ(result, g_messageSmsData.visibleMessageBody);
}

/**
 * @tc.number   Telephony_SmsMms_GetVisibleRawAddress_0100
 * @tc.name     Get Visible Raw Address
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetVisibleRawAddress_0100, Function | MediumTest | Level3)
{
    std::u16string result = g_message->GetVisibleRawAddress();
    EXPECT_EQ(result.size(), g_messageSmsData.visibleRawAddress.size());
}

/**
 * @tc.number   Telephony_SmsMms_GetScAddress_0100
 * @tc.name     Get ScAddress
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetScAddress_0100, Function | MediumTest | Level3)
{
    std::u16string result = g_message->GetScAddress();
    EXPECT_EQ(result.size(), g_messageSmsData.scAddress.size());
}

/**
 * @tc.number   Telephony_SmsMms_GetScTimestamp_0100
 * @tc.name     Get ScTimestamp
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetScTimestamp_0100, Function | MediumTest | Level3)
{
    int64_t result = g_message->GetScTimestamp();
    EXPECT_EQ(result, g_messageSmsData.scTimestamp);
}

/**
 * @tc.number   Telephony_SmsMms_IsReplaceMessage_0100
 * @tc.name     Is Replace Message
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_IsReplaceMessage_0100, Function | MediumTest | Level3)
{
    bool result = g_message->IsReplaceMessage();
    EXPECT_EQ(result, g_messageSmsData.isReplaceMessage);
}

/**
 * @tc.number   Telephony_SmsMms_GetStatus_0100
 * @tc.name     Get Status
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetStatus_0100, Function | MediumTest | Level3)
{
    int32_t result = g_message->GetStatus();
    EXPECT_EQ(result, g_messageSmsData.status);
}

/**
 * @tc.number   Telephony_SmsMms_IsSmsStatusReportMessage_0100
 * @tc.name     Is Sms Status Report Message
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_IsSmsStatusReportMessage_0100, Function | MediumTest | Level3)
{
    bool result = g_message->IsSmsStatusReportMessage();
    EXPECT_EQ(result, g_messageSmsData.isSmsStatusReportMessage);
}

/**
 * @tc.number   Telephony_SmsMms_HasReplyPath_0100
 * @tc.name     Has Reply Path
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_HasReplyPath_0100, Function | MediumTest | Level3)
{
    bool result = g_message->HasReplyPath();
    EXPECT_EQ(result, g_messageSmsData.hasReplyPath);
}

/**
 * @tc.number   Telephony_SmsMms_GetProtocolId_0100
 * @tc.name     Get Protocol Id
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetProtocolId_0100, Function | MediumTest | Level3)
{
    int32_t result = g_message->GetProtocolId();
    EXPECT_EQ(result, g_messageSmsData.protocolId);
}

/**
 * @tc.number   Telephony_SmsMms_GetPdu_0100
 * @tc.name     Get Pdu
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetPdu_0100, Function | MediumTest | Level3)
{
    std::vector<unsigned char> result = g_message->GetPdu();
    EXPECT_EQ(result, g_messageSmsData.pdu);
}

/**
 * @tc.number   Telephony_SmsMms_CreateMessage_0100
 * @tc.name     Correctly parse PDU short messages
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_CreateMessage_0100, Function | MediumTest | Level3)
{
    std::vector<unsigned char> pdu =
        OHOS::Telephony::StringUtils::HexToByteVector("0891683108200075F4240D91688129562983F600001240800102142302C130");
    unique_ptr<OHOS::Telephony::ShortMessage> tmpMessage =
        unique_ptr<OHOS::Telephony::ShortMessage>(OHOS::Telephony::ShortMessage::CreateMessage(pdu, u"3gpp"));
    EXPECT_NE(tmpMessage, nullptr);
}

/**
 * @tc.number   Telephony_SmsMms_CreateMessage_0200
 * @tc.name     PDU short messages that were resolved to be empty
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_CreateMessage_0200, Function | MediumTest | Level3)
{
    std::vector<unsigned char> pdu;
    Telephony::ShortMessage *tempMessage = Telephony::ShortMessage::CreateMessage(pdu, u"3gpp");
    EXPECT_EQ(tempMessage, nullptr);
}

/**
 * @tc.number   Telephony_SmsMms_GetIndexOnSim_0100
 * @tc.name     Gets the index ID of the SMS in the SIM
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetIndexOnSim_0100, Function | MediumTest | Level3)
{
    int32_t result = g_message->GetIndexOnSim();
    EXPECT_EQ(result, g_messageSmsData.indexOnSim);
}

/**
 * @tc.number   Telephony_SmsMms_GetMessageClass_0100
 * @tc.name     Get Message Class
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetMessageClass_0100, Function | MediumTest | Level3)
{
    int32_t result = g_message->GetMessageClass();
    EXPECT_GE(result, (int32_t)OHOS::Telephony::ShortMessage::SmsMessageClass::SMS_INSTANT_MESSAGE);
    EXPECT_LE(result, (int32_t)OHOS::Telephony::ShortMessage::SmsMessageClass::SMS_CLASS_UNKNOWN);
}

/**
 * @tc.number   Telephony_SmsMms_GetVisibleMessageBody_0400
 * @tc.name     Get Visible Message Body
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetVisibleMessageBody_0400, Function | MediumTest | Level3)
{
    std::u16string result = g_messageOther->GetVisibleMessageBody();
    EXPECT_EQ(result, g_messageOtherSmsData.visibleMessageBody);
}

/**
 * @tc.number   Telephony_SmsMms_GetVisibleRawAddress_0400
 * @tc.name     Get Visible Raw Address
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetVisibleRawAddress_0400, Function | MediumTest | Level3)
{
    std::u16string result = g_messageOther->GetVisibleRawAddress();
    EXPECT_EQ(result.size(), g_messageOtherSmsData.visibleRawAddress.size());
}

/**
 * @tc.number   Telephony_SmsMms_GetScAddress_0400
 * @tc.name     Get ScAddress
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetScAddress_0400, Function | MediumTest | Level3)
{
    std::u16string result = g_messageOther->GetScAddress();
    EXPECT_EQ(result.size(), g_messageOtherSmsData.scAddress.size());
}

/**
 * @tc.number   Telephony_SmsMms_GetScTimestamp_0400
 * @tc.name     Get ScTimestamp
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetScTimestamp_0400, Function | MediumTest | Level3)
{
    int64_t result = g_messageOther->GetScTimestamp();
    EXPECT_EQ(result, g_messageOtherSmsData.scTimestamp);
}

/**
 * @tc.number   Telephony_SmsMms_IsReplaceMessage_0400
 * @tc.name     Is Replace Message
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_IsReplaceMessage_0400, Function | MediumTest | Level3)
{
    bool result = g_messageOther->IsReplaceMessage();
    EXPECT_EQ(result, g_messageOtherSmsData.isReplaceMessage);
}

/**
 * @tc.number   Telephony_SmsMms_GetStatus_0400
 * @tc.name     Get Status
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetStatus_0400, Function | MediumTest | Level3)
{
    int32_t result = g_messageOther->GetStatus();
    EXPECT_EQ(result, g_messageOtherSmsData.status);
}

/**
 * @tc.number   Telephony_SmsMms_IsSmsStatusReportMessage_0400
 * @tc.name     Is Sms Status Report Message
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_IsSmsStatusReportMessage_0400, Function | MediumTest | Level3)
{
    bool result = g_messageOther->IsSmsStatusReportMessage();
    EXPECT_EQ(result, g_messageOtherSmsData.isSmsStatusReportMessage);
}

/**
 * @tc.number   Telephony_SmsMms_HasReplyPath_0400
 * @tc.name     Has Reply Path
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_HasReplyPath_0400, Function | MediumTest | Level3)
{
    bool result = g_messageOther->HasReplyPath();
    EXPECT_EQ(result, g_messageOtherSmsData.hasReplyPath);
}

/**
 * @tc.number   Telephony_SmsMms_GetProtocolId_0400
 * @tc.name     Get Protocol Id
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetProtocolId_0400, Function | MediumTest | Level3)
{
    int32_t result = g_messageOther->GetProtocolId();
    EXPECT_EQ(result, g_messageOtherSmsData.protocolId);
}

/**
 * @tc.number   Telephony_SmsMms_GetPdu_0400
 * @tc.name     Get Pdu
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetPdu_0400, Function | MediumTest | Level3)
{
    std::vector<unsigned char> result = g_messageOther->GetPdu();
    EXPECT_EQ(result, g_messageOtherSmsData.pdu);
}

/**
 * @tc.number   Telephony_SmsMms_GetIndexOnSim_0400
 * @tc.name     Gets the index ID of the SMS in the SIM
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetIndexOnSim_0400, Function | MediumTest | Level3)
{
    int32_t result = g_messageOther->GetIndexOnSim();
    EXPECT_EQ(result, g_messageOtherSmsData.indexOnSim);
}

/**
 * @tc.number   Telephony_SmsMms_GetMessageClass_0400
 * @tc.name     Get Message Class
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetMessageClass_0400, Function | MediumTest | Level3)
{
    int32_t result = g_messageOther->GetMessageClass();
    EXPECT_GE(result, (int32_t)OHOS::Telephony::ShortMessage::SmsMessageClass::SMS_INSTANT_MESSAGE);
    EXPECT_LE(result, (int32_t)OHOS::Telephony::ShortMessage::SmsMessageClass::SMS_CLASS_UNKNOWN);
}

/**
 * @tc.number   Telephony_SmsMms_GetVisibleMessageBody_0500
 * @tc.name     Get Visible Message Body
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetVisibleMessageBody_0500, Function | MediumTest | Level3)
{
    std::u16string result = g_messageCDMA->GetVisibleMessageBody();
    EXPECT_EQ(result, g_messageSmsDataCDMA.visibleMessageBody);
}

/**
 * @tc.number   Telephony_SmsMms_GetVisibleRawAddress_0500
 * @tc.name     Get Visible Raw Address
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetVisibleRawAddress_0500, Function | MediumTest | Level3)
{
    std::u16string result = g_messageCDMA->GetVisibleRawAddress();
    EXPECT_EQ(result.size(), g_messageSmsDataCDMA.visibleRawAddress.size());
}

/**
 * @tc.number   Telephony_SmsMms_GetScAddress_0500
 * @tc.name     Get ScAddress
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetScAddress_0500, Function | MediumTest | Level3)
{
    std::u16string result = g_messageCDMA->GetScAddress();
    EXPECT_EQ(result.size(), g_messageSmsDataCDMA.scAddress.size());
}

/**
 * @tc.number   Telephony_SmsMms_GetScTimestamp_0500
 * @tc.name     Get ScTimestamp
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetScTimestamp_0500, Function | MediumTest | Level3)
{
    int64_t result = g_messageCDMA->GetScTimestamp();
    EXPECT_EQ(result, g_messageSmsDataCDMA.scTimestamp);
}

/**
 * @tc.number   Telephony_SmsMms_IsReplaceMessage_0500
 * @tc.name     Is Replace Message
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_IsReplaceMessage_0500, Function | MediumTest | Level3)
{
    bool result = g_messageCDMA->IsReplaceMessage();
    EXPECT_EQ(result, g_messageSmsDataCDMA.isReplaceMessage);
}

/**
 * @tc.number   Telephony_SmsMms_GetStatus_0500
 * @tc.name     Get Status
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetStatus_0500, Function | MediumTest | Level3)
{
    int32_t result = g_messageCDMA->GetStatus();
    EXPECT_EQ(result, g_messageSmsDataCDMA.status);
}

/**
 * @tc.number   Telephony_SmsMms_IsSmsStatusReportMessage_0500
 * @tc.name     Is Sms Status Report Message
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_IsSmsStatusReportMessage_0500, Function | MediumTest | Level3)
{
    bool result = g_messageCDMA->IsSmsStatusReportMessage();
    EXPECT_EQ(result, g_messageSmsDataCDMA.isSmsStatusReportMessage);
}

/**
 * @tc.number   Telephony_SmsMms_HasReplyPath_0500
 * @tc.name     Has Reply Path
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_HasReplyPath_0500, Function | MediumTest | Level3)
{
    bool result = g_messageCDMA->HasReplyPath();
    EXPECT_EQ(result, g_messageSmsDataCDMA.hasReplyPath);
}

/**
 * @tc.number   Telephony_SmsMms_GetProtocolId_0500
 * @tc.name     Get Protocol Id
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetProtocolId_0500, Function | MediumTest | Level3)
{
    int32_t result = g_messageCDMA->GetProtocolId();
    EXPECT_EQ(result, g_messageSmsDataCDMA.protocolId);
}

/**
 * @tc.number   Telephony_SmsMms_GetPdu_0500
 * @tc.name     Get Pdu
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetPdu_0500, Function | MediumTest | Level3)
{
    std::vector<unsigned char> result = g_messageCDMA->GetPdu();
    EXPECT_EQ(result, g_messageSmsDataCDMA.pdu);
}

/**
 * @tc.number   Telephony_SmsMms_GetIndexOnSim_0500
 * @tc.name     Gets the index ID of the SMS in the SIM
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetIndexOnSim_0500, Function | MediumTest | Level3)
{
    int32_t result = g_messageCDMA->GetIndexOnSim();
    EXPECT_EQ(result, g_messageSmsDataCDMA.indexOnSim);
}

/**
 * @tc.number   Telephony_SmsMms_CreateMessage_0500
 * @tc.name     Create a message class and parse PDU short messages
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_CreateMessage_0500, Function | MediumTest | Level3)
{
    std::vector<unsigned char> pdu = OHOS::Telephony::StringUtils::HexToByteVector(
        "0000021002020702c6049064c4d40601fc081b00031000200106102e8cbb366f03061409011126310a01400d0101");
    unique_ptr<OHOS::Telephony::ShortMessage> tmpMessage =
        unique_ptr<OHOS::Telephony::ShortMessage>(OHOS::Telephony::ShortMessage::CreateMessage(pdu, u"3gpp2"));
    EXPECT_NE(tmpMessage, nullptr);
}

/**
 * @tc.number   Telephony_SmsMms_GetMessageClass_0500
 * @tc.name     Get Message Class
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetMessageClass_0500, Function | MediumTest | Level3)
{
    int32_t result = g_messageCDMA->GetMessageClass();
    EXPECT_GE(result, (int32_t)Telephony::SmsMessageClass::SMS_INSTANT_MESSAGE);
    EXPECT_LE(result, (int32_t)Telephony::SmsMessageClass::SMS_CLASS_UNKNOWN);
}

/**
 * @tc.number   Telephony_SmsMms_GetVisibleMessageBody_0600
 * @tc.name     Get Visible Message Body
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetVisibleMessageBody_0600, Function | MediumTest | Level3)
{
    std::u16string result = g_messageOtherCDMA->GetVisibleMessageBody();
    EXPECT_EQ(result, g_messageOtherSmsDataCDMA.visibleMessageBody);
}

/**
 * @tc.number   Telephony_SmsMms_GetVisibleRawAddress_0600
 * @tc.name     Get Visible Raw Address
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetVisibleRawAddress_0600, Function | MediumTest | Level3)
{
    std::u16string result = g_messageOtherCDMA->GetVisibleRawAddress();
    EXPECT_EQ(result.size(), g_messageOtherSmsDataCDMA.visibleRawAddress.size());
}

/**
 * @tc.number   Telephony_SmsMms_GetScAddress_0600
 * @tc.name     Get ScAddress
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetScAddress_0600, Function | MediumTest | Level3)
{
    std::u16string result = g_messageOtherCDMA->GetScAddress();
    EXPECT_EQ(result.size(), g_messageOtherSmsDataCDMA.scAddress.size());
}

/**
 * @tc.number   Telephony_SmsMms_GetScTimestamp_0600
 * @tc.name     Get ScTimestamp
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetScTimestamp_0600, Function | MediumTest | Level3)
{
    int64_t result = g_messageOtherCDMA->GetScTimestamp();
    EXPECT_EQ(result, g_messageOtherSmsDataCDMA.scTimestamp);
}

/**
 * @tc.number   Telephony_SmsMms_IsReplaceMessage_0600
 * @tc.name     Is Replace Message
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_IsReplaceMessage_0600, Function | MediumTest | Level3)
{
    bool result = g_messageOtherCDMA->IsReplaceMessage();
    EXPECT_EQ(result, g_messageOtherSmsDataCDMA.isReplaceMessage);
}

/**
 * @tc.number   Telephony_SmsMms_GetStatus_0600
 * @tc.name     Get Status
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetStatus_0600, Function | MediumTest | Level3)
{
    int32_t result = g_messageOtherCDMA->GetStatus();
    EXPECT_EQ(result, g_messageOtherSmsDataCDMA.status);
}

/**
 * @tc.number   Telephony_SmsMms_IsSmsStatusReportMessage_0600
 * @tc.name     Is Sms Status Report Message
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_IsSmsStatusReportMessage_0600, Function | MediumTest | Level3)
{
    bool result = g_messageOtherCDMA->IsSmsStatusReportMessage();
    EXPECT_EQ(result, g_messageOtherSmsDataCDMA.isSmsStatusReportMessage);
}

/**
 * @tc.number   Telephony_SmsMms_HasReplyPath_0600
 * @tc.name     Has Reply Path
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_HasReplyPath_0600, Function | MediumTest | Level3)
{
    bool result = g_messageOtherCDMA->HasReplyPath();
    EXPECT_EQ(result, g_messageOtherSmsDataCDMA.hasReplyPath);
}

/**
 * @tc.number   Telephony_SmsMms_GetProtocolId_0600
 * @tc.name     Get Protocol Id
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetProtocolId_0600, Function | MediumTest | Level3)
{
    int32_t result = g_messageOtherCDMA->GetProtocolId();
    EXPECT_EQ(result, g_messageOtherSmsDataCDMA.protocolId);
}

/**
 * @tc.number   Telephony_SmsMms_GetPdu_0600
 * @tc.name     Get Pdu
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetPdu_0600, Function | MediumTest | Level3)
{
    std::vector<unsigned char> result = g_messageOtherCDMA->GetPdu();
    EXPECT_EQ(result, g_messageOtherSmsDataCDMA.pdu);
}

/**
 * @tc.number   Telephony_SmsMms_GetIndexOnSim_0600
 * @tc.name     Gets the index ID of the SMS in the SIM
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetIndexOnSim_0600, Function | MediumTest | Level3)
{
    int32_t result = g_messageOtherCDMA->GetIndexOnSim();
    EXPECT_EQ(result, g_messageOtherSmsDataCDMA.indexOnSim);
}

/**
 * @tc.number   Telephony_SmsMms_CreateMessage_0600
 * @tc.name     Create a message class and parse PDU short messages
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_CreateMessage_0600, Function | MediumTest | Level3)
{
    std::vector<unsigned char> pdu = OHOS::Telephony::StringUtils::HexToByteVector(
        "0000021002020702C54EA488649C0601FC08120003101BB00103100C100306110804182257");
    unique_ptr<OHOS::Telephony::ShortMessage> tmpMessage =
        unique_ptr<OHOS::Telephony::ShortMessage>(OHOS::Telephony::ShortMessage::CreateMessage(pdu, u"3gpp2"));
    EXPECT_NE(tmpMessage, nullptr);
}

/**
 * @tc.number   Telephony_SmsMms_GetMessageClass_0600
 * @tc.name     Get Message Class
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetMessageClass_0600, Function | MediumTest | Level3)
{
    int32_t result = g_messageOtherCDMA->GetMessageClass();
    EXPECT_GE(result, (int32_t)Telephony::SmsMessageClass::SMS_INSTANT_MESSAGE);
    EXPECT_LE(result, (int32_t)Telephony::SmsMessageClass::SMS_CLASS_UNKNOWN);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageText_0100
 * @tc.name     Interface parameters are correct, the SMS message is successfully sent
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_0100, Function | MediumTest | Level1)
{
    LOG("> ---------- Send Sms Text");
    int32_t slotId = SLOT_ID_0;
    std::string desAddr(SMS_SEND_DST_NUMBER);
    std::string sca("");
    std::string text("1111111111");

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(desAddr),
                                          Telephony::StringUtils::ToUtf16(sca), Telephony::StringUtils::ToUtf16(text),
                                          sendCallBackPtr, deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE((sendCallBackPtr->GetSendCallbackResult() || deliveryCallBackPtr->GetDeliverybackResult()),
                      true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
    bool isCallback = (SendCallback::res == SendCallback::CALLBACK_SUCCESSFUL ||
                       DeliveryShortback::res == DeliveryShortback::CALLBACK_SUCCESSFUL);
    EXPECT_TRUE(isCallback);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageText_0200
 * @tc.name     send sms slotId 0,Failed to send SMS messages
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_0200, Function | MediumTest | Level2)
{
    LOG("> ---------- test card Id");
    int32_t slotId = ERROR_SLOT_ID;
    std::string desAddr(SMS_SEND_DST_NUMBER);
    std::string sca("");
    std::string text("啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊");

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(desAddr),
                                          Telephony::StringUtils::ToUtf16(sca), Telephony::StringUtils::ToUtf16(text),
                                          sendCallBackPtr, deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE_WITHOUT_EXPECT((sendCallBackPtr->GetSendCallbackResult() ||
                                      deliveryCallBackPtr->GetDeliverybackResult()),
                                     true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_NE(SendCallback::res, SendCallback::CALLBACK_SUCCESSFUL);
    EXPECT_NE(DeliveryShortback::res, DeliveryShortback::CALLBACK_SUCCESSFUL);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageText_0300
 * @tc.name     The incoming parameter desArrd is empty, Failed to send SMS messages
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_0300, Function | MediumTest | Level2)
{
    LOG("> ---------- Send Sms desArrd is empty");
    int32_t slotId = SLOT_ID_0;
    std::string desAddr("");
    std::string sca("");
    std::string text("11111");

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(desAddr),
                                          Telephony::StringUtils::ToUtf16(sca), Telephony::StringUtils::ToUtf16(text),
                                          sendCallBackPtr, deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE_WITHOUT_EXPECT((sendCallBackPtr->GetSendCallbackResult() ||
                                      deliveryCallBackPtr->GetDeliverybackResult()),
                                     true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_NE(SendCallback::res, SendCallback::CALLBACK_SUCCESSFUL);
    EXPECT_NE(DeliveryShortback::res, DeliveryShortback::CALLBACK_SUCCESSFUL);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageText_0400
 * @tc.name     Failed to send the blank text message.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_0400, Function | MediumTest | Level3)
{
    LOG("> ---------- Send Sms Null Text");
    int32_t slotId = SLOT_ID_0;
    std::string desAddr(SMS_SEND_DST_NUMBER);
    std::string sca("");
    std::string text("");

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(desAddr),
                                          Telephony::StringUtils::ToUtf16(sca), Telephony::StringUtils::ToUtf16(text),
                                          sendCallBackPtr, deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE_WITHOUT_EXPECT((sendCallBackPtr->GetSendCallbackResult() ||
                                      deliveryCallBackPtr->GetDeliverybackResult()),
                                     true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_NE(SendCallback::res, SendCallback::CALLBACK_SUCCESSFUL);
    EXPECT_NE(DeliveryShortback::res, DeliveryShortback::CALLBACK_SUCCESSFUL);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageText_0500
 * @tc.name     test Send Max Len(160) Text
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_0500, Function | MediumTest | Level3)
{
    LOG("> ---------- Send Sms  Max Len Text");
    int32_t slotId = SLOT_ID_0;
    std::string desAddr(SMS_SEND_DST_NUMBER);
    std::string sca("");
    std::string text(MAX_USER_DATA_LENTH, 't');

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(desAddr),
                                          Telephony::StringUtils::ToUtf16(sca), Telephony::StringUtils::ToUtf16(text),
                                          sendCallBackPtr, deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE((sendCallBackPtr->GetSendCallbackResult() || deliveryCallBackPtr->GetDeliverybackResult()),
                      true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
    bool isCallback = (SendCallback::res == SendCallback::CALLBACK_SUCCESSFUL ||
                       DeliveryShortback::res == DeliveryShortback::CALLBACK_SUCCESSFUL);
    EXPECT_TRUE(isCallback);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageText_0600
 * @tc.name     test Send Exceed Max Len(161) Text
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_0600, Function | MediumTest | Level3)
{
    LOG("> ---------- Send Sms Exceed Max Len Text");
    int32_t slotId = SLOT_ID_0;
    std::string desAddr(SMS_SEND_DST_NUMBER);
    std::string sca("");
    std::string text(MAX_USER_DATA_LENTH + 1, 't');

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(desAddr),
                                          Telephony::StringUtils::ToUtf16(sca), Telephony::StringUtils::ToUtf16(text),
                                          sendCallBackPtr, deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE((sendCallBackPtr->GetSendCallbackResult() || deliveryCallBackPtr->GetDeliverybackResult()),
                      true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
    bool isCallback = (SendCallback::res == SendCallback::CALLBACK_SUCCESSFUL ||
                       DeliveryShortback::res == DeliveryShortback::CALLBACK_SUCCESSFUL);
    EXPECT_TRUE(isCallback);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageText_0700
 * @tc.name     test Send Chinese Text
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_0700, Function | MediumTest | Level3)
{
    LOG("> ---------- Send Sms Chinese Text");
    int32_t slotId = SLOT_ID_0;
    std::string desAddr(SMS_SEND_DST_NUMBER);
    std::string sca("");
    std::string text("中文");

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(desAddr),
                                          Telephony::StringUtils::ToUtf16(sca), Telephony::StringUtils::ToUtf16(text),
                                          sendCallBackPtr, deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE((sendCallBackPtr->GetSendCallbackResult() || deliveryCallBackPtr->GetDeliverybackResult()),
                      true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
    bool isCallback = (SendCallback::res == SendCallback::CALLBACK_SUCCESSFUL ||
                       DeliveryShortback::res == DeliveryShortback::CALLBACK_SUCCESSFUL);
    EXPECT_TRUE(isCallback);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageText_0800
 * @tc.name     test Send English and Numbers Text
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_0800, Function | MediumTest | Level3)
{
    LOG("> ---------- Send Sms English Text");
    int32_t slotId = SLOT_ID_0;
    std::string desAddr(SMS_SEND_DST_NUMBER);
    std::string sca("");
    std::string text("English123");

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(desAddr),
                                          Telephony::StringUtils::ToUtf16(sca), Telephony::StringUtils::ToUtf16(text),
                                          sendCallBackPtr, deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE((sendCallBackPtr->GetSendCallbackResult() || deliveryCallBackPtr->GetDeliverybackResult()),
                      true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
    bool isCallback = (SendCallback::res == SendCallback::CALLBACK_SUCCESSFUL ||
                       DeliveryShortback::res == DeliveryShortback::CALLBACK_SUCCESSFUL);
    EXPECT_TRUE(isCallback);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageText_0900
 * @tc.name     test Send Special Text
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_0900, Function | MediumTest | Level3)
{
    LOG("> ---------- Send Sms Special Text");
    int32_t slotId = SLOT_ID_0;
    std::string desAddr(SMS_SEND_DST_NUMBER);
    std::string sca("");
    std::string text("ㄅǎ㊊↑^#");

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(desAddr),
                                          Telephony::StringUtils::ToUtf16(sca), Telephony::StringUtils::ToUtf16(text),
                                          sendCallBackPtr, deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE((sendCallBackPtr->GetSendCallbackResult() && deliveryCallBackPtr->GetDeliverybackResult()),
                      true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
    EXPECT_EQ(SendCallback::res, SendCallback::CALLBACK_SUCCESSFUL);
    EXPECT_EQ(DeliveryShortback::res, DeliveryShortback::CALLBACK_SUCCESSFUL);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageData_0100
 * @tc.name     Send data SMS messages
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageData_0100, Function | MediumTest | Level3)
{
    LOG("> ---------- Send data SMS messages");
    int32_t slotId = SLOT_ID_0;
    std::string desAddr(SMS_SEND_DST_NUMBER);
    std::string sca("");
    uint8_t data[] = "hello word";
    uint16_t port = 0x00;

    sptr<SendCallbackTest> sendCallBackPtr(new SendCallbackTest());
    sptr<DeliveryCallbackTest> deliveryCallBackPtr(new DeliveryCallbackTest());

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(desAddr),
                                          Telephony::StringUtils::ToUtf16(sca), port, data,
                                          sizeof(data) / sizeof(data[0]), sendCallBackPtr, deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE((sendCallBackPtr->GetSendCallbackResult() || deliveryCallBackPtr->GetDeliverybackResult()),
                      true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
    bool isCallback = (SendCallback::res == SendCallback::CALLBACK_SUCCESSFUL ||
                       DeliveryShortback::res == DeliveryShortback::CALLBACK_SUCCESSFUL);
    EXPECT_TRUE(isCallback);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageData_0200
 * @tc.name     The value of slotId is incorrect, and SMS sending fails
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageData_0200, Function | MediumTest | Level3)
{
    LOG("> ---------- Send data SMS messages error slotId");
    int32_t slotId = ERROR_SLOT_ID;
    std::string desAddr(SMS_SEND_DST_NUMBER);
    std::string sca("");
    uint8_t data[] = "hello word";
    uint16_t port = 0x00;

    sptr<SendCallbackTest> sendCallBackPtr(new SendCallbackTest());
    sptr<DeliveryCallbackTest> deliveryCallBackPtr(new DeliveryCallbackTest());

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(desAddr),
                                          Telephony::StringUtils::ToUtf16(sca), port, data,
                                          sizeof(data) / sizeof(data[0]), sendCallBackPtr, deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE_WITHOUT_EXPECT((sendCallBackPtr->GetSendCallbackResult() ||
                                      deliveryCallBackPtr->GetDeliverybackResult()),
                                     true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_NE(SendCallback::res, SendCallback::CALLBACK_SUCCESSFUL);
    EXPECT_NE(DeliveryShortback::res, DeliveryShortback::CALLBACK_SUCCESSFUL);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageData_0300
 * @tc.name     The desAddr parameter is empty, sending SMS failed
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageData_0300, Function | MediumTest | Level3)
{
    LOG("> ---------- send Sms desAddr empty");
    int32_t slotId = SLOT_ID_0;
    std::string desAddr("");
    std::string sca("");
    uint8_t data[] = "hello";
    uint16_t port = 0x00;

    sptr<SendCallbackTest> sendCallBackPtr(new SendCallbackTest());
    sptr<DeliveryCallbackTest> deliveryCallBackPtr(new DeliveryCallbackTest());

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(desAddr),
                                          Telephony::StringUtils::ToUtf16(sca), port, data,
                                          sizeof(data) / sizeof(data[0]), sendCallBackPtr, deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE_WITHOUT_EXPECT((sendCallBackPtr->GetSendCallbackResult() ||
                                      deliveryCallBackPtr->GetDeliverybackResult()),
                                     true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_NE(SendCallback::res, SendCallback::CALLBACK_SUCCESSFUL);
    EXPECT_NE(DeliveryShortback::res, DeliveryShortback::CALLBACK_SUCCESSFUL);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageData_0400
 * @tc.name     Send SMS Chinese data
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageData_0400, Function | MediumTest | Level3)
{
    LOG("> ---------- Send Sms Chinese Data");
    int32_t slotId = SLOT_ID_0;
    std::string desAddr(SMS_SEND_DST_NUMBER);
    std::string sca("");
    uint16_t port = 0x00;
    uint8_t data[] = "中文";

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(desAddr),
                                          Telephony::StringUtils::ToUtf16(sca), port, data,
                                          sizeof(data) / sizeof(data[0]), sendCallBackPtr, deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE((sendCallBackPtr->GetSendCallbackResult() || deliveryCallBackPtr->GetDeliverybackResult()),
                      true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool isCallback = (SendCallback::res == SendCallback::CALLBACK_SUCCESSFUL ||
                       DeliveryShortback::res == DeliveryShortback::CALLBACK_SUCCESSFUL);
    EXPECT_TRUE(isCallback);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageData_0500
 * @tc.name     Send SMS single byte data
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageData_0500, Function | MediumTest | Level3)
{
    LOG("> ---------- Send Sms single byte Data");
    int32_t slotId = SLOT_ID_0;
    std::string desAddr(SMS_SEND_DST_NUMBER);
    std::string sca("");
    uint16_t port = 1;
    uint8_t data[] = "123qwe";

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(desAddr),
                                          Telephony::StringUtils::ToUtf16(sca), port, data,
                                          sizeof(data) / sizeof(data[0]), sendCallBackPtr, deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE((sendCallBackPtr->GetSendCallbackResult() || deliveryCallBackPtr->GetDeliverybackResult()),
                      true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool isCallback = (SendCallback::res == SendCallback::CALLBACK_SUCCESSFUL ||
                       DeliveryShortback::res == DeliveryShortback::CALLBACK_SUCCESSFUL);
    EXPECT_TRUE(isCallback);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageData_0600
 * @tc.name     Send SMS special characters data
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageData_0600, Function | MediumTest | Level3)
{
    LOG("> ---------- Send Sms special characters Data");
    int32_t slotId = SLOT_ID_0;
    std::string desAddr(SMS_SEND_DST_NUMBER);
    std::string sca("");
    uint16_t port = 1;
    uint8_t data[] = "ㄅǎ㊊↑^#";

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(desAddr),
                                          Telephony::StringUtils::ToUtf16(sca), port, data,
                                          sizeof(data) / sizeof(data[0]), sendCallBackPtr, deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE((sendCallBackPtr->GetSendCallbackResult() || deliveryCallBackPtr->GetDeliverybackResult()),
                      true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool isCallback = (SendCallback::res == SendCallback::CALLBACK_SUCCESSFUL ||
                       DeliveryShortback::res == DeliveryShortback::CALLBACK_SUCCESSFUL);
    EXPECT_TRUE(isCallback);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageData_0700
 * @tc.name     Send Sms Null Data
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageData_0700, Function | MediumTest | Level3)
{
    LOG("> ---------- Send Sms Null Data");
    int32_t slotId = SLOT_ID_0;
    std::string desAddr(SMS_SEND_DST_NUMBER);
    std::string sca("");
    uint16_t port = 1;
    uint8_t data[] = "";

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(desAddr),
                                          Telephony::StringUtils::ToUtf16(sca), port, data,
                                          sizeof(data) / sizeof(data[0]), sendCallBackPtr, deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE((sendCallBackPtr->GetSendCallbackResult() || deliveryCallBackPtr->GetDeliverybackResult()),
                      true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    bool isCallback = (SendCallback::res == SendCallback::CALLBACK_SUCCESSFUL ||
                       DeliveryShortback::res == DeliveryShortback::CALLBACK_SUCCESSFUL);
    EXPECT_TRUE(isCallback);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageData_0800
 * @tc.name     Send Sms Max Length Data
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageData_0800, Function | MediumTest | Level3)
{
    LOG("> ---------- Send Sms Max Length Data");
    int32_t slotId = SLOT_ID_0;
    std::string desAddr(SMS_SEND_DST_NUMBER);
    std::string sca("");
    uint16_t port = 1;
    uint8_t data[MAX_USER_DATA_LENTH];

    for (int i = 0; i < MAX_USER_DATA_LENTH; ++i)
    {
        data[i] = '1';
    }

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(desAddr),
                                          Telephony::StringUtils::ToUtf16(sca), port, data,
                                          sizeof(data) / sizeof(data[0]), sendCallBackPtr, deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE((sendCallBackPtr->GetSendCallbackResult() || deliveryCallBackPtr->GetDeliverybackResult()),
                      true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
    bool isCallback = (SendCallback::res == SendCallback::CALLBACK_SUCCESSFUL ||
                       DeliveryShortback::res == DeliveryShortback::CALLBACK_SUCCESSFUL);
    EXPECT_TRUE(isCallback);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageData_0900
 * @tc.name     test Send Long Data
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageData_0900, Function | MediumTest | Level3)
{
    LOG("> ---------- send Sms Long Data");
    int32_t slotId = SLOT_ID_0;
    std::string desAddr(SMS_SEND_DST_NUMBER);
    std::string sca("");
    uint16_t port = 1;
    const int MAX_LEN_PLUS = MAX_USER_DATA_LENTH + 1;
    uint8_t data[MAX_LEN_PLUS];

    for (int i = 0; i < MAX_LEN_PLUS; ++i)
    {
        data[i] = '1';
    }

    sptr<SendCallbackTest> sendCallBackPtr(new SendCallbackTest());
    sptr<DeliveryCallbackTest> deliveryCallBackPtr(new DeliveryCallbackTest());

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(desAddr),
                                          Telephony::StringUtils::ToUtf16(sca), port, data,
                                          sizeof(data) / sizeof(data[0]), sendCallBackPtr, deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE((sendCallBackPtr->GetSendCallbackResult() || deliveryCallBackPtr->GetDeliverybackResult()),
                      true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
    bool isCallback = (SendCallback::res == SendCallback::CALLBACK_SUCCESSFUL ||
                       DeliveryShortback::res == DeliveryShortback::CALLBACK_SUCCESSFUL);
    EXPECT_TRUE(isCallback);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageData_1000
 * @tc.name     When prot reaches the maximum value, SMS sending succeeds
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageData_1000, Function | MediumTest | Level3)
{
    LOG("> ---------- send Sms max Port");
    int32_t slotId = SLOT_ID_0;
    std::string desAddr(SMS_SEND_DST_NUMBER);
    std::string sca("");
    uint8_t data[] = "hello word";
    uint16_t port = 0xffff;

    sptr<SendCallbackTest> sendCallBackPtr(new SendCallbackTest());
    sptr<DeliveryCallbackTest> deliveryCallBackPtr(new DeliveryCallbackTest());

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(desAddr),
                                          Telephony::StringUtils::ToUtf16(sca), port, data,
                                          sizeof(data) / sizeof(data[0]), sendCallBackPtr, deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE((sendCallBackPtr->GetSendCallbackResult() || deliveryCallBackPtr->GetDeliverybackResult()),
                      true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
    bool isCallback = (SendCallback::res == SendCallback::CALLBACK_SUCCESSFUL ||
                       DeliveryShortback::res == DeliveryShortback::CALLBACK_SUCCESSFUL);
    EXPECT_TRUE(isCallback);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageData_1100
 * @tc.name     The port parameter is smaller than the minimum value, SMS sending succeeds
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageData_1100, Function | MediumTest | Level3)
{
    LOG("> ---------- send Sms port smaller than the minimum");
    int32_t slotId = SLOT_ID_0;
    std::string desAddr(SMS_SEND_DST_NUMBER);
    std::string sca("");
    uint8_t data[] = "hello";
    uint16_t port = -1;

    sptr<SendCallbackTest> sendCallBackPtr(new SendCallbackTest());
    sptr<DeliveryCallbackTest> deliveryCallBackPtr(new DeliveryCallbackTest());

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(desAddr),
                                          Telephony::StringUtils::ToUtf16(sca), port, data,
                                          sizeof(data) / sizeof(data[0]), sendCallBackPtr, deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE((sendCallBackPtr->GetSendCallbackResult() || deliveryCallBackPtr->GetDeliverybackResult()),
                      true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
    bool isCallback = (SendCallback::res == SendCallback::CALLBACK_SUCCESSFUL ||
                       DeliveryShortback::res == DeliveryShortback::CALLBACK_SUCCESSFUL);
    EXPECT_TRUE(isCallback);
}
