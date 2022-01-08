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
    for(uint i = 0; i < toAddr.size(); ++i) {
        EXPECT_TRUE(mmsSendReqData.toAddress[i] == toAddr[i].GetAddressString());
    }
    EXPECT_TRUE(mmsSendReqData.deliveryReport == decodeMsg.GetHeaderOctetValue(MMS_DELIVERY_REPORT));
    EXPECT_TRUE(mmsSendReqData.sendVisbility == decodeMsg.GetHeaderOctetValue(MMS_SENDER_VISIBILITY));
    EXPECT_TRUE(mmsSendReqData.readResport == decodeMsg.GetHeaderOctetValue(MMS_READ_REPORT));
    EXPECT_TRUE(mmsSendReqData.messageClass == decodeMsg.GetHeaderOctetValue(MMS_MESSAGE_CLASS));
    EXPECT_TRUE(mmsSendReqData.priority == decodeMsg.GetHeaderOctetValue(MMS_PRIORITY));

    std::vector<MmsAttachment> attachments;
    ASSERT_TRUE(decodeMsg.GetAllAttachment(attachments));
    for(uint i = 0; i < attachments.size(); ++i) {
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
    for(uint i = 0; i < attachments.size(); ++i) {
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
    for(uint i = 0; i < toAddr.size(); ++i) {
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
    for(uint i = 0; i < toAddr.size(); ++i) {
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
    //encode
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

    //decode
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
    //encode
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

    //decode
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
    //encode
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

    //decode
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
    //encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_NOTIFYRESP_IND));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2920.1410"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_EXPIRED)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_REPORT_ALLOWED, static_cast<uint8_t>(MmsBoolType::MMS_YES)));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    //decode
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
    //encode
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
    //add inbuff
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

    //decode
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
    //encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_ACKNOWLEDGE_IND));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("27.14210"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_2)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_REPORT_ALLOWED, static_cast<uint8_t>(MmsBoolType::MMS_YES)));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    //decode
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
    //encode
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

    //decode
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
    //encode
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

    //decode
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
    //encode
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

    //decode
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
    //encode
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

    //decode
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
    //encode
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

    //decode
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
    //encode
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

    //decode
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
    //encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_NOTIFYRESP_IND));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2920.1410"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_RETRIEVED)));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    //decode
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
    //encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_NOTIFYRESP_IND));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2920.1410"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_REJECTED)));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    //decode
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
    //encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_NOTIFYRESP_IND));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2920.1410"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_DEFERRED)));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    //decode
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
    //encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_NOTIFYRESP_IND));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2920.1410"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_MMS_UNRECOGNISED)));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    //decode
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
    //encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_NOTIFYRESP_IND));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2920.1410"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_INDETERMINATE)));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    //decode
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
    //encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_NOTIFYRESP_IND));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2920.1410"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_UNREACHABLE)));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    //decode
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
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId(""));
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsSubject_0100
 * @tc.name     The input parameter value is null, Setup failed
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsSubject_0100, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsSubject(""));
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
    EXPECT_FALSE(encodeMsg.SetHeaderOctetValue(
        MMS_SENDER_VISIBILITY, static_cast<uint8_t>(MmsSenderVisibility::MMS_SHOW) + 1));
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
    EXPECT_FALSE(encodeMsg.SetHeaderOctetValue(MMS_RETRIEVE_STATUS,
        static_cast<uint8_t>(MmsRetrieveStatus::MMS_RETRIEVE_STATUS_OK) - 1));
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
    EXPECT_FALSE(encodeMsg.SetHeaderOctetValue(MMS_READ_STATUS,
        static_cast<uint8_t>(MmsReadStatus::MMS_DELETED_WITHOUT_BEING_READ) + 1));
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
 * @tc.name     If fieldId is set to MMS_CONTENT_CLASS, The input parameter value is greater than the
 *              maximum(MMS_CONTENT_RICH) value, Setup failed.
 * @tc.desc     Function test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_1900, Function | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_FALSE(encodeMsg.SetHeaderOctetValue(MMS_CONTENT_CLASS,
        static_cast<uint8_t>(MmsContentClass::MMS_CONTENT_RICH) + 1));
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderIntegerValue_0100
 * @tc.name     Call interface SetHeaderIntegerValue(), put in parameter MMS_LIMIT, and set the value to 100.
 *              Call interface GetHeaderIntegerValue() to check that the return value is consistent with the set value
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderIntegerValue_0100, Reliability | MediumTest | Level1)
{
    int32_t value = 100;
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderIntegerValue(MMS_LIMIT, value));
    EXPECT_TRUE(encodeMsg.GetHeaderIntegerValue(MMS_LIMIT) == value);
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
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetDataBuffer_0100, Reliability | MediumTest | Level1)
{
    MmsAttachment inBuffAttachment;
    uint32_t inBuffLen = 3;
    std::unique_ptr<char[]> inBuff = std::make_unique<char[]>(inBuffLen);
    memcpy_s(inBuff.get(), inBuffLen, "", inBuffLen);
    EXPECT_TRUE(inBuffAttachment.SetDataBuffer(std::move(inBuff), inBuffLen));
}



