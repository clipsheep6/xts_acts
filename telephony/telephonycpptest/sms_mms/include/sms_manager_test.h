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
#include "short_message.h"
#include "delivery_short_message_callback_stub.h"
#include "send_short_message_callback_stub.h"
#include "string_utils.h"
#include "system_ability_definition.h"
#include "sms_manager_client.h"

#ifdef SMS_MMS_NETWORSEARCH_CDMA_TEST
#include "network_search_proxy.h"
#include "i_network_search_callback_stub.h"
#endif

struct SmsMessageData {
    int32_t indexOnSim;
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
namespace SmsMmsManagerTest {
#ifdef SMS_MMS_NETWORSEARCH_CDMA_TEST
static NetworkSearchProxy proxy_;
enum PreferredNetwork {
    CORE_NETWORK_MODE_CDMA = 7,
};
#endif
class SmsManagerTest : public testing::Test {
public:
    SmsManagerTest();
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();

    static void InitPdu();
    static void InitSmsData(SmsMessageData &smsData, bool isOther);
    static void InitSmsDataCDMA(SmsMessageData &smsData, bool isOther);

    const int MAX_USER_DATA_LENTH = 160;
    const int LOOP_NUMBER = 10;
    const uint LOOP_MULTITUDE_NUMBER = 10;
    const int TIME_USEC_500 = 500;
    const int SLOT_ID_1 = 1;
    const int SLOT_ID_0 = 0;
    const int SLOT_ID_2 = 2;
    const int ERROR_SLOT_ID = 9;
    const int MAX_CHAR_MESSAGE_LENTH = 146;
    const int MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH = 137;
    const int MAX_CHINESE_MESSAGE_LENTH = 63;
    const int MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH = 60;
    const int MAX_MESSAGE_LENTH = 2401;

    static const int LOCK_WAIT_SLIP = 50;
    static const int LOCK_WAIT_TIMEOUT = 60000;

