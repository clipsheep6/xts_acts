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

#ifndef TELEPHONY_MMS_MANAGER_TEST
#define TELEPHONY_MMS_MANAGER_TEST

#include <gtest/gtest.h>
#include <fstream>
#include "string_utils.h"
#include "mms_msg.h"
#include "delivery_short_message_callback_stub.h"
#include "send_short_message_callback_stub.h"
#include "system_ability_definition.h"
#include "sms_manager_client.h"

namespace fs = std::filesystem;

// MMS_MSGTYPE_SEND_REQ
struct MmsSendReq {
    uint8_t messageType;
    std::string transactionId;
    uint16_t version;
    int64_t date;
    std::string from;
    std::string toAddress[2];
    std::string subject;
    uint8_t deliveryReport;
    uint8_t sendVisbility;
    uint8_t readResport;
    uint8_t messageClass;
    uint8_t priority;
    // attachments;
    std::string contentLocation[4];
    std::string contentId[4];
    std::string fileName[4];
    uint32_t dataBufferLen[4];
} mmsSendReqData;

// MMS_MSGTYPE_SEND_CONF
struct MmsSendConf {
    uint8_t messageType;
    std::string transactionId;
    uint16_t version;
    uint8_t responseStatus;
} mmsSendConfData;

// MMS_MSGTYPE_NOTIFICATION_IND
struct MmsNotificationInd {
    uint8_t messageType;
    std::string transactionId;
    uint16_t version;
    int64_t messageSize;
    int64_t expiry;
    std::string contentLocation;
} mmsNotificationIndData;

// MMS_MSGTYPE_NOTIFYRESP_IND
struct MmsNotifyRespInd {
    uint8_t messageType;
    std::string transactionId;
    uint16_t version;
    uint8_t status;
} mmsNotifyRespIndData;

// MMS_MSGTYPE_RETRIEVE_CONF
struct MmsRetrieveConf {
    uint8_t messageType;
    std::string transactionId;
    uint16_t version;
    int64_t date;
    //attachments,
    std::string contentLocation[3];
    std::string contentId[3];
    std::string fileName[3];
    uint32_t dataBufferLen[3];
} mmsRetrieveConfData;

// MMS_MSGTYPE_ACKNOWLEDGE_IND
struct MmsAcknowledgeInd {
    uint8_t messageType;
    std::string transactionId;
    uint16_t version;
} mmsAcknowledgeIndData;

// MMS_MSGTYPE_DELIVERY_IND
struct MmsDeliveryIndDecode {
    uint8_t messageType;
    uint16_t version;
    std::string messageID;
    std::string toAddress;
    int64_t date;
    uint8_t status;
} mmsDeliveryIndDecodeData;

// MMS_MSGTYPE_READ_REC_IND
struct MmsReadRecInd {
    uint8_t messageType;
    uint16_t version;
    std::string messageID;
    std::string toAddress;
    std::string from;
    int64_t date;
    uint8_t status;
} mmsReadRecIndData;

// MMS_MSGTYPE_READ_ORIG_IND
struct MmsReadOrigInd {
    uint8_t messageType;
    uint16_t version;
    std::string messageID;
    std::string toAddress;
    std::string from;
    int64_t date;
    uint8_t readStatus;
} mmsReadOrigIndData;

namespace OHOS {
namespace Telephony {
namespace MmsManager {
class MmsManagerTest : public testing::Test {
public:
    MmsManagerTest();
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();

    static void initMmsData(uint8_t messageType);