//*****************************Reliability + Performance************************************
/**
 * @tc.number   Telephony_SmsMms_DecodeMsg_1100
 * @tc.name     Cycle call DecodeMsg interface LOOP_MULTITUDE_NUMBER times, normal entry, check the return result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_DecodeMsg_1100, Reliability | MediumTest | Level1)
{
    std::string strPath = "/data/telephony/deSrc/ReadOrigInd.mms";
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        MmsMsg decodeMsg;
        EXPECT_TRUE(decodeMsg.DecodeMsg(strPath));
    }
}

/**
 * @tc.number   Telephony_SmsMms_DecodeMsg_1200
 * @tc.name     Cycle call DecodeMsg interface LOOP_MULTITUDE_NUMBER times,
 *              normal entry parameter, check the average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_DecodeMsg_1200, Performance | MediumTest | Level1)
{
    std::string strPath = "/data/telephony/deSrc/ReadOrigInd.mms";
    MmsMsg decodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        decodeMsg.DecodeMsg(strPath);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_EncodeMsg_1900
 * @tc.name     The EncodeMsg interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_EncodeMsg_1900, Reliability | MediumTest | Level1)
{
    //encode
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_NOTIFYRESP_IND));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2920.1410"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_UNREACHABLE)));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = nullptr;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        result = encodeMsg.EncodeMsg(len);
        EXPECT_TRUE(result != nullptr);
    }
}

/**
 * @tc.number   Telephony_SmsMms_EncodeMsg_2000
 * @tc.name     The EncodeMsg interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_EncodeMsg_2000, Performance | MediumTest | Level1)
{
    std::string strPath = "/data/telephony/deSrc/ReadOrigInd.mms";
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_NOTIFYRESP_IND));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2920.1410"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_UNREACHABLE)));
    uint32_t len = 0;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.EncodeMsg(len);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_DecodeMsg_PDU_0100
 * @tc.name     The EncodeMsg() interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_DecodeMsg_PDU_0100, Reliability | MediumTest | Level1)
{
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        //encode
        MmsMsg encodeMsg;
        EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_NOTIFYRESP_IND));
        EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2920.1410"));
        EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0)));
        EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_UNREACHABLE)));
        uint32_t len = 0;
        std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
        ASSERT_TRUE(result != nullptr);

        //decode
        MmsMsg decodeMsg;
        EXPECT_TRUE(decodeMsg.DecodeMsg(std::move(result), len));
    }
}

/**
 * @tc.number   Telephony_SmsMms_DecodeMsg_PDU_0200
 * @tc.name     The DecodeMsg interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_DecodeMsg_PDU_0200, Performance | MediumTest | Level1)
{
    std::string strPath = "/data/telephony/deSrc/ReadOrigInd.mms";
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_NOTIFYRESP_IND));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2920.1410"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_UNREACHABLE)));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        MmsMsg decodeMsg;
        encodeMsg.DecodeMsg(std::move(result), len);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsVersion_0300
 * @tc.name     The SetMmsVersion interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsVersion_0300, Reliability | MediumTest | Level1)
{
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        MmsMsg encodeMsg;
        EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_2)));
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsVersion_0400
 * @tc.name     The SetMmsVersion interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsVersion_0400, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_2));
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetMmsVersion_0100
 * @tc.name     The GetMmsVersion interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetMmsVersion_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_2)));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(encodeMsg.GetMmsVersion() == static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_2));
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetMmsVersion_0200
 * @tc.name     The GetMmsVersion interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetMmsVersion_0200, Performance | MediumTest | Level1)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    MmsMsg encodeMsg;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetMmsVersion();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsMessageType_0300
 * @tc.name     The SetMmsMessageType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsMessageType_0300, Reliability | MediumTest | Level1)
{
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        MmsMsg encodeMsg;
        EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_SEND_REQ));
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsMessageType_0400
 * @tc.name     The SetMmsMessageType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsMessageType_0400, Performance | MediumTest | Level1)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    MmsMsg encodeMsg;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.SetMmsMessageType(MMS_MSGTYPE_SEND_REQ);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetMmsMessageType_0100
 * @tc.name     The GetMmsMessageType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetMmsMessageType_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_SEND_REQ));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(encodeMsg.GetMmsMessageType() == MMS_MSGTYPE_SEND_REQ);
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetMmsMessageType_0200
 * @tc.name     The GetMmsMessageType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetMmsMessageType_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetMmsMessageType();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsTransactionId_0200
 * @tc.name     The SetMmsTransactionId interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsTransactionId_0200, Reliability | MediumTest | Level1)
{
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        MmsMsg encodeMsg;
        EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2077.1427358451410"));
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsTransactionId_0300
 * @tc.name     The SetMmsTransactionId interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsTransactionId_0300, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.SetMmsTransactionId("2077.1427358451410");
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetMmsTransactionId_0100
 * @tc.name     The GetMmsTransactionId interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetMmsTransactionId_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2077.1427358451410"));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(encodeMsg.GetMmsTransactionId() == "2077.1427358451410");
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetMmsTransactionId_0200
 * @tc.name     The GetMmsTransactionId interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetMmsTransactionId_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetMmsTransactionId();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsDate_0100
 * @tc.name     The SetMmsDate interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsDate_0100, Reliability | MediumTest | Level1)
{
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        MmsMsg encodeMsg;
        EXPECT_TRUE(encodeMsg.SetMmsDate(1639378126));
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsDate_0200
 * @tc.name     The SetMmsDate interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsDate_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.SetMmsDate(1639378126);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetMmsDate_0100
 * @tc.name     The GetMmsDate interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetMmsDate_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsDate(1639378126));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(encodeMsg.GetMmsDate() == 1639378126);
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetMmsDate_0200
 * @tc.name     The GetMmsDate interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetMmsDate_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetMmsDate();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsSubject_0200
 * @tc.name     The SetMmsSubject interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsSubject_0200, Reliability | MediumTest | Level1)
{
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        MmsMsg encodeMsg;
        EXPECT_TRUE(encodeMsg.SetMmsSubject("Test mms"));
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsSubject_0300
 * @tc.name     The SetMmsSubject interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsSubject_0300, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.SetMmsSubject("Test mms");
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetMmsSubject_0100
 * @tc.name     The GetMmsSubject interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetMmsSubject_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsSubject("Test mms"));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(encodeMsg.GetMmsSubject() == "Test mms");
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetMmsSubject_0200
 * @tc.name     The GetMmsSubject interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetMmsSubject_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetMmsSubject();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsFrom_0100
 * @tc.name     The SetMmsFrom interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsFrom_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    MmsAddress fromAddress;
    fromAddress.SetMmsAddressString("+8613812345678/TYPE=PLMN");
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(encodeMsg.SetMmsFrom(fromAddress));
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsFrom_0200
 * @tc.name     The SetMmsFrom interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsFrom_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    MmsAddress fromAddress;
    fromAddress.SetMmsAddressString("+8613812345678/TYPE=PLMN");
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.SetMmsFrom(fromAddress);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetMmsFrom_0100
 * @tc.name     The GetMmsFrom interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetMmsFrom_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    MmsAddress fromAddress;
    fromAddress.SetMmsAddressString("+8613812345678/TYPE=PLMN");
    EXPECT_TRUE(encodeMsg.SetMmsFrom(fromAddress));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        MmsAddress fromAddr = encodeMsg.GetMmsFrom();
        EXPECT_TRUE(fromAddr.GetAddressString() == "+8613812345678/TYPE=PLMN");
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetMmsFrom_0200
 * @tc.name     The GetMmsFrom interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetMmsFrom_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetMmsFrom();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsTo_0100
 * @tc.name     The SetMmsTo interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsTo_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    std::vector<MmsAddress> vecAddrs;
    MmsAddress toAddrs("+8613888888888/TYPE=PLMN");
    vecAddrs.push_back(toAddrs);
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(encodeMsg.SetMmsTo(vecAddrs));
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsTo_0200
 * @tc.name     The SetMmsTo interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsTo_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    std::vector<MmsAddress> vecAddrs;
    MmsAddress toAddrs("+8613888888888/TYPE=PLMN");
    vecAddrs.push_back(toAddrs);
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.SetMmsTo(vecAddrs);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetMmsTo_0100
 * @tc.name     The GetMmsTo interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetMmsTo_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    std::vector<MmsAddress> vecAddrs;
    MmsAddress toAddrs("+8613888888888/TYPE=PLMN");
    vecAddrs.push_back(toAddrs);
    EXPECT_TRUE(encodeMsg.SetMmsTo(vecAddrs));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        std::vector<MmsAddress> toAddress;
        ASSERT_TRUE(encodeMsg.GetMmsTo(toAddress));
        ASSERT_FALSE(toAddress.empty());
        EXPECT_TRUE(toAddress[0].GetAddressString() == "+8613888888888/TYPE=PLMN");
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetMmsTo_0200
 * @tc.name     The GetMmsTo interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetMmsTo_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    std::vector<MmsAddress> vecAddrs;
    MmsAddress toAddrs("+8613888888888/TYPE=PLMN");
    vecAddrs.push_back(toAddrs);
    EXPECT_TRUE(encodeMsg.SetMmsTo(vecAddrs));
    std::vector<MmsAddress> toAddress;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetMmsTo(toAddress);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_2000
 * @tc.name     The SetHeaderOctetValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_2000, Reliability | MediumTest | Level1)
{
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        MmsMsg encodeMsg;
        EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_MMS_UNRECOGNISED)));
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_2100
 * @tc.name     The SetHeaderOctetValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_2100, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_MMS_UNRECOGNISED));
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetHeaderOctetValue_0100
 * @tc.name     The GetHeaderOctetValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetHeaderOctetValue_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_MMS_UNRECOGNISED)));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        std::vector<MmsAddress> toAddress;
        EXPECT_TRUE(encodeMsg.GetHeaderOctetValue(MMS_STATUS) == static_cast<uint8_t>(MmsStatus::MMS_MMS_UNRECOGNISED));
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetHeaderOctetValue_0200
 * @tc.name     The GetHeaderOctetValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetHeaderOctetValue_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetHeaderOctetValue(MMS_STATUS);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderIntegerValue_0200
 * @tc.name     The SetHeaderIntegerValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderIntegerValue_0200, Reliability | MediumTest | Level1)
{
    int32_t value = 100;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        MmsMsg encodeMsg;
        EXPECT_TRUE(encodeMsg.SetHeaderIntegerValue(MMS_LIMIT, value));
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderIntegerValue_0300
 * @tc.name     The SetHeaderIntegerValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderIntegerValue_0300, Performance | MediumTest | Level1)
{
    int32_t value = 100;
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.SetHeaderIntegerValue(MMS_LIMIT, value);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetHeaderIntegerValue_0100
 * @tc.name     The GetHeaderIntegerValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetHeaderIntegerValue_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    int32_t value = 100;
    EXPECT_TRUE(encodeMsg.SetHeaderIntegerValue(MMS_LIMIT, value));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        std::vector<MmsAddress> toAddress;
        EXPECT_TRUE(encodeMsg.GetHeaderIntegerValue(MMS_LIMIT) == value);
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetHeaderIntegerValue_0200
 * @tc.name     The GetHeaderIntegerValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetHeaderIntegerValue_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetHeaderIntegerValue(MMS_LIMIT);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderLongValue_0100
 * @tc.name     The SetHeaderLongValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderLongValue_0100, Reliability | MediumTest | Level1)
{
    int32_t value = 123456;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        MmsMsg encodeMsg;
        EXPECT_TRUE(encodeMsg.SetHeaderLongValue(MMS_MESSAGE_SIZE, value));
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderLongValue_0200
 * @tc.name     The SetHeaderLongValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderLongValue_0200, Performance | MediumTest | Level1)
{
    int32_t value = 123456;
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.SetHeaderLongValue(MMS_MESSAGE_SIZE, value);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetHeaderLongValue_0100
 * @tc.name     The GetHeaderLongValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetHeaderLongValue_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    int32_t value = 123456;
    EXPECT_TRUE(encodeMsg.SetHeaderLongValue(MMS_MESSAGE_SIZE, value));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        std::vector<MmsAddress> toAddress;
        EXPECT_TRUE(encodeMsg.GetHeaderLongValue(MMS_MESSAGE_SIZE) == value);
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetHeaderLongValue_0200
 * @tc.name     The GetHeaderLongValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetHeaderLongValue_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetHeaderLongValue(MMS_MESSAGE_SIZE);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderStringValue_0200
 * @tc.name     The SetHeaderStringValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderStringValue_0200, Reliability | MediumTest | Level1)
{
    std::string strMessageID = "0001";
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        MmsMsg encodeMsg;
        EXPECT_TRUE(encodeMsg.SetHeaderStringValue(MMS_MESSAGE_ID, strMessageID));
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderStringValue_0300
 * @tc.name     The SetHeaderStringValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderStringValue_0300, Performance | MediumTest | Level1)
{
    std::string strMessageID = "0001";
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.SetHeaderStringValue(MMS_MESSAGE_ID, strMessageID);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetHeaderStringValue_0100
 * @tc.name     The GetHeaderStringValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetHeaderStringValue_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    std::string strMessageID = "0001";
    EXPECT_TRUE(encodeMsg.SetHeaderStringValue(MMS_MESSAGE_ID, strMessageID));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        std::vector<MmsAddress> toAddress;
        EXPECT_TRUE(encodeMsg.GetHeaderStringValue(MMS_MESSAGE_ID) == strMessageID);
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetHeaderStringValue_0200
 * @tc.name     The GetHeaderStringValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetHeaderStringValue_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetHeaderStringValue(MMS_MESSAGE_ID);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderEncodedStringValue_0100
 * @tc.name     The SetHeaderEncodedStringValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderEncodedStringValue_0100, Reliability | MediumTest | Level1)
{
    std::string retrieveTest = "1000";
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        MmsMsg encodeMsg;
        EXPECT_TRUE(encodeMsg.SetHeaderEncodedStringValue(
            MMS_RETRIEVE_TEXT, retrieveTest, static_cast<uint32_t>(MmsCharSets::UTF_8)));
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderEncodedStringValue_0200
 * @tc.name     The SetHeaderEncodedStringValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderEncodedStringValue_0200, Performance | MediumTest | Level1)
{
    std::string retrieveTest = "1000";
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.SetHeaderEncodedStringValue(
            MMS_RETRIEVE_TEXT, retrieveTest, static_cast<uint32_t>(MmsCharSets::UTF_8));
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_AddHeaderAddressValue_0200
 * @tc.name     The AddHeaderAddressValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_AddHeaderAddressValue_0200, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    MmsAddress ccAddress;
    ccAddress.SetMmsAddressString("+8613811111111/TYPE=PLMN");
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(encodeMsg.AddHeaderAddressValue(MMS_CC, ccAddress));
    }
}

/**
 * @tc.number   Telephony_SmsMms_AddHeaderAddressValue_0300
 * @tc.name     The AddHeaderAddressValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_AddHeaderAddressValue_0300, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    MmsAddress ccAddress;
    ccAddress.SetMmsAddressString("+8613811111111/TYPE=PLMN");
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.AddHeaderAddressValue(MMS_CC, ccAddress);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetHeaderAllAddressValue_0100
 * @tc.name     The GetHeaderAllAddressValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetHeaderAllAddressValue_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    MmsAddress ccAddress;
    ccAddress.SetMmsAddressString("+8613811111111/TYPE=PLMN");
    EXPECT_TRUE(encodeMsg.AddHeaderAddressValue(MMS_CC, ccAddress));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        std::vector<MmsAddress> ccAddress;
        EXPECT_TRUE(encodeMsg.GetHeaderAllAddressValue(MMS_CC, ccAddress));
        ASSERT_FALSE(ccAddress.empty());
        EXPECT_TRUE(ccAddress[0].GetAddressString() == "+8613811111111/TYPE=PLMN");
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetHeaderAllAddressValue_0200
 * @tc.name     The GetHeaderAllAddressValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetHeaderAllAddressValue_0200, Performance | MediumTest | Level1)
{
    vector<MmsAddress> addressValue;
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetHeaderAllAddressValue(MMS_CC, addressValue);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderContentType_0200
 * @tc.name     The SetHeaderContentType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderContentType_0200, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(encodeMsg.SetHeaderContentType("application/vnd.wap.multipart.related"));
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderContentType_0300
 * @tc.name     The SetHeaderContentType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderContentType_0300, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.SetHeaderContentType("application/vnd.wap.multipart.related");
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetHeaderContentType_0100
 * @tc.name     The GetHeaderContentType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetHeaderContentType_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetHeaderContentType("application/vnd.wap.multipart.related"));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(encodeMsg.GetHeaderContentType() == "application/vnd.wap.multipart.related");
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetHeaderContentType_0200
 * @tc.name     The GetHeaderContentType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetHeaderContentType_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetHeaderContentType();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetHeaderContentTypeStart_0100
 * @tc.name     The GetHeaderContentTypeStart interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetHeaderContentTypeStart_0100, Reliability | MediumTest | Level1)
{
    //encode
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
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);
    //decode
    MmsMsg decodeMsg;
    ASSERT_TRUE(decodeMsg.DecodeMsg(std::move(result), len));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_FALSE(decodeMsg.GetHeaderContentTypeStart().empty());
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetHeaderContentTypeStart_0200
 * @tc.name     The GetHeaderContentTypeStart interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetHeaderContentTypeStart_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetHeaderContentTypeStart();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_AddAttachment_0100
 * @tc.name     The AddAttachment interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_AddAttachment_0100, Reliability | MediumTest | Level1)
{

    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        MmsMsg encodeMsg;
        MmsAttachment smilAttachment;
        const std::string filePathNameSmil = "/data/telephony/enSrc/618C0A89.smil";
        EXPECT_TRUE(smilAttachment.SetAttachmentFilePath(filePathNameSmil, true));
        EXPECT_TRUE(smilAttachment.SetFileName("618C0A89.smil"));
        EXPECT_TRUE(smilAttachment.SetContentId("<0000>"));
        EXPECT_TRUE(smilAttachment.SetContentLocation("618C0A89.smil"));
        EXPECT_TRUE(smilAttachment.SetContentType("application/smil"));
        EXPECT_TRUE(encodeMsg.AddAttachment(smilAttachment));
    }
}

/**
 * @tc.number   Telephony_SmsMms_AddAttachment_0200
 * @tc.name     The AddAttachment interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_AddAttachment_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    MmsAttachment smilAttachment;
    const std::string filePathNameSmil = "/data/telephony/enSrc/618C0A89.smil";
    EXPECT_TRUE(smilAttachment.SetAttachmentFilePath(filePathNameSmil, true));
    EXPECT_TRUE(smilAttachment.SetFileName("618C0A89.smil"));
    EXPECT_TRUE(smilAttachment.SetContentId("<0000>"));
    EXPECT_TRUE(smilAttachment.SetContentLocation("618C0A89.smil"));
    EXPECT_TRUE(smilAttachment.SetContentType("application/smil"));
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.AddAttachment(smilAttachment);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetAllAttachment_0100
 * @tc.name     The GetAllAttachment interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetAllAttachment_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    MmsAttachment smilAttachment;
    const std::string filePathNameSmil = "/data/telephony/enSrc/618C0A89.smil";
    EXPECT_TRUE(smilAttachment.SetAttachmentFilePath(filePathNameSmil, true));
    EXPECT_TRUE(smilAttachment.SetFileName("618C0A89.smil"));
    EXPECT_TRUE(smilAttachment.SetContentId("<0000>"));
    EXPECT_TRUE(smilAttachment.SetContentLocation("618C0A89.smil"));
    EXPECT_TRUE(smilAttachment.SetContentType("application/smil"));
    EXPECT_TRUE(encodeMsg.AddAttachment(smilAttachment));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        std::vector<MmsAttachment> smilAttachment;
        EXPECT_TRUE(encodeMsg.GetAllAttachment(smilAttachment));
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetAllAttachment_0200
 * @tc.name     The GetAllAttachment interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetAllAttachment_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    std::vector<MmsAttachment> smilAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetAllAttachment(smilAttachment);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsAddressString_0100
 * @tc.name     The SetMmsAddressString interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsAddressString_0100, Reliability | MediumTest | Level1)
{
    MmsAddress fromAddress;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        fromAddress.SetMmsAddressString("+8613812345678/TYPE=PLMN");
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsAddressString_0200
 * @tc.name     The SetMmsAddressString interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsAddressString_0200, Performance | MediumTest | Level1)
{
    MmsAddress fromAddress;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        fromAddress.SetMmsAddressString("+8613812345678/TYPE=PLMN");
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetAddressString_0100
 * @tc.name     The GetAddressString interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetAddressString_0100, Reliability | MediumTest | Level1)
{
    MmsAddress fromAddress;
    fromAddress.SetMmsAddressString("+8613812345678/TYPE=PLMN");
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(fromAddress.GetAddressString() == "+8613812345678/TYPE=PLMN");
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetAddressString_0200
 * @tc.name     The GetAddressString interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetAddressString_0200, Performance | MediumTest | Level1)
{
    MmsAddress fromAddress;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        fromAddress.GetAddressString();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetAddressCharset_0100
 * @tc.name     The GetAddressCharset interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetAddressCharset_0100, Reliability | MediumTest | Level1)
{
    MmsAddress fromAddress;
    fromAddress.SetMmsAddressString("+8613812345678/TYPE=PLMN");
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(fromAddress.GetAddressCharset() == MmsCharSets::UTF_8);
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetAddressCharset_0200
 * @tc.name     The GetAddressCharset interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetAddressCharset_0200, Performance | MediumTest | Level1)
{
    MmsAddress fromAddress;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        fromAddress.GetAddressCharset();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetAddressType_0100
 * @tc.name     The GetAddressType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetAddressType_0100, Reliability | MediumTest | Level1)
{
    MmsAddress fromAddress;
    fromAddress.SetMmsAddressString("+8613812345678/TYPE=PLMN");
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(fromAddress.GetAddressType() == MmsAddress::ADDRESS_TYPE_PLMN);
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetAddressType_0200
 * @tc.name     The GetAddressType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetAddressType_0200, Performance | MediumTest | Level1)
{
    MmsAddress fromAddress;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        fromAddress.GetAddressType();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetAttachmentFilePath_0200
 * @tc.name     The SetAttachmentFilePath interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetAttachmentFilePath_0200, Reliability | MediumTest | Level1)
{
    const std::string filePathNameSmil = "/data/telephony/enSrc/618C0A89.smil";
    MmsAttachment smilAttachment;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(smilAttachment.SetAttachmentFilePath(filePathNameSmil, true));
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetAttachmentFilePath_0300
 * @tc.name     The SetAttachmentFilePath interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetAttachmentFilePath_0300, Performance | MediumTest | Level1)
{
    const std::string filePathNameSmil = "/data/telephony/enSrc/618C0A89.smil";
    MmsAttachment smilAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        smilAttachment.SetAttachmentFilePath(filePathNameSmil, true);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetContentId_0200
 * @tc.name     The SetContentId interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetContentId_0200, Reliability | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(smilAttachment.SetContentId("<0000>"));
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetContentId_0300
 * @tc.name     The SetContentId interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetContentId_0300, Performance | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        smilAttachment.SetContentId("<0000>");
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetContentId_0100
 * @tc.name     The GetContentId interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetContentId_0100, Reliability | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    EXPECT_TRUE(smilAttachment.SetContentId("<0000>"));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(smilAttachment.GetContentId() == "<0000>");
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetContentId_0200
 * @tc.name     The GetContentId interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetContentId_0200, Performance | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        smilAttachment.GetContentId();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetContentLocation_0200
 * @tc.name     The SetContentLocation interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetContentLocation_0200, Reliability | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(smilAttachment.SetContentLocation("618C0A89.smil"));
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetContentLocation_0300
 * @tc.name     The SetContentLocation interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetContentLocation_0300, Performance | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        smilAttachment.SetContentLocation("618C0A89.smil");
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetContentLocation_0100
 * @tc.name     The GetContentId interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetContentLocation_0100, Reliability | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    EXPECT_TRUE(smilAttachment.SetContentLocation("618C0A89.smil"));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(smilAttachment.GetContentLocation() == "618C0A89.smil");
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetContentLocation_0200
 * @tc.name     The GetContentId interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetContentLocation_0200, Performance | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        smilAttachment.GetContentLocation();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetContentDisposition_0200
 * @tc.name     The SetContentDisposition interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetContentDisposition_0200, Reliability | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(smilAttachment.SetContentDisposition("content.text"));
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetContentDisposition_0300
 * @tc.name     The SetContentDisposition interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetContentDisposition_0300, Performance | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        smilAttachment.SetContentDisposition("content.text");
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetContentDisposition_0100
 * @tc.name     The GetContentDisposition interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetContentDisposition_0100, Reliability | MediumTest | Level1)
{
    MmsAttachment textAttachment;
    EXPECT_TRUE(textAttachment.SetContentDisposition("content.text"));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(textAttachment.GetContentDisposition() == "content.text");
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetContentDisposition_0200
 * @tc.name     The GetContentDisposition interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetContentDisposition_0200, Performance | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        smilAttachment.GetContentDisposition();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetContentTransferEncoding_0200
 * @tc.name     The SetContentTransferEncoding interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetContentTransferEncoding_0200, Reliability | MediumTest | Level1)
{
    std::string contentTransferEncoding = "base64";
    MmsAttachment smilAttachment;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(smilAttachment.SetContentTransferEncoding(contentTransferEncoding));
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetContentTransferEncoding_0300
 * @tc.name     The SetContentTransferEncoding interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetContentTransferEncoding_0300, Performance | MediumTest | Level1)
{
    std::string contentTransferEncoding = "base64";
    MmsAttachment smilAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        smilAttachment.SetContentTransferEncoding(contentTransferEncoding);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetContentTransferEncoding_0100
 * @tc.name     The GetContentTransferEncoding interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetContentTransferEncoding_0100, Reliability | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    std::string contentTransferEncoding = "base64";
    EXPECT_TRUE(smilAttachment.SetContentTransferEncoding(contentTransferEncoding));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(smilAttachment.GetContentTransferEncoding() == contentTransferEncoding);
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetContentTransferEncoding_0200
 * @tc.name     The GetContentTransferEncoding interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetContentTransferEncoding_0200, Performance | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        smilAttachment.GetContentTransferEncoding();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetContentType_0200
 * @tc.name     The SetContentType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetContentType_0200, Reliability | MediumTest | Level1)
{
    MmsAttachment imageAttachment;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(imageAttachment.SetContentType("image/gif"));
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetContentType_0300
 * @tc.name     The SetContentType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetContentType_0300, Performance | MediumTest | Level1)
{
    MmsAttachment imageAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        imageAttachment.SetContentType("image/gif");
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetContentType_0100
 * @tc.name     The GetContentType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetContentType_0100, Reliability | MediumTest | Level1)
{
    MmsAttachment imageAttachment;
    EXPECT_TRUE(imageAttachment.SetContentType("image/gif"));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(imageAttachment.GetContentType() == "image/gif");
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetContentType_0200
 * @tc.name     The GetContentType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetContentType_0200, Performance | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        smilAttachment.GetContentType();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetFileName_0200
 * @tc.name     The SetFileName interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetFileName_0200, Reliability | MediumTest | Level1)
{
    MmsAttachment imageAttachment;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(imageAttachment.SetFileName("content.text"));
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetFileName_0300
 * @tc.name     The SetFileName interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetFileName_0300, Performance | MediumTest | Level1)
{
    MmsAttachment imageAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        imageAttachment.SetFileName("content.text");
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetFileName_0100
 * @tc.name     The GetContentType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetFileName_0100, Reliability | MediumTest | Level1)
{
    MmsAttachment imageAttachment;
    EXPECT_TRUE(imageAttachment.SetFileName("content.text"));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(imageAttachment.GetFileName() == "content.text");
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetFileName_0200
 * @tc.name     The GetContentType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetFileName_0200, Performance | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        smilAttachment.GetFileName();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetCharSet_0100
 * @tc.name     The SetCharSet interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetCharSet_0100, Reliability | MediumTest | Level1)
{
    MmsAttachment imageAttachment;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        imageAttachment.SetCharSet(static_cast<uint32_t>(MmsCharSets::UTF_8));
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetCharSet_0200
 * @tc.name     The SetCharSet interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetCharSet_0200, Performance | MediumTest | Level1)
{
    MmsAttachment imageAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        imageAttachment.SetCharSet(static_cast<uint32_t>(MmsCharSets::UTF_8));
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetCharSet_0100
 * @tc.name     The GetCharSet interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetCharSet_0100, Reliability | MediumTest | Level1)
{
    MmsAttachment imageAttachment;
    imageAttachment.SetCharSet(static_cast<uint32_t>(MmsCharSets::UTF_8));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(imageAttachment.GetCharSet() == static_cast<uint32_t>(MmsCharSets::UTF_8));
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetCharSet_0200
 * @tc.name     The GetCharSet interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetCharSet_0200, Performance | MediumTest | Level1)
{
    MmsAttachment imageAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        imageAttachment.GetCharSet();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_IsSmilFile_0100
 * @tc.name     The IsSmilFile interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_IsSmilFile_0100, Reliability | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    const std::string filePathNameSmil = "/data/telephony/enSrc/618C0A89.smil";
    MmsAttachment smilAttachment;
    EXPECT_TRUE(smilAttachment.SetAttachmentFilePath(filePathNameSmil, true));
    // EXPECT_TRUE(smilAttachment.SetFileName("618C0A89.smil"));
    // EXPECT_TRUE(smilAttachment.SetContentId("<0000>"));
    // EXPECT_TRUE(smilAttachment.SetContentLocation("618C0A89.smil"));
    // EXPECT_TRUE(smilAttachment.SetContentType("application/smil"));
    // EXPECT_TRUE(smilAttachment.SetContentDisposition("618C0A89.smil"));
    // EXPECT_TRUE(encodeMsg.AddAttachment(smilAttachment));
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        EXPECT_TRUE(smilAttachment.IsSmilFile());
    }
}

/**
 * @tc.number   Telephony_SmsMms_IsSmilFile_0200
 * @tc.name     The IsSmilFile interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_IsSmilFile_0200, Performance | MediumTest | Level1)
{
    MmsAttachment imageAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        imageAttachment.IsSmilFile();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetDataBuffer_0200
 * @tc.name     The SetDataBuffer interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetDataBuffer_0200, Reliability | MediumTest | Level1)
{
    MmsAttachment inBuffAttachment;
    uint32_t inBuffLen = 3;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        std::unique_ptr<char[]> inBuff = std::make_unique<char[]>(inBuffLen);
        memcpy_s(inBuff.get(), inBuffLen, "123", inBuffLen);
        EXPECT_TRUE(inBuffAttachment.SetDataBuffer(std::move(inBuff), inBuffLen));
    }
}

/**
 * @tc.number   Telephony_SmsMms_SetDataBuffer_0300
 * @tc.name     The SetDataBuffer interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetDataBuffer_0300, Performance | MediumTest | Level1)
{
    MmsAttachment inBuffAttachment;
    uint32_t inBuffLen = 3;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        std::unique_ptr<char[]> inBuff = std::make_unique<char[]>(inBuffLen);
        memcpy_s(inBuff.get(), inBuffLen, "123", inBuffLen);
        inBuffAttachment.SetDataBuffer(std::move(inBuff), inBuffLen);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetDataBuffer_0100
 * @tc.name     The GetDataBuffer interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Reliability test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetDataBuffer_0100, Reliability | MediumTest | Level1)
{
    MmsAttachment inBuffAttachment;
    uint32_t inBuffLen = 3;
    char str[] = "123";
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        std::unique_ptr<char[]> inBuff = std::make_unique<char[]>(inBuffLen);
        memcpy_s(inBuff.get(), inBuffLen, "123", inBuffLen);
        EXPECT_TRUE(inBuffAttachment.SetDataBuffer(std::move(inBuff), inBuffLen));
        std::unique_ptr<char[]> buff = inBuffAttachment.GetDataBuffer(inBuffLen);
        std::string buffData(buff.get(), inBuffLen);
        EXPECT_TRUE(buffData == str);
    }
}

/**
 * @tc.number   Telephony_SmsMms_GetDataBuffer_0200
 * @tc.name     The GetDataBuffer interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetDataBuffer_0200, Performance | MediumTest | Level1)
{
    MmsAttachment imageAttachment;
    uint32_t inBuffLen = 0;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        imageAttachment.GetDataBuffer(inBuffLen);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}