    enum MessageSize {
        SIZE_1 = 1,
        SIZE_2,
        SIZE_18 = 18,
    };
#ifdef SMS_MMS_NETWORSEARCH_CDMA_TEST
    static const int WAIT_TIME = 5;
    static sptr<ICoreService> GetProxy_();
    static void RecoverState();
#endif
};

static std::unique_ptr<OHOS::Telephony::ShortMessage> g_message;
SmsMessageData g_messageSmsData;
static std::unique_ptr<OHOS::Telephony::ShortMessage> g_messageOther;
SmsMessageData g_messageOtherSmsData;

static std::unique_ptr<OHOS::Telephony::ShortMessage> g_messageCDMA;
SmsMessageData g_messageSmsDataCDMA;
static std::unique_ptr<OHOS::Telephony::ShortMessage> g_messageOtherCDMA;
SmsMessageData g_messageOtherSmsDataCDMA;

static std::unique_ptr<SmsManagerClient> g_smsClientPtr;
std::u16string g_dataScAddr;

SmsManagerTest::SmsManagerTest() {}

#ifdef SMS_MMS_NETWORSEARCH_CDMA_TEST
sptr<ICoreService> SmsManagerTest::GetProxy_()
{
    return proxy_.GetHandler();
}

class NetworkSearchResultCallBack : public INetworkSearchCallbackStub {
public:
};

OHOS::sptr<NetworkSearchResultCallBack> g_callback(new NetworkSearchResultCallBack());
void SmsManagerTest::RecoverState()
{
    int SLOT_ID = 0;
    ASSERT_TRUE(GetProxy_()->SetPreferredNetwork(
        SLOT_ID, static_cast<int32_t>(PreferredNetwork::CORE_NETWORK_MODE_CDMA), g_callback));
    sleep(WAIT_TIME);
}
#endif

// Example Initialize the SMS data of the PDU,"pduFlag" Used to distinguish two pdUs of the same type
void SmsManagerTest::InitSmsData(SmsMessageData &smsData, bool pduFlag)
{
    if (pduFlag) {
        const int64_t scTime = 1627356274;
        smsData.messageClass = ShortMessage::SmsMessageClass::SMS_CLASS_UNKNOWN;
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
        smsData.visibleRawAddress = u"+861914644****";
        smsData.indexOnSim = 0;
    } else {
        const int64_t scTime = 1617848441;
        smsData.messageClass = ShortMessage::SmsMessageClass::SMS_CLASS_UNKNOWN;
        smsData.hasReplyPath = false;
        smsData.isReplaceMessage = false;
        smsData.isSmsStatusReportMessage = true;
        std::vector<unsigned char> _pdu =
            StringUtils::HexToByteVector("0891683108200075F4240D91688129562983F600001240800102142302C130");
        smsData.pdu = _pdu;
        smsData.protocolId = 0;
        smsData.scAddress = u"+861380020****";
        smsData.scTimestamp = scTime;
        smsData.status = 0;
        smsData.visibleMessageBody = u"Aa";
        smsData.visibleRawAddress = u"+861892659****";
        smsData.indexOnSim = 0;
    }
}

// Example Initialize the SMS data of the PDU,"pduFlag" Used to distinguish two pdUs of the same type
void SmsManagerTest::InitSmsDataCDMA(SmsMessageData &smsData, bool pduFlag)
{
    if (pduFlag) {
        const int64_t scTime = 1312482177;
        smsData.messageClass = 0;
        smsData.hasReplyPath = false;
        smsData.isReplaceMessage = false;
        smsData.isSmsStatusReportMessage = false;
        std::vector<unsigned char> _pdu =
            StringUtils::HexToByteVector("0000021002020702C54EA488649C0601FC08120003101BB00103100C100306110804182257");
        smsData.pdu = _pdu;
        smsData.protocolId = 0;
        smsData.scAddress = u"";
        smsData.scTimestamp = scTime;
        smsData.status = 0;
        smsData.visibleMessageBody = u"A";
        smsData.visibleRawAddress = u"153*922****";
        smsData.indexOnSim = 0;
    } else {
        const int64_t scTime = 1409570791;
        smsData.messageClass = 0;
        smsData.hasReplyPath = false;
        smsData.isReplaceMessage = false;
        smsData.isSmsStatusReportMessage = false;
        std::vector<unsigned char> _pdu = StringUtils::HexToByteVector(
            "0000021002020702c6049064c4d40601fc081b00031000200106102e8cbb366f03061409011126310a01400d0101");
        smsData.pdu = _pdu;
        smsData.protocolId = 0;
        smsData.scAddress = u"";
        smsData.scTimestamp = scTime;
        smsData.status = 0;
        smsData.visibleMessageBody = u"hello";
        smsData.visibleRawAddress = u"1812419****";
        smsData.indexOnSim = 0;
    }
}

void SmsManagerTest::InitPdu()
{
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

    // CDMA
    std::vector<unsigned char> pduCDMA = OHOS::Telephony::StringUtils::HexToByteVector(
        "0000021002020702c6049064c4d40601fc081b00031000200106102e8cbb366f03061409011126310a01400d0101");
    g_messageCDMA =
        std::unique_ptr<OHOS::Telephony::ShortMessage>(OHOS::Telephony::ShortMessage::CreateMessage(pduCDMA, u"3gpp2"));
    if (g_messageCDMA == nullptr) {
        LOG("TestCreateMessage CDMA fail!!! \n");
    } else {
        // Example Initialize the SMS data of the PDU
        InitSmsDataCDMA(g_messageSmsDataCDMA, false);
        LOG("TestCreateMessage CDMA succeess!!! \n");
    }

    std::vector<unsigned char> pduOtherCDMA = OHOS::Telephony::StringUtils::HexToByteVector(
        "0000021002020702C54EA488649C0601FC08120003101BB00103100C100306110804182257");
    g_messageOtherCDMA = std::unique_ptr<OHOS::Telephony::ShortMessage>(
        OHOS::Telephony::ShortMessage::CreateMessage(pduOtherCDMA, u"3gpp2"));
    if (g_messageOtherCDMA == nullptr) {
        LOG("TestCreateMessage OTHER CDMA fail!!! \n");
    } else {
        // Example Initialize the SMS data of the PDU
        InitSmsDataCDMA(g_messageOtherSmsDataCDMA, true);
        LOG("TestCreateMessage OTHER CDMA succeess!!! \n");
    }
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
    InitPdu();
    g_smsClientPtr->Init(TELEPHONY_SMS_MMS_SYS_ABILITY_ID);
#ifdef SMS_MMS_NETWORSEARCH_CDMA_TEST
    RecoverState();
#endif
}

// excute after last testcase
void SmsManagerTest::TearDownTestCase()
{
    LOG("> ---------- unInit");
    g_smsClientPtr->unInit();
}

void SmsManagerTest::SetUp()
{
    ASSERT_NE(g_smsClientPtr, nullptr);
    ASSERT_NE(g_message, nullptr);
    ASSERT_NE(g_messageOther, nullptr);
    SendCallback::res = SendCallback::CALLBACK_ERROR;
    DeliveryShortback::res = DeliveryShortback::CALLBACK_ERROR;
}

void SmsManagerTest::TearDown() {}

class SimSmsManagerTest : public testing::Test {
public:
    SimSmsManagerTest();
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();

