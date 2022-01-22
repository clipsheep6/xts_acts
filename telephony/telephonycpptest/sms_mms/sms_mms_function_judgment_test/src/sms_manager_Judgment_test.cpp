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
#include "i_sms_service_interface.h"
#include "condition_lock.h"
#include "string_ex.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace Telephony;
using namespace OHOS::Telephony::SmsMmsManagerTest;
using namespace SmsMmsManagerTest;
using namespace OHOS::Telephony;

/**
 * @tc.number   Telephony_SmsMms_GetSmsSegmentsInfo_0100
 * @tc.name     set message to plain Chinese with a length of MAX_CHINESE_MESSAGE_LENTH(63) characters,
 *              force7BitCode is true, and view the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetSmsSegmentsInfo_0100, Function | MediumTest | Level3)
{
    string message;
    for (int i = 0; i < MAX_CHINESE_MESSAGE_LENTH; ++i) {
        message += "中";
    }
    ISmsServiceInterface::SmsSegmentsInfo result;
    bool isInfo = g_smsClientPtr->GetPtr()->GetSmsSegmentsInfo(SLOT_ID_0, Str8ToStr16(message), true, result);
    ASSERT_TRUE(isInfo);
    EXPECT_TRUE(result.msgSegCount == MessageSize::SIZE_1);
    EXPECT_TRUE(result.msgEncodingCount == MAX_CHINESE_MESSAGE_LENTH);
    int remaining = result.msgSegCount * MAX_CHAR_MESSAGE_LENTH - result.msgEncodingCount;
    EXPECT_TRUE(result.msgRemainCount == remaining);
    EXPECT_TRUE(
        result.msgCodeScheme == ISmsServiceInterface::SmsSegmentsInfo::SmsSegmentCodeScheme::SMS_ENCODING_7BIT);
}

/**
 * @tc.number   Telephony_SmsMms_GetSmsSegmentsInfo_0200
 * @tc.name     set message to plain Chinese with a length of MAX_CHINESE_MESSAGE_LENTH(63) characters,
 *              force7BitCode is false, and view the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetSmsSegmentsInfo_0200, Function | MediumTest | Level3)
{
    ISmsServiceInterface::SmsSegmentsInfo result;
    string message;
    for (int i = 0; i < MAX_CHINESE_MESSAGE_LENTH; ++i) {
        message += "中";
    }
    bool isInfo = g_smsClientPtr->GetPtr()->GetSmsSegmentsInfo(SLOT_ID_0, Str8ToStr16(message), false, result);
    ASSERT_TRUE(isInfo);
    EXPECT_TRUE(result.msgSegCount == MessageSize::SIZE_1);
    EXPECT_TRUE(result.msgEncodingCount == MAX_CHINESE_MESSAGE_LENTH);
    int remaining = result.msgSegCount * MAX_CHINESE_MESSAGE_LENTH - result.msgEncodingCount;
    EXPECT_TRUE(result.msgRemainCount == remaining);
    EXPECT_TRUE(
        result.msgCodeScheme == ISmsServiceInterface::SmsSegmentsInfo::SmsSegmentCodeScheme::SMS_ENCODING_16BIT);
}

/**
 * @tc.number   Telephony_SmsMms_GetSmsSegmentsInfo_0300
 * @tc.name     set message to pure Chinese and longer than MAX_CHINESE_MESSAGE_LENTH(64) characters,
 *              and view the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetSmsSegmentsInfo_0300, Function | MediumTest | Level3)
{
    ISmsServiceInterface::SmsSegmentsInfo result;
    string message;
    for (int i = 0; i < MAX_CHINESE_MESSAGE_LENTH + 1; ++i) {
        message += "中";
    }
    bool isInfo = g_smsClientPtr->GetPtr()->GetSmsSegmentsInfo(SLOT_ID_0, Str8ToStr16(message), false, result);
    ASSERT_TRUE(isInfo);
    EXPECT_TRUE(result.msgSegCount == MessageSize::SIZE_2);
    EXPECT_TRUE(result.msgEncodingCount == MAX_CHINESE_MESSAGE_LENTH + 1);
    int remaining = result.msgSegCount * MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH - result.msgEncodingCount;
    EXPECT_TRUE(result.msgRemainCount == remaining);
    EXPECT_TRUE(
        result.msgCodeScheme == ISmsServiceInterface::SmsSegmentsInfo::SmsSegmentCodeScheme::SMS_ENCODING_16BIT);
}

/**
 * @tc.number   Telephony_SmsMms_GetSmsSegmentsInfo_0400
 * @tc.name     set message to pure Chinese and longer than MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH(60) characters,
 *              and view the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetSmsSegmentsInfo_0400, Function | MediumTest | Level3)
{
    string message;
    for (int i = 0; i < MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH; ++i) {
        message += "中";
    }
    ISmsServiceInterface::SmsSegmentsInfo result;
    bool isInfo = g_smsClientPtr->GetPtr()->GetSmsSegmentsInfo(SLOT_ID_0, Str8ToStr16(message), false, result);
    ASSERT_TRUE(isInfo);
    EXPECT_TRUE(result.msgSegCount == MessageSize::SIZE_1);
    EXPECT_TRUE(result.msgEncodingCount == MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH);
    int remaining = result.msgSegCount * MAX_CHINESE_MESSAGE_LENTH - result.msgEncodingCount;
    EXPECT_TRUE(result.msgRemainCount == remaining);
    EXPECT_TRUE(
        result.msgCodeScheme == ISmsServiceInterface::SmsSegmentsInfo::SmsSegmentCodeScheme::SMS_ENCODING_16BIT);
}

/**
 * @tc.number   Telephony_SmsMms_GetSmsSegmentsInfo_0500
 * @tc.name     Set message to English and longer than MAX_CHAR_MESSAGE_LENTH (147). and see the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetSmsSegmentsInfo_0500, Function | MediumTest | Level3)
{
    ISmsServiceInterface::SmsSegmentsInfo result;
    string message;
    for (int i = 0; i < MAX_CHAR_MESSAGE_LENTH + 1; ++i) {
        message += "a";
    }
    bool isInfo = g_smsClientPtr->GetPtr()->GetSmsSegmentsInfo(SLOT_ID_0, Str8ToStr16(message), false, result);
    ASSERT_TRUE(isInfo);
    EXPECT_TRUE(result.msgSegCount == MessageSize::SIZE_2);
    EXPECT_TRUE(result.msgEncodingCount == MAX_CHAR_MESSAGE_LENTH + 1);
    int remaining = result.msgSegCount * MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH - result.msgEncodingCount;
    EXPECT_TRUE(result.msgRemainCount == remaining);
    EXPECT_TRUE(result.msgCodeScheme == ISmsServiceInterface::SmsSegmentsInfo::SmsSegmentCodeScheme::SMS_ENCODING_7BIT);
}

/**
 * @tc.number   Telephony_SmsMms_GetSmsSegmentsInfo_0600
 * @tc.name     set message to pure English and MAX_CHAR_MESSAGE_LENTH (146) long, and see the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetSmsSegmentsInfo_0600, Function | MediumTest | Level3)
{
    string message;
    for (int i = 0; i < MAX_CHAR_MESSAGE_LENTH; ++i) {
        message += "a";
    }
    ISmsServiceInterface::SmsSegmentsInfo result;
    bool isInfo = g_smsClientPtr->GetPtr()->GetSmsSegmentsInfo(SLOT_ID_0, Str8ToStr16(message), false, result);
    ASSERT_TRUE(isInfo);
    EXPECT_TRUE(result.msgSegCount == MessageSize::SIZE_1);
    EXPECT_TRUE(result.msgEncodingCount == MAX_CHAR_MESSAGE_LENTH);
    int remaining = result.msgSegCount * MAX_CHAR_MESSAGE_LENTH - result.msgEncodingCount;
    EXPECT_TRUE(result.msgRemainCount == remaining);
    EXPECT_TRUE(result.msgCodeScheme == ISmsServiceInterface::SmsSegmentsInfo::SmsSegmentCodeScheme::SMS_ENCODING_7BIT);
}

/**
 * @tc.number   Telephony_SmsMms_GetSmsSegmentsInfo_0700
 * @tc.name     set message to pure English and MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH (137) long,
 *              and see the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetSmsSegmentsInfo_0700, Function | MediumTest | Level3)
{
    string message;
    for (int i = 0; i < MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH; ++i) {
        message += "a";
    }
    ISmsServiceInterface::SmsSegmentsInfo result;
    bool isInfo = g_smsClientPtr->GetPtr()->GetSmsSegmentsInfo(SLOT_ID_0, Str8ToStr16(message), false, result);
    ASSERT_TRUE(isInfo);
    EXPECT_TRUE(result.msgSegCount == MessageSize::SIZE_1);
    EXPECT_TRUE(result.msgEncodingCount == MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH);
    int remaining = result.msgSegCount * MAX_CHAR_MESSAGE_LENTH - result.msgEncodingCount;
    EXPECT_TRUE(result.msgRemainCount == remaining);
    EXPECT_TRUE(result.msgCodeScheme == ISmsServiceInterface::SmsSegmentsInfo::SmsSegmentCodeScheme::SMS_ENCODING_7BIT);
}

/**
 * @tc.number   Telephony_SmsMms_GetSmsSegmentsInfo_0800
 * @tc.name     Set message to number and longer than MAX_CHAR_MESSAGE_LENTH(147). and see the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetSmsSegmentsInfo_0800, Function | MediumTest | Level3)
{
    string message;
    for (int i = 0; i < MAX_CHAR_MESSAGE_LENTH + 1; ++i) {
        message += "2";
    }
    ISmsServiceInterface::SmsSegmentsInfo result;
    bool isInfo = g_smsClientPtr->GetPtr()->GetSmsSegmentsInfo(SLOT_ID_0, Str8ToStr16(message), false, result);
    ASSERT_TRUE(isInfo);
    EXPECT_TRUE(result.msgSegCount == MessageSize::SIZE_2);
    EXPECT_TRUE(result.msgEncodingCount == MAX_CHAR_MESSAGE_LENTH + 1);
    int remaining = result.msgSegCount * MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH - result.msgEncodingCount;
    EXPECT_TRUE(result.msgRemainCount == remaining);
    EXPECT_TRUE(result.msgCodeScheme == ISmsServiceInterface::SmsSegmentsInfo::SmsSegmentCodeScheme::SMS_ENCODING_7BIT);
}

/**
 * @tc.number   Telephony_SmsMms_GetSmsSegmentsInfo_0900
 * @tc.name     set message to a pure number of MAX_CHAR_MESSAGE_LENTH(146), and see what is returned
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetSmsSegmentsInfo_0900, Function | MediumTest | Level3)
{
    string message;
    for (int i = 0; i < MAX_CHAR_MESSAGE_LENTH; ++i) {
        message += "2";
    }
    ISmsServiceInterface::SmsSegmentsInfo result;
    bool isInfo = g_smsClientPtr->GetPtr()->GetSmsSegmentsInfo(SLOT_ID_0, Str8ToStr16(message), false, result);
    ASSERT_TRUE(isInfo);
    EXPECT_TRUE(result.msgSegCount == MessageSize::SIZE_1);
    EXPECT_TRUE(result.msgEncodingCount == MAX_CHAR_MESSAGE_LENTH);
    int remaining = result.msgSegCount * MAX_CHAR_MESSAGE_LENTH - result.msgEncodingCount;
    EXPECT_TRUE(result.msgRemainCount == remaining);
    EXPECT_TRUE(result.msgCodeScheme == ISmsServiceInterface::SmsSegmentsInfo::SmsSegmentCodeScheme::SMS_ENCODING_7BIT);
}

/**
 * @tc.number   Telephony_SmsMms_GetSmsSegmentsInfo_1000
 * @tc.name     set message to a pure number of MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH(137), and see what is returned
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetSmsSegmentsInfo_1000, Function | MediumTest | Level3)
{
    string message;
    for (int i = 0; i < MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH; ++i) {
        message += "2";
    }
    ISmsServiceInterface::SmsSegmentsInfo result;
    bool isInfo = g_smsClientPtr->GetPtr()->GetSmsSegmentsInfo(SLOT_ID_0, Str8ToStr16(message), false, result);
    ASSERT_TRUE(isInfo);
    EXPECT_TRUE(result.msgSegCount == MessageSize::SIZE_1);
    EXPECT_TRUE(result.msgEncodingCount == MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH);
    int remaining = result.msgSegCount * MAX_CHAR_MESSAGE_LENTH - result.msgEncodingCount;
    EXPECT_TRUE(result.msgRemainCount == remaining);
    EXPECT_TRUE(result.msgCodeScheme == ISmsServiceInterface::SmsSegmentsInfo::SmsSegmentCodeScheme::SMS_ENCODING_7BIT);
}

/**
 * @tc.number   Telephony_SmsMms_GetSmsSegmentsInfo_1100
 * @tc.name     Set message to special characters and longer than MAX_CHAR_MESSAGE_LENTH(147).
 *              and see what is returned
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetSmsSegmentsInfo_1100, Function | MediumTest | Level3)
{
    string message;
    for (int i = 0; i < MAX_CHAR_MESSAGE_LENTH + 1; ++i) {
        message += "?";
    }
    ISmsServiceInterface::SmsSegmentsInfo result;
    bool isInfo = g_smsClientPtr->GetPtr()->GetSmsSegmentsInfo(SLOT_ID_0, Str8ToStr16(message), false, result);
    ASSERT_TRUE(isInfo);
    EXPECT_TRUE(result.msgSegCount == MessageSize::SIZE_2);
    EXPECT_TRUE(result.msgEncodingCount == MAX_CHAR_MESSAGE_LENTH + 1);
    int remaining = result.msgSegCount * MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH - result.msgEncodingCount;
    EXPECT_TRUE(result.msgRemainCount == remaining);
    EXPECT_TRUE(result.msgCodeScheme == ISmsServiceInterface::SmsSegmentsInfo::SmsSegmentCodeScheme::SMS_ENCODING_7BIT);
}

/**
 * @tc.number   Telephony_SmsMms_GetSmsSegmentsInfo_1200
 * @tc.name     set message to a pure special character of MAX_CHAR_MESSAGE_LENTH(146), and see the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetSmsSegmentsInfo_1200, Function | MediumTest | Level3)
{
    string message;
    for (int i = 0; i < MAX_CHAR_MESSAGE_LENTH; ++i) {
        message += "?";
    }
    ISmsServiceInterface::SmsSegmentsInfo result;
    bool isInfo = g_smsClientPtr->GetPtr()->GetSmsSegmentsInfo(SLOT_ID_0, Str8ToStr16(message), false, result);
    ASSERT_TRUE(isInfo);
    EXPECT_TRUE(result.msgSegCount == MessageSize::SIZE_1);
    EXPECT_TRUE(result.msgEncodingCount == MAX_CHAR_MESSAGE_LENTH);
    int remaining = result.msgSegCount * MAX_CHAR_MESSAGE_LENTH - result.msgEncodingCount;
    EXPECT_TRUE(result.msgRemainCount == remaining);
    EXPECT_TRUE(result.msgCodeScheme == ISmsServiceInterface::SmsSegmentsInfo::SmsSegmentCodeScheme::SMS_ENCODING_7BIT);
}

/**
 * @tc.number   Telephony_SmsMms_GetSmsSegmentsInfo_1300
 * @tc.name     set message to a pure special character of MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH(137), and see the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetSmsSegmentsInfo_1300, Function | MediumTest | Level3)
{
    string message;
    for (int i = 0; i < MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH; ++i) {
        message += "?";
    }
    ISmsServiceInterface::SmsSegmentsInfo result;
    bool isInfo = g_smsClientPtr->GetPtr()->GetSmsSegmentsInfo(SLOT_ID_0, Str8ToStr16(message), false, result);
    ASSERT_TRUE(isInfo);
    EXPECT_TRUE(result.msgSegCount == MessageSize::SIZE_1);
    EXPECT_TRUE(result.msgEncodingCount == MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH);
    int remaining = result.msgSegCount * MAX_CHAR_MESSAGE_LENTH - result.msgEncodingCount;
    EXPECT_TRUE(result.msgRemainCount == remaining);
    EXPECT_TRUE(result.msgCodeScheme == ISmsServiceInterface::SmsSegmentsInfo::SmsSegmentCodeScheme::SMS_ENCODING_7BIT);
}

/**
 * @tc.number   Telephony_SmsMms_GetSmsSegmentsInfo_1400
 * @tc.name     Set message to a mixed character of MAX_CHINESE_MESSAGE_LENTH(63) characters and see the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetSmsSegmentsInfo_1400, Function | MediumTest | Level3)
{
    string message = "汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1A";
    ISmsServiceInterface::SmsSegmentsInfo result;
    bool isInfo = g_smsClientPtr->GetPtr()->GetSmsSegmentsInfo(SLOT_ID_0, Str8ToStr16(message), false, result);
    ASSERT_TRUE(isInfo);
    EXPECT_TRUE(result.msgSegCount == MessageSize::SIZE_1);
    EXPECT_TRUE(result.msgEncodingCount == MAX_CHINESE_MESSAGE_LENTH);
    int remaining = result.msgSegCount * MAX_CHINESE_MESSAGE_LENTH - result.msgEncodingCount;
    EXPECT_TRUE(result.msgRemainCount == remaining);
    EXPECT_TRUE(
        result.msgCodeScheme == ISmsServiceInterface::SmsSegmentsInfo::SmsSegmentCodeScheme::SMS_ENCODING_16BIT);
}

/**
 * @tc.number   Telephony_SmsMms_GetSmsSegmentsInfo_1500
 * @tc.name     Set message to Mixed character and longer than MAX_CHINESE_MESSAGE_LENTH(64). and see the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetSmsSegmentsInfo_1500, Function | MediumTest | Level3)
{
    string message = "汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1A汉";
    ISmsServiceInterface::SmsSegmentsInfo result;
    bool isInfo = g_smsClientPtr->GetPtr()->GetSmsSegmentsInfo(SLOT_ID_0, Str8ToStr16(message), false, result);
    ASSERT_TRUE(isInfo);
    EXPECT_TRUE(result.msgSegCount == MessageSize::SIZE_2);
    EXPECT_TRUE(result.msgEncodingCount == MAX_CHINESE_MESSAGE_LENTH + 1);
    int remaining = result.msgSegCount * MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH - result.msgEncodingCount;
    EXPECT_TRUE(result.msgRemainCount == remaining);
    EXPECT_TRUE(
        result.msgCodeScheme == ISmsServiceInterface::SmsSegmentsInfo::SmsSegmentCodeScheme::SMS_ENCODING_16BIT);
}

/**
 * @tc.number   Telephony_SmsMms_GetSmsSegmentsInfo_1600
 * @tc.name     Set message to a mixed character of MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH(60). and see the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetSmsSegmentsInfo_1600, Function | MediumTest | Level3)
{
    string message = "汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#";
    ISmsServiceInterface::SmsSegmentsInfo result;
    bool isInfo = g_smsClientPtr->GetPtr()->GetSmsSegmentsInfo(SLOT_ID_0, Str8ToStr16(message), false, result);
    ASSERT_TRUE(isInfo);
    EXPECT_TRUE(result.msgSegCount == MessageSize::SIZE_1);
    EXPECT_TRUE(result.msgEncodingCount == MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH);
    int remaining = result.msgSegCount * MAX_CHINESE_MESSAGE_LENTH - result.msgEncodingCount;
    EXPECT_TRUE(result.msgRemainCount == remaining);
    EXPECT_TRUE(
        result.msgCodeScheme == ISmsServiceInterface::SmsSegmentsInfo::SmsSegmentCodeScheme::SMS_ENCODING_16BIT);
}

/**
 * @tc.number   Telephony_SmsMms_GetSmsSegmentsInfo_1700
 * @tc.name     Set message to empty. and see the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetSmsSegmentsInfo_1700, Function | MediumTest | Level3)
{
    ISmsServiceInterface::SmsSegmentsInfo result;
    string message = "";
    bool isInfo = g_smsClientPtr->GetPtr()->GetSmsSegmentsInfo(SLOT_ID_0, Str8ToStr16(message), false, result);
    ASSERT_FALSE(isInfo);
}

/**
 * @tc.number   Telephony_SmsMms_GetSmsSegmentsInfo_1800
 * @tc.name     set message to pure English and MAX_MESSAGE_LENTH (2401), and see the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetSmsSegmentsInfo_1800, Function | MediumTest | Level3)
{
    string message;
    for (int i = 0; i < MAX_MESSAGE_LENTH; ++i) {
        message += "a";
    }
    ISmsServiceInterface::SmsSegmentsInfo result;
    bool isInfo = g_smsClientPtr->GetPtr()->GetSmsSegmentsInfo(SLOT_ID_0, Str8ToStr16(message), false, result);
    ASSERT_TRUE(isInfo);

    EXPECT_TRUE(result.msgSegCount == MessageSize::SIZE_18);
    EXPECT_TRUE(result.msgEncodingCount == MAX_MESSAGE_LENTH);
    int remaining = result.msgSegCount * MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH - result.msgEncodingCount;
    EXPECT_TRUE(result.msgRemainCount == remaining);
    EXPECT_TRUE(result.msgCodeScheme == ISmsServiceInterface::SmsSegmentsInfo::SmsSegmentCodeScheme::SMS_ENCODING_7BIT);
}

/**
 * @tc.number   Telephony_SmsMms_GetSmsSegmentsInfo_1900
 * @tc.name     Set message to a length greater than MAX_MESSAGE_LENTH(2402) ，and view the result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetSmsSegmentsInfo_1900, Function | MediumTest | Level3)
{
    string message;
    for (int i = 0; i < MAX_MESSAGE_LENTH + 1; ++i) {
        message += "a";
    }
    ISmsServiceInterface::SmsSegmentsInfo result;
    bool isInfo = g_smsClientPtr->GetPtr()->GetSmsSegmentsInfo(SLOT_ID_0, Str8ToStr16(message), false, result);
    ASSERT_TRUE(isInfo);
    EXPECT_TRUE(result.msgSegCount == MessageSize::SIZE_18);
    EXPECT_TRUE(result.msgEncodingCount == MAX_MESSAGE_LENTH);
    int remaining = result.msgSegCount * MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH - result.msgEncodingCount;
    EXPECT_TRUE(result.msgRemainCount == remaining);
    EXPECT_TRUE(result.msgCodeScheme == ISmsServiceInterface::SmsSegmentsInfo::SmsSegmentCodeScheme::SMS_ENCODING_7BIT);
}

/**
 * @tc.number   Telephony_SmsMms_GetSmsSegmentsInfo_2000
 * @tc.name     Enter an incorrect slotId, Obtaining results failed
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetSmsSegmentsInfo_2000, Function | MediumTest | Level3)
{
    string message;
    for (int i = 0; i < MAX_MESSAGE_LENTH + 1; ++i) {
        message += "a";
    }
    ISmsServiceInterface::SmsSegmentsInfo result;
    bool isInfo = g_smsClientPtr->GetPtr()->GetSmsSegmentsInfo(ERROR_SLOT_ID, Str8ToStr16(message), false, result);
    ASSERT_FALSE(isInfo);
}

/**
 * @tc.number   Telephony_SmsMms_IsImsSmsSupported_0100
 * @tc.name     Call the IsImsSmsSupported interface, view the results
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_IsImsSmsSupported_0100, Function | MediumTest | Level3)
{
    bool result = g_smsClientPtr->GetPtr()->IsImsSmsSupported();
    EXPECT_TRUE(result == false || result == true);
}

/**
 * @tc.number   Telephony_SmsMms_HasSmsCapability_0100
 * @tc.name     Whether SMS is supported
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_HasSmsCapability_0100, Function | MediumTest | Level3)
{
    bool result = g_smsClientPtr->GetPtr()->HasSmsCapability();
    EXPECT_TRUE(result);
}

/**
 * @tc.number   Telephony_SmsMms_GetImsShortMessageFormat_0100
 * @tc.name     Call the GetImsShortMessageFormat interface, view the results
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_GetImsShortMessageFormat_0100, Function | MediumTest | Level3)
{
    std::u16string result = g_smsClientPtr->GetPtr()->GetImsShortMessageFormat();
    EXPECT_TRUE(Str16ToStr8(result) == "3gpp");
}