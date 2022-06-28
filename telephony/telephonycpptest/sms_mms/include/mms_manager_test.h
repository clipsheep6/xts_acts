/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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
    std::string contentLocation[4];
    std::string contentId[4];
    std::string fileName[4];
    uint32_t dataBufferLen[4];
};

// MMS_MSGTYPE_SEND_CONF
struct MmsSendConf {
    uint8_t messageType;
    std::string transactionId;
    uint16_t version;
    uint8_t responseStatus;
};

// MMS_MSGTYPE_NOTIFICATION_IND
struct MmsNotificationInd {
    uint8_t messageType;
    std::string transactionId;
    uint16_t version;
    int64_t messageSize;
    int64_t expiry;
    std::string contentLocation;
};

// MMS_MSGTYPE_NOTIFYRESP_IND
struct MmsNotifyRespInd {
    uint8_t messageType;
    std::string transactionId;
    uint16_t version;
    uint8_t status;
};

// MMS_MSGTYPE_RETRIEVE_CONF
struct MmsRetrieveConf {
    uint8_t messageType;
    std::string transactionId;
    uint16_t version;
    int64_t date;
    // attachments,
    std::string contentLocation[3];
    std::string contentId[3];
    std::string fileName[3];
    uint32_t dataBufferLen[3];
};

// MMS_MSGTYPE_ACKNOWLEDGE_IND
struct MmsAcknowledgeInd {
    uint8_t messageType;
    std::string transactionId;
    uint16_t version;
};

// MMS_MSGTYPE_DELIVERY_IND
struct MmsDeliveryIndDecode {
    uint8_t messageType;
    uint16_t version;
    std::string messageID;
    std::string toAddress;
    int64_t date;
    uint8_t status;
};

// MMS_MSGTYPE_READ_REC_IND
struct MmsReadRecInd {
    uint8_t messageType;
    uint16_t version;
    std::string messageID;
    std::string toAddress;
    std::string from;
    int64_t date;
    uint8_t status;
};

// MMS_MSGTYPE_READ_ORIG_IND
struct MmsReadOrigInd {
    uint8_t messageType;
    uint16_t version;
    std::string messageID;
    std::string toAddress;
    std::string from;
    int64_t date;
    uint8_t readStatus;
};

namespace OHOS {
namespace Telephony {
namespace MmsManager {
constexpr int32_t FIRST_INDEX = 0;
constexpr int32_t SECOND_INDEX = 1;
constexpr int32_t THIRD_INDEX = 2;
constexpr int32_t FOUTH_INDEX = 3;
constexpr int32_t MSM_DATA = 1639378126;

class MmsManagerTest : public testing::Test {
public:
    MmsManagerTest();
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();

    static void initMmsData(uint8_t messageType);
    static void InitMmsSendReqData();
    static void InitMmsRetrieveConfData();
    static void InitMmsSendConfData();
    static void InitMmsNotificationIndData();
    static void InitMmsNotifyRespIndData();
    static void InitMmsAcknowledgeIndData();
    static void InitMmsDeliveryIndDecodeData();
    static void InitMmsReadRecIndData();
    static void InitMmsReadOrigIndData();
    void CheckdecodeMsg(std::unique_ptr<char[]> result, uint32_t len);
    void CheckencodeMsg(MmsMsg &encodeMsg);