    static void Restore();
    std::u16string InterceptionPdu(std::u16string data, int pduLength);

    static bool PduDataMatch(OHOS::Telephony::ShortMessage SmsRecord);
    static bool ReceivePduDataMatch(OHOS::Telephony::ShortMessage SmsRecord);

    const uint LOOP_MULTITUDE_NUMBER = 10;
    const int TIME_USEC_500 = 500;
    const int SLOT_ID_1 = 1;
    const int SLOT_ID_0 = 0;
    const int ERROR_SLOT_ID = 9;
    const int OTHER_ERROR_SLOT_ID = 10;
    const int MAX_USER_DATA_LENTH = 160;
    const int SMSC_MIN_LENGTH = 2;
    static const int ADDRESS_LENGTH = 14;

    // PDU code data that meets specifications for testing
    std::u16string CORRECT_SMS_PDU = u"01000F9168683106019196F400080A00680065006C006C006F";
    std::u16string OTHER_SMS_PDU = u"01000F9168683106019196F400080400410061";
    std::u16string RECEIVE_SMS_PDU = u"240D91689141468496F600001270721142432302B319";
    std::u16string RECEIVE_OTHER_SMS_PDU = u"240D91689141468496F600001270721174322302B91C";

    // Record the length of pdUs
    std::map<std::u16string, int> PDU_LENGTH;
};

SimSmsManagerTest::SimSmsManagerTest()
{
    // Record the length of pdUs
    PDU_LENGTH[CORRECT_SMS_PDU] = CORRECT_SMS_PDU.size();
    PDU_LENGTH[OTHER_SMS_PDU] = OTHER_SMS_PDU.size();
    PDU_LENGTH[RECEIVE_SMS_PDU] = RECEIVE_SMS_PDU.size();
    PDU_LENGTH[RECEIVE_OTHER_SMS_PDU] = RECEIVE_OTHER_SMS_PDU.size();
}

void SimSmsManagerTest::Restore()
{
    // Delete all SMS messages from the SIM
    std::vector<OHOS::Telephony::ShortMessage> initSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(0);
    for (uint index = 0; index < initSmsRecord.size(); ++index) {
        g_smsClientPtr->GetPtr()->DelSimMessage(0, initSmsRecord[index].GetIndexOnSim());
    }
}

// Gets the PDU that is stored
std::u16string SimSmsManagerTest::InterceptionPdu(std::u16string data, int pduLength)
{
    std::u16string getPdu;
    if (data.size() < (unsigned int)pduLength) {
        return getPdu;
    }
    std::string str(data.begin(), data.begin() + SMSC_MIN_LENGTH);
    int intStr = std::atoi(str.c_str());
    int pduBegin = intStr * SMSC_MIN_LENGTH + SMSC_MIN_LENGTH;
    getPdu.assign(data, pduBegin, pduLength);
    return getPdu;
}


// Matching PDU Data --CORRECT_SMS_PDU
bool SimSmsManagerTest::PduDataMatch(OHOS::Telephony::ShortMessage smsRecord)
{
    return (smsRecord.GetVisibleMessageBody() == u"hello" &&
            smsRecord.GetVisibleRawAddress().empty() &&
            smsRecord.GetMessageClass() == (int32_t)OHOS::Telephony::ShortMessage::SmsMessageClass::SMS_CLASS_UNKNOWN &&
            smsRecord.GetProtocolId() == 0 &&
            smsRecord.GetScAddress().size() == ADDRESS_LENGTH &&
            smsRecord.GetScTimestamp() >= 0 &&
            smsRecord.IsReplaceMessage() == false &&
            smsRecord.HasReplyPath() == false &&
            smsRecord.GetPdu().size() > 0 &&
            smsRecord.GetStatus() == 0 &&
            smsRecord.IsSmsStatusReportMessage() == false);
}

// Matching PDU Data --RECEIVE_OTHER_SMS_PDU
bool SimSmsManagerTest::ReceivePduDataMatch(OHOS::Telephony::ShortMessage smsRecord)
{
    return (smsRecord.GetVisibleMessageBody() == u"99" &&
            smsRecord.GetVisibleRawAddress().size() == ADDRESS_LENGTH &&
            smsRecord.GetMessageClass() == (int32_t)OHOS::Telephony::ShortMessage::SmsMessageClass::SMS_CLASS_UNKNOWN &&
            smsRecord.GetProtocolId() == 0 &&
            smsRecord.GetScAddress().size() == ADDRESS_LENGTH &&
            smsRecord.GetScTimestamp() >= 0 &&
            smsRecord.IsReplaceMessage() == false &&
            smsRecord.HasReplyPath() == false &&
            smsRecord.GetPdu().size() > 0 &&
            smsRecord.GetStatus() == 0 &&
            smsRecord.IsSmsStatusReportMessage() == true);
}

// excute before first testcase
void SimSmsManagerTest::SetUpTestCase()
{
    LOG("> ---------- publish ability");
    g_smsClientPtr = std::make_unique<SmsManagerClient>();
    if (g_smsClientPtr == nullptr) {
        LOG("new SmsManagerClient failed!\n");
        return;
    }
    g_smsClientPtr->Init(TELEPHONY_SMS_MMS_SYS_ABILITY_ID);
    Restore();
}

// excute after last testcase
void SimSmsManagerTest::TearDownTestCase()
{
    LOG("> ---------- unInit");
    g_smsClientPtr->unInit();
    Restore();
}

void SimSmsManagerTest::SetUp()
{
    ASSERT_NE(g_smsClientPtr, nullptr);
}

void SimSmsManagerTest::TearDown() {}


class SmsConfigTest : public testing::Test {
public:
    SmsConfigTest();
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();

