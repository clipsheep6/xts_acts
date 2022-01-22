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

#include "mms_manager_test.h"
#include "mms_codec_type.h"
#include "condition_lock.h"
#include "string_ex.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace Telephony;
using namespace OHOS::Telephony::MmsManager;
using namespace OHOS::Telephony;

/**
 * @tc.number   Telephony_SmsMms_DecodeMsg_0100
 * @tc.name     Parse SendReq type MMS
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_DecodeMsg_0100, Function | MediumTest | Level1)
{
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
        EXPECT_TRUE(mmsSendReqData.contentDisposition[i] == attachments[i].GetContentDisposition());
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
        EXPECT_TRUE(mmsRetrieveConfData.contentDisposition[i] == attachments[i].GetContentDisposition());
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
    // encode
    MmsMsg encodeMsg;
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
    EXPECT_TRUE(encodeMsg.SetMmsDate(1639378126));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_MESSAGE_CLASS, static_cast<uint8_t>(MmsMessageClass::INFORMATIONAL)));
    EXPECT_TRUE(encodeMsg.SetHeaderLongValue(MMS_EXPIRY, 1639378126));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_PRIORITY, static_cast<uint8_t>(MmsPriority::MMS_LOW)));
    EXPECT_TRUE(
        encodeMsg.SetHeaderOctetValue(MMS_SENDER_VISIBILITY, static_cast<uint8_t>(MmsSenderVisibility::MMS_SHOW)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_DELIVERY_REPORT, static_cast<uint8_t>(MmsBoolType::MMS_YES)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_READ_REPORT, static_cast<uint8_t>(MmsBoolType::MMS_NO)));
    // add smil file
    const std::string filePathNameSmil = "/data/telephony/enSrc/618C0A89.smil";
    MmsAttachment smilAttachment;
    EXPECT_TRUE(smilAttachment.SetAttachmentFilePath(filePathNameSmil, true));
    EXPECT_TRUE(smilAttachment.SetFileName("618C0A89.smil"));
    EXPECT_TRUE(smilAttachment.SetContentId("<0000>"));
    EXPECT_TRUE(smilAttachment.SetContentLocation("618C0A89.smil"));
    EXPECT_TRUE(smilAttachment.SetContentType("application/smil"));
    EXPECT_TRUE(smilAttachment.SetContentDisposition("618C0A89.smil"));
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
    EXPECT_TRUE(textAttachment.SetContentDisposition("content.text"));
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
    EXPECT_TRUE(imageAttachment.SetContentDisposition("picture.gif"));
    EXPECT_TRUE(encodeMsg.AddAttachment(imageAttachment));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    // decode
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
    EXPECT_TRUE(toAddress[0].GetAddressString() == "+8613888888888/TYPE=PLMN");
    EXPECT_TRUE(toAddress[0].GetAddressCharset() == MmsCharSets::UTF_8);
    EXPECT_TRUE(toAddress[0].GetAddressType() == MmsAddress::ADDRESS_TYPE_PLMN);
    EXPECT_TRUE(toAddress[1].GetAddressString() == "+8613812345678/TYPE=PLMN");
    EXPECT_TRUE(toAddress[1].GetAddressCharset() == MmsCharSets::UTF_8);
    EXPECT_TRUE(toAddress[1].GetAddressType() == MmsAddress::ADDRESS_TYPE_PLMN);
    EXPECT_TRUE(decodeMsg.GetMmsDate() == 1639378126);
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
    EXPECT_TRUE(attachments[0].GetFileName() == "618C0A89.smil");
    EXPECT_TRUE(attachments[0].GetContentId() == "<0000>");
    EXPECT_TRUE(attachments[0].GetContentLocation() == "618C0A89.smil");
    EXPECT_TRUE(attachments[0].GetContentType() == "application/smil");
    EXPECT_TRUE(attachments[0].GetContentDisposition() == "618C0A89.smil");
    EXPECT_TRUE(attachments[1].GetFileName() == "content.text");
    EXPECT_TRUE(attachments[1].GetContentId() == "<content.text>");
    EXPECT_TRUE(attachments[1].GetContentLocation() == "content.text");
    EXPECT_TRUE(attachments[1].GetContentType() == "text/plain");
    EXPECT_TRUE(attachments[1].GetContentDisposition() == "content.text");
    EXPECT_TRUE(attachments[2].GetFileName() == "picture.gif");
    EXPECT_TRUE(attachments[2].GetContentId() == "<picture.gif>");
    EXPECT_TRUE(attachments[2].GetContentLocation() == "picture.gif");
    EXPECT_TRUE(attachments[2].GetContentType() == "image/gif");
    EXPECT_TRUE(attachments[2].GetContentDisposition() == "picture.gif");
}

/**
 * @tc.number   Telephony_SmsMms_EncodeMsg_0200
 * @tc.name     SendConf type MMS, encoding after decoding, the content after decoding and coding before the same
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_EncodeMsg_0200, Function | MediumTest | Level1)
{
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
    // encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_NOTIFICATION_IND));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2080.142730"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_3)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_MESSAGE_CLASS, static_cast<uint8_t>(MmsMessageClass::PERSONAL)));
    EXPECT_TRUE(encodeMsg.SetHeaderLongValue(MMS_EXPIRY, 1639378126));
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
    // encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_RETRIEVE_CONF));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("3077.142410"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_2)));
    EXPECT_TRUE(encodeMsg.SetMmsDate(1639378126));
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
    EXPECT_TRUE(encodeMsg.GetMmsDate() == 1639378126);
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
    // encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_DELIVERY_IND));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2360.68530"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_2)));
    std::string strMessageID = "0001";
    EXPECT_TRUE(encodeMsg.SetHeaderStringValue(MMS_MESSAGE_ID, strMessageID));
    EXPECT_TRUE(encodeMsg.SetMmsDate(1639378126));
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
    EXPECT_TRUE(encodeMsg.GetMmsDate() == 1639378126);
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
    EXPECT_TRUE(encodeMsg.SetMmsDate(1639378126));
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
    EXPECT_TRUE(encodeMsg.GetMmsDate() == 1639378126);
}

/**
 * @tc.number   Telephony_SmsMms_EncodeMsg_0900
 * @tc.name     ReadOrigInd type MMS, encoding after decoding, the content after decoding and coding before the same
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_EncodeMsg_0900, Function | MediumTest | Level1)
{
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
    EXPECT_TRUE(encodeMsg.SetMmsDate(1639378126));
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
    EXPECT_TRUE(encodeMsg.GetMmsDate() == 1639378126);
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