    const uint LOOP_MULTITUDE_NUMBER = 10;
    const uint LOOP_MULTITUDE_1000 = 1000;
    const int TIME_USEC_500 = 500 * 2;
};

static std::unique_ptr<SmsManagerClient> g_smsClientPtr;
std::u16string g_dataScAddr;
static bool g_mmsPath;

MmsManagerTest::MmsManagerTest() {}

void MmsManagerTest::initMmsData(uint8_t messageType)
{
    uint16_t sendReqVersion = 16;
    int64_t sendReqData = 1427333251;
    uint32_t sendReqDataBufferLen[4] = {779, 126, 46921, 4626};
    uint16_t sendConfVersion = 1;
    uint16_t notIndVersion = 1;
    uint16_t notIndmessageSize = 0;
    uint16_t notiIndVersion = 1;
    uint16_t retConfVersion = 1;
    uint32_t retConfDataBufferLen[3] = {252, 226, 12573};
    uint16_t ackVersion = 1;
    uint16_t delIndVersion = 1;
    uint16_t readOrigVersion = 1;
    uint16_t readRecVersion = 1;
    uint8_t readRecStatus = 0;
    switch (messageType)
    {
        case MMS_MSGTYPE_SEND_REQ:
            mmsSendReqData.messageType = MMS_MSGTYPE_SEND_REQ;
            mmsSendReqData.transactionId = "2077.1427358451410";
            mmsSendReqData.version = sendReqVersion;
            mmsSendReqData.date = sendReqData;
            mmsSendReqData.from = "2077/TYPE=PLMN";
            mmsSendReqData.toAddress[0] = "+4798682185/TYPE=PLMN";
            mmsSendReqData.toAddress[1] = "+8610086/TYPE=PLMN";
            mmsSendReqData.subject = "Test mms";
            mmsSendReqData.deliveryReport = static_cast<uint8_t>(OHOS::Telephony::MmsBoolType::MMS_NO);
            mmsSendReqData.sendVisbility = static_cast<uint8_t>(OHOS::Telephony::MmsBoolType::MMS_NO);
            mmsSendReqData.readResport = static_cast<uint8_t>(OHOS::Telephony::MmsBoolType::MMS_NO);
            mmsSendReqData.messageClass = static_cast<uint8_t>(OHOS::Telephony::MmsMessageClass::PERSONAL);
            mmsSendReqData.priority = static_cast<uint8_t>(OHOS::Telephony::MmsPriority::MMS_NORMAL);
            mmsSendReqData.contentLocation[0] = "megatron.smil";
            mmsSendReqData.contentLocation[1] = "megatron.txt";
            mmsSendReqData.contentLocation[2] = "megatron.png";
            mmsSendReqData.contentLocation[3] = "decepticons.png";
            mmsSendReqData.contentId[0] = "<0000>";
            mmsSendReqData.contentId[1] = "<megatron.txt>";
            mmsSendReqData.contentId[2] = "<megatron.png>";
            mmsSendReqData.contentId[3] = "<decepticons.png>";
            mmsSendReqData.fileName[0] = "megatron.smil";
            mmsSendReqData.fileName[1] = "megatron.txt";
            mmsSendReqData.fileName[2] = "megatron.png";
            mmsSendReqData.fileName[3] = "decepticons.png";
            mmsSendReqData.dataBufferLen[0] = sendReqDataBufferLen[0];
            mmsSendReqData.dataBufferLen[1] = sendReqDataBufferLen[1];
            mmsSendReqData.dataBufferLen[2] = sendReqDataBufferLen[2];
            mmsSendReqData.dataBufferLen[3] = sendReqDataBufferLen[3];
            break;
        case MMS_MSGTYPE_SEND_CONF:
            mmsSendConfData.messageType = MMS_MSGTYPE_SEND_CONF;
            mmsSendConfData.transactionId = "2077.1427358451410";
            mmsSendConfData.version = sendConfVersion;
            mmsSendConfData.responseStatus = static_cast<uint8_t>(MmsResponseStatus::MMS_OK);
            break;
        case MMS_MSGTYPE_NOTIFICATION_IND:
            mmsNotificationIndData.messageType = MMS_MSGTYPE_NOTIFICATION_IND;
            mmsNotificationIndData.transactionId = "2077.1427358451410";
            mmsNotificationIndData.version = notIndVersion;
            mmsNotificationIndData.messageSize = notIndmessageSize;
            mmsNotificationIndData.contentLocation = "Test";
            break;
        case MMS_MSGTYPE_NOTIFYRESP_IND:
            mmsNotifyRespIndData.messageType = MMS_MSGTYPE_NOTIFYRESP_IND;
            mmsNotifyRespIndData.transactionId = "2077.1427358451410";
            mmsNotifyRespIndData.version = notiIndVersion;
            mmsNotifyRespIndData.status = static_cast<uint8_t>(MmsStatus::MMS_EXPIRED);
            break;
        case MMS_MSGTYPE_RETRIEVE_CONF:
            mmsRetrieveConfData.messageType = MMS_MSGTYPE_RETRIEVE_CONF;
            mmsRetrieveConfData.transactionId = "2077.1427358451410";
            mmsRetrieveConfData.version = retConfVersion;
            mmsRetrieveConfData.contentLocation[0] = "618C0A89.smil";
            mmsRetrieveConfData.contentLocation[1] = "content.text";
            mmsRetrieveConfData.contentLocation[2] = "picture.gif";
            mmsRetrieveConfData.contentId[0] = "<0000>";
            mmsRetrieveConfData.contentId[1] = "<content.text>";
            mmsRetrieveConfData.contentId[2] = "<picture.gif>";
            mmsRetrieveConfData.fileName[0] = "618C0A89.smil";
            mmsRetrieveConfData.fileName[1] = "content.text";
            mmsRetrieveConfData.fileName[2] = "picture.gif";
            mmsRetrieveConfData.dataBufferLen[0] = retConfDataBufferLen[0];
            mmsRetrieveConfData.dataBufferLen[1] = retConfDataBufferLen[1];
            mmsRetrieveConfData.dataBufferLen[2] = retConfDataBufferLen[2];
            break;
        case MMS_MSGTYPE_ACKNOWLEDGE_IND:
            mmsAcknowledgeIndData.messageType = MMS_MSGTYPE_ACKNOWLEDGE_IND;
            mmsAcknowledgeIndData.transactionId = "2077.1427358451410";
            mmsAcknowledgeIndData.version = ackVersion;
            break;
        case MMS_MSGTYPE_DELIVERY_IND:
            mmsDeliveryIndDecodeData.messageType = MMS_MSGTYPE_DELIVERY_IND;
            mmsDeliveryIndDecodeData.version = delIndVersion;
            mmsDeliveryIndDecodeData.messageID = "0001";
            mmsDeliveryIndDecodeData.toAddress = "+8613888888888/TYPE=PLMN";
            mmsDeliveryIndDecodeData.status = static_cast<uint8_t>(MmsStatus::MMS_EXPIRED);
            break;
        case MMS_MSGTYPE_READ_REC_IND:
            mmsReadRecIndData.messageType = MMS_MSGTYPE_READ_REC_IND;
            mmsReadRecIndData.version = readRecVersion;
            mmsReadRecIndData.messageID = "0001";
            mmsReadRecIndData.toAddress = "";
            mmsReadRecIndData.from = "+8613812345678/TYPE=PLMN";
            mmsReadRecIndData.status = readRecStatus;
            break;
        case MMS_MSGTYPE_READ_ORIG_IND:
            mmsReadOrigIndData.messageType = MMS_MSGTYPE_READ_ORIG_IND;
            mmsReadOrigIndData.version = readOrigVersion;
            mmsReadOrigIndData.messageID = "0001";
            mmsReadOrigIndData.toAddress = "";
            mmsReadOrigIndData.from = "+8613812345678/TYPE=PLMN";
            mmsReadOrigIndData.readStatus = static_cast<uint8_t>(MmsReadStatus::MMS_READ);
            break;
        default:
            LOG("initMmsData failed !  messageType = %d", messageType);
            break;
    }
    LOG("initMmsData  messageType = %d  OK!!!", messageType);
}

// excute before first testcase
void MmsManagerTest::SetUpTestCase()
{
    LOG("> ---------- publish ability");
    g_smsClientPtr = std::make_unique<SmsManagerClient>();
    if (g_smsClientPtr == nullptr) {
        LOG("new MmsManagerClient failed!\n");
        return;
    }
    g_smsClientPtr->Init(TELEPHONY_SMS_MMS_SYS_ABILITY_ID);
    initMmsData(MMS_MSGTYPE_SEND_REQ);
    initMmsData(MMS_MSGTYPE_SEND_CONF);
    initMmsData(MMS_MSGTYPE_NOTIFICATION_IND);
    initMmsData(MMS_MSGTYPE_NOTIFYRESP_IND);
    initMmsData(MMS_MSGTYPE_RETRIEVE_CONF);
    initMmsData(MMS_MSGTYPE_ACKNOWLEDGE_IND);
    initMmsData(MMS_MSGTYPE_DELIVERY_IND);
    initMmsData(MMS_MSGTYPE_READ_REC_IND);
    initMmsData(MMS_MSGTYPE_READ_ORIG_IND);
    g_mmsPath = true;
    g_mmsPath = fs::exists("/data/telephony/deSrc");
    g_mmsPath = fs::exists("/data/telephony/enSrc");
}

// excute after last testcase
void MmsManagerTest::TearDownTestCase()
{
    LOG("> ---------- unInit");
    g_smsClientPtr->unInit();
}

void MmsManagerTest::SetUp()
{
    ASSERT_NE(g_smsClientPtr, nullptr);
}

void MmsManagerTest::TearDown() {}
} // namespace MmsManager
} // namespace Telephony
} // namespace OHOS

#endif