    const uint LOOP_MULTITUDE_NUMBER = 10;
    const uint LOOP_MULTITUDE_1000 = 1000;
    const int TIME_USEC_500 = 500 * 2;
};

static std::unique_ptr<SmsManagerClient> g_smsClientPtr;
std::u16string g_dataScAddr;
static bool g_mmsPath;
MmsSendReq mmsSendReqData;
MmsSendConf mmsSendConfData;
MmsNotificationInd mmsNotificationIndData;
MmsNotifyRespInd mmsNotifyRespIndData;
MmsRetrieveConf mmsRetrieveConfData;
MmsAcknowledgeInd mmsAcknowledgeIndData;
MmsDeliveryIndDecode mmsDeliveryIndDecodeData;
MmsReadRecInd mmsReadRecIndData;
MmsReadOrigInd mmsReadOrigIndData;
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

MmsManagerTest::MmsManagerTest() {}

void MmsManagerTest::InitMmsSendReqData()
{
    mmsSendReqData.messageType = MMS_MSGTYPE_SEND_REQ;
    mmsSendReqData.transactionId = "2077.1427358451410";
    mmsSendReqData.version = sendReqVersion;
    mmsSendReqData.date = sendReqData;
    mmsSendReqData.from = "2077/TYPE=PLMN";
    mmsSendReqData.toAddress[FIRST_INDEX] = "+4798682185/TYPE=PLMN";
    mmsSendReqData.toAddress[SECOND_INDEX] = "+8610086/TYPE=PLMN";
    mmsSendReqData.subject = "Test mms";
    mmsSendReqData.deliveryReport = static_cast<uint8_t>(OHOS::Telephony::MmsBoolType::MMS_NO);
    mmsSendReqData.sendVisbility = static_cast<uint8_t>(OHOS::Telephony::MmsBoolType::MMS_NO);
    mmsSendReqData.readResport = static_cast<uint8_t>(OHOS::Telephony::MmsBoolType::MMS_NO);
    mmsSendReqData.messageClass = static_cast<uint8_t>(OHOS::Telephony::MmsMessageClass::PERSONAL);
    mmsSendReqData.priority = static_cast<uint8_t>(OHOS::Telephony::MmsPriority::MMS_NORMAL);
    mmsSendReqData.contentLocation[FIRST_INDEX] = "megatron.smil";
    mmsSendReqData.contentLocation[SECOND_INDEX] = "megatron.txt";
    mmsSendReqData.contentLocation[THIRD_INDEX] = "megatron.png";
    mmsSendReqData.contentLocation[FOUTH_INDEX] = "decepticons.png";
    mmsSendReqData.contentId[FIRST_INDEX] = "<0000>";
    mmsSendReqData.contentId[SECOND_INDEX] = "<megatron.txt>";
    mmsSendReqData.contentId[THIRD_INDEX] = "<megatron.png>";
    mmsSendReqData.contentId[FOUTH_INDEX] = "<decepticons.png>";
    mmsSendReqData.fileName[FIRST_INDEX] = "megatron.smil";
    mmsSendReqData.fileName[SECOND_INDEX] = "megatron.txt";
    mmsSendReqData.fileName[THIRD_INDEX] = "megatron.png";
    mmsSendReqData.fileName[FOUTH_INDEX] = "decepticons.png";
    mmsSendReqData.dataBufferLen[FIRST_INDEX] = sendReqDataBufferLen[FIRST_INDEX];
    mmsSendReqData.dataBufferLen[SECOND_INDEX] = sendReqDataBufferLen[SECOND_INDEX];
    mmsSendReqData.dataBufferLen[THIRD_INDEX] = sendReqDataBufferLen[THIRD_INDEX];
    mmsSendReqData.dataBufferLen[FOUTH_INDEX] = sendReqDataBufferLen[FOUTH_INDEX];
}

void MmsManagerTest::InitMmsRetrieveConfData()
{
    mmsRetrieveConfData.messageType = MMS_MSGTYPE_RETRIEVE_CONF;
    mmsRetrieveConfData.transactionId = "2077.1427358451410";
    mmsRetrieveConfData.version = retConfVersion;
    mmsRetrieveConfData.contentLocation[FIRST_INDEX] = "618C0A89.smil";
    mmsRetrieveConfData.contentLocation[SECOND_INDEX] = "content.text";
    mmsRetrieveConfData.contentLocation[THIRD_INDEX] = "picture.gif";
    mmsRetrieveConfData.contentId[FIRST_INDEX] = "<0000>";
    mmsRetrieveConfData.contentId[SECOND_INDEX] = "<content.text>";
    mmsRetrieveConfData.contentId[THIRD_INDEX] = "<picture.gif>";
    mmsRetrieveConfData.fileName[FIRST_INDEX] = "618C0A89.smil";
    mmsRetrieveConfData.fileName[SECOND_INDEX] = "content.text";
    mmsRetrieveConfData.fileName[THIRD_INDEX] = "picture.gif";
    mmsRetrieveConfData.dataBufferLen[FIRST_INDEX] = retConfDataBufferLen[FIRST_INDEX];
    mmsRetrieveConfData.dataBufferLen[SECOND_INDEX] = retConfDataBufferLen[SECOND_INDEX];
    mmsRetrieveConfData.dataBufferLen[THIRD_INDEX] = retConfDataBufferLen[THIRD_INDEX];
}

void MmsManagerTest::InitMmsSendConfData()
{
    mmsSendConfData.messageType = MMS_MSGTYPE_SEND_CONF;
    mmsSendConfData.transactionId = "2077.1427358451410";
    mmsSendConfData.version = sendConfVersion;
    mmsSendConfData.responseStatus = static_cast<uint8_t>(MmsResponseStatus::MMS_OK);
}

void MmsManagerTest::InitMmsNotificationIndData()
{
    mmsNotificationIndData.messageType = MMS_MSGTYPE_NOTIFICATION_IND;
    mmsNotificationIndData.transactionId = "2077.1427358451410";
    mmsNotificationIndData.version = notIndVersion;
    mmsNotificationIndData.messageSize = notIndmessageSize;
    mmsNotificationIndData.contentLocation = "Test";
}

void MmsManagerTest::InitMmsNotifyRespIndData()
{
    mmsNotifyRespIndData.messageType = MMS_MSGTYPE_NOTIFYRESP_IND;
    mmsNotifyRespIndData.transactionId = "2077.1427358451410";
    mmsNotifyRespIndData.version = notiIndVersion;
    mmsNotifyRespIndData.status = static_cast<uint8_t>(MmsStatus::MMS_EXPIRED);
}

void MmsManagerTest::InitMmsAcknowledgeIndData()
{
    mmsAcknowledgeIndData.messageType = MMS_MSGTYPE_ACKNOWLEDGE_IND;
    mmsAcknowledgeIndData.transactionId = "2077.1427358451410";
    mmsAcknowledgeIndData.version = ackVersion;
}

void MmsManagerTest::InitMmsDeliveryIndDecodeData()
{
    mmsDeliveryIndDecodeData.messageType = MMS_MSGTYPE_DELIVERY_IND;
    mmsDeliveryIndDecodeData.version = delIndVersion;
    mmsDeliveryIndDecodeData.messageID = "0001";
    mmsDeliveryIndDecodeData.toAddress = "+8613888888888/TYPE=PLMN";
    mmsDeliveryIndDecodeData.status = static_cast<uint8_t>(MmsStatus::MMS_EXPIRED);
}

void MmsManagerTest::InitMmsReadRecIndData()
{
    mmsReadRecIndData.messageType = MMS_MSGTYPE_READ_REC_IND;
    mmsReadRecIndData.version = readRecVersion;
    mmsReadRecIndData.messageID = "0001";
    mmsReadRecIndData.toAddress = "";
    mmsReadRecIndData.from = "+8613812345678/TYPE=PLMN";
    mmsReadRecIndData.status = readRecStatus;
}

void MmsManagerTest::InitMmsReadOrigIndData()
{
    mmsReadOrigIndData.messageType = MMS_MSGTYPE_READ_ORIG_IND;
    mmsReadOrigIndData.version = readOrigVersion;
    mmsReadOrigIndData.messageID = "0001";
    mmsReadOrigIndData.toAddress = "";
    mmsReadOrigIndData.from = "+8613812345678/TYPE=PLMN";
    mmsReadOrigIndData.readStatus = static_cast<uint8_t>(MmsReadStatus::MMS_READ);
}

void MmsManagerTest::initMmsData(uint8_t messageType)
{
    switch (messageType) {
        case MMS_MSGTYPE_SEND_REQ:
            InitMmsSendReqData();
            break;
        case MMS_MSGTYPE_SEND_CONF:
            InitMmsSendConfData();
            break;
        case MMS_MSGTYPE_NOTIFICATION_IND:
            InitMmsNotificationIndData();
            break;
        case MMS_MSGTYPE_NOTIFYRESP_IND:
            InitMmsNotifyRespIndData();
            break;
        case MMS_MSGTYPE_RETRIEVE_CONF:
            InitMmsRetrieveConfData();
            break;
        case MMS_MSGTYPE_ACKNOWLEDGE_IND:
            InitMmsAcknowledgeIndData();
            break;
        case MMS_MSGTYPE_DELIVERY_IND:
            InitMmsDeliveryIndDecodeData();
            break;
        case MMS_MSGTYPE_READ_REC_IND:
            InitMmsReadRecIndData();
            break;
        case MMS_MSGTYPE_READ_ORIG_IND:
            InitMmsReadOrigIndData();
            break;
        default:
            LOG("initMmsData failed !  messageType = %d", messageType);
            break;
    }
    LOG("initMmsData  messageType = %d  OK!!!", messageType);
}

void MmsManagerTest::CheckdecodeMsg(std::unique_ptr<char[]> result, uint32_t len)
{
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(std::move(result), len));
    EXPECT_TRUE(decodeMsg.GetMmsMessageType() == MMS_MSGTYPE_SEND_REQ);
    EXPECT_TRUE(decodeMsg.GetMmsTransactionId() == "2077.1427358451410");
    EXPECT_TRUE(decodeMsg.GetMmsVersion() == static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_2));
    MmsAddress fromAddr = decodeMsg.GetMmsFrom();
    EXPECT_TRUE(fromAddr.GetAddressString() == "+8613812345678/TYPE=PLMN");
    EXPECT_TRUE(fromAddr.GetAddressCharset() == MmsCharSets::UTF_8);
    EXPECT_TRUE(fromAddr.GetAddressType() == MmsAddress::ADDRESS_TYPE_PLMN);
    EXPECT_TRUE(decodeMsg.GetHeaderContentType() == "application/vnd.wap.multipart.related");
    EXPECT_TRUE(decodeMsg.GetMmsSubject() == "Test mms");
    std::vector<MmsAddress> toAddress;
    ASSERT_TRUE(decodeMsg.GetMmsTo(toAddress));
    ASSERT_FALSE(toAddress.empty());
    EXPECT_TRUE(toAddress[FIRST_INDEX].GetAddressString() == "+8613888888888/TYPE=PLMN");
    EXPECT_TRUE(toAddress[FIRST_INDEX].GetAddressCharset() == MmsCharSets::UTF_8);
    EXPECT_TRUE(toAddress[FIRST_INDEX].GetAddressType() == MmsAddress::ADDRESS_TYPE_PLMN);
    EXPECT_TRUE(toAddress[SECOND_INDEX].GetAddressString() == "+8613812345678/TYPE=PLMN");
    EXPECT_TRUE(toAddress[SECOND_INDEX].GetAddressCharset() == MmsCharSets::UTF_8);
    EXPECT_TRUE(toAddress[SECOND_INDEX].GetAddressType() == MmsAddress::ADDRESS_TYPE_PLMN);
    EXPECT_TRUE(decodeMsg.GetMmsDate() == MSM_DATA);
    EXPECT_TRUE(
        decodeMsg.GetHeaderOctetValue(MMS_MESSAGE_CLASS) == static_cast<uint8_t>(MmsMessageClass::INFORMATIONAL));
    EXPECT_GT(decodeMsg.GetHeaderLongValue(MMS_EXPIRY), 0);
    EXPECT_TRUE(decodeMsg.GetHeaderOctetValue(MMS_PRIORITY) == static_cast<uint8_t>(MmsPriority::MMS_LOW));
    EXPECT_TRUE(
        decodeMsg.GetHeaderOctetValue(MMS_SENDER_VISIBILITY) == static_cast<uint8_t>(MmsSenderVisibility::MMS_SHOW));
    EXPECT_TRUE(decodeMsg.GetHeaderOctetValue(MMS_DELIVERY_REPORT) == static_cast<uint8_t>(MmsBoolType::MMS_YES));
    EXPECT_TRUE(decodeMsg.GetHeaderOctetValue(MMS_READ_REPORT) == static_cast<uint8_t>(MmsBoolType::MMS_NO));
    uint attachmentsCount = 3;
    std::vector<MmsAttachment> attachments;
    ASSERT_TRUE(decodeMsg.GetAllAttachment(attachments));
    ASSERT_TRUE(attachments.size() == attachmentsCount);
    EXPECT_TRUE(attachments[FIRST_INDEX].GetFileName() == "618C0A89.smil");
    EXPECT_TRUE(attachments[FIRST_INDEX].GetContentId() == "<0000>");
    EXPECT_TRUE(attachments[FIRST_INDEX].GetContentLocation() == "618C0A89.smil");
    EXPECT_TRUE(attachments[FIRST_INDEX].GetContentType() == "application/smil");
    EXPECT_TRUE(attachments[FIRST_INDEX].GetContentDisposition() == "from-data");
    EXPECT_TRUE(attachments[SECOND_INDEX].GetFileName() == "content.text");
    EXPECT_TRUE(attachments[SECOND_INDEX].GetContentId() == "<content.text>");
    EXPECT_TRUE(attachments[SECOND_INDEX].GetContentLocation() == "content.text");
    EXPECT_TRUE(attachments[SECOND_INDEX].GetContentType() == "text/plain");
    EXPECT_TRUE(attachments[SECOND_INDEX].GetContentDisposition() == "attachment");
    EXPECT_TRUE(attachments[THIRD_INDEX].GetFileName() == "picture.gif");
    EXPECT_TRUE(attachments[THIRD_INDEX].GetContentId() == "<picture.gif>");
    EXPECT_TRUE(attachments[THIRD_INDEX].GetContentLocation() == "picture.gif");
    EXPECT_TRUE(attachments[THIRD_INDEX].GetContentType() == "image/gif");
    EXPECT_TRUE(attachments[THIRD_INDEX].GetContentDisposition() == "inline");
}

void MmsManagerTest::CheckencodeMsg(MmsMsg &encodeMsg)
{
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_SEND_REQ));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2077.1427358451410"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_2)));
    MmsAddress fromAddress;
    fromAddress.SetMmsAddressString("+8613812345678/TYPE=PLMN");
    EXPECT_TRUE(encodeMsg.SetMmsFrom(fromAddress));
    EXPECT_TRUE(encodeMsg.SetHeaderContentType("application/vnd.wap.multipart.related"));
    EXPECT_TRUE(encodeMsg.SetMmsSubject("Test mms"));
    std::vector<MmsAddress> vecAddrs;
    MmsAddress toAddrs("+8613888888888/TYPE=PLMN");
    vecAddrs.push_back(toAddrs);
    MmsAddress toAddrs2("+8613812345678/TYPE=PLMN");
    vecAddrs.push_back(toAddrs2);
    EXPECT_TRUE(encodeMsg.SetMmsTo(vecAddrs));
    EXPECT_TRUE(encodeMsg.SetMmsDate(MSM_DATA));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_MESSAGE_CLASS, static_cast<uint8_t>(MmsMessageClass::INFORMATIONAL)));
    EXPECT_TRUE(encodeMsg.SetHeaderLongValue(MMS_EXPIRY, MSM_DATA));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_PRIORITY, static_cast<uint8_t>(MmsPriority::MMS_LOW)));
    EXPECT_TRUE(
        encodeMsg.SetHeaderOctetValue(MMS_SENDER_VISIBILITY, static_cast<uint8_t>(MmsSenderVisibility::MMS_SHOW)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_DELIVERY_REPORT, static_cast<uint8_t>(MmsBoolType::MMS_YES)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_READ_REPORT, static_cast<uint8_t>(MmsBoolType::MMS_NO)));
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
