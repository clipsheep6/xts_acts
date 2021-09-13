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
#include "condition_lock.h"

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
 * @tc.number   Telephony_SmsMms_SendMessageText_0100
 * @tc.name     send sms slotId 1
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_0100, Function | MediumTest | Level1)
{
    LOG("> ---------- Send Sms Text");
    int32_t slotId = SLOT_ID_1;
    std::string dest(TEST_PHONY_NUMBER);
    std::string sca("");
    std::string text("tttt");

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(dest),
        Telephony::StringUtils::ToUtf16(sca), Telephony::StringUtils::ToUtf16(text), sendCallBackPtr,
        deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE(SendCallback::newData, 2, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
    EXPECT_EQ(SendCallback::res, SendCallback::DEFAULT_RESULT);
    EXPECT_EQ(DeliveryShortback::res, DeliveryShortback::DEFAULT_RESULT);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageText_0200
 * @tc.name     send sms slotId 0
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_0200, Function | MediumTest | Level2)
{
    LOG("> ---------- test card Id");
    int32_t slotId = SLOT_ID_0;
    std::string dest(TEST_PHONY_NUMBER);
    std::string sca("");
    std::string text("啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊");

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(dest),
        Telephony::StringUtils::ToUtf16(sca), Telephony::StringUtils::ToUtf16(text), sendCallBackPtr,
        deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE_WITHOUT_EXPECT(SendCallback::newData, 2, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_NE(SendCallback::res, SendCallback::DEFAULT_RESULT);
    EXPECT_NE(DeliveryShortback::res, DeliveryShortback::DEFAULT_RESULT);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageText_0300
 * @tc.name     Send Sms True DesAddr
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_0300, Function | MediumTest | Level1)
{
    LOG("> ---------- Send Sms True DesAddr");
    int32_t slotId = SLOT_ID_1;
    std::string dest(TEST_PHONY_NUMBER);
    std::string sca("");
    std::string text("啊啊");

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(dest),
        Telephony::StringUtils::ToUtf16(sca), Telephony::StringUtils::ToUtf16(text), sendCallBackPtr,
        deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE(SendCallback::newData, 2, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
    EXPECT_EQ(SendCallback::res, SendCallback::DEFAULT_RESULT);
    EXPECT_EQ(DeliveryShortback::res, DeliveryShortback::DEFAULT_RESULT);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageText_0400
 * @tc.name     Send Sms Missing Parameter
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_0400, Function | MediumTest | Level2)
{
    LOG("> ---------- Send Sms Missing Parameter");
    int32_t slotId = SLOT_ID_1;
    std::string dest("");
    std::string sca("");
    std::string text("11111");

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(dest),
        Telephony::StringUtils::ToUtf16(sca), Telephony::StringUtils::ToUtf16(text), sendCallBackPtr,
        deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE_WITHOUT_EXPECT(SendCallback::newData, 2, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_NE(SendCallback::res, SendCallback::DEFAULT_RESULT);
    EXPECT_NE(DeliveryShortback::res, DeliveryShortback::DEFAULT_RESULT);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageText_0500
 * @tc.name     Send Sms Null Text
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_0500, Function | MediumTest | Level3)
{
    LOG("> ---------- Send Sms Null Text");
    int32_t slotId = SLOT_ID_1;
    std::string dest(TEST_PHONY_NUMBER);
    std::string sca("");
    std::string text("");

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(dest),
        Telephony::StringUtils::ToUtf16(sca), Telephony::StringUtils::ToUtf16(text), sendCallBackPtr,
        deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE_WITHOUT_EXPECT(SendCallback::newData, 2, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_NE(SendCallback::res, SendCallback::DEFAULT_RESULT);
    EXPECT_NE(DeliveryShortback::res, DeliveryShortback::DEFAULT_RESULT);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageText_0600
 * @tc.name     test Send Near Max Len (159) Text
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_0600, Function | MediumTest | Level3)
{
    LOG("> ---------- Send Sms Near Max Len Text");
    int32_t slotId = SLOT_ID_1;
    std::string dest(TEST_PHONY_NUMBER);
    std::string sca("");
    std::string text(MAX_USER_DATA_LEN - 1, 't');

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(dest),
        Telephony::StringUtils::ToUtf16(sca), Telephony::StringUtils::ToUtf16(text), sendCallBackPtr,
        deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE(SendCallback::newData, 2, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
    EXPECT_EQ(SendCallback::res, SendCallback::DEFAULT_RESULT);
    EXPECT_EQ(DeliveryShortback::res, DeliveryShortback::DEFAULT_RESULT);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageText_0700
 * @tc.name     test Send Max Len(160) Text
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_0700, Function | MediumTest | Level3)
{
    LOG("> ---------- Send Sms  Max Len Text");
    int32_t slotId = SLOT_ID_1;
    std::string dest(TEST_PHONY_NUMBER);
    std::string sca("");
    std::string text(MAX_USER_DATA_LEN, 't');

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(dest),
        Telephony::StringUtils::ToUtf16(sca), Telephony::StringUtils::ToUtf16(text), sendCallBackPtr,
        deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE(SendCallback::newData, 2, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
    EXPECT_EQ(SendCallback::res, SendCallback::DEFAULT_RESULT);
    EXPECT_EQ(DeliveryShortback::res, DeliveryShortback::DEFAULT_RESULT);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageText_0800
 * @tc.name     test Send Exceed Max Len(161) Text
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_0800, Function | MediumTest | Level3)
{
    LOG("> ---------- Send Sms Exceed Max Len Text");
    int32_t slotId = SLOT_ID_1;
    std::string dest(TEST_PHONY_NUMBER);
    std::string sca("");
    std::string text(MAX_USER_DATA_LEN + 1, 't');

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(dest),
        Telephony::StringUtils::ToUtf16(sca), Telephony::StringUtils::ToUtf16(text), sendCallBackPtr,
        deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE(SendCallback::newData, 2, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
    EXPECT_EQ(SendCallback::res, SendCallback::DEFAULT_RESULT);
    EXPECT_EQ(DeliveryShortback::res, DeliveryShortback::DEFAULT_RESULT);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageText_0900
 * @tc.name     test Send Chinese Text
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_0900, Function | MediumTest | Level3)
{
    LOG("> ---------- Send Sms Chinese Text");
    int32_t slotId = SLOT_ID_1;
    std::string dest(TEST_PHONY_NUMBER);
    std::string sca("");
    std::string text("中文");

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(dest),
        Telephony::StringUtils::ToUtf16(sca), Telephony::StringUtils::ToUtf16(text), sendCallBackPtr,
        deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE(SendCallback::newData, 2, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
    EXPECT_EQ(SendCallback::res, SendCallback::DEFAULT_RESULT);
    EXPECT_EQ(DeliveryShortback::res, DeliveryShortback::DEFAULT_RESULT);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageText_1000
 * @tc.name     test Send English Text
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_1000, Function | MediumTest | Level3)
{
    LOG("> ---------- Send Sms English Text");
    int32_t slotId = SLOT_ID_1;
    std::string dest(TEST_PHONY_NUMBER);
    std::string sca("");
    std::string text("English");

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(dest),
        Telephony::StringUtils::ToUtf16(sca), Telephony::StringUtils::ToUtf16(text), sendCallBackPtr,
        deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE(SendCallback::newData, 2, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
    EXPECT_EQ(SendCallback::res, SendCallback::DEFAULT_RESULT);
    EXPECT_EQ(DeliveryShortback::res, DeliveryShortback::DEFAULT_RESULT);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageText_1100
 * @tc.name     test Send Special Text
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_1100, Function | MediumTest | Level3)
{
    LOG("> ---------- Send Sms Special Text");
    int32_t slotId = SLOT_ID_1;
    std::string dest(TEST_PHONY_NUMBER);
    std::string sca("");
    std::string text("ㄅǎ㊊↑^#");

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(dest),
        Telephony::StringUtils::ToUtf16(sca), Telephony::StringUtils::ToUtf16(text), sendCallBackPtr,
        deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE(SendCallback::newData, 2, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
    EXPECT_EQ(SendCallback::res, SendCallback::DEFAULT_RESULT);
    EXPECT_EQ(DeliveryShortback::res, DeliveryShortback::DEFAULT_RESULT);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageData_0100
 * @tc.name     test Send Sms Max Port
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageData_0100, Function | MediumTest | Level3)
{
    LOG("> ---------- send Sms Max Port");
    int32_t slotId = SLOT_ID_1;
    std::string dest(TEST_PHONY_NUMBER);
    std::string sca("");
    uint8_t data[] = "hello";
    uint16_t port = 0xffff;

    sptr<SendCallbackTest> sendCallBackPtr(new SendCallbackTest());
    sptr<DeliveryCallbackTest> deliveryCallBackPtr(new DeliveryCallbackTest());

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(dest),
        Telephony::StringUtils::ToUtf16(sca), port, data, sizeof(data) / sizeof(data[0]), sendCallBackPtr,
        deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE(SendCallback::newData, 2, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
    EXPECT_EQ(SendCallback::res, SendCallback::DEFAULT_RESULT);
    EXPECT_EQ(DeliveryShortback::res, DeliveryShortback::DEFAULT_RESULT);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageData_0200
 * @tc.name     test Send Sms Port
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageData_0200, Function | MediumTest | Level3)
{
    LOG("> ---------- send Sms Min Port");
    int32_t slotId = SLOT_ID_1;
    std::string dest(TEST_PHONY_NUMBER);
    std::string sca("");
    uint8_t data[] = "hello";
    uint16_t port = 0x00;

    sptr<SendCallbackTest> sendCallBackPtr(new SendCallbackTest());
    sptr<DeliveryCallbackTest> deliveryCallBackPtr(new DeliveryCallbackTest());

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(dest),
        Telephony::StringUtils::ToUtf16(sca), port, data, sizeof(data) / sizeof(data[0]), sendCallBackPtr,
        deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE(SendCallback::newData, 2, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
    EXPECT_EQ(SendCallback::res, SendCallback::DEFAULT_RESULT);
    EXPECT_EQ(DeliveryShortback::res, DeliveryShortback::DEFAULT_RESULT);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageData_0300
 * @tc.name     test Send Sms  boundary Port
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageData_0300, Function | MediumTest | Level3)
{
    LOG("> ---------- send Sms Error Port");
    int32_t slotId = SLOT_ID_1;
    std::string dest(TEST_PHONY_NUMBER);
    std::string sca("");
    uint8_t data[] = "hello";
    uint16_t port = 0xffff - 1;

    sptr<SendCallbackTest> sendCallBackPtr(new SendCallbackTest());
    sptr<DeliveryCallbackTest> deliveryCallBackPtr(new DeliveryCallbackTest());

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(dest),
        Telephony::StringUtils::ToUtf16(sca), port, data, sizeof(data) / sizeof(data[0]), sendCallBackPtr,
        deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE(SendCallback::newData, 2, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
    EXPECT_EQ(SendCallback::res, SendCallback::DEFAULT_RESULT);
    EXPECT_EQ(DeliveryShortback::res, DeliveryShortback::DEFAULT_RESULT);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageData_0400
 * @tc.name     Send Sms Short Data
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageData_0400, Function | MediumTest | Level3)
{
    LOG("> ---------- Send Sms Short Data");
    int32_t slotId = SLOT_ID_1;
    std::string dest(TEST_PHONY_NUMBER);
    std::string sca("");
    uint16_t port = 1;
    uint8_t data[] = "hello";

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(dest),
        Telephony::StringUtils::ToUtf16(sca), port, data, sizeof(data) / sizeof(data[0]), sendCallBackPtr,
        deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE(SendCallback::newData, 2, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
    EXPECT_EQ(SendCallback::res, SendCallback::DEFAULT_RESULT);
    EXPECT_EQ(DeliveryShortback::res, DeliveryShortback::DEFAULT_RESULT);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageData_0500
 * @tc.name     Send Sms Null Data
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageData_0500, Function | MediumTest | Level3)
{
    LOG("> ---------- Send Sms Null Data");
    int32_t slotId = SLOT_ID_1;
    std::string dest(TEST_PHONY_NUMBER);
    std::string sca("");
    uint16_t port = 1;
    uint8_t data[] = "";

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(dest),
        Telephony::StringUtils::ToUtf16(sca), port, data, sizeof(data) / sizeof(data[0]), sendCallBackPtr,
        deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE_WITHOUT_EXPECT(SendCallback::newData, 2, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    EXPECT_EQ(SendCallback::res, SendCallback::DEFAULT_RESULT);
    EXPECT_EQ(DeliveryShortback::res, DeliveryShortback::DEFAULT_RESULT);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageData_0600
 * @tc.name     Send Sms Max Length Data
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageData_0600, Function | MediumTest | Level3)
{
    LOG("> ---------- Send Sms Max Length Data");
    int32_t slotId = SLOT_ID_1;
    std::string dest(TEST_PHONY_NUMBER);
    std::string sca("");
    uint16_t port = 1;
    uint8_t data[] = "11234567890123456789012345678901234567890123\
        45678901234567890123456789012345678901234567\
        89012345678901234567890123456789012345678901\
        2345678901234567890123456789";

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(dest),
        Telephony::StringUtils::ToUtf16(sca), port, data, sizeof(data) / sizeof(data[0]), sendCallBackPtr,
        deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE(SendCallback::newData, 2, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
    EXPECT_EQ(SendCallback::res, SendCallback::DEFAULT_RESULT);
    EXPECT_EQ(DeliveryShortback::res, DeliveryShortback::DEFAULT_RESULT);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageData_0700
 * @tc.name     test Send Long Data
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageData_0700, Function | MediumTest | Level3)
{
    LOG("> ---------- send Sms Long Data");
    int32_t slotId = SLOT_ID_1;
    std::string dest(TEST_PHONY_NUMBER);
    std::string sca("");
    uint8_t data[] = R"(1111111111111111111111111111111111111111111111111111111111111111111
        1111111111111111111111111111111111111111111111111111111111111111111111
        1111111111111111111111111111111111111111111111111111111111111111112222
        2222222222222222222222222222222222222222222222222222222222222222222222
        2222222222222222222222222222222222222222222222222222222222222222222222
        2222222222222222222222222222222222222222222222222222222222222222222222
        2222222222222222222222222222222222222222222222222222222222222222222222
        2222222222222222222222222222222222222222222222222222222222222222222222
        222222222222222222222222222222222222222222222222222222)";
    uint16_t port = 1;

    sptr<SendCallbackTest> sendCallBackPtr(new SendCallbackTest());
    sptr<DeliveryCallbackTest> deliveryCallBackPtr(new DeliveryCallbackTest());

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(dest),
        Telephony::StringUtils::ToUtf16(sca), port, data, sizeof(data) / sizeof(data[0]), sendCallBackPtr,
        deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE(SendCallback::newData, 2, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
    EXPECT_EQ(SendCallback::res, SendCallback::DEFAULT_RESULT);
    EXPECT_EQ(DeliveryShortback::res, DeliveryShortback::DEFAULT_RESULT);
}

/**
 * @tc.number   Telephony_SmsMms_GetVisibleMessageBody_0100
 * @tc.name     Get Visible Message Body
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetVisibleMessageBody_0100, Function | MediumTest | Level3)
{
    std::u16string result = g_message->GetVisibleMessageBody();
    if (result.length() == 0) {
        EXPECT_EQ(true, false);
    }
    const char *temp = Str16ToStr8(result).c_str();
    EXPECT_STRNE(temp, "");
}

/**
 * @tc.number   Telephony_SmsMms_GetVisibleRawAddress_0100
 * @tc.name     Get Visible Raw Address
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetVisibleRawAddress_0100, Function | MediumTest | Level3)
{
    std::u16string result = g_message->GetVisibleRawAddress();
    if (result.length() == 0) {
        EXPECT_EQ(true, false);
    }
    const char *temp = Str16ToStr8(result).c_str();
    EXPECT_STRNE(temp, "");
}

/**
 * @tc.number   Telephony_SmsMms_GetScAddress_0100
 * @tc.name     Get ScAddress
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetScAddress_0100, Function | MediumTest | Level3)
{
    std::u16string result = g_message->GetScAddress();
    if (result.length() == 0) {
        EXPECT_EQ(true, false);
    }
    const char *temp = Str16ToStr8(result).c_str();
    EXPECT_STRNE(temp, "");
}

/**
 * @tc.number   Telephony_SmsMms_GetScTimestamp_0100
 * @tc.name     Get ScTimestamp
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetScTimestamp_0100, Function | MediumTest | Level3)
{
    int64_t result = g_message->GetScTimestamp();
    EXPECT_NE(result, INVALID_VALUES);
}

/**
 * @tc.number   Telephony_SmsMms_IsReplaceMessage_0100
 * @tc.name     Is Replace Message
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_IsReplaceMessage_0100, Function | MediumTest | Level3)
{
    bool result = g_message->IsReplaceMessage();
    EXPECT_FALSE(result);
}

/**
 * @tc.number   Telephony_SmsMms_GetStatus_0100
 * @tc.name     Get Status
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetStatus_0100, Function | MediumTest | Level3)
{
    int32_t result = g_message->GetStatus();
    EXPECT_EQ(result, INVALID_VALUES);
}

/**
 * @tc.number   Telephony_SmsMms_IsSmsStatusReportMessage_0100
 * @tc.name     Is Sms Status Report Message
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_IsSmsStatusReportMessage_0100, Function | MediumTest | Level3)
{
    bool result = g_message->IsSmsStatusReportMessage();
    EXPECT_TRUE(result);
}

/**
 * @tc.number   Telephony_SmsMms_HasReplyPath_0100
 * @tc.name     Has Reply Path
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_HasReplyPath_0100, Function | MediumTest | Level3)
{
    bool result = g_message->HasReplyPath();
    EXPECT_FALSE(result);
}

/**
 * @tc.number   Telephony_SmsMms_GetProtocolId_0100
 * @tc.name     Get Protocol Id
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetProtocolId_0100, Function | MediumTest | Level3)
{
    int32_t result = g_message->GetProtocolId();
    EXPECT_EQ(result, INVALID_VALUES);
}

/**
 * @tc.number   Telephony_SmsMms_GetPdu_0100
 * @tc.name     Get Pdu
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetPdu_0100, Function | MediumTest | Level3)
{
    std::vector<unsigned char> result = g_message->GetPdu();
    bool isValue = true;
    if (result.empty()) {
        isValue = false;
    }
    EXPECT_TRUE(isValue);
}

/**
 * @tc.number   Telephony_SmsMms_CreateMessage_0100
 * @tc.name     check CreateMessage
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
 * @tc.name     Error get CreateMessage
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_CreateMessage_0200, Function | MediumTest | Level3)
{
    std::vector<unsigned char> pdu;
    Telephony::ShortMessage *tempMessage = Telephony::ShortMessage::CreateMessage(pdu, u"3gpp");
    EXPECT_EQ(tempMessage, nullptr);
}

/**
 * @tc.number   Telephony_SmsMms_GetMessageClass_0100
 * @tc.name     Get Message Class
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetMessageClass_0100, Function | MediumTest | Level3)
{
    int32_t result = g_message->GetMessageClass();
    EXPECT_GE(result, (int32_t)Telephony::SmsMessageClass::SMS_INSTANT_MESSAGE);
    EXPECT_LE(result, (int32_t)Telephony::SmsMessageClass::SMS_CLASS_UNKNOWN);
}

//---CDMA---

/**
 * @tc.number   Telephony_SmsMms_GetVisibleMessageBody_CDMA_0100
 * @tc.name     Get Visible Message Body
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetVisibleMessageBody_CDMA_0100, Function | MediumTest | Level3)
{
    std::u16string result = g_messageCDMA->GetVisibleMessageBody();
    LOG("result GetVisibleMessageBody : %s", StringUtils::ToUtf8(result).c_str());
    LOG("g_messageSmsDataCDMA GetVisibleMessageBody : %s",
        StringUtils::ToUtf8(g_messageSmsDataCDMA.visibleMessageBody).c_str());
    EXPECT_EQ(result, g_messageSmsDataCDMA.visibleMessageBody);
}

/**
 * @tc.number   Telephony_SmsMms_GetVisibleRawAddress_CDMA_0100
 * @tc.name     Get Visible Raw Address
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetVisibleRawAddress_CDMA_0100, Function | MediumTest | Level3)
{
    std::u16string result = g_messageCDMA->GetVisibleRawAddress();
    LOG("result GetVisibleRawAddress : %s", StringUtils::ToUtf8(result).c_str());
    LOG("g_messageSmsDataCDMA GetVisibleRawAddress : %s",
        StringUtils::ToUtf8(g_messageSmsDataCDMA.visibleRawAddress).c_str());
    EXPECT_EQ(result, g_messageSmsDataCDMA.visibleRawAddress);
}

/**
 * @tc.number   Telephony_SmsMms_GetScAddress_CDMA_0100
 * @tc.name     Get ScAddress
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetScAddress_CDMA_0100, Function | MediumTest | Level3)
{
    std::u16string result = g_messageCDMA->GetScAddress();
    EXPECT_EQ(result, g_messageSmsDataCDMA.scAddress);
}

/**
 * @tc.number   Telephony_SmsMms_GetScTimestamp_CDMA_0100
 * @tc.name     Get ScTimestamp
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetScTimestamp_CDMA_0100, Function | MediumTest | Level3)
{
    int64_t result = g_messageCDMA->GetScTimestamp();
    EXPECT_EQ(result, g_messageSmsDataCDMA.scTimestamp);
}

/**
 * @tc.number   Telephony_SmsMms_IsReplaceMessage_CDMA_0100
 * @tc.name     Is Replace Message
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_IsReplaceMessage_CDMA_0100, Function | MediumTest | Level3)
{
    bool result = g_messageCDMA->IsReplaceMessage();
    EXPECT_EQ(result, g_messageSmsDataCDMA.isReplaceMessage);
}

/**
 * @tc.number   Telephony_SmsMms_GetStatus_CDMA_0100
 * @tc.name     Get Status
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetStatus_CDMA_0100, Function | MediumTest | Level3)
{
    int32_t result = g_messageCDMA->GetStatus();
    EXPECT_EQ(result, g_messageSmsDataCDMA.status);
}

/**
 * @tc.number   Telephony_SmsMms_IsSmsStatusReportMessage_CDMA_0100
 * @tc.name     Is Sms Status Report Message
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_IsSmsStatusReportMessage_CDMA_0100, Function | MediumTest | Level3)
{
    bool result = g_messageCDMA->IsSmsStatusReportMessage();
    EXPECT_EQ(result, g_messageSmsDataCDMA.isSmsStatusReportMessage);
}

/**
 * @tc.number   Telephony_SmsMms_HasReplyPath_CDMA_0100
 * @tc.name     Has Reply Path
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_HasReplyPath_CDMA_0100, Function | MediumTest | Level3)
{
    bool result = g_messageCDMA->HasReplyPath();
    EXPECT_EQ(result, g_messageSmsDataCDMA.hasReplyPath);
}

/**
 * @tc.number   Telephony_SmsMms_GetProtocolId_CDMA_0100
 * @tc.name     Get Protocol Id
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetProtocolId_CDMA_0100, Function | MediumTest | Level3)
{
    int32_t result = g_messageCDMA->GetProtocolId();
    EXPECT_EQ(result, g_messageSmsDataCDMA.protocolId);
}

/**
 * @tc.number   Telephony_SmsMms_GetPdu_CDMA_0100
 * @tc.name     Get Pdu
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetPdu_CDMA_0100, Function | MediumTest | Level3)
{
    std::vector<unsigned char> result = g_messageCDMA->GetPdu();
    LOG("result GetPdu : %s", StringUtils::StringToHex(result).c_str());
    LOG("g_messageSmsDataCDMA GetPdu : %s", StringUtils::StringToHex(g_messageSmsDataCDMA.pdu).c_str());
    EXPECT_EQ(result, g_messageSmsDataCDMA.pdu);
}

/**
 * @tc.number   Telephony_SmsMms_CreateMessage_CDMA_0100
 * @tc.name     Create a message class and parse PDU short messages
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_CreateMessage_CDMA_0100, Function | MediumTest | Level3)
{
    std::vector<unsigned char> pdu = OHOS::Telephony::StringUtils::HexToByteVector(
        "0000021002020702c6049064c4d40601fc081b00031000200106102e8cbb366f03061409011126310a01400d0101");
    unique_ptr<OHOS::Telephony::ShortMessage> tmpMessage =
        unique_ptr<OHOS::Telephony::ShortMessage>(OHOS::Telephony::ShortMessage::CreateMessage(pdu, u"3gpp2"));
    EXPECT_NE(tmpMessage, nullptr);
}

/**
 * @tc.number   Telephony_SmsMms_GetMessageClass_CDMA_0100
 * @tc.name     Get Message Class
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetMessageClass_CDMA_0100, Function | MediumTest | Level3)
{
    int32_t result = g_messageCDMA->GetMessageClass();
    EXPECT_GE(result, (int32_t)Telephony::SmsMessageClass::SMS_INSTANT_MESSAGE);
    EXPECT_LE(result, (int32_t)Telephony::SmsMessageClass::SMS_CLASS_UNKNOWN);
}

//-------OTHER----
/**
 * @tc.number   Telephony_SmsMms_GetVisibleMessageBody_CDMA_0200
 * @tc.name     Get Visible Message Body
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetVisibleMessageBody_CDMA_0200, Function | MediumTest | Level3)
{
    std::u16string result = g_messageOtherCDMA->GetVisibleMessageBody();
    EXPECT_EQ(result, g_messageOtherSmsDataCDMA.visibleMessageBody);
}

/**
 * @tc.number   Telephony_SmsMms_GetVisibleRawAddress_CDMA_0200
 * @tc.name     Get Visible Raw Address
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetVisibleRawAddress_CDMA_0200, Function | MediumTest | Level3)
{
    std::u16string result = g_messageOtherCDMA->GetVisibleRawAddress();
    EXPECT_EQ(result, g_messageOtherSmsDataCDMA.visibleRawAddress);
}

/**
 * @tc.number   Telephony_SmsMms_GetScAddress_CDMA_0200
 * @tc.name     Get ScAddress
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetScAddress_CDMA_0200, Function | MediumTest | Level3)
{
    std::u16string result = g_messageOtherCDMA->GetScAddress();
    EXPECT_EQ(result, g_messageOtherSmsDataCDMA.scAddress);
}

/**
 * @tc.number   Telephony_SmsMms_GetScTimestamp_CDMA_0200
 * @tc.name     Get ScTimestamp
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetScTimestamp_CDMA_0200, Function | MediumTest | Level3)
{
    int64_t result = g_messageOtherCDMA->GetScTimestamp();
    EXPECT_EQ(result, g_messageOtherSmsDataCDMA.scTimestamp);
}

/**
 * @tc.number   Telephony_SmsMms_IsReplaceMessage_CDMA_0200
 * @tc.name     Is Replace Message
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_IsReplaceMessage_CDMA_0200, Function | MediumTest | Level3)
{
    bool result = g_messageOtherCDMA->IsReplaceMessage();
    EXPECT_EQ(result, g_messageOtherSmsDataCDMA.isReplaceMessage);
}

/**
 * @tc.number   Telephony_SmsMms_GetStatus_CDMA_0200
 * @tc.name     Get Status
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetStatus_CDMA_0200, Function | MediumTest | Level3)
{
    int32_t result = g_messageOtherCDMA->GetStatus();
    EXPECT_EQ(result, g_messageOtherSmsDataCDMA.status);
}

/**
 * @tc.number   Telephony_SmsMms_IsSmsStatusReportMessage_CDMA_0200
 * @tc.name     Is Sms Status Report Message
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_IsSmsStatusReportMessage_CDMA_0200, Function | MediumTest | Level3)
{
    bool result = g_messageOtherCDMA->IsSmsStatusReportMessage();
    EXPECT_EQ(result, g_messageOtherSmsDataCDMA.isSmsStatusReportMessage);
}

/**
 * @tc.number   Telephony_SmsMms_HasReplyPath_CDMA_0200
 * @tc.name     Has Reply Path
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_HasReplyPath_CDMA_0200, Function | MediumTest | Level3)
{
    bool result = g_messageOtherCDMA->HasReplyPath();
    EXPECT_EQ(result, g_messageOtherSmsDataCDMA.hasReplyPath);
}

/**
 * @tc.number   Telephony_SmsMms_GetProtocolId_CDMA_0200
 * @tc.name     Get Protocol Id
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetProtocolId_CDMA_0200, Function | MediumTest | Level3)
{
    int32_t result = g_messageOtherCDMA->GetProtocolId();
    EXPECT_EQ(result, g_messageOtherSmsDataCDMA.protocolId);
}

/**
 * @tc.number   Telephony_SmsMms_GetPdu_CDMA_0200
 * @tc.name     Get Pdu
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetPdu_CDMA_0200, Function | MediumTest | Level3)
{
    std::vector<unsigned char> result = g_messageOtherCDMA->GetPdu();
    EXPECT_EQ(result, g_messageOtherSmsDataCDMA.pdu);
}

/**
 * @tc.number   Telephony_SmsMms_CreateMessage_CDMA_0200
 * @tc.name     Create a message class and parse PDU short messages
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_CreateMessage_CDMA_0200, Function | MediumTest | Level3)
{
    std::vector<unsigned char> pdu = OHOS::Telephony::StringUtils::HexToByteVector(
        "0000021002020702C54EA488649C0601FC08120003101BB00103100C100306110804182257");
    unique_ptr<OHOS::Telephony::ShortMessage> tmpMessage =
        unique_ptr<OHOS::Telephony::ShortMessage>(OHOS::Telephony::ShortMessage::CreateMessage(pdu, u"3gpp2"));
    EXPECT_NE(tmpMessage, nullptr);
}

/**
 * @tc.number   Telephony_SmsMms_GetMessageClass_CDMA_0200
 * @tc.name     Get Message Class
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetMessageClass_CDMA_0200, Function | MediumTest | Level3)
{
    int32_t result = g_messageOtherCDMA->GetMessageClass();
    EXPECT_GE(result, (int32_t)Telephony::SmsMessageClass::SMS_INSTANT_MESSAGE);
    EXPECT_LE(result, (int32_t)Telephony::SmsMessageClass::SMS_CLASS_UNKNOWN);
}
