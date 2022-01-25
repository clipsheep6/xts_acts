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
using namespace OHOS::Telephony;

/**
 * @tc.number   Telephony_SmsMms_SplitMessage_0100
 * @tc.name     set message to plain Chinese with a length of MAX_CHINESE_MESSAGE_LENTH(63) characters,
 *              and view the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SplitMessage_0100, Function | MediumTest | Level3)
{
    std::vector<std::u16string> result;
    string message;
    for (int i = 0; i < MAX_CHINESE_MESSAGE_LENTH; ++i) {
        message += "中";
    }
    result = g_smsClientPtr->GetPtr()->SplitMessage(Str8ToStr16(message));
    ASSERT_TRUE(result.size() == MessageSize::SIZE_1);
    u16string newReseult;
    for (uint i = 0; i < result.size(); ++i) {
        newReseult += result[i];
    }
    ASSERT_TRUE(newReseult == Str8ToStr16(message));
}

/**
 * @tc.number   Telephony_SmsMms_SplitMessage_0200
 * @tc.name     set message to pure Chinese and longer than MAX_CHINESE_MESSAGE_LENTH(64) characters,
 *              and view the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SplitMessage_0200, Function | MediumTest | Level3)
{
    std::vector<std::u16string> result;
    string message;
    for (int i = 0; i < MAX_CHINESE_MESSAGE_LENTH + 1; ++i) {
        message += "中";
    }
    result = g_smsClientPtr->GetPtr()->SplitMessage(Str8ToStr16(message));
    ASSERT_TRUE(result.size() == MessageSize::SIZE_2);
    u16string newReseult;
    for (uint i = 0; i < result.size(); ++i) {
        newReseult += result[i];
    }
    ASSERT_TRUE(newReseult == Str8ToStr16(message));
}

/**
 * @tc.number   Telephony_SmsMms_SplitMessage_0300
 * @tc.name     set message to pure Chinese and longer than MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH(60) characters,
 *              and view the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SplitMessage_0300, Function | MediumTest | Level3)
{
    std::vector<std::u16string> result;
    string message;
    for (int i = 0; i < MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH; ++i) {
        message += "中";
    }
    result = g_smsClientPtr->GetPtr()->SplitMessage(Str8ToStr16(message));
    ASSERT_TRUE(result.size() == MessageSize::SIZE_1);
    u16string newReseult;
    for (uint i = 0; i < result.size(); ++i) {
        newReseult += result[i];
    }
    ASSERT_TRUE(newReseult == Str8ToStr16(message));
}

/**
 * @tc.number   Telephony_SmsMms_SplitMessage_0400
 * @tc.name     Set message to English and longer than MAX_CHAR_MESSAGE_LENTH (147). and see the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SplitMessage_0400, Function | MediumTest | Level3)
{
    std::vector<std::u16string> result;
    string message;
    for (int i = 0; i < MAX_CHAR_MESSAGE_LENTH + 1; ++i) {
        message += "a";
    }
    result = g_smsClientPtr->GetPtr()->SplitMessage(Str8ToStr16(message));
    ASSERT_TRUE(result.size() == MessageSize::SIZE_2);
    u16string newReseult;
    for (uint i = 0; i < result.size(); ++i) {
        newReseult += result[i];
    }
    ASSERT_TRUE(newReseult == Str8ToStr16(message));
}

/**
 * @tc.number   Telephony_SmsMms_SplitMessage_0500
 * @tc.name     set message to pure English and MAX_CHAR_MESSAGE_LENTH (146) long, and see the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SplitMessage_0500, Function | MediumTest | Level3)
{
    std::vector<std::u16string> result;
    string message;
    for (int i = 0; i < MAX_CHAR_MESSAGE_LENTH; ++i) {
        message += "a";
    }
    result = g_smsClientPtr->GetPtr()->SplitMessage(Str8ToStr16(message));
    ASSERT_TRUE(result.size() == MessageSize::SIZE_1);
    u16string newReseult;
    for (uint i = 0; i < result.size(); ++i) {
        newReseult += result[i];
    }
    ASSERT_TRUE(newReseult == Str8ToStr16(message));
}

/**
 * @tc.number   Telephony_SmsMms_SplitMessage_0600
 * @tc.name     set message to pure English and MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH (137) long,
 *              and see the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SplitMessage_0600, Function | MediumTest | Level3)
{
    std::vector<std::u16string> result;
    string message;
    for (int i = 0; i < MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH; ++i) {
        message += "a";
    }
    result = g_smsClientPtr->GetPtr()->SplitMessage(Str8ToStr16(message));
    ASSERT_TRUE(result.size() == MessageSize::SIZE_1);
    u16string newReseult;
    for (uint i = 0; i < result.size(); ++i) {
        newReseult += result[i];
    }
    ASSERT_TRUE(newReseult == Str8ToStr16(message));
}

/**
 * @tc.number   Telephony_SmsMms_SplitMessage_0700
 * @tc.name     Set message to number and longer than MAX_CHAR_MESSAGE_LENTH(147). and see the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SplitMessage_0700, Function | MediumTest | Level3)
{
    std::vector<std::u16string> result;
    string message;
    for (int i = 0; i < MAX_CHAR_MESSAGE_LENTH + 1; ++i) {
        message += "2";
    }
    result = g_smsClientPtr->GetPtr()->SplitMessage(Str8ToStr16(message));
    ASSERT_TRUE(result.size() == MessageSize::SIZE_2);
    u16string newReseult;
    for (uint i = 0; i < result.size(); ++i) {
        newReseult += result[i];
    }
    ASSERT_TRUE(newReseult == Str8ToStr16(message));
}

/**
 * @tc.number   Telephony_SmsMms_SplitMessage_0800
 * @tc.name     set message to a pure number of MAX_CHAR_MESSAGE_LENTH(146), and see what is returned
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SplitMessage_0800, Function | MediumTest | Level3)
{
    std::vector<std::u16string> result;
    string message;
    for (int i = 0; i < MAX_CHAR_MESSAGE_LENTH; ++i) {
        message += "2";
    }
    result = g_smsClientPtr->GetPtr()->SplitMessage(Str8ToStr16(message));
    ASSERT_TRUE(result.size() == MessageSize::SIZE_1);
    u16string newReseult;
    for (uint i = 0; i < result.size(); ++i) {
        newReseult += result[i];
    }
    ASSERT_TRUE(newReseult == Str8ToStr16(message));
}

/**
 * @tc.number   Telephony_SmsMms_SplitMessage_0900
 * @tc.name     set message to a pure number of MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH(137), and see what is returned
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SplitMessage_0900, Function | MediumTest | Level3)
{
    std::vector<std::u16string> result;
    string message;
    for (int i = 0; i < MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH; ++i) {
        message += "2";
    }
    result = g_smsClientPtr->GetPtr()->SplitMessage(Str8ToStr16(message));
    ASSERT_TRUE(result.size() == MessageSize::SIZE_1);
    u16string newReseult;
    for (uint i = 0; i < result.size(); ++i) {
        newReseult += result[i];
    }
    ASSERT_TRUE(newReseult == Str8ToStr16(message));
}

/**
 * @tc.number   Telephony_SmsMms_SplitMessage_1000
 * @tc.name     Set message to special characters and longer than MAX_CHAR_MESSAGE_LENTH(147).
 *              and see what is returned
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SplitMessage_1000, Function | MediumTest | Level3)
{
    std::vector<std::u16string> result;
    string message;
    for (int i = 0; i < MAX_CHAR_MESSAGE_LENTH + 1; ++i) {
        message += "?";
    }
    result = g_smsClientPtr->GetPtr()->SplitMessage(Str8ToStr16(message));
    ASSERT_TRUE(result.size() == MessageSize::SIZE_2);
    u16string newReseult;
    for (uint i = 0; i < result.size(); ++i) {
        newReseult += result[i];
    }
    ASSERT_TRUE(newReseult == Str8ToStr16(message));
}

/**
 * @tc.number   Telephony_SmsMms_SplitMessage_1100
 * @tc.name     set message to a pure special character of MAX_CHAR_MESSAGE_LENTH(146), and see the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SplitMessage_1100, Function | MediumTest | Level3)
{
    std::vector<std::u16string> result;
    string message;
    for (int i = 0; i < MAX_CHAR_MESSAGE_LENTH; ++i) {
        message += "?";
    }
    result = g_smsClientPtr->GetPtr()->SplitMessage(Str8ToStr16(message));
    ASSERT_TRUE(result.size() == MessageSize::SIZE_1);
    u16string newReseult;
    for (uint i = 0; i < result.size(); ++i) {
        newReseult += result[i];
    }
    ASSERT_TRUE(newReseult == Str8ToStr16(message));
}

/**
 * @tc.number   Telephony_SmsMms_SplitMessage_1200
 * @tc.name     set message to a pure special character of MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH(137), and see the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SplitMessage_1200, Function | MediumTest | Level3)
{
    std::vector<std::u16string> result;
    string message;
    for (int i = 0; i < MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH; ++i) {
        message += "?";
    }
    result = g_smsClientPtr->GetPtr()->SplitMessage(Str8ToStr16(message));
    ASSERT_TRUE(result.size() == MessageSize::SIZE_1);
    u16string newReseult;
    for (uint i = 0; i < result.size(); ++i) {
        newReseult += result[i];
    }
    ASSERT_TRUE(newReseult == Str8ToStr16(message));
}

/**
 * @tc.number   Telephony_SmsMms_SplitMessage_1300
 * @tc.name     Set message to a mixed character of MAX_CHINESE_MESSAGE_LENTH(63) characters and see the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SplitMessage_1300, Function | MediumTest | Level3)
{
    std::vector<std::u16string> result;
    string message = "汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1A";
    result = g_smsClientPtr->GetPtr()->SplitMessage(Str8ToStr16(message));
    ASSERT_TRUE(result.size() == MessageSize::SIZE_1);
    u16string newReseult;
    for (uint i = 0; i < result.size(); ++i) {
        newReseult += result[i];
    }
    ASSERT_TRUE(newReseult == Str8ToStr16(message));
}

/**
 * @tc.number   Telephony_SmsMms_SplitMessage_1400
 * @tc.name     Set message to Mixed character and longer than MAX_CHINESE_MESSAGE_LENTH(64). and see the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SplitMessage_1400, Function | MediumTest | Level3)
{
    std::vector<std::u16string> result;
    string message = "汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1A汉";
    result = g_smsClientPtr->GetPtr()->SplitMessage(Str8ToStr16(message));
    ASSERT_TRUE(result.size() == MessageSize::SIZE_2);
    u16string newReseult;
    for (uint i = 0; i < result.size(); ++i) {
        newReseult += result[i];
    }
    ASSERT_TRUE(newReseult == Str8ToStr16(message));
}

/**
 * @tc.number   Telephony_SmsMms_SplitMessage_1500
 * @tc.name     Set message to a mixed character of MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH(60). and see the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SplitMessage_1500, Function | MediumTest | Level3)
{
    std::vector<std::u16string> result;
    string message = "汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#";
    result = g_smsClientPtr->GetPtr()->SplitMessage(Str8ToStr16(message));
    ASSERT_TRUE(result.size() == MessageSize::SIZE_1);
    u16string newReseult;
    for (uint i = 0; i < result.size(); ++i) {
        newReseult += result[i];
    }
    ASSERT_TRUE(newReseult == Str8ToStr16(message));
}

/**
 * @tc.number   Telephony_SmsMms_SplitMessage_1600
 * @tc.name     Set message to empty. and see the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SplitMessage_1600, Function | MediumTest | Level3)
{
    std::vector<std::u16string> result;
    string message = "";
    result = g_smsClientPtr->GetPtr()->SplitMessage(Str8ToStr16(message));
    ASSERT_TRUE(result.empty());
}

/**
 * @tc.number   Telephony_SmsMms_SplitMessage_1700
 * @tc.name     set message to pure English and MAX_MESSAGE_LENTH (2401), and see the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SplitMessage_1700, Function | MediumTest | Level3)
{
    std::vector<std::u16string> result;
    string message;
    for (int i = 0; i < MAX_MESSAGE_LENTH; ++i) {
        message += "a";
    }
    result = g_smsClientPtr->GetPtr()->SplitMessage(Str8ToStr16(message));
    ASSERT_TRUE(result.size() == MessageSize::SIZE_18);
    u16string newReseult;
    for (uint i = 0; i < result.size(); ++i) {
        newReseult += result[i];
    }
    ASSERT_TRUE(newReseult == Str8ToStr16(message));
}

/**
 * @tc.number   Telephony_SmsMms_SplitMessage_1800
 * @tc.name     Set message to a length greater than MAX_MESSAGE_LENTH(2402) ，and view the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SplitMessage_1800, Function | MediumTest | Level3)
{
    std::vector<std::u16string> result;
    string message;
    for (int i = 0; i < MAX_MESSAGE_LENTH + 1; ++i) {
        message += "a";
    }
    result = g_smsClientPtr->GetPtr()->SplitMessage(Str8ToStr16(message));
    ASSERT_TRUE(result.size() == MessageSize::SIZE_18);
    u16string newReseult;
    for (uint i = 0; i < result.size(); ++i) {
        newReseult += result[i];
    }
    string bodyMessage = message.substr(0, MAX_MESSAGE_LENTH);
    ASSERT_TRUE(newReseult == Str8ToStr16(bodyMessage));
}

//-------------------------------------*CreateMessage CDMA*-------------------
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
