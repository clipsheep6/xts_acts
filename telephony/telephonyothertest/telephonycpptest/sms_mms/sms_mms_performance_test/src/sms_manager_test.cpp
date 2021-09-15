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
#include "delivery_short_message_callback_stub.h"
#include "string_ex.h"
#include "time_count_helper.h"
#include <cstdio>
#include <cstring>
#include <securec.h>

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
 * @tc.name     send data stability test,Determine that the running time is less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageData_1200, Performance | MediumTest | Level3)
{
    LOG("> ---------- send data stability test Loop LOOP_NUMBER time");
    (void)memset_s(arrayCallback, sizeof(arrayCallback), 0x00, sizeof(arrayCallback));
    SendCallback::arrayIndex = 0;
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        SendCallback::timeHelper[i].initTime();
    }

    int32_t slotId = SLOT_ID_0;
    std::string desAddr(TEST_PHONY_NUMBER);
    std::string sca("");
    uint8_t data[] = "hello";
    uint16_t port = 0x00;

    sptr<SendCallbackTest> sendCallBackPtr(new SendCallbackTest());
    sptr<DeliveryCallbackTest> deliveryCallBackPtr(new DeliveryCallbackTest());

    for (int i = 0; i < LOOP_NUMBER; ++i) {
        g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(desAddr),
                                              Telephony::StringUtils::ToUtf16(sca), port, data,
                                              sizeof(data) / sizeof(data[0]), sendCallBackPtr, deliveryCallBackPtr);
        LOCK_NUM_WHILE_NE(SendCallback::newData, 2, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
    }

    int32_t useTimeUs = 0;
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        useTimeUs += SendCallback::arrayCallback[i];
    }
    useTimeUs /= LOOP_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SendMessageText_1100
 * @tc.name     send text stability test,Determine that the running time is less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_1100, Performance | MediumTest | Level3)
{
    LOG("> ---------- send text stability test loop,Determine that the running time is less than TIME_USEC_500");
    (void)memset_s(arrayCallback, sizeof(arrayCallback), 0x00, sizeof(arrayCallback));
    SendCallback::arrayIndex = 0;
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        SendCallback::timeHelper[i].initTime();
    }

    int32_t slotId = SLOT_ID_0;
    std::string desAddr(TEST_PHONY_NUMBER);
    std::string sca("");
    std::string text("1");

    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    for (int i = 0; i < LOOP_NUMBER; ++i) {
        g_smsClientPtr->GetPtr()->SendMessage(
            slotId, Telephony::StringUtils::ToUtf16(desAddr), Telephony::StringUtils::ToUtf16(sca),
            Telephony::StringUtils::ToUtf16(text), sendCallBackPtr, deliveryCallBackPtr);

        LOCK_NUM_WHILE_NE(SendCallback::newData, 2, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
    }
    int32_t useTimeUs = 0;
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        useTimeUs += SendCallback::arrayCallback[i];
    }
    useTimeUs /= LOOP_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetVisibleMessageBody_0300
 * @tc.name     Get Visible Message Body,Determine that the running time is less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetVisibleMessageBody_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        g_message->GetVisibleMessageBody();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetVisibleRawAddress_0300
 * @tc.name     Get Visible Raw Address,Determine that the running time is less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetVisibleRawAddress_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        g_message->GetVisibleRawAddress();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetScAddress_0300
 * @tc.name     Get ScAddress,Determine that the running time is less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetScAddress_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        g_message->GetScAddress();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_IsReplaceMessage_0300
 * @tc.name     Is Replace Message,Determine that the running time is less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_IsReplaceMessage_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        g_message->IsReplaceMessage();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetStatus_0300
 * @tc.name     Get Status,Determine that the running time is less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetStatus_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        g_message->GetStatus();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_IsSmsStatusReportMessage_0300
 * @tc.name     Is Sms Status Report Message,Determine that the running time is less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_IsSmsStatusReportMessage_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        g_message->IsSmsStatusReportMessage();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_HasReplyPath_0300
 * @tc.name     Has Reply Path,Determine that the running time is less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_HasReplyPath_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        g_message->HasReplyPath();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetProtocolId_0300
 * @tc.name     Get Protocol Id ,Determine that the running time is less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetProtocolId_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        g_message->GetProtocolId();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetPdu_0300
 * @tc.name     Get Pdu LOOP_NUMBER,Determine that the running time is less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetPdu_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        g_message->GetPdu();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_CreateMessage_0400
 * @tc.name     Error get CreateMessage,Determine that the running time is less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_CreateMessage_0400, Performance | MediumTest | Level3)
{
    std::vector<unsigned char> pdu =
        OHOS::Telephony::StringUtils::HexToByteVector("0891683108200075F4240D91688129562983F600001240800102142302C130");
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        Telephony::ShortMessage::CreateMessage(pdu, u"3gpp");
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetMessageClass_0300
 * @tc.name     Get Message Class,Determine that the running time is less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetMessageClass_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        g_message->GetMessageClass();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetScTimestamp_0100
 * @tc.name     Get ScTimestamp,Determine that the running time is less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetScTimestamp_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < LOOP_NUMBER; ++i) {
        g_message->GetScTimestamp();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_UpdateSimMessage_2300
 * @tc.name     The loop calls UpdateSimMessage() LOOP_MULTITUDE_NUMBER times,
 *              Determine that the running time is less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_UpdateSimMessage_2300, Performance | MediumTest | Level3)
{
    std::vector<OHOS::Telephony::ShortMessage> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i].GetPdu().empty()) {
            addIndex = i;
            break;
        }
    }
    bool isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
    ASSERT_TRUE(isAddSms);
    std::u16string newPdu = OTHER_SMS_PDU;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        g_smsClientPtr->GetPtr()->UpdateSimMessage(
            SLOT_ID_0, addIndex, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_UNREAD,
            newPdu, smsc);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_AddSimMessage_2000
 * @tc.name     loops Failed to save SMS to SIM LOOP_MULTITUDE_NUMBER,
 *              Determine that the running time is less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_AddSimMessage_2000, Performance | MediumTest | Level3)
{
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        g_smsClientPtr->GetPtr()->AddSimMessage(
            SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_DelSimMessage_0600
 * @tc.name     loops Deletes a text message from the SIM card LOOP_MULTITUDE_NUMBER,
 *              Determine that the running time is less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_DelSimMessage_0600, Performance | MediumTest | Level3)
{
    std::vector<OHOS::Telephony::ShortMessage> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    int addIndex[] = {0};
    int index = 0;
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
            if (beforeSmsRecord[i].GetPdu().empty()) {
                addIndex[index] = i;
                index++;
                break;
            }
        }
        g_smsClientPtr->GetPtr()->AddSimMessage(
            SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
    }
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        int tempIndex = addIndex[i];
        g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, tempIndex);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetAllSimMessages_0400
 * @tc.name     The loop calls GetAllSimMessages() LOOP_MULTITUDE_NUMBER times,
 *              Determine that the running time is less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetAllSimMessages_0400, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetSmscAddr_1100
 * @tc.name     The loop calls SetSmscAddr() LOOP_MULTITUDE_NUMBER times,
 *              Determine that the running time is less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetSmscAddr_1100, Performance | MediumTest | Level3)
{
    std::u16string newSmsc = USABLE_SMSC_NUMBER;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        g_smsClientPtr->GetPtr()->SetSmscAddr(SLOT_ID_0, newSmsc);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_ISmsServiceInterface_GetSmscAddr_0400
 * @tc.name     The loop calls GetSmscAddr() LOOP_MULTITUDE_NUMBER times,
 *              Determine that the running time is less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_ISmsServiceInterface_GetSmscAddr_0400, Performance | MediumTest | Level3)
{
    std::u16string newSmsc = USABLE_SMSC_NUMBER;
    bool result = g_smsClientPtr->GetPtr()->SetSmscAddr(SLOT_ID_0, newSmsc);
    EXPECT_TRUE(result);
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBConfig_1400
 * @tc.name     The loop calls CBRangeConfig() LOOP_MULTITUDE_NUMBER times,
 *              Determine that the running time is less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetCBConfig_1400, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_0, false, 0, 0xFFFF, 1);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetDefaultSmsSlotId_0400
 * @tc.name     The loop calls SetDefaultSmsSlotId() LOOP_MULTITUDE_NUMBER times,
 *              Determine that the running time is less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetDefaultSmsSlotId_0400, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        g_smsClientPtr->GetPtr()->SetDefaultSmsSlotId(SLOT_ID_1);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetDefaultSmsSlotId_0300
 * @tc.name     The loop calls GetDefaultSmsSlotId() LOOP_MULTITUDE_NUMBER times,
 *              Determine that the running time is less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetDefaultSmsSlotId_0400, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        g_smsClientPtr->GetPtr()->GetDefaultSmsSlotId();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}
