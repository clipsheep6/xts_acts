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

#include "condition_lock.h"
#include "mms_codec_type.h"
#include "mms_manager_test.h"
#include "string_ex.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace Telephony;
using namespace OHOS::Telephony::MmsManager;
using namespace OHOS::Telephony;

namespace OHOS {
namespace Telephony {
/**
 * @tc.number   Telephony_SmsMms_DecodeMsg_0100
 * @tc.name     Parse SendReq type MMS
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_DecodeMsg_0100, Function | MediumTest | Level1)
{
    if (!g_mmsPath) {
        LOG("MMS PATH NULL !");
        return;
    }
    std::string strPath = "/data/telephony/deSrc/SendReq.mms";
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(strPath));
    EXPECT_TRUE(mmsSendReqData.messageType == decodeMsg.GetMmsMessageType());
    EXPECT_TRUE(mmsSendReqData.transactionId == decodeMsg.GetMmsTransactionId());
    EXPECT_TRUE(mmsSendReqData.version == decodeMsg.GetMmsVersion());
    EXPECT_TRUE(mmsSendReqData.date == decodeMsg.GetMmsDate());
    EXPECT_TRUE(mmsSendReqData.from == decodeMsg.GetMmsFrom().GetAddressString());

    std::vector<MmsAddress> toAddr;
    ASSERT_TRUE(decodeMsg.GetMmsTo(toAddr));
    for (uint i = 0; i < toAddr.size(); ++i) {
        EXPECT_TRUE(mmsSendReqData.toAddress[i] == toAddr[i].GetAddressString());
    }
    EXPECT_TRUE(mmsSendReqData.deliveryReport == decodeMsg.GetHeaderOctetValue(MMS_DELIVERY_REPORT));
    EXPECT_TRUE(mmsSendReqData.sendVisbility == decodeMsg.GetHeaderOctetValue(MMS_SENDER_VISIBILITY));
    EXPECT_TRUE(mmsSendReqData.readResport == decodeMsg.GetHeaderOctetValue(MMS_READ_REPORT));
    EXPECT_TRUE(mmsSendReqData.messageClass == decodeMsg.GetHeaderOctetValue(MMS_MESSAGE_CLASS));
    EXPECT_TRUE(mmsSendReqData.priority == decodeMsg.GetHeaderOctetValue(MMS_PRIORITY));

    std::vector<MmsAttachment> attachments;
    ASSERT_TRUE(decodeMsg.GetAllAttachment(attachments));
    for (uint i = 0; i < attachments.size(); ++i) {
        EXPECT_TRUE(mmsSendReqData.contentLocation[i] == attachments[i].GetContentLocation());
        EXPECT_TRUE(mmsSendReqData.contentId[i] == attachments[i].GetContentId());
        EXPECT_TRUE(mmsSendReqData.fileName[i] == attachments[i].GetFileName());
        uint32_t len = 0;
        attachments[i].GetDataBuffer(len);
        EXPECT_TRUE(mmsSendReqData.dataBufferLen[i] == len);
    }
}

/**
 * @tc.number   Telephony_SmsMms_DecodeMsg_0200
 * @tc.name     Parse SendConf type MMS
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_DecodeMsg_0200, Function | MediumTest | Level1)
{
    if (!g_mmsPath) {
        LOG("MMS PATH NULL !");
        return;
    }
    std::string strPath = "/data/telephony/deSrc/SendConf.mms";
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(strPath));
    EXPECT_TRUE(mmsSendConfData.messageType == decodeMsg.GetMmsMessageType());
    EXPECT_TRUE(mmsSendConfData.transactionId == decodeMsg.GetMmsTransactionId());
    EXPECT_TRUE(mmsSendConfData.version == decodeMsg.GetMmsVersion());
    EXPECT_TRUE(mmsSendConfData.responseStatus == decodeMsg.GetHeaderOctetValue(MMS_RESPONSE_STATUS));
}

/**
 * @tc.number   Telephony_SmsMms_DecodeMsg_0300
 * @tc.name     Parse NotificationInd type MMS
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_DecodeMsg_0300, Function | MediumTest | Level1)
{
    if (!g_mmsPath) {
        LOG("MMS PATH NULL !");
        return;
    }
    std::string strPath = "/data/telephony/deSrc/NotificationInd.mms";
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(strPath));
    EXPECT_TRUE(mmsNotificationIndData.messageType == decodeMsg.GetMmsMessageType());
    EXPECT_TRUE(mmsNotificationIndData.transactionId == decodeMsg.GetMmsTransactionId());
    EXPECT_TRUE(mmsNotificationIndData.version == decodeMsg.GetMmsVersion());
    EXPECT_TRUE(mmsNotificationIndData.messageSize == decodeMsg.GetHeaderLongValue(MMS_MESSAGE_SIZE));
    EXPECT_GT(decodeMsg.GetHeaderLongValue(MMS_EXPIRY), 0);
    EXPECT_TRUE(mmsNotificationIndData.contentLocation == decodeMsg.GetHeaderStringValue(MMS_CONTENT_LOCATION));
}

/**
 * @tc.number   Telephony_SmsMms_DecodeMsg_0400
 * @tc.name     Parse NotifyRespInd type MMS
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_DecodeMsg_0400, Function | MediumTest | Level1)
{
    if (!g_mmsPath) {
        LOG("MMS PATH NULL !");
        return;
    }
    std::string strPath = "/data/telephony/deSrc/NotifyRespInd.mms";
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(strPath));
    EXPECT_TRUE(mmsNotifyRespIndData.messageType == decodeMsg.GetMmsMessageType());
    EXPECT_TRUE(mmsNotifyRespIndData.transactionId == decodeMsg.GetMmsTransactionId());
    EXPECT_TRUE(mmsNotifyRespIndData.version == decodeMsg.GetMmsVersion());
    EXPECT_TRUE(mmsNotifyRespIndData.status == decodeMsg.GetHeaderOctetValue(MMS_STATUS));
}

/**
 * @tc.number   Telephony_SmsMms_DecodeMsg_0500
 * @tc.name     Parse RetrieveConf type MMS
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_DecodeMsg_0500, Function | MediumTest | Level1)
{
    if (!g_mmsPath) {
        LOG("MMS PATH NULL !");
        return;
    }
    std::string strPath = "/data/telephony/deSrc/RetrieveConf.mms";
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(strPath));
    EXPECT_TRUE(mmsRetrieveConfData.messageType == decodeMsg.GetMmsMessageType());
    EXPECT_TRUE(mmsRetrieveConfData.transactionId == decodeMsg.GetMmsTransactionId());
    EXPECT_TRUE(mmsRetrieveConfData.version == decodeMsg.GetMmsVersion());
    EXPECT_GT(decodeMsg.GetMmsDate(), 0);

    std::vector<MmsAttachment> attachments;
    ASSERT_TRUE(decodeMsg.GetAllAttachment(attachments));
    for (uint i = 0; i < attachments.size(); ++i) {
        EXPECT_TRUE(mmsRetrieveConfData.contentLocation[i] == attachments[i].GetContentLocation());
        EXPECT_TRUE(mmsRetrieveConfData.contentId[i] == attachments[i].GetContentId());
        EXPECT_TRUE(mmsRetrieveConfData.fileName[i] == attachments[i].GetFileName());
        uint32_t len = 0;
        attachments[i].GetDataBuffer(len);
        EXPECT_TRUE(mmsRetrieveConfData.dataBufferLen[i] == len);
    }
}

/**
 * @tc.number   Telephony_SmsMms_DecodeMsg_0600
 * @tc.name     Parse AcknowledgeInd type MMS
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_DecodeMsg_0600, Function | MediumTest | Level1)
{
    if (!g_mmsPath) {
        LOG("MMS PATH NULL !");
        return;
    }
    std::string strPath = "/data/telephony/deSrc/AcknowledgeInd.mms";
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(strPath));
    EXPECT_TRUE(mmsAcknowledgeIndData.messageType == decodeMsg.GetMmsMessageType());
    EXPECT_TRUE(mmsAcknowledgeIndData.transactionId == decodeMsg.GetMmsTransactionId());
    EXPECT_TRUE(mmsAcknowledgeIndData.version == decodeMsg.GetMmsVersion());
}

/**
 * @tc.number   Telephony_SmsMms_DecodeMsg_0700
 * @tc.name     Parse DeliveryInd type MMS
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_DecodeMsg_0700, Function | MediumTest | Level1)
{
    if (!g_mmsPath) {
        LOG("MMS PATH NULL !");
        return;
    }
    std::string strPath = "/data/telephony/deSrc/DeliveryInd.mms";
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(strPath));
    EXPECT_TRUE(mmsDeliveryIndDecodeData.messageType == decodeMsg.GetMmsMessageType());
    EXPECT_TRUE(mmsDeliveryIndDecodeData.version == decodeMsg.GetMmsVersion());
    EXPECT_TRUE(mmsDeliveryIndDecodeData.messageID == decodeMsg.GetHeaderStringValue(MMS_MESSAGE_ID));

    std::vector<MmsAddress> toAddr;
    decodeMsg.GetMmsTo(toAddr);
    for (uint i = 0; i < toAddr.size(); ++i) {
        EXPECT_TRUE(mmsDeliveryIndDecodeData.toAddress == toAddr[i].GetAddressString());
    }
    EXPECT_GT(decodeMsg.GetMmsDate(), 0);
    EXPECT_TRUE(mmsDeliveryIndDecodeData.status == decodeMsg.GetHeaderOctetValue(MMS_STATUS));
}

/**
 * @tc.number   Telephony_SmsMms_DecodeMsg_0800
 * @tc.name     Parse ReadRecInd type MMS
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_DecodeMsg_0800, Function | MediumTest | Level1)
{
    if (!g_mmsPath) {
        LOG("MMS PATH NULL !");
        return;
    }
    std::string strPath = "/data/telephony/deSrc/ReadRecInd.mms";
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(strPath));
    EXPECT_TRUE(mmsReadRecIndData.messageType == decodeMsg.GetMmsMessageType());
    EXPECT_TRUE(mmsReadRecIndData.version == decodeMsg.GetMmsVersion());
    EXPECT_TRUE(mmsReadRecIndData.messageID == decodeMsg.GetHeaderStringValue(MMS_MESSAGE_ID));

    std::vector<MmsAddress> toAddr;
    EXPECT_FALSE(decodeMsg.GetMmsTo(toAddr));
    for (uint i = 0; i < toAddr.size(); ++i) {
        EXPECT_TRUE(toAddr[i].GetAddressString().empty());
    }
    EXPECT_TRUE(mmsReadRecIndData.from == decodeMsg.GetMmsFrom().GetAddressString());
    EXPECT_GT(decodeMsg.GetMmsDate(), 0);
    EXPECT_TRUE(mmsReadRecIndData.status == decodeMsg.GetHeaderOctetValue(MMS_STATUS));
}

/**
 * @tc.number   Telephony_SmsMms_DecodeMsg_0900
 * @tc.name     Parse ReadRecInd type MMS
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_DecodeMsg_0900, Function | MediumTest | Level1)
{
    if (!g_mmsPath) {
        LOG("MMS PATH NULL !");
        return;
    }
    std::string strPath = "/data/telephony/deSrc/ReadOrigInd.mms";
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(strPath));
    EXPECT_TRUE(mmsReadOrigIndData.messageType == decodeMsg.GetMmsMessageType());
    EXPECT_TRUE(mmsReadOrigIndData.version == decodeMsg.GetMmsVersion());

    std::vector<MmsAddress> toAddr;
    EXPECT_FALSE(decodeMsg.GetMmsTo(toAddr));
    for (uint i = 0; i < toAddr.size(); ++i) {
        EXPECT_TRUE(toAddr[i].GetAddressString().empty());
    }
    EXPECT_TRUE(mmsReadOrigIndData.from == decodeMsg.GetMmsFrom().GetAddressString());
    EXPECT_GT(decodeMsg.GetMmsDate(), 0);
    EXPECT_TRUE(mmsReadOrigIndData.readStatus == decodeMsg.GetHeaderOctetValue(MMS_READ_STATUS));
}

/**
 * @tc.number   Telephony_SmsMms_DecodeMsg_1000
 * @tc.name     The input parameter value is an outlier, and parsing failed
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_DecodeMsg_1000, Function | MediumTest | Level1)
{
    if (!g_mmsPath) {
        LOG("MMS PATH NULL !");
        return;
    }
    std::string strPath = "/data/telephony/deSrc/EorroMessagePath.mms";
    MmsMsg decodeMsg;
    ASSERT_FALSE(decodeMsg.DecodeMsg(strPath));
}

/**
 * @tc.number   Telephony_SmsMms_EncodeMsg_0100
 * @tc.name     SendReq type MMS, encoding after decoding, the content after decoding and coding before the same
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_EncodeMsg_0100, Function | MediumTest | Level1)
{
    if (!g_mmsPath) {
        LOG("MMS PATH NULL !");
        return;
    }
    // encode
    MmsMsg encodeMsg;
    CheckencodeMsg(encodeMsg);
    // add smil file
    const std::string filePathNameSmil = "/data/telephony/enSrc/618C0A89.smil";
    MmsAttachment smilAttachment;
    EXPECT_TRUE(smilAttachment.SetAttachmentFilePath(filePathNameSmil, true));
    EXPECT_TRUE(smilAttachment.SetFileName("618C0A89.smil"));
    EXPECT_TRUE(smilAttachment.SetContentId("<0000>"));
    EXPECT_TRUE(smilAttachment.SetContentLocation("618C0A89.smil"));
    EXPECT_TRUE(smilAttachment.SetContentType("application/smil"));
    EXPECT_TRUE(smilAttachment.SetContentDisposition("from-data"));
    EXPECT_TRUE(encodeMsg.AddAttachment(smilAttachment));
    EXPECT_TRUE(smilAttachment.IsSmilFile());
    // add text file
    const std::string filePathNameText = "/data/telephony/enSrc/content.text";
    MmsAttachment textAttachment;
    EXPECT_TRUE(textAttachment.SetAttachmentFilePath(filePathNameText, false));
    EXPECT_TRUE(textAttachment.SetFileName("content.text"));
    EXPECT_TRUE(textAttachment.SetContentId("<content.text>"));
    EXPECT_TRUE(textAttachment.SetContentLocation("content.text"));
    EXPECT_TRUE(textAttachment.SetContentType("text/plain"));
    EXPECT_TRUE(textAttachment.SetContentDisposition("attachment"));
    EXPECT_TRUE(encodeMsg.AddAttachment(textAttachment));
    EXPECT_FALSE(textAttachment.IsSmilFile());
    // add image file
    const std::string filePathNameGif = "/data/telephony/enSrc/picture.gif";
    MmsAttachment imageAttachment;
    EXPECT_TRUE(imageAttachment.SetAttachmentFilePath(filePathNameGif, false));
    EXPECT_TRUE(imageAttachment.SetFileName("picture.gif"));
    EXPECT_TRUE(imageAttachment.SetContentId("<picture.gif>"));
    EXPECT_TRUE(imageAttachment.SetContentLocation("picture.gif"));
    EXPECT_TRUE(imageAttachment.SetContentType("image/gif"));
    EXPECT_TRUE(imageAttachment.SetContentDisposition("inline"));
    EXPECT_TRUE(encodeMsg.AddAttachment(imageAttachment));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    // decode
    CheckdecodeMsg(std::move(result), len);
}

/**
 * @tc.number   Telephony_SmsMms_EncodeMsg_0200
 * @tc.name     SendConf type MMS, encoding after decoding, the content after decoding and coding before the same
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_EncodeMsg_0200, Function | MediumTest | Level1)
{
    if (!g_mmsPath) {
        LOG("MMS PATH NULL !");
        return;
    }
    // encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_SEND_CONF));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2077.1427358451410"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_1)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_RESPONSE_STATUS, static_cast<uint8_t>(MmsResponseStatus::MMS_OK)));
    std::string strMessageID = "0001";
    EXPECT_TRUE(encodeMsg.SetHeaderStringValue(MMS_MESSAGE_ID, strMessageID));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_STORE_STATUS, static_cast<uint8_t>(MmsStoreStatus::MMS_STORE_STATUS_SUCCESS)));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    // decode
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(std::move(result), len));
    EXPECT_TRUE(decodeMsg.GetMmsMessageType() == MMS_MSGTYPE_SEND_CONF);
    EXPECT_TRUE(decodeMsg.GetMmsTransactionId() == "2077.1427358451410");
    EXPECT_TRUE(decodeMsg.GetMmsVersion() == static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_1));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RESPONSE_STATUS) == static_cast<uint8_t>(MmsResponseStatus::MMS_OK));
    EXPECT_TRUE(encodeMsg.GetHeaderStringValue(MMS_MESSAGE_ID) == strMessageID);
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_STORE_STATUS) ==
                static_cast<uint8_t>(MmsStoreStatus::MMS_STORE_STATUS_SUCCESS));
}

/**
 * @tc.number   Telephony_SmsMms_EncodeMsg_0300
 * @tc.name     NotificationInd type MMS, encoding after decoding, the content after decoding and coding before the same
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_EncodeMsg_0300, Function | MediumTest | Level1)
{
    if (!g_mmsPath) {
        LOG("MMS PATH NULL !");
        return;
    }
    // encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_NOTIFICATION_IND));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2080.142730"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_3)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_MESSAGE_CLASS, static_cast<uint8_t>(MmsMessageClass::PERSONAL)));
    EXPECT_TRUE(encodeMsg.SetHeaderLongValue(MMS_EXPIRY, MSM_DATA));
    EXPECT_TRUE(encodeMsg.SetHeaderLongValue(MMS_MESSAGE_SIZE, 12345678));
    std::string strContentLocation = "Test";
    EXPECT_TRUE(encodeMsg.SetHeaderStringValue(MMS_CONTENT_LOCATION, strContentLocation));
    MmsAddress fromAddress;
    fromAddress.SetMmsAddressString("+8613812345678/TYPE=PLMN", MmsCharSets::UTF_8);
    EXPECT_TRUE(encodeMsg.SetMmsFrom(fromAddress));
    EXPECT_TRUE(encodeMsg.SetMmsSubject("Test mms"));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_DELIVERY_REPORT, static_cast<uint8_t>(MmsBoolType::MMS_YES)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_CONTENT_CLASS, static_cast<uint8_t>(MmsContentClass::MMS_TEXT)));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    // decode
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(std::move(result), len));
    EXPECT_TRUE(decodeMsg.GetMmsMessageType() == MMS_MSGTYPE_NOTIFICATION_IND);
    EXPECT_TRUE(decodeMsg.GetMmsTransactionId() == "2080.142730");
    EXPECT_TRUE(decodeMsg.GetMmsVersion() == static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_3));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_MESSAGE_CLASS) == static_cast<uint8_t>(MmsMessageClass::PERSONAL));
    EXPECT_GT(encodeMsg.GetHeaderLongValue(MMS_EXPIRY), 0);
    EXPECT_TRUE(encodeMsg.GetHeaderLongValue(MMS_MESSAGE_SIZE) == 12345678);
    EXPECT_TRUE(encodeMsg.GetHeaderStringValue(MMS_CONTENT_LOCATION) == strContentLocation);
    MmsAddress fromAddr = decodeMsg.GetMmsFrom();
    EXPECT_TRUE(fromAddr.GetAddressString() == "+8613812345678/TYPE=PLMN");
    EXPECT_TRUE(fromAddr.GetAddressCharset() == MmsCharSets::UTF_8);
    EXPECT_TRUE(fromAddr.GetAddressType() == MmsAddress::ADDRESS_TYPE_PLMN);
    EXPECT_TRUE(encodeMsg.GetMmsSubject() == "Test mms");
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_DELIVERY_REPORT) == static_cast<uint8_t>(MmsBoolType::MMS_YES));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_CONTENT_CLASS) == static_cast<uint8_t>(MmsContentClass::MMS_TEXT));
}

/**
 * @tc.number   Telephony_SmsMms_EncodeMsg_0400
 * @tc.name     NotifyRespInd type MMS, encoding after decoding, the content after decoding and coding before the same
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_EncodeMsg_0400, Function | MediumTest | Level1)
{
    if (!g_mmsPath) {
        LOG("MMS PATH NULL !");
        return;
    }
    // encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_NOTIFYRESP_IND));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2920.1410"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_EXPIRED)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_REPORT_ALLOWED, static_cast<uint8_t>(MmsBoolType::MMS_YES)));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    // decode
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(std::move(result), len));
    EXPECT_TRUE(decodeMsg.GetMmsMessageType() == MMS_MSGTYPE_NOTIFYRESP_IND);
    EXPECT_TRUE(decodeMsg.GetMmsTransactionId() == "2920.1410");
    EXPECT_TRUE(decodeMsg.GetMmsVersion() == static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_STATUS) == static_cast<uint8_t>(MmsStatus::MMS_EXPIRED));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_REPORT_ALLOWED) == static_cast<uint8_t>(MmsBoolType::MMS_YES));
}

/**
 * @tc.number   Telephony_SmsMms_EncodeMsg_0500
 * @tc.name     RetrieveConf type MMS, encoding after decoding, the content after decoding and coding before the same
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_EncodeMsg_0500, Function | MediumTest | Level1)
{
    if (!g_mmsPath) {
        LOG("MMS PATH NULL !");
        return;
    }
    // encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_RETRIEVE_CONF));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("3077.142410"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_2)));
    EXPECT_TRUE(encodeMsg.SetMmsDate(MSM_DATA));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_MESSAGE_CLASS, static_cast<uint8_t>(MmsMessageClass::AUTO)));
    EXPECT_TRUE(encodeMsg.SetHeaderContentType("application/vnd.wap.multipart.related"));
    MmsAddress fromAddress;
    fromAddress.SetMmsAddressString("+8613812345678/TYPE=PLMN", MmsCharSets::UTF_8);
    EXPECT_TRUE(encodeMsg.SetMmsFrom(fromAddress));
    EXPECT_TRUE(encodeMsg.SetMmsSubject("Test mms"));
    std::string strMessageID = "0001";
    EXPECT_TRUE(encodeMsg.SetHeaderStringValue(MMS_MESSAGE_ID, strMessageID));
    MmsAddress ccAddress;
    ccAddress.SetMmsAddressString("+8613811111111/TYPE=PLMN");
    EXPECT_TRUE(encodeMsg.AddHeaderAddressValue(MMS_CC, ccAddress));
    std::vector<MmsAddress> vecAddrs;
    MmsAddress toAddrs("+8613888888888/TYPE=PLMN");
    vecAddrs.push_back(toAddrs);
    MmsAddress toAddrs2("+8613812345678/TYPE=PLMN");
    vecAddrs.push_back(toAddrs2);
    EXPECT_TRUE(encodeMsg.SetMmsTo(vecAddrs));

    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_PRIORITY, static_cast<uint8_t>(MmsPriority::MMS_HIGH)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_DELIVERY_REPORT, static_cast<uint8_t>(MmsBoolType::MMS_YES)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_READ_REPORT, static_cast<uint8_t>(MmsBoolType::MMS_YES)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_RETRIEVE_STATUS, static_cast<uint8_t>(MmsRetrieveStatus::MMS_RETRIEVE_STATUS_OK)));

    // add smil file
    const std::string filePathNameSmil = "/data/telephony/enSrc/618C0A89.smil";
    MmsAttachment smilAttachment;
    EXPECT_TRUE(smilAttachment.SetAttachmentFilePath(filePathNameSmil, true));
    EXPECT_TRUE(smilAttachment.SetFileName("618C0A89.smil"));
    EXPECT_TRUE(smilAttachment.SetContentId("<0000>"));
    EXPECT_TRUE(smilAttachment.SetContentLocation("618C0A89.smil"));
    EXPECT_TRUE(smilAttachment.SetContentType("application/smil"));
    std::string contentTransferEncoding = "base64";
    EXPECT_TRUE(smilAttachment.SetContentTransferEncoding(contentTransferEncoding));
    smilAttachment.SetCharSet(static_cast<uint32_t>(MmsCharSets::UTF_8));
    EXPECT_TRUE(encodeMsg.AddAttachment(smilAttachment));
    // add text file
    const std::string filePathNameText = "/data/telephony/enSrc/content.text";
    MmsAttachment textAttachment;
    EXPECT_TRUE(textAttachment.SetAttachmentFilePath(filePathNameText, false));
    EXPECT_TRUE(textAttachment.SetFileName("content.text"));
    EXPECT_TRUE(textAttachment.SetContentId("<content.text>"));
    EXPECT_TRUE(textAttachment.SetContentLocation("content.text"));
    EXPECT_TRUE(textAttachment.SetContentType("text/plain"));
    EXPECT_TRUE(textAttachment.SetContentTransferEncoding(contentTransferEncoding));
    textAttachment.SetCharSet(static_cast<uint32_t>(MmsCharSets::UTF_8));
    EXPECT_TRUE(encodeMsg.AddAttachment(textAttachment));

    // add image file
    const std::string filePathNameGif = "/data/telephony/enSrc/picture.gif";
    MmsAttachment imageAttachment;
    EXPECT_TRUE(imageAttachment.SetAttachmentFilePath(filePathNameGif, false));
    EXPECT_TRUE(imageAttachment.SetFileName("picture.gif"));
    EXPECT_TRUE(imageAttachment.SetContentId("<picture.gif>"));
    EXPECT_TRUE(imageAttachment.SetContentLocation("picture.gif"));
    EXPECT_TRUE(imageAttachment.SetContentType("image/gif"));
    EXPECT_TRUE(imageAttachment.SetContentTransferEncoding(contentTransferEncoding));
    imageAttachment.SetCharSet(static_cast<uint32_t>(MmsCharSets::UTF_8));
    EXPECT_TRUE(encodeMsg.AddAttachment(imageAttachment));

    // add inbuff
    MmsAttachment inBuffAttachment;
    uint32_t inBuffLen = 3;
    inBuffAttachment.SetAttachmentFilePath("", false);
    EXPECT_TRUE(inBuffAttachment.SetFileName("123.text"));
    EXPECT_TRUE(inBuffAttachment.SetContentId("<123.text>"));
    EXPECT_TRUE(inBuffAttachment.SetContentLocation("123.text"));
    EXPECT_TRUE(inBuffAttachment.SetContentType("text/plain"));
    EXPECT_TRUE(inBuffAttachment.SetContentTransferEncoding(contentTransferEncoding));
    std::unique_ptr<char[]> inBuff = std::make_unique<char[]>(inBuffLen);
    memcpy_s(inBuff.get(), inBuffLen, "123", inBuffLen);
    EXPECT_TRUE(inBuffAttachment.SetDataBuffer(std::move(inBuff), inBuffLen));
    EXPECT_TRUE(encodeMsg.AddAttachment(inBuffAttachment));
    std::string retrieveTest = "0002";
    EXPECT_TRUE(encodeMsg.SetHeaderEncodedStringValue(
        MMS_RETRIEVE_TEXT, retrieveTest, static_cast<uint32_t>(MmsCharSets::UTF_8)));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    // decode
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(std::move(result), len));
    EXPECT_TRUE(decodeMsg.GetMmsMessageType() == MMS_MSGTYPE_RETRIEVE_CONF);
    EXPECT_TRUE(decodeMsg.GetMmsTransactionId() == "3077.142410");
    EXPECT_TRUE(decodeMsg.GetMmsVersion() == static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_2));
    EXPECT_TRUE(encodeMsg.GetMmsDate() == MSM_DATA);
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_MESSAGE_CLASS) == static_cast<uint8_t>(MmsMessageClass::AUTO));
    EXPECT_TRUE(encodeMsg.GetHeaderContentType() == "application/vnd.wap.multipart.related");
    MmsAddress fromAddr = decodeMsg.GetMmsFrom();
    EXPECT_TRUE(fromAddr.GetAddressString() == "+8613812345678/TYPE=PLMN");
    EXPECT_TRUE(fromAddr.GetAddressCharset() == MmsCharSets::UTF_8);
    EXPECT_TRUE(fromAddr.GetAddressType() == MmsAddress::ADDRESS_TYPE_PLMN);
    EXPECT_TRUE(decodeMsg.GetMmsSubject() == "Test mms");
    EXPECT_TRUE(encodeMsg.GetHeaderStringValue(MMS_MESSAGE_ID) == strMessageID);
    std::vector<MmsAddress> ccAddr;
    EXPECT_TRUE(encodeMsg.GetHeaderAllAddressValue(MMS_CC, ccAddr));
    ASSERT_FALSE(ccAddr.empty());
    EXPECT_TRUE(ccAddr[0].GetAddressString() == "+8613811111111/TYPE=PLMN");
    std::vector<MmsAddress> toAddress;
    ASSERT_TRUE(decodeMsg.GetMmsTo(toAddress));
    ASSERT_FALSE(toAddress.empty());
    EXPECT_TRUE(toAddress[0].GetAddressString() == "+8613888888888/TYPE=PLMN");
    EXPECT_TRUE(toAddress[0].GetAddressCharset() == MmsCharSets::UTF_8);
    EXPECT_TRUE(toAddress[0].GetAddressType() == MmsAddress::ADDRESS_TYPE_PLMN);
    EXPECT_TRUE(toAddress[1].GetAddressString() == "+8613812345678/TYPE=PLMN");
    EXPECT_TRUE(toAddress[1].GetAddressCharset() == MmsCharSets::UTF_8);
    EXPECT_TRUE(toAddress[1].GetAddressType() == MmsAddress::ADDRESS_TYPE_PLMN);
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_PRIORITY) == static_cast<uint8_t>(MmsPriority::MMS_HIGH));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_DELIVERY_REPORT) == static_cast<uint8_t>(MmsBoolType::MMS_YES));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_READ_REPORT) == static_cast<uint8_t>(MmsBoolType::MMS_YES));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RETRIEVE_STATUS) ==
                static_cast<uint8_t>(MmsRetrieveStatus::MMS_RETRIEVE_STATUS_OK));

    std::vector<MmsAttachment> attachments;
    ASSERT_TRUE(decodeMsg.GetAllAttachment(attachments));
    EXPECT_TRUE(attachments[0].GetFileName() == "618C0A89.smil");
    EXPECT_TRUE(attachments[0].GetContentId() == "<0000>");
    EXPECT_TRUE(attachments[0].GetContentLocation() == "618C0A89.smil");
    EXPECT_TRUE(attachments[0].GetContentType() == "application/smil");
    EXPECT_TRUE(attachments[0].GetContentTransferEncoding() == contentTransferEncoding);
    EXPECT_TRUE(attachments[0].GetCharSet() == static_cast<uint32_t>(MmsCharSets::UTF_8));
    EXPECT_TRUE(attachments[1].GetFileName() == "content.text");
    EXPECT_TRUE(attachments[1].GetContentId() == "<content.text>");
    EXPECT_TRUE(attachments[1].GetContentLocation() == "content.text");
    EXPECT_TRUE(attachments[1].GetContentType() == "text/plain");
    EXPECT_TRUE(attachments[1].GetContentTransferEncoding() == contentTransferEncoding);
    EXPECT_TRUE(attachments[1].GetCharSet() == static_cast<uint32_t>(MmsCharSets::UTF_8));
    EXPECT_TRUE(attachments[2].GetFileName() == "picture.gif");
    EXPECT_TRUE(attachments[2].GetContentId() == "<picture.gif>");
    EXPECT_TRUE(attachments[2].GetContentLocation() == "picture.gif");
    EXPECT_TRUE(attachments[2].GetContentType() == "image/gif");
    EXPECT_TRUE(attachments[2].GetContentTransferEncoding() == contentTransferEncoding);
    EXPECT_TRUE(attachments[2].GetCharSet() == static_cast<uint32_t>(MmsCharSets::UTF_8));
    std::unique_ptr<char[]> buff = attachments[3].GetDataBuffer(inBuffLen);
    std::string buffData(buff.get(), inBuffLen);
    EXPECT_TRUE(buffData == "123");
    EXPECT_TRUE(attachments[3].GetFileName() == "123.text");
    EXPECT_TRUE(attachments[3].GetContentId() == "<123.text>");
    EXPECT_TRUE(attachments[3].GetContentLocation() == "123.text");
    EXPECT_TRUE(attachments[3].GetContentType() == "text/plain");
    EXPECT_TRUE(attachments[3].GetContentTransferEncoding() == contentTransferEncoding);
    EXPECT_TRUE(encodeMsg.GetHeaderStringValue(MMS_RETRIEVE_TEXT) == retrieveTest);
}

/**
 * @tc.number   Telephony_SmsMms_EncodeMsg_0600
 * @tc.name     AcknowledgeInd type MMS, encoding after decoding, the content after decoding and coding before the same
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_EncodeMsg_0600, Function | MediumTest | Level1)
{
    if (!g_mmsPath) {
        LOG("MMS PATH NULL !");
        return;
    }
    // encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_ACKNOWLEDGE_IND));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("27.14210"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_2)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_REPORT_ALLOWED, static_cast<uint8_t>(MmsBoolType::MMS_YES)));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    // decode
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(std::move(result), len));
    EXPECT_TRUE(decodeMsg.GetMmsMessageType() == MMS_MSGTYPE_ACKNOWLEDGE_IND);
    EXPECT_TRUE(decodeMsg.GetMmsTransactionId() == "27.14210");
    EXPECT_TRUE(decodeMsg.GetMmsVersion() == static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_2));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_REPORT_ALLOWED) == static_cast<uint8_t>(MmsBoolType::MMS_YES));
}

/**
 * @tc.number   Telephony_SmsMms_EncodeMsg_0700
 * @tc.name     DeliveryInd type MMS, encoding after decoding, the content after decoding and coding before the same
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_EncodeMsg_0700, Function | MediumTest | Level1)
{
    if (!g_mmsPath) {
        LOG("MMS PATH NULL !");
        return;
    }
    // encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_DELIVERY_IND));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2360.68530"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_2)));
    std::string strMessageID = "0001";
    EXPECT_TRUE(encodeMsg.SetHeaderStringValue(MMS_MESSAGE_ID, strMessageID));
    EXPECT_TRUE(encodeMsg.SetMmsDate(MSM_DATA));
    std::vector<MmsAddress> vecAddrs;
    MmsAddress toAddrs("+8613888888888/TYPE=PLMN");
    vecAddrs.push_back(toAddrs);
    EXPECT_TRUE(encodeMsg.SetMmsTo(vecAddrs));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_FORWARDED)));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    // decode
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(std::move(result), len));
    EXPECT_TRUE(decodeMsg.GetMmsMessageType() == MMS_MSGTYPE_DELIVERY_IND);
    EXPECT_TRUE(decodeMsg.GetMmsTransactionId() == "2360.68530");
    EXPECT_TRUE(decodeMsg.GetMmsVersion() == static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_2));
    EXPECT_TRUE(encodeMsg.GetHeaderStringValue(MMS_MESSAGE_ID) == strMessageID);
    EXPECT_TRUE(encodeMsg.GetMmsDate() == MSM_DATA);
    std::vector<MmsAddress> toAddress;
    ASSERT_TRUE(decodeMsg.GetMmsTo(toAddress));
    ASSERT_FALSE(toAddress.empty());
    EXPECT_TRUE(toAddress[0].GetAddressString() == "+8613888888888/TYPE=PLMN");
    EXPECT_TRUE(toAddress[0].GetAddressCharset() == MmsCharSets::UTF_8);
    EXPECT_TRUE(toAddress[0].GetAddressType() == MmsAddress::ADDRESS_TYPE_PLMN);
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_STATUS) == static_cast<uint8_t>(MmsStatus::MMS_FORWARDED));
}

/**
 * @tc.number   Telephony_SmsMms_EncodeMsg_0800
 * @tc.name     ReadRecInd type MMS, encoding after decoding, the content after decoding and coding before the same
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_EncodeMsg_0800, Function | MediumTest | Level1)
{
    if (!g_mmsPath) {
        LOG("MMS PATH NULL !");
        return;
    }
    // encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_READ_REC_IND));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0)));
    std::string strMessageID = "0001";
    EXPECT_TRUE(encodeMsg.SetHeaderStringValue(MMS_MESSAGE_ID, strMessageID));
    std::vector<MmsAddress> vecAddrs;
    MmsAddress toAddrs("+8613888888888/TYPE=PLMN");
    vecAddrs.push_back(toAddrs);
    EXPECT_TRUE(encodeMsg.SetMmsTo(vecAddrs));
    MmsAddress fromAddress;
    fromAddress.SetMmsAddressString("+8613812345678/TYPE=PLMN");
    EXPECT_TRUE(encodeMsg.SetMmsFrom(fromAddress));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_READ_STATUS, static_cast<uint8_t>(MmsReadStatus::MMS_READ)));
    EXPECT_TRUE(encodeMsg.SetMmsDate(MSM_DATA));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    // decode
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(std::move(result), len));
    EXPECT_TRUE(decodeMsg.GetMmsMessageType() == MMS_MSGTYPE_READ_REC_IND);
    EXPECT_TRUE(decodeMsg.GetMmsVersion() == static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0));
    EXPECT_TRUE(encodeMsg.GetHeaderStringValue(MMS_MESSAGE_ID) == strMessageID);
    std::vector<MmsAddress> toAddress;
    ASSERT_TRUE(decodeMsg.GetMmsTo(toAddress));
    ASSERT_FALSE(toAddress.empty());
    EXPECT_TRUE(toAddress[0].GetAddressString() == "+8613888888888/TYPE=PLMN");
    EXPECT_TRUE(toAddress[0].GetAddressCharset() == MmsCharSets::UTF_8);
    EXPECT_TRUE(toAddress[0].GetAddressType() == MmsAddress::ADDRESS_TYPE_PLMN);
    MmsAddress fromAddr = decodeMsg.GetMmsFrom();
    EXPECT_TRUE(fromAddr.GetAddressString() == "+8613812345678/TYPE=PLMN");
    EXPECT_TRUE(fromAddr.GetAddressCharset() == MmsCharSets::UTF_8);
    EXPECT_TRUE(fromAddr.GetAddressType() == MmsAddress::ADDRESS_TYPE_PLMN);
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_READ_STATUS) == static_cast<uint8_t>(MmsReadStatus::MMS_READ));
    EXPECT_TRUE(encodeMsg.GetMmsDate() == MSM_DATA);
}

/**
 * @tc.number   Telephony_SmsMms_EncodeMsg_0900
 * @tc.name     ReadOrigInd type MMS, encoding after decoding, the content after decoding and coding before the same
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_EncodeMsg_0900, Function | MediumTest | Level1)
{
    if (!g_mmsPath) {
        LOG("MMS PATH NULL !");
        return;
    }
    // encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_READ_ORIG_IND));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_1)));
    std::string strMessageID = "0001";
    EXPECT_TRUE(encodeMsg.SetHeaderStringValue(MMS_MESSAGE_ID, strMessageID));
    std::vector<MmsAddress> vecAddrs;
    MmsAddress toAddrs("+8613888888888/TYPE=PLMN");
    vecAddrs.push_back(toAddrs);
    EXPECT_TRUE(encodeMsg.SetMmsTo(vecAddrs));
    MmsAddress fromAddress;
    fromAddress.SetMmsAddressString("+8613812345678/TYPE=PLMN", MmsCharSets::UTF_8);
    EXPECT_TRUE(encodeMsg.SetMmsFrom(fromAddress));
    EXPECT_TRUE(encodeMsg.SetMmsDate(MSM_DATA));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_READ_STATUS, static_cast<uint8_t>(MmsReadStatus::MMS_DELETED_WITHOUT_BEING_READ)));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    // decode
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(std::move(result), len));
    EXPECT_TRUE(decodeMsg.GetMmsMessageType() == MMS_MSGTYPE_READ_ORIG_IND);
    EXPECT_TRUE(decodeMsg.GetMmsVersion() == static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_1));
    EXPECT_TRUE(encodeMsg.GetHeaderStringValue(MMS_MESSAGE_ID) == strMessageID);
    std::vector<MmsAddress> toAddress;
    ASSERT_TRUE(decodeMsg.GetMmsTo(toAddress));
    ASSERT_FALSE(toAddress.empty());
    EXPECT_TRUE(toAddress[0].GetAddressString() == "+8613888888888/TYPE=PLMN");
    EXPECT_TRUE(toAddress[0].GetAddressCharset() == MmsCharSets::UTF_8);
    EXPECT_TRUE(toAddress[0].GetAddressType() == MmsAddress::ADDRESS_TYPE_PLMN);
    MmsAddress fromAddr = decodeMsg.GetMmsFrom();
    EXPECT_TRUE(fromAddr.GetAddressString() == "+8613812345678/TYPE=PLMN");
    EXPECT_TRUE(fromAddr.GetAddressCharset() == MmsCharSets::UTF_8);
    EXPECT_TRUE(fromAddr.GetAddressType() == MmsAddress::ADDRESS_TYPE_PLMN);
    EXPECT_TRUE(encodeMsg.GetMmsDate() == MSM_DATA);
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_READ_STATUS) ==
                static_cast<uint8_t>(MmsReadStatus::MMS_DELETED_WITHOUT_BEING_READ));
}

/**
 * @tc.number   Telephony_SmsMms_EncodeMsg_1000
 * @tc.name     For MMS of SendReq type, set MmsMessageClass as ADVERTISEMENT,
 *              and the decoded content is the same as that before encoding
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_EncodeMsg_1000, Function | MediumTest | Level1)
{
    if (!g_mmsPath) {
        LOG("MMS PATH NULL !");
        return;
    }
    // encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_SEND_REQ));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("1256.12565821536"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_2)));
    MmsAddress fromAddress;
    fromAddress.SetMmsAddressString("+8613812345678/TYPE=PLMN", MmsCharSets::UTF_8);
    EXPECT_TRUE(encodeMsg.SetMmsFrom(fromAddress));
    EXPECT_TRUE(encodeMsg.SetHeaderContentType("application/vnd.wap.multipart.related"));
    std::vector<MmsAddress> vecAddrs;
    MmsAddress toAddrs("+8613888888888/TYPE=PLMN");
    vecAddrs.push_back(toAddrs);
    EXPECT_TRUE(encodeMsg.SetMmsTo(vecAddrs));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_MESSAGE_CLASS, static_cast<uint8_t>(MmsMessageClass::ADVERTISEMENT)));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    // decode
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(std::move(result), len));
    EXPECT_TRUE(decodeMsg.GetMmsMessageType() == MMS_MSGTYPE_SEND_REQ);
    EXPECT_TRUE(decodeMsg.GetMmsTransactionId() == "1256.12565821536");
    EXPECT_TRUE(decodeMsg.GetMmsVersion() == static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_2));
    MmsAddress fromAddr = decodeMsg.GetMmsFrom();
    EXPECT_TRUE(fromAddr.GetAddressString() == "+8613812345678/TYPE=PLMN");
    EXPECT_TRUE(fromAddr.GetAddressCharset() == MmsCharSets::UTF_8);
    EXPECT_TRUE(fromAddr.GetAddressType() == MmsAddress::ADDRESS_TYPE_PLMN);
    EXPECT_TRUE(decodeMsg.GetHeaderContentType() == "application/vnd.wap.multipart.related");
    std::vector<MmsAddress> toAddress;
    ASSERT_TRUE(decodeMsg.GetMmsTo(toAddress));
    ASSERT_FALSE(toAddress.empty());
    EXPECT_TRUE(toAddress[0].GetAddressString() == "+8613888888888/TYPE=PLMN");
    EXPECT_TRUE(toAddress[0].GetAddressCharset() == MmsCharSets::UTF_8);
    EXPECT_TRUE(toAddress[0].GetAddressType() == MmsAddress::ADDRESS_TYPE_PLMN);
    EXPECT_TRUE(
        decodeMsg.GetHeaderOctetValue(MMS_MESSAGE_CLASS) == static_cast<uint8_t>(MmsMessageClass::ADVERTISEMENT));
}

/**
 * @tc.number   Telephony_SmsMms_EncodeMsg_1100
 * @tc.name     For MMS of SendReq type, set MmsPriority as MmsBoolType::MMS_NORMAL,
 *              and the decoded content is the same as that before encoding
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_EncodeMsg_1100, Function | MediumTest | Level1)
{
    if (!g_mmsPath) {
        LOG("MMS PATH NULL !");
        return;
    }
    // encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_SEND_REQ));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("1256.12565821536"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_2)));
    MmsAddress fromAddress;
    fromAddress.SetMmsAddressString("+8613812345678/TYPE=PLMN", MmsCharSets::UTF_8);
    EXPECT_TRUE(encodeMsg.SetMmsFrom(fromAddress));
    EXPECT_TRUE(encodeMsg.SetHeaderContentType("application/vnd.wap.multipart.related"));
    std::vector<MmsAddress> vecAddrs;
    MmsAddress toAddrs("+8613888888888/TYPE=PLMN");
    vecAddrs.push_back(toAddrs);
    EXPECT_TRUE(encodeMsg.SetMmsTo(vecAddrs));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_PRIORITY, static_cast<uint8_t>(MmsPriority::MMS_NORMAL)));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    // decode
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(std::move(result), len));
    EXPECT_TRUE(decodeMsg.GetMmsMessageType() == MMS_MSGTYPE_SEND_REQ);
    EXPECT_TRUE(decodeMsg.GetMmsTransactionId() == "1256.12565821536");
    EXPECT_TRUE(decodeMsg.GetMmsVersion() == static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_2));
    MmsAddress fromAddr = decodeMsg.GetMmsFrom();
    EXPECT_TRUE(fromAddr.GetAddressString() == "+8613812345678/TYPE=PLMN");
    EXPECT_TRUE(fromAddr.GetAddressCharset() == MmsCharSets::UTF_8);
    EXPECT_TRUE(fromAddr.GetAddressType() == MmsAddress::ADDRESS_TYPE_PLMN);
    EXPECT_TRUE(decodeMsg.GetHeaderContentType() == "application/vnd.wap.multipart.related");
    std::vector<MmsAddress> toAddress;
    ASSERT_TRUE(decodeMsg.GetMmsTo(toAddress));
    ASSERT_FALSE(toAddress.empty());
    EXPECT_TRUE(toAddress[0].GetAddressString() == "+8613888888888/TYPE=PLMN");
    EXPECT_TRUE(toAddress[0].GetAddressCharset() == MmsCharSets::UTF_8);
    EXPECT_TRUE(toAddress[0].GetAddressType() == MmsAddress::ADDRESS_TYPE_PLMN);
    EXPECT_TRUE(decodeMsg.GetHeaderOctetValue(MMS_PRIORITY) == static_cast<uint8_t>(MmsPriority::MMS_NORMAL));
}

/**
 * @tc.number   Telephony_SmsMms_EncodeMsg_1200
 * @tc.name     For MMS of SendReq type, set MMS_SENDER_VISIBILITY as MMS_HIDE,
 *              and the decoded content is the same as that before encoding
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_EncodeMsg_1200, Function | MediumTest | Level1)
{
    if (!g_mmsPath) {
        LOG("MMS PATH NULL !");
        return;
    }
    // encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_SEND_REQ));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("1256.12565821536"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_2)));
    MmsAddress fromAddress;
    fromAddress.SetMmsAddressString("+8613812345678/TYPE=PLMN", MmsCharSets::UTF_8);
    EXPECT_TRUE(encodeMsg.SetMmsFrom(fromAddress));
    EXPECT_TRUE(encodeMsg.SetHeaderContentType("application/vnd.wap.multipart.related"));
    std::vector<MmsAddress> vecAddrs;
    MmsAddress toAddrs("+8613888888888/TYPE=PLMN");
    vecAddrs.push_back(toAddrs);
    EXPECT_TRUE(encodeMsg.SetMmsTo(vecAddrs));
    EXPECT_TRUE(
        encodeMsg.SetHeaderOctetValue(MMS_SENDER_VISIBILITY, static_cast<uint8_t>(MmsSenderVisibility::MMS_HIDE)));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    // decode
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(std::move(result), len));
    EXPECT_TRUE(decodeMsg.GetMmsMessageType() == MMS_MSGTYPE_SEND_REQ);
    EXPECT_TRUE(decodeMsg.GetMmsTransactionId() == "1256.12565821536");
    EXPECT_TRUE(decodeMsg.GetMmsVersion() == static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_2));
    MmsAddress fromAddr = decodeMsg.GetMmsFrom();
    EXPECT_TRUE(fromAddr.GetAddressString() == "+8613812345678/TYPE=PLMN");
    EXPECT_TRUE(fromAddr.GetAddressCharset() == MmsCharSets::UTF_8);
    EXPECT_TRUE(fromAddr.GetAddressType() == MmsAddress::ADDRESS_TYPE_PLMN);
    EXPECT_TRUE(decodeMsg.GetHeaderContentType() == "application/vnd.wap.multipart.related");
    std::vector<MmsAddress> toAddress;
    ASSERT_TRUE(decodeMsg.GetMmsTo(toAddress));
    ASSERT_FALSE(toAddress.empty());
    EXPECT_TRUE(toAddress[0].GetAddressString() == "+8613888888888/TYPE=PLMN");
    EXPECT_TRUE(toAddress[0].GetAddressCharset() == MmsCharSets::UTF_8);
    EXPECT_TRUE(toAddress[0].GetAddressType() == MmsAddress::ADDRESS_TYPE_PLMN);
    EXPECT_TRUE(
        decodeMsg.GetHeaderOctetValue(MMS_SENDER_VISIBILITY) == static_cast<uint8_t>(MmsSenderVisibility::MMS_HIDE));
}

/**
 * @tc.number   Telephony_SmsMms_EncodeMsg_1300
 * @tc.name     For MMS of NotifyRespInd type, set MMS_STATUS as MMS_RETRIEVED,
 *              and the decoded content is the same as that before encoding
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_EncodeMsg_1300, Function | MediumTest | Level1)
{
    if (!g_mmsPath) {
        LOG("MMS PATH NULL !");
        return;
    }
    // encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_NOTIFYRESP_IND));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2920.1410"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_RETRIEVED)));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    // decode
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(std::move(result), len));
    EXPECT_TRUE(decodeMsg.GetMmsMessageType() == MMS_MSGTYPE_NOTIFYRESP_IND);
    EXPECT_TRUE(decodeMsg.GetMmsTransactionId() == "2920.1410");
    EXPECT_TRUE(decodeMsg.GetMmsVersion() == static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_STATUS) == static_cast<uint8_t>(MmsStatus::MMS_RETRIEVED));
}

/**
 * @tc.number   Telephony_SmsMms_EncodeMsg_1400
 * @tc.name     For MMS of NotifyRespInd type, set MMS_STATUS as MMS_REJECTED,
 *              and the decoded content is the same as that before encoding
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_EncodeMsg_1400, Function | MediumTest | Level1)
{
    if (!g_mmsPath) {
        LOG("MMS PATH NULL !");
        return;
    }
    // encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_NOTIFYRESP_IND));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2920.1410"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_REJECTED)));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    // decode
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(std::move(result), len));
    EXPECT_TRUE(decodeMsg.GetMmsMessageType() == MMS_MSGTYPE_NOTIFYRESP_IND);
    EXPECT_TRUE(decodeMsg.GetMmsTransactionId() == "2920.1410");
    EXPECT_TRUE(decodeMsg.GetMmsVersion() == static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_STATUS) == static_cast<uint8_t>(MmsStatus::MMS_REJECTED));
}

/**
 * @tc.number   Telephony_SmsMms_EncodeMsg_1500
 * @tc.name     For MMS of NotifyRespInd type, set MMS_STATUS as MMS_DEFERRED,
 *              and the decoded content is the same as that before encoding
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_EncodeMsg_1500, Function | MediumTest | Level1)
{
    if (!g_mmsPath) {
        LOG("MMS PATH NULL !");
        return;
    }
    // encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_NOTIFYRESP_IND));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2920.1410"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_DEFERRED)));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    // decode
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(std::move(result), len));
    EXPECT_TRUE(decodeMsg.GetMmsMessageType() == MMS_MSGTYPE_NOTIFYRESP_IND);
    EXPECT_TRUE(decodeMsg.GetMmsTransactionId() == "2920.1410");
    EXPECT_TRUE(decodeMsg.GetMmsVersion() == static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_STATUS) == static_cast<uint8_t>(MmsStatus::MMS_DEFERRED));
}

/**
 * @tc.number   Telephony_SmsMms_EncodeMsg_1600
 * @tc.name     For MMS of NotifyRespInd type, set MMS_STATUS as MMS_MMS_UNRECOGNISED,
 *              and the decoded content is the same as that before encoding
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_EncodeMsg_1600, Function | MediumTest | Level1)
{
    if (!g_mmsPath) {
        LOG("MMS PATH NULL !");
        return;
    }
    // encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_NOTIFYRESP_IND));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2920.1410"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_MMS_UNRECOGNISED)));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    // decode
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(std::move(result), len));
    EXPECT_TRUE(decodeMsg.GetMmsMessageType() == MMS_MSGTYPE_NOTIFYRESP_IND);
    EXPECT_TRUE(decodeMsg.GetMmsTransactionId() == "2920.1410");
    EXPECT_TRUE(decodeMsg.GetMmsVersion() == static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_STATUS) == static_cast<uint8_t>(MmsStatus::MMS_MMS_UNRECOGNISED));
}

/**
 * @tc.number   Telephony_SmsMms_EncodeMsg_1700
 * @tc.name     For MMS of NotifyRespInd type, set MMS_STATUS as MMS_INDETERMINATE,
 *              and the decoded content is the same as that before encoding
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_EncodeMsg_1700, Function | MediumTest | Level1)
{
    if (!g_mmsPath) {
        LOG("MMS PATH NULL !");
        return;
    }
    // encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_NOTIFYRESP_IND));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2920.1410"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_INDETERMINATE)));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    // decode
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(std::move(result), len));
    EXPECT_TRUE(decodeMsg.GetMmsMessageType() == MMS_MSGTYPE_NOTIFYRESP_IND);
    EXPECT_TRUE(decodeMsg.GetMmsTransactionId() == "2920.1410");
    EXPECT_TRUE(decodeMsg.GetMmsVersion() == static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_STATUS) == static_cast<uint8_t>(MmsStatus::MMS_INDETERMINATE));
}

/**
 * @tc.number   Telephony_SmsMms_EncodeMsg_1800
 * @tc.name     For MMS of NotifyRespInd type, set MMS_STATUS as MMS_UNREACHABLE,
 *              and the decoded content is the same as that before encoding
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_EncodeMsg_1800, Function | MediumTest | Level1)
{
    if (!g_mmsPath) {
        LOG("MMS PATH NULL !");
        return;
    }
    // encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_NOTIFYRESP_IND));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2920.1410"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_UNREACHABLE)));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    // decode
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(std::move(result), len));
    EXPECT_TRUE(decodeMsg.GetMmsMessageType() == MMS_MSGTYPE_NOTIFYRESP_IND);
    EXPECT_TRUE(decodeMsg.GetMmsTransactionId() == "2920.1410");
    EXPECT_TRUE(decodeMsg.GetMmsVersion() == static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_STATUS) == static_cast<uint8_t>(MmsStatus::MMS_UNREACHABLE));
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsVersion_0100
 * @tc.name     The input value is smaller than the minimum (MMS_VERSION_1_0), Setup failed
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsVersion_0100, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0) - 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsVersion_0200
 * @tc.name     The input parameter value is greater than the maximum(MMS_VERSION_1_3) value, Setup failed
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsVersion_0200, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_3) + 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsMessageType_0100
 * @tc.name     The input value is smaller than the minimum (MMS_MSGTYPE_SEND_REQ), Setup failed
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsMessageType_0100, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_SEND_REQ - 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsMessageType_0200
 * @tc.name     The input parameter value is greater than the maximum(MMS_MSGTYPE_CANCEL_CONF) value, Setup failed
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsMessageType_0200, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_CANCEL_CONF + 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsTransactionId_0100
 * @tc.name     The input parameter value is null, Setup failed
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsTransactionId_0100, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(encodeMsg.SetMmsTransactionId(""));
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsSubject_0100
 * @tc.name     The input parameter value is null, Setup failed
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsSubject_0100, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(encodeMsg.SetMmsSubject(""));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_0100
 * @tc.name     FieldId input parameter is incorrect, setting failed
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_0100, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(encodeMsg.SetHeaderOctetValue(MMS_CANCEL_STATUS + 1, static_cast<uint8_t>(MmsStatus::MMS_EXPIRED)));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_0200
 * @tc.name     If fieldId is set to MMS_DELIVERY_REPORT,
 *              The input value is smaller than the minimum (MMS_YES), Setup failed
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_0200, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(encodeMsg.SetHeaderOctetValue(MMS_DELIVERY_REPORT, static_cast<uint8_t>(MmsBoolType::MMS_YES) - 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_0300
 * @tc.name     If fieldId is set to MMS_DELIVERY_REPORT,
 *              The input parameter value is greater than the maximum(MMS_NO) value, Setup failed.
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_0300, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(encodeMsg.SetHeaderOctetValue(MMS_DELIVERY_REPORT, static_cast<uint8_t>(MmsBoolType::MMS_NO) + 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_0400
 * @tc.name     If fieldId is set to MMS_MESSAGE_CLASS,
 *              The input value is smaller than the minimum (PERSONAL), Setup failed
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_0400, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(encodeMsg.SetHeaderOctetValue(MMS_MESSAGE_CLASS, static_cast<uint8_t>(MmsMessageClass::PERSONAL) - 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_0500
 * @tc.name     If fieldId is set to MMS_MESSAGE_CLASS,
 *              The input parameter value is greater than the maximum(AUTO) value, Setup failed.
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_0500, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(encodeMsg.SetHeaderOctetValue(MMS_MESSAGE_CLASS, static_cast<uint8_t>(MmsMessageClass::AUTO) + 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_0600
 * @tc.name     If fieldId is set to MMS_PRIORITY,
 *              The input value is smaller than the minimum (MMS_LOW), Setup failed
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_0600, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(encodeMsg.SetHeaderOctetValue(MMS_PRIORITY, static_cast<uint8_t>(MmsPriority::MMS_LOW) - 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_0700
 * @tc.name     If fieldId is set to MMS_PRIORITY,
 *              The input parameter value is greater than the maximum(MMS_HIGH) value, Setup failed.
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_0700, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(encodeMsg.SetHeaderOctetValue(MMS_PRIORITY, static_cast<uint8_t>(MmsPriority::MMS_HIGH) + 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_0800
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              The input value is smaller than the minimum (MMS_OK), Setup failed
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_0800, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(
        encodeMsg.SetHeaderOctetValue(MMS_RESPONSE_STATUS, static_cast<uint8_t>(MmsResponseStatus::MMS_OK) - 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_0900
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              The input parameter value is greater than the maximum(MMS_ERROR_PERMANENT_LACK_OF_PREPAID) value,
 *              Setup failed.
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_0900, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(encodeMsg.SetHeaderOctetValue(
        MMS_RESPONSE_STATUS, static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_PERMANENT_LACK_OF_PREPAID) + 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_1000
 * @tc.name     If fieldId is set to MMS_SENDER_VISIBILITY,
 *              The input value is smaller than the minimum (MMS_HIDE), Setup failed
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_1000, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(
        encodeMsg.SetHeaderOctetValue(MMS_SENDER_VISIBILITY, static_cast<uint8_t>(MmsSenderVisibility::MMS_HIDE) - 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_1100
 * @tc.name     If fieldId is set to MMS_SENDER_VISIBILITY,
 *              The input parameter value is greater than the maximum(MMS_SHOW) value, Setup failed.
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_1100, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(
        encodeMsg.SetHeaderOctetValue(MMS_SENDER_VISIBILITY, static_cast<uint8_t>(MmsSenderVisibility::MMS_SHOW) + 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_1200
 * @tc.name     If fieldId is set to MMS_STATUS,
 *              The input value is smaller than the minimum (MMS_EXPIRED), Setup failed
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_1200, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_EXPIRED) - 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_1300
 * @tc.name     If fieldId is set to MMS_STATUS,
 *              The input parameter value is greater than the maximum(MMS_UNREACHABLE) value, Setup failed.
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_1300, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_UNREACHABLE) + 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_1400
 * @tc.name     If fieldId is set to MMS_RETRIEVE_STATUS,
 *              The input value is smaller than the minimum (MMS_RETRIEVE_STATUS_OK), Setup failed
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_1400, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(encodeMsg.SetHeaderOctetValue(
        MMS_RETRIEVE_STATUS, static_cast<uint8_t>(MmsRetrieveStatus::MMS_RETRIEVE_STATUS_OK) - 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_1500
 * @tc.name     If fieldId is set to MMS_RETRIEVE_STATUS, The input parameter value is greater than the
 *              maximum(MMS_RETRIEVE_STATUS_ERROR_PERMANENT_CONTENT_UNSUPPORTED) value, Setup failed.
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_1500, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(encodeMsg.SetHeaderOctetValue(MMS_RETRIEVE_STATUS,
        static_cast<uint8_t>(MmsRetrieveStatus::MMS_RETRIEVE_STATUS_ERROR_PERMANENT_CONTENT_UNSUPPORTED) + 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_1600
 * @tc.name     If fieldId is set to MMS_READ_STATUS,
 *              The input value is smaller than the minimum (MMS_READ), Setup failed
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_1600, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(encodeMsg.SetHeaderOctetValue(MMS_READ_STATUS, static_cast<uint8_t>(MmsReadStatus::MMS_READ) - 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_1700
 * @tc.name     If fieldId is set to MMS_READ_STATUS, The input parameter value is greater than the
 *              maximum(MMS_DELETED_WITHOUT_BEING_READ) value, Setup failed.
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_1700, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(encodeMsg.SetHeaderOctetValue(
        MMS_READ_STATUS, static_cast<uint8_t>(MmsReadStatus::MMS_DELETED_WITHOUT_BEING_READ) + 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_1800
 * @tc.name     If fieldId is set to MMS_CONTENT_CLASS,
 *              The input value is smaller than the minimum (MMS_TEXT), Setup failed
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_1800, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(encodeMsg.SetHeaderOctetValue(MMS_CONTENT_CLASS, static_cast<uint8_t>(MmsContentClass::MMS_TEXT) - 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_1900
 * @tc.name     If fieldId is set to MMS_CONTENT_CLASS, Value is the normal value
 * MMS_STORE_STATUS_ERROR_TRANSIENT_FAILURE. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_1900, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(
        encodeMsg.SetHeaderOctetValue(MMS_CONTENT_CLASS, static_cast<uint8_t>(MmsContentClass::MMS_CONTENT_RICH) + 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_2200
 * @tc.name     If fieldId is set to MMS_STORE_STATUS,
 *              Value is the normal value MMS_STORE_STATUS_ERROR_TRANSIENT_FAILURE. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_2200, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_STORE_STATUS, static_cast<uint8_t>(MmsStoreStatus::MMS_STORE_STATUS_ERROR_TRANSIENT_FAILURE)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_STORE_STATUS) ==
                static_cast<uint8_t>(MmsStoreStatus::MMS_STORE_STATUS_ERROR_TRANSIENT_FAILURE));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_2300
 * @tc.name     If fieldId is set to MMS_STORE_STATUS,
 *              Value is the normal value MMS_STORE_STATUS_ERROR_TRANSIENT_NETWORK_PROBLEM. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_2300, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_STORE_STATUS, static_cast<uint8_t>(MmsStoreStatus::MMS_STORE_STATUS_ERROR_TRANSIENT_NETWORK_PROBLEM)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_STORE_STATUS) ==
                static_cast<uint8_t>(MmsStoreStatus::MMS_STORE_STATUS_ERROR_TRANSIENT_NETWORK_PROBLEM));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_2400
 * @tc.name     If fieldId is set to MMS_STORE_STATUS,
 *              Value is the normal value MMS_STORE_STATUS_ERROR_PERMANENT_FAILURE. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_2400, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_STORE_STATUS, static_cast<uint8_t>(MmsStoreStatus::MMS_STORE_STATUS_ERROR_PERMANENT_FAILURE)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_STORE_STATUS) ==
                static_cast<uint8_t>(MmsStoreStatus::MMS_STORE_STATUS_ERROR_PERMANENT_FAILURE));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_2500
 * @tc.name     If fieldId is set to MMS_STORE_STATUS,
 *              Value is the normal value MMS_STORE_STATUS_ERROR_PERMANENT_SERVICE_DENIED. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_2500, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_STORE_STATUS, static_cast<uint8_t>(MmsStoreStatus::MMS_STORE_STATUS_ERROR_PERMANENT_SERVICE_DENIED)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_STORE_STATUS) ==
                static_cast<uint8_t>(MmsStoreStatus::MMS_STORE_STATUS_ERROR_PERMANENT_SERVICE_DENIED));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_2600
 * @tc.name     If fieldId is set to MMS_STORE_STATUS,
 *              Value is the normal value MMS_STORE_STATUS_ERROR_PERMANENT_MESSAGE_FORMAT_CORRUPT. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_2600, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_STORE_STATUS,
        static_cast<uint8_t>(MmsStoreStatus::MMS_STORE_STATUS_ERROR_PERMANENT_MESSAGE_FORMAT_CORRUPT)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_STORE_STATUS) ==
                static_cast<uint8_t>(MmsStoreStatus::MMS_STORE_STATUS_ERROR_PERMANENT_MESSAGE_FORMAT_CORRUPT));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_2700
 * @tc.name     If fieldId is set to MMS_STORE_STATUS,
 *              Value is the normal value MMS_STORE_STATUS_ERROR_PERMANENT_MESSAGE_NOT_FOUND. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_2700, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_STORE_STATUS, static_cast<uint8_t>(MmsStoreStatus::MMS_STORE_STATUS_ERROR_PERMANENT_MESSAGE_NOT_FOUND)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_STORE_STATUS) ==
                static_cast<uint8_t>(MmsStoreStatus::MMS_STORE_STATUS_ERROR_PERMANENT_MESSAGE_NOT_FOUND));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_2800
 * @tc.name     If fieldId is set to MMS_STORE_STATUS,
 *              Value is the normal value MMS_STORE_STATUS_ERROR_PERMANENT_MMBOX_FULL. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_2800, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_STORE_STATUS, static_cast<uint8_t>(MmsStoreStatus::MMS_STORE_STATUS_ERROR_PERMANENT_MMBOX_FULL)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_STORE_STATUS) ==
                static_cast<uint8_t>(MmsStoreStatus::MMS_STORE_STATUS_ERROR_PERMANENT_MMBOX_FULL));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_2900
 * @tc.name     If fieldId is set to MMS_STORE_STATUS,
 *              Set the value of Value to be less than the minimum. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_2900, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(encodeMsg.SetHeaderOctetValue(
        MMS_STORE_STATUS, static_cast<uint8_t>(MmsStoreStatus::MMS_STORE_STATUS_SUCCESS) - 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_3000
 * @tc.name     If fieldId is set to MMS_STORE_STATUS,
 *              Set the value of Value to be greater than the maximum value. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_3000, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(encodeMsg.SetHeaderOctetValue(
        MMS_STORE_STATUS, static_cast<uint8_t>(MmsStoreStatus::MMS_STORE_STATUS_ERROR_PERMANENT_MMBOX_FULL) + 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_3100
 * @tc.name     If fieldId is set to MMS_RETRIEVE_STATUS,
 *              Value is the normal value MMS_RETRIEVE_STATUS_ERROR_TRANSIENT_FAILURE. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_3100, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_RETRIEVE_STATUS, static_cast<uint8_t>(MmsRetrieveStatus::MMS_RETRIEVE_STATUS_ERROR_TRANSIENT_FAILURE)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RETRIEVE_STATUS) ==
                static_cast<uint8_t>(MmsRetrieveStatus::MMS_RETRIEVE_STATUS_ERROR_TRANSIENT_FAILURE));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_3200
 * @tc.name     If fieldId is set to MMS_RETRIEVE_STATUS,
 *              Value is the normal value MMS_RETRIEVE_STATUS_ERROR_TRANSIENT_MESSAGE_NOT_FOUND. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_3200, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_RETRIEVE_STATUS,
        static_cast<uint8_t>(MmsRetrieveStatus::MMS_RETRIEVE_STATUS_ERROR_TRANSIENT_MESSAGE_NOT_FOUND)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RETRIEVE_STATUS) ==
                static_cast<uint8_t>(MmsRetrieveStatus::MMS_RETRIEVE_STATUS_ERROR_TRANSIENT_MESSAGE_NOT_FOUND));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_3300
 * @tc.name     If fieldId is set to MMS_RETRIEVE_STATUS,
 *              Value is the normal value MMS_RETRIEVE_STATUS_ERROR_TRANSIENT_NETWORK_PROBLEM. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_3300, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_RETRIEVE_STATUS,
        static_cast<uint8_t>(MmsRetrieveStatus::MMS_RETRIEVE_STATUS_ERROR_TRANSIENT_NETWORK_PROBLEM)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RETRIEVE_STATUS) ==
                static_cast<uint8_t>(MmsRetrieveStatus::MMS_RETRIEVE_STATUS_ERROR_TRANSIENT_NETWORK_PROBLEM));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_3400
 * @tc.name     If fieldId is set to MMS_RETRIEVE_STATUS,
 *              Value is the normal value MMS_RETRIEVE_STATUS_ERROR_PERMANENT_FAILURE. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_3400, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_RETRIEVE_STATUS, static_cast<uint8_t>(MmsRetrieveStatus::MMS_RETRIEVE_STATUS_ERROR_PERMANENT_FAILURE)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RETRIEVE_STATUS) ==
                static_cast<uint8_t>(MmsRetrieveStatus::MMS_RETRIEVE_STATUS_ERROR_PERMANENT_FAILURE));
}
/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_3500
 * @tc.name     If fieldId is set to MMS_RETRIEVE_STATUS,
 *              Value is the normal value MMS_RETRIEVE_STATUS_ERROR_PERMANENT_SERVICE_DENIED. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_3500, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_RETRIEVE_STATUS,
        static_cast<uint8_t>(MmsRetrieveStatus::MMS_RETRIEVE_STATUS_ERROR_PERMANENT_SERVICE_DENIED)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RETRIEVE_STATUS) ==
                static_cast<uint8_t>(MmsRetrieveStatus::MMS_RETRIEVE_STATUS_ERROR_PERMANENT_SERVICE_DENIED));
}
/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_3600
 * @tc.name     If fieldId is set to MMS_RETRIEVE_STATUS,
 *              Value is the normal value MMS_RETRIEVE_STATUS_ERROR_PERMANENT_MESSAGE_NOT_FOUND. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_3600, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_RETRIEVE_STATUS,
        static_cast<uint8_t>(MmsRetrieveStatus::MMS_RETRIEVE_STATUS_ERROR_PERMANENT_MESSAGE_NOT_FOUND)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RETRIEVE_STATUS) ==
                static_cast<uint8_t>(MmsRetrieveStatus::MMS_RETRIEVE_STATUS_ERROR_PERMANENT_MESSAGE_NOT_FOUND));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_3700
 * @tc.name     If fieldId is set to MMS_RETRIEVE_STATUS,
 *              Value is the normal value MMS_RETRIEVE_STATUS_ERROR_PERMANENT_CONTENT_UNSUPPORTED. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_3700, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_RETRIEVE_STATUS,
        static_cast<uint8_t>(MmsRetrieveStatus::MMS_RETRIEVE_STATUS_ERROR_PERMANENT_CONTENT_UNSUPPORTED)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RETRIEVE_STATUS) ==
                static_cast<uint8_t>(MmsRetrieveStatus::MMS_RETRIEVE_STATUS_ERROR_PERMANENT_CONTENT_UNSUPPORTED));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_3800
 * @tc.name     If fieldId is set to MMS_RETRIEVE_STATUS,
 *              Set the value of Value to be less than the minimum. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_3800, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(encodeMsg.SetHeaderOctetValue(
        MMS_RETRIEVE_STATUS, static_cast<uint8_t>(MmsRetrieveStatus::MMS_RETRIEVE_STATUS_OK) - 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_3900
 * @tc.name     If fieldId is set to MMS_RETRIEVE_STATUS,
 *              Set the value of Value to be greater than the maximum value. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_3900, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(encodeMsg.SetHeaderOctetValue(MMS_RETRIEVE_STATUS,
        static_cast<uint8_t>(MmsRetrieveStatus::MMS_RETRIEVE_STATUS_ERROR_PERMANENT_CONTENT_UNSUPPORTED) + 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_4000
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              Value is the normal value MMS_ERROR_UNSPECIFIED. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_4000, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_RESPONSE_STATUS, static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_UNSPECIFIED)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RESPONSE_STATUS) ==
                static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_UNSPECIFIED));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_4100
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              Value is the normal value MMS_ERROR_SERVICE_DENIED. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_4100, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_RESPONSE_STATUS, static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_SERVICE_DENIED)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RESPONSE_STATUS) ==
                static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_SERVICE_DENIED));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_4200
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              Value is the normal value MMS_ERROR_MESSAGE_FORMAT_CORRUPT. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_4200, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_RESPONSE_STATUS, static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_MESSAGE_FORMAT_CORRUPT)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RESPONSE_STATUS) ==
                static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_MESSAGE_FORMAT_CORRUPT));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_4300
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              Value is the normal value MMS_ERROR_SENDING_ADDRESS_UNRESOLVED. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_4300, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_RESPONSE_STATUS, static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_SENDING_ADDRESS_UNRESOLVED)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RESPONSE_STATUS) ==
                static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_SENDING_ADDRESS_UNRESOLVED));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_4400
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              Value is the normal value MMS_ERROR_MESSAGE_NOT_FOUND. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_4400, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_RESPONSE_STATUS, static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_MESSAGE_NOT_FOUND)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RESPONSE_STATUS) ==
                static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_MESSAGE_NOT_FOUND));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_4500
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              Value is the normal value MMS_ERROR_NETWORK_PROBLEM. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_4500, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_RESPONSE_STATUS, static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_NETWORK_PROBLEM)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RESPONSE_STATUS) ==
                static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_NETWORK_PROBLEM));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_4600
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              Value is the normal value MMS_ERROR_CONTENT_NOT_ACCEPTED. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_4600, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_RESPONSE_STATUS, static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_CONTENT_NOT_ACCEPTED)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RESPONSE_STATUS) ==
                static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_CONTENT_NOT_ACCEPTED));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_4700
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              Value is the normal value MMS_ERROR_UNSUPPORTED_MESSAGE. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_4700, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_RESPONSE_STATUS, static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_UNSUPPORTED_MESSAGE)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RESPONSE_STATUS) ==
                static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_UNSUPPORTED_MESSAGE));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_4800
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              Value is the normal value MMS_ERROR_TRANSIENT_FAILURE. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_4800, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_RESPONSE_STATUS, static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_TRANSIENT_FAILURE)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RESPONSE_STATUS) ==
                static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_TRANSIENT_FAILURE));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_4900
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              Value is the normal value MMS_ERROR_TRANSIENT_SENDING_ADDRESS_UNRESOLVED. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_4900, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_RESPONSE_STATUS, static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_TRANSIENT_SENDING_ADDRESS_UNRESOLVED)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RESPONSE_STATUS) ==
                static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_TRANSIENT_SENDING_ADDRESS_UNRESOLVED));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_5000
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              Value is the normal value MMS_ERROR_TRANSIENT_MESSAGE_NOT_FOUND. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_5000, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_RESPONSE_STATUS, static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_TRANSIENT_MESSAGE_NOT_FOUND)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RESPONSE_STATUS) ==
                static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_TRANSIENT_MESSAGE_NOT_FOUND));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_5100
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              Value is the normal value MMS_ERROR_TRANSIENT_NETWORK_PROBLEM. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_5100, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_RESPONSE_STATUS, static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_TRANSIENT_NETWORK_PROBLEM)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RESPONSE_STATUS) ==
                static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_TRANSIENT_NETWORK_PROBLEM));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_5200
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              Value is the normal value MMS_ERROR_TRANSIENT_PARTIAL_SUCCESS. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_5200, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_RESPONSE_STATUS, static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_TRANSIENT_PARTIAL_SUCCESS)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RESPONSE_STATUS) ==
                static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_TRANSIENT_PARTIAL_SUCCESS));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_5300
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              Value is the normal value MMS_ERROR_PERMANENT_FAILURE. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_5300, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_RESPONSE_STATUS, static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_PERMANENT_FAILURE)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RESPONSE_STATUS) ==
                static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_PERMANENT_FAILURE));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_5400
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              Value is the normal value MMS_ERROR_PERMANENT_SERVICE_DENIED. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_5400, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_RESPONSE_STATUS, static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_PERMANENT_SERVICE_DENIED)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RESPONSE_STATUS) ==
                static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_PERMANENT_SERVICE_DENIED));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_5500
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              Value is the normal value MMS_ERROR_PERMANENT_MESSAGE_FORMAT_CORRUPT. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_5500, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_RESPONSE_STATUS, static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_PERMANENT_MESSAGE_FORMAT_CORRUPT)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RESPONSE_STATUS) ==
                static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_PERMANENT_MESSAGE_FORMAT_CORRUPT));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_5600
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              Value is the normal value MMS_ERROR_PERMANENT_SENDING_ADDRESS_UNRESOLVED. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_5600, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_RESPONSE_STATUS, static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_PERMANENT_SENDING_ADDRESS_UNRESOLVED)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RESPONSE_STATUS) ==
                static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_PERMANENT_SENDING_ADDRESS_UNRESOLVED));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_5700
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              Value is the normal value MMS_ERROR_PERMANENT_MESSAGE_NOT_FOUND. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_5700, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_RESPONSE_STATUS, static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_PERMANENT_MESSAGE_NOT_FOUND)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RESPONSE_STATUS) ==
                static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_PERMANENT_MESSAGE_NOT_FOUND));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_5800
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              Value is the normal value MMS_ERROR_PERMANENT_CONTENT_NOT_ACCEPTED. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_5800, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_RESPONSE_STATUS, static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_PERMANENT_CONTENT_NOT_ACCEPTED)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RESPONSE_STATUS) ==
                static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_PERMANENT_CONTENT_NOT_ACCEPTED));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_5900
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              Value is the normal value MMS_ERROR_PERMANENT_REPLY_CHARGING_LIMITATIONS_NOT_MET. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_5900, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_RESPONSE_STATUS,
        static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_PERMANENT_REPLY_CHARGING_LIMITATIONS_NOT_MET)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RESPONSE_STATUS) ==
                static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_PERMANENT_REPLY_CHARGING_LIMITATIONS_NOT_MET));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_6000
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              Value is the normal value MMS_ERROR_PERMANENT_REPLY_CHARGING_REQUEST_NOT_ACCEPTED. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_6000, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_RESPONSE_STATUS,
        static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_PERMANENT_REPLY_CHARGING_REQUEST_NOT_ACCEPTED)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RESPONSE_STATUS) ==
                static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_PERMANENT_REPLY_CHARGING_REQUEST_NOT_ACCEPTED));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_6100
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              Value is the normal value MMS_ERROR_PERMANENT_REPLY_CHARGING_FORWARDING_DENIED. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_6100, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_RESPONSE_STATUS,
        static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_PERMANENT_REPLY_CHARGING_FORWARDING_DENIED)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RESPONSE_STATUS) ==
                static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_PERMANENT_REPLY_CHARGING_FORWARDING_DENIED));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_6200
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              Value is the normal value MMS_ERROR_PERMANENT_REPLY_CHARGING_NOT_SUPPORTED. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_6200, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_RESPONSE_STATUS,
        static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_PERMANENT_REPLY_CHARGING_NOT_SUPPORTED)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RESPONSE_STATUS) ==
                static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_PERMANENT_REPLY_CHARGING_NOT_SUPPORTED));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_6300
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              Value is the normal value MMS_ERROR_PERMANENT_ADDRESS_HIDING_NOT_SUPPORTED. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_6300, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_RESPONSE_STATUS,
        static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_PERMANENT_ADDRESS_HIDING_NOT_SUPPORTED)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RESPONSE_STATUS) ==
                static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_PERMANENT_ADDRESS_HIDING_NOT_SUPPORTED));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_6400
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              Value is the normal value MMS_ERROR_PERMANENT_LACK_OF_PREPAID. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_6400, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(
        MMS_RESPONSE_STATUS, static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_PERMANENT_LACK_OF_PREPAID)));
    EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_RESPONSE_STATUS) ==
                static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_PERMANENT_LACK_OF_PREPAID));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_6500
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              Set the value of Value to be less than the minimum. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_6500, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(
        encodeMsg.SetHeaderOctetValue(MMS_RESPONSE_STATUS, static_cast<uint8_t>(MmsResponseStatus::MMS_OK) - 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_6600
 * @tc.name     If fieldId is set to MMS_RESPONSE_STATUS,
 *              Set the value of Value to be greater than the maximum value. View the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_6600, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(encodeMsg.SetHeaderOctetValue(
        MMS_RESPONSE_STATUS, static_cast<uint8_t>(MmsResponseStatus::MMS_ERROR_PERMANENT_LACK_OF_PREPAID) + 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderStringValue_0100
 * @tc.name     When fieldId is set to an outlier, see the result returned
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderStringValue_0100, Function | MediumTest | Level1)
{
    std::string str = "a";
    MmsMsg encodeMsg;
    EXPECT_FALSE(encodeMsg.SetHeaderStringValue(MMS_CANCEL_STATUS + 1, str));
}

/**
 * @tc.number   Telephony_SmsMms_AddHeaderAddressValue_0100
 * @tc.name     When fieldId is set to an outlier, see the result returned
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_AddHeaderAddressValue_0100, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    MmsAddress ccAddress;
    ccAddress.SetMmsAddressString("+8613811111111/TYPE=PLMN");
    EXPECT_FALSE(encodeMsg.AddHeaderAddressValue(MMS_CANCEL_STATUS + 1, ccAddress));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderEncodedStringValue_0100
 * @tc.name     FieldId input parameter is incorrect, setting failed
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderEncodedStringValue_0100, Function | MediumTest | Level1)
{
    std::string retrieveTest = "1000";
    MmsMsg encodeMsg;
    EXPECT_FALSE(encodeMsg.SetHeaderEncodedStringValue(
        MMS_CANCEL_STATUS + 1, retrieveTest, static_cast<uint32_t>(MmsCharSets::UTF_8)));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderContentType_0100
 * @tc.name     The incoming parameter is null, see the result returned
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderContentType_0100, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderContentType(""));
}

/**
 * @tc.number   Telephony_SmsMms_SetAttachmentFilePath_0100
 * @tc.name     The incoming parameter is null, see the result returned
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetAttachmentFilePath_0100, Function | MediumTest | Level1)
{
    const std::string filePathNameSmil = "";
    MmsAttachment smilAttachment;
    EXPECT_FALSE(smilAttachment.SetAttachmentFilePath(filePathNameSmil, true));
}

/**
 * @tc.number   Telephony_SmsMms_SetContentId_0100
 * @tc.name     The incoming parameter is null, see the result returned
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetContentId_0100, Function | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    EXPECT_FALSE(smilAttachment.SetContentId(""));
}

/**
 * @tc.number   Telephony_SmsMms_SetContentLocation_0100
 * @tc.name     The incoming parameter is null, see the result returned
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetContentLocation_0100, Function | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    EXPECT_FALSE(smilAttachment.SetContentLocation(""));
}

/**
 * @tc.number   Telephony_SmsMms_SetContentDisposition_0100
 * @tc.name     The incoming parameter is null, see the result returned
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetContentDisposition_0100, Function | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    EXPECT_FALSE(smilAttachment.SetContentDisposition(""));
}

/**
 * @tc.number   Telephony_SmsMms_SetContentTransferEncoding_0100
 * @tc.name     The incoming parameter is null, see the result returned
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetContentTransferEncoding_0100, Function | MediumTest | Level1)
{
    std::string contentTransferEncoding = "";
    MmsAttachment smilAttachment;
    EXPECT_FALSE(smilAttachment.SetContentTransferEncoding(contentTransferEncoding));
}

/**
 * @tc.number   Telephony_SmsMms_SetContentType_0100
 * @tc.name     The incoming parameter is null, see the result returned
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetContentType_0100, Function | MediumTest | Level1)
{
    MmsAttachment imageAttachment;
    EXPECT_FALSE(imageAttachment.SetContentType(""));
}

/**
 * @tc.number   Telephony_SmsMms_SetFileName_0100
 * @tc.name     The incoming parameter is null, see the result returned
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetFileName_0100, Function | MediumTest | Level1)
{
    MmsAttachment imageAttachment;
    EXPECT_FALSE(imageAttachment.SetFileName(""));
}

/**
 * @tc.number   Telephony_SmsMms_SetDataBuffer_0100
 * @tc.name     The incoming parameter is null, see the result returned
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetDataBuffer_0100, Function | MediumTest | Level1)
{
    MmsAttachment inBuffAttachment;
    uint32_t inBuffLen = 3;
    std::unique_ptr<char[]> inBuff = std::make_unique<char[]>(inBuffLen);
    memcpy_s(inBuff.get(), inBuffLen, "", inBuffLen);
    EXPECT_TRUE(inBuffAttachment.SetDataBuffer(std::move(inBuff), inBuffLen));
}

/**
 * @tc.number   Telephony_SmsMms_SetCharSet_0300
 * @tc.name     Set charset to BIG5 and view the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetCharSet_0300, Function | MediumTest | Level1)
{
    MmsAttachment attachment;
    attachment.SetCharSet(static_cast<uint32_t>(MmsCharSets::BIG5));
    EXPECT_TRUE(attachment.GetCharSet() == static_cast<uint32_t>(MmsCharSets::BIG5));
}

/**
 * @tc.number   Telephony_SmsMms_SetCharSet_0400
 * @tc.name     Set charset to ISO_10646_UCS_2 and view the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetCharSet_0400, Function | MediumTest | Level1)
{
    MmsAttachment attachment;
    attachment.SetCharSet(static_cast<uint32_t>(MmsCharSets::ISO_10646_UCS_2));
    EXPECT_TRUE(attachment.GetCharSet() == static_cast<uint32_t>(MmsCharSets::ISO_10646_UCS_2));
}

/**
 * @tc.number   Telephony_SmsMms_SetCharSet_0500
 * @tc.name     Set charset to ISO_8859_1 and view the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetCharSet_0500, Function | MediumTest | Level1)
{
    MmsAttachment attachment;
    attachment.SetCharSet(static_cast<uint32_t>(MmsCharSets::ISO_8859_1));
    EXPECT_TRUE(attachment.GetCharSet() == static_cast<uint32_t>(MmsCharSets::ISO_8859_1));
}

/**
 * @tc.number   Telephony_SmsMms_SetCharSet_0600
 * @tc.name     Set charset to ISO_8859_2 and view the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetCharSet_0600, Function | MediumTest | Level1)
{
    MmsAttachment attachment;
    attachment.SetCharSet(static_cast<uint32_t>(MmsCharSets::ISO_8859_2));
    EXPECT_TRUE(attachment.GetCharSet() == static_cast<uint32_t>(MmsCharSets::ISO_8859_2));
}

/**
 * @tc.number   Telephony_SmsMms_SetCharSet_0700
 * @tc.name     Set charset to ISO_8859_3 and view the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetCharSet_0700, Function | MediumTest | Level1)
{
    MmsAttachment attachment;
    attachment.SetCharSet(static_cast<uint32_t>(MmsCharSets::ISO_8859_3));
    EXPECT_TRUE(attachment.GetCharSet() == static_cast<uint32_t>(MmsCharSets::ISO_8859_3));
}

/**
 * @tc.number   Telephony_SmsMms_SetCharSet_0800
 * @tc.name     Set charset to ISO_8859_4 and view the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetCharSet_0800, Function | MediumTest | Level1)
{
    MmsAttachment attachment;
    attachment.SetCharSet(static_cast<uint32_t>(MmsCharSets::ISO_8859_4));
    EXPECT_TRUE(attachment.GetCharSet() == static_cast<uint32_t>(MmsCharSets::ISO_8859_4));
}

/**
 * @tc.number   Telephony_SmsMms_SetCharSet_0900
 * @tc.name     Set charset to ISO_8859_5 and view the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetCharSet_0900, Function | MediumTest | Level1)
{
    MmsAttachment attachment;
    attachment.SetCharSet(static_cast<uint32_t>(MmsCharSets::ISO_8859_5));
    EXPECT_TRUE(attachment.GetCharSet() == static_cast<uint32_t>(MmsCharSets::ISO_8859_5));
}

/**
 * @tc.number   Telephony_SmsMms_SetCharSet_1000
 * @tc.name     Set charset to ISO_8859_6 and view the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetCharSet_1000, Function | MediumTest | Level1)
{
    MmsAttachment attachment;
    attachment.SetCharSet(static_cast<uint32_t>(MmsCharSets::ISO_8859_6));
    EXPECT_TRUE(attachment.GetCharSet() == static_cast<uint32_t>(MmsCharSets::ISO_8859_6));
}

/**
 * @tc.number   Telephony_SmsMms_SetCharSet_1100
 * @tc.name     Set charset to ISO_8859_7 and view the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetCharSet_1100, Function | MediumTest | Level1)
{
    MmsAttachment attachment;
    attachment.SetCharSet(static_cast<uint32_t>(MmsCharSets::ISO_8859_7));
    EXPECT_TRUE(attachment.GetCharSet() == static_cast<uint32_t>(MmsCharSets::ISO_8859_7));
}

/**
 * @tc.number   Telephony_SmsMms_SetCharSet_1200
 * @tc.name     Set charset to ISO_8859_8 and view the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetCharSet_1200, Function | MediumTest | Level1)
{
    MmsAttachment attachment;
    attachment.SetCharSet(static_cast<uint32_t>(MmsCharSets::ISO_8859_8));
    EXPECT_TRUE(attachment.GetCharSet() == static_cast<uint32_t>(MmsCharSets::ISO_8859_8));
}

/**
 * @tc.number   Telephony_SmsMms_SetCharSet_1300
 * @tc.name     Set charset to ISO_8859_9 and view the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetCharSet_1300, Function | MediumTest | Level1)
{
    MmsAttachment attachment;
    attachment.SetCharSet(static_cast<uint32_t>(MmsCharSets::ISO_8859_9));
    EXPECT_TRUE(attachment.GetCharSet() == static_cast<uint32_t>(MmsCharSets::ISO_8859_9));
}

/**
 * @tc.number   Telephony_SmsMms_SetCharSet_1400
 * @tc.name     Set charset to SHIFT_JIS and view the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetCharSet_1400, Function | MediumTest | Level1)
{
    MmsAttachment attachment;
    attachment.SetCharSet(static_cast<uint32_t>(MmsCharSets::SHIFT_JIS));
    EXPECT_TRUE(attachment.GetCharSet() == static_cast<uint32_t>(MmsCharSets::SHIFT_JIS));
}

/**
 * @tc.number   Telephony_SmsMms_SetCharSet_1500
 * @tc.name     Set charset to US_ASCII and view the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetCharSet_1500, Function | MediumTest | Level1)
{
    MmsAttachment attachment;
    attachment.SetCharSet(static_cast<uint32_t>(MmsCharSets::US_ASCII));
    EXPECT_TRUE(attachment.GetCharSet() == static_cast<uint32_t>(MmsCharSets::US_ASCII));
}

/**
 * @tc.number   Telephony_SmsMms_SetCharSet_1600
 * @tc.name     Set the value of Charset to less than the minimum value and view the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetCharSet_1600, Function | MediumTest | Level1)
{
    MmsAttachment attachment;
    attachment.SetCharSet(static_cast<uint32_t>(MmsCharSets::US_ASCII) - 1);
    EXPECT_TRUE(attachment.GetCharSet() == static_cast<uint32_t>(MmsCharSets::US_ASCII) - 1);
}

/**
 * @tc.number   Telephony_SmsMms_SetCharSet_1700
 * @tc.name     Set the value of Charset to greater than the maximum value and view the result
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetCharSet_1700, Function | MediumTest | Level1)
{
    MmsAttachment attachment;
    attachment.SetCharSet(static_cast<uint32_t>(MmsCharSets::BIG5) + 1);
    EXPECT_TRUE(attachment.GetCharSet() == static_cast<uint32_t>(MmsCharSets::BIG5) + 1);
}
} // namespace Telephony
} // namespace OHOS