    static void Restore();

    const int SLOT_ID_1 = 1;
    const int SLOT_ID_0 = 0;
    const int SLOT_ID_2 = 2;
    const int ERROR_SLOT_ID = 9;
    const uint LOOP_MULTITUDE_NUMBER = 10;
    const int TIME_USEC_500 = 500;

    // Address of the SMS center service
    std::u16string OTHER_SMSC = u"0891683108705505F0";
    std::u16string USABLE_SMSC = u"0891683108502105F0";
};

SmsConfigTest::SmsConfigTest() {}

void SmsConfigTest::Restore()
{
    int correctSlotId = 0;
    g_smsClientPtr->GetPtr()->SetSmscAddr(correctSlotId, g_dataScAddr);
    std::u16string tempScAddr = g_smsClientPtr->GetPtr()->GetSmscAddr(correctSlotId);
    if (tempScAddr != g_dataScAddr) {
        g_smsClientPtr->GetPtr()->SetSmscAddr(correctSlotId, g_dataScAddr);
    }
    uint32_t fromMsgId = 0;
    uint32_t toMsgId = 0xFFFF;
    g_smsClientPtr->GetPtr()->SetCBConfig(correctSlotId, false, fromMsgId, toMsgId, 1);
    g_smsClientPtr->GetPtr()->SetDefaultSmsSlotId(correctSlotId);
}

// excute before first testcase
void SmsConfigTest::SetUpTestCase()
{
    LOG("> ---------- publish ability");
    g_smsClientPtr = std::make_unique<SmsManagerClient>();
    if (g_smsClientPtr == nullptr) {
        LOG("new SmsManagerClient failed!\n");
        return;
    }
    g_smsClientPtr->Init(TELEPHONY_SMS_MMS_SYS_ABILITY_ID);
    int correctSlotId = 0;
    g_dataScAddr = g_smsClientPtr->GetPtr()->GetSmscAddr(correctSlotId);
}

// excute after last testcase
void SmsConfigTest::TearDownTestCase()
{
    LOG("> ---------- unInit");
    g_smsClientPtr->unInit();
    Restore();
}

void SmsConfigTest::SetUp()
{
    ASSERT_NE(g_smsClientPtr, nullptr);
    Restore();
}

void SmsConfigTest::TearDown() {}
} // namespace SmsMmsManagerTest
} // namespace Telephony
} // namespace OHOS

#endif
