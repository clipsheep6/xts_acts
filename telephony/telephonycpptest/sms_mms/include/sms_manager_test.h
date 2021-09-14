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
#include "delivery_short_message_callback_stub.h"
#include "send_short_message_callback_stub.h"
#include "short_message.h"
#include "sms_manager_client.h"
#include "string_utils.h"
#include "system_ability_definition.h"
#include <gtest/gtest.h>

struct SmsMessageData {
    int32_t messageClass;
    std::vector<unsigned char> pdu;
    int32_t protocolId;
    bool hasReplyPath;
    bool isSmsStatusReportMessage;
    int32_t status;
    bool isReplaceMessage;
    int64_t scTimestamp;
    std::u16string scAddress;
    std::u16string visibleRawAddress;
    std::u16string visibleMessageBody;
};

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
    static void InitSmsData(SmsMessageData &smsData, bool isOther);

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
    const int MAX_USER_DATA_LEN = 160;
    const int CONST_TOW = 2;

    static const int LOCK_WAIT_SLIP = 50;
    static const int LOCK_WAIT_TIMEOUT = 60000;

    std::u16string OTHER_SMSC_NUMBER = u"+8613800755500";
    std::u16string USABLE_SMSC_NUMBER = u"+8613800512500";
    std::u16string CORRECT_SMS_PDU = u"01000F9168683106019196F400080A00680065006C006C006F";
    std::u16string OTHER_SMS_PDU = u"01000F9168683106019196F400080400410061";
    std::u16string RECEIVE_SMS_PDU = u"240D91689141468496F600001270721142432302B319";
    std::u16string RECEIVE_OTHER_SMS_PDU = u"240D91689141468496F600001270721174322302B91C";
    std::u16string INVALID_SMS_VALUES = u"00FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
                                        "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
                                        "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
                                        "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
                                        "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
                                        "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF";

    std::u16string BEYOND_MAX_PDU = u"01000D91683106019196F400084A0031003100310031003100310031003100310031003100310"
                                    u"03100310031003100310031003100310"
                                    u"0310031003100310031003100310031003100310031003100310031003100310031";

    // Record the length of pdUs
    std::map<std::u16string, int> PDU_LENGTH;
};

static std::unique_ptr<SmsManagerClient> g_smsClientPtr;
static std::unique_ptr<OHOS::Telephony::ShortMessage> g_message;
SmsMessageData g_messageSmsData;

static std::unique_ptr<OHOS::Telephony::ShortMessage> g_messageOther;
SmsMessageData g_messageOtherSmsData;

std::u16string g_dataScAddr;

SmsManagerTest::SmsManagerTest()
{
    // Record the length of pdUs
    PDU_LENGTH[CORRECT_SMS_PDU] = CORRECT_SMS_PDU.size();
    PDU_LENGTH[OTHER_SMS_PDU] = OTHER_SMS_PDU.size();
    PDU_LENGTH[RECEIVE_SMS_PDU] = RECEIVE_SMS_PDU.size();
    PDU_LENGTH[RECEIVE_OTHER_SMS_PDU] = RECEIVE_OTHER_SMS_PDU.size();
    PDU_LENGTH[BEYOND_MAX_PDU] = BEYOND_MAX_PDU.size();
}

