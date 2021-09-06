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

#ifndef TELEPHONY_SMS_MANAGER_TEST
#define TELEPHONY_SMS_MANAGER_TEST
#include <gtest/gtest.h>
#include "send_short_message_callback_stub.h"
#include "delivery_short_message_callback_stub.h"
#include "short_message.h"
#include "sms_manager_client.h"
#include "string_utils.h"
#include "system_ability_definition.h"

namespace OHOS {
namespace Telephony {
namespace SmsManager {
class SmsManagerTest : public testing::Test {
public:
    SmsManagerTest();
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();

    static void Restore();
    std::u16string InterceptionPdu(std::u16string data, int pduLength);

    const int LOOP_NUMBER = 10;
    const uint LOOP_MULTITUDE_NUMBER = 10;
    const int TIME_USEC_500 = 500;
    const int SLOT_ID_1 = 1;
    const int SLOT_ID_0 = 0;
    const int SLOT_ID_2 = 2;
    const int ERROR_VALUES = 9;
    const int OTHER_ERROR_VALUES = 10;
    const int SMSC_MAX = 20;
    const int INVALID_VALUES = 0;
    const int INTERCEPT_POINT_PLUS = 20;
    const int INTERCEPT_POINT = 18;
    const char SMSC_PLUS = '7';

    const char SMS_STATUS_READ = '3';
    const char SMS_STATUS_UNREAD = '1';
    const char SMS_STATUS_SENT = '7';
    const char SMS_STATUS_UNSENT = '5';

    static const int LOCK_WAIT_SLIP = 50;
    static const int LOCK_WAIT_TIMEOUT = 60000;

    std::u16string OTHER_SMSC = u"0891683108705505F0";
    std::u16string USABLE_SMSC = u"0891683108502105F0";
    std::u16string OTHER_SMSC_NUMBER = u"+8613800755500";
    std::u16string USABLE_SMSC_NUMBER = u"+8613800512500";
    std::u16string CORRECT_SMS_PDU = u"01000D91683106019196F4000800";
    std::u16string OTHER_SMS_PDU = u"01000D91683108705505F0000800";
    std::u16string RECEIVE_SMS_PDU = u"240D91689141468496F600001270721142432302B319";
    std::u16string RECEIVE_OTHER_SMS_PDU = u"240D91689141468496F600001270721174322302B91C";
    std::u16string INVALID_SMS_VALUES = u"00FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
	"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
	"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
	"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
	"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
	"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF";

    std::u16string BEYOND_MAX_PDU =
        u"01000D91683106019196F400084A0031003100310031003100310031003100310031003100310"
        u"03100310031003100310031003100310"
        u"0310031003100310031003100310031003100310031003100310031003100310031";

    //Record the length of pdUs
    std::map<std::u16string, int> PDU_LENGTH;
};

static std::unique_ptr<SmsManagerClient> g_smsClientPtr;
static std::unique_ptr<OHOS::Telephony::ShortMessage> g_message;
std::u16string g_dataScAddr;
std::vector<std::u16string> g_smsRecord;

SmsManagerTest::SmsManagerTest()
{
    //Record the length of pdUs
    PDU_LENGTH[CORRECT_SMS_PDU] = 28;
    PDU_LENGTH[OTHER_SMS_PDU] = 28;
    PDU_LENGTH[RECEIVE_SMS_PDU] = 44;
    PDU_LENGTH[RECEIVE_OTHER_SMS_PDU] = 44;
    PDU_LENGTH[BEYOND_MAX_PDU] = 176;
}

void SmsManagerTest::Restore()
{
    int correctSlotId = 1;
    int loopNumber = 10;
    g_smsClientPtr->GetPtr()->SetSmscAddr(correctSlotId, g_dataScAddr);
    std::u16string tempScAddr = g_smsClientPtr->GetPtr()->GetSmscAddr(correctSlotId);
    if (tempScAddr != g_dataScAddr) {
        g_smsClientPtr->GetPtr()->SetSmscAddr(correctSlotId, g_dataScAddr);
    }

    //Delete the first 10 SMS messages and set conditions for the test case
    for (int i = 0; i < loopNumber; ++i) {
        g_smsClientPtr->GetPtr()->DelSimMessage(correctSlotId, i);
    }

    uint32_t fromMsgId = 0;
    uint32_t toMsgId = 0xFFFF;
    g_smsClientPtr->GetPtr()->SetCBRangeConfig(correctSlotId, true, fromMsgId, toMsgId, 1);
    g_smsClientPtr->GetPtr()->SetCBRangeConfig(correctSlotId, false, fromMsgId, toMsgId, 1);
}

std::u16string SmsManagerTest::InterceptionPdu(std::u16string data, int pduLength)
{
    std::u16string getPdu;
    if(data.size() < (unsigned int)pduLength) {
        return getPdu;
    }
    int pduBegin = INTERCEPT_POINT_PLUS;
    int symbolIndex = 3;
    if(data[symbolIndex] == SMSC_PLUS) {
        pduBegin = INTERCEPT_POINT;
    }
    getPdu.assign(data,pduBegin,pduLength);
    return getPdu;
}

// excute before first testcase
void SmsManagerTest::SetUpTestCase()
{
    LOG("> ---------- publish ability");
    g_smsClientPtr = std::make_unique<SmsManagerClient>();
    if (g_smsClientPtr == nullptr) {
        LOG("new SmsManagerClient failed!\n");
        return;
    }
    std::vector<unsigned char> pdu = OHOS::Telephony::StringUtils::HexToByteVector(
        "0891683108200075F4240D91688129562983F600001240800102142302C130");
    g_message =
        std::unique_ptr<OHOS::Telephony::ShortMessage>(OHOS::Telephony::ShortMessage::CreateMessage(pdu, u"3gpp"));
    if (g_message == nullptr) {
        LOG("TestCreateMessage fail!!! \n");
    } else {
        LOG("TestCreateMessage succeess!!! \n");
    }
    g_smsClientPtr->Init(TELEPHONY_SMS_MMS_SYS_ABILITY_ID);
    int correctSlotId = 1;
    g_dataScAddr = g_smsClientPtr->GetPtr()->GetSmscAddr(correctSlotId);
    g_smsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(correctSlotId);
}

// excute after last testcase
void SmsManagerTest::TearDownTestCase()
{
    LOG("> ---------- unInit");
    g_smsClientPtr->unInit();
    Restore();
}

void SmsManagerTest::SetUp()
{
    ASSERT_NE(g_smsClientPtr, nullptr);
    ASSERT_NE(g_message, nullptr);
    SendCallback::res = SendCallback::DEFAULT_ERROR;
    SendCallback::newData = 0;
    DeliveryShortback::res = DeliveryShortback::DEFAULT_ERROR; 
    Restore();
}

void SmsManagerTest::TearDown() {}
} // namespace SmsManager
} // namespace Telephony
} // namespace OHOS

#endif
