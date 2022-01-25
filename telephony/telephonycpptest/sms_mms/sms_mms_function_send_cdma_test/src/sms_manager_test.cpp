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
#include "condition_lock.h"
#include "string_ex.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace Telephony;
using namespace OHOS::Telephony::SmsMmsManagerTest;
using namespace SmsMmsManagerTest;
using namespace SendCallback;
using namespace DeliveryShortback;
using namespace OHOS::Telephony;

/**
 * @tc.number   Telephony_SmsMms_SendMessageText_1300
 * @tc.name     In THE CDMA network system, call SendMessage, enter it as normal, and check the return result
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_1300, Function | MediumTest | Level1)
{
    LOG("> -------CDMA--- Send Sms Text");
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
 * @tc.number   Telephony_SmsMms_SendMessageText_1400
 * @tc.name     In THE CDMA network system, test Send Max Len(160) Text
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_1400, Function | MediumTest | Level3)
{
    LOG("> ------CDMA---- Send Sms  Max Len Text");
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
 * @tc.number   Telephony_SmsMms_SendMessageText_1500
 * @tc.name     In THE CDMA network system, test Send Exceed Max Len(161) Text
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_1500, Function | MediumTest | Level3)
{
    LOG("> ------CDMA---- Send Sms Exceed Max Len Text");
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
 * @tc.number   Telephony_SmsMms_SendMessageText_1600
 * @tc.name     test Send Chinese Text
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_1600, Function | MediumTest | Level3)
{
    LOG("> ------CDMA---- Send Sms Chinese Text");
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
 * @tc.number   Telephony_SmsMms_SendMessageText_1700
 * @tc.name     In THE CDMA network system, test Send English and Numbers Text
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_1700, Function | MediumTest | Level3)
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
 * @tc.number   Telephony_SmsMms_SendMessageText_1800
 * @tc.name     test Send Special Text
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_1800, Function | MediumTest | Level3)
{
    LOG("> -------CDMA--- Send Sms Special Text");
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