// Example Initialize the SMS data of the PDU
void SmsManagerTest::InitSmsData(SmsMessageData &smsData, bool isOther)
{
    if (isOther) {
        const int64_t scTime = 1627356274;
        smsData.messageClass = OHOS::Telephony::ShortMessage::SmsMessageClass::SMS_CLASS_UNKNOWN;
        smsData.hasReplyPath = false;
        smsData.isReplaceMessage = false;
        smsData.isSmsStatusReportMessage = true;
        std::vector<unsigned char> _pdu =
            StringUtils::HexToByteVector("00240D91689141468496F600001270721142432302B319");
        smsData.pdu = _pdu;
        smsData.protocolId = 0;
        smsData.scAddress = u"";
        smsData.scTimestamp = scTime;
        smsData.status = 0;
        smsData.visibleMessageBody = u"33";
        smsData.visibleRawAddress = u"+8619146448696";
    } else {
        const int64_t scTime = 1617848441;
        smsData.messageClass = OHOS::Telephony::ShortMessage::SmsMessageClass::SMS_CLASS_UNKNOWN;
        smsData.hasReplyPath = false;
        smsData.isReplaceMessage = false;
        smsData.isSmsStatusReportMessage = true;
        std::vector<unsigned char> _pdu =
            StringUtils::HexToByteVector("0891683108200075F4240D91688129562983F600001240800102142302C130");
        smsData.pdu = _pdu;
        smsData.protocolId = 0;
        smsData.scAddress = u"+8613800200574";
        smsData.scTimestamp = scTime;
        smsData.status = 0;
        smsData.visibleMessageBody = u"Aa";
        smsData.visibleRawAddress = u"+8618926592386";
    }
}

void SmsManagerTest::Restore()
{
    int correctSlotId = 0;
    int loopNumber = 10;
    g_smsClientPtr->GetPtr()->SetSmscAddr(correctSlotId, g_dataScAddr);
    std::u16string tempScAddr = g_smsClientPtr->GetPtr()->GetSmscAddr(correctSlotId);
    if (tempScAddr != g_dataScAddr) {
        g_smsClientPtr->GetPtr()->SetSmscAddr(correctSlotId, g_dataScAddr);
    }

    // Delete the first 10 SMS messages and set conditions for the test case
    for (int i = 0; i < loopNumber; ++i) {
        g_smsClientPtr->GetPtr()->DelSimMessage(correctSlotId, i);
    }

    uint32_t fromMsgId = 0;
    uint32_t toMsgId = 0xFFFF;
    g_smsClientPtr->GetPtr()->SetCBConfig(correctSlotId, false, fromMsgId, toMsgId, 1);
    g_smsClientPtr->GetPtr()->SetDefaultSmsSlotId(correctSlotId);
}

std::u16string SmsManagerTest::InterceptionPdu(std::u16string data, int pduLength)
{
    std::u16string getPdu;
    if (data.size() < (unsigned int)pduLength) {
        return getPdu;
    }
    int pduBegin = INTERCEPT_POINT_PLUS;
    std::string str(data.begin(), data.begin() + CONST_TOW);
    int intStr = std::atoi(str.c_str());
    pduBegin = intStr * CONST_TOW + CONST_TOW;
    getPdu.assign(data, pduBegin, pduLength);
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
    std::vector<unsigned char> pdu =
        OHOS::Telephony::StringUtils::HexToByteVector("0891683108200075F4240D91688129562983F600001240800102142302C130");

    g_message =
        std::unique_ptr<OHOS::Telephony::ShortMessage>(OHOS::Telephony::ShortMessage::CreateMessage(pdu, u"3gpp"));
    if (g_message == nullptr) {
        LOG("TestCreateMessage fail!!! \n");
    } else {
        // Example Initialize the SMS data of the PDU
        InitSmsData(g_messageSmsData, false);
        LOG("TestCreateMessage succeess!!! \n");
    }

    std::vector<unsigned char> otherPdu =
        OHOS::Telephony::StringUtils::HexToByteVector("00240D91689141468496F600001270721142432302B319");
    g_messageOther =
        std::unique_ptr<OHOS::Telephony::ShortMessage>(OHOS::Telephony::ShortMessage::CreateMessage(otherPdu, u"3gpp"));
    if (g_messageOther == nullptr) {
        LOG("TestCreateMessage other fail!!! \n");
    } else {
        // Example Initialize the SMS data of the PDU
        InitSmsData(g_messageOtherSmsData, true);
        LOG("TestCreateMessage other succeess!!! \n");
    }
    g_smsClientPtr->Init(TELEPHONY_SMS_MMS_SYS_ABILITY_ID);
    int correctSlotId = 1;
    g_dataScAddr = g_smsClientPtr->GetPtr()->GetSmscAddr(correctSlotId);
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
    ASSERT_NE(g_messageOther, nullptr);
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
