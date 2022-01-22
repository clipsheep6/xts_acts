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
#include <cmath>
#include "string_ex.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace Telephony;
using namespace OHOS::Telephony::SmsManager;
using namespace SmsManager;
using namespace OHOS::Telephony;

/**
 * @tc.number   Telephony_SmsMms_DelSimMessage_0100
 * @tc.name     When SLOTID is the correct value,Deletes a text message from the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_DelSimMessage_0100, Function | MediumTest | Level3)
{
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    bool isAddSms = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(isAddSms);
    std::vector<OHOS::Telephony::ShortMessage> beforSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(beforSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = beforSmsRecord[0];
    bool result = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, addMessages.GetIndexOnSim());
    ASSERT_TRUE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_TRUE(curSmsRecord.empty());
}

/**
 * @tc.number   Telephony_SmsMms_DelSimMessage_0200
 * @tc.name     When SLOTID is the wrong value,Deletes a text message from the SIM card fail
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_DelSimMessage_0200, Function | MediumTest | Level3)
{
    bool result = g_smsClientPtr->GetPtr()->DelSimMessage(ERROR_SLOT_ID, 0);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_SmsMms_DelSimMessage_0300
 * @tc.name     When the value corresponding to msgIndex is invalid,Deletes a text message from the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_DelSimMessage_0300, Function | MediumTest | Level3)
{
    bool result = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, 0);
    ASSERT_TRUE(result);
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_TRUE(curSmsRecord.empty());
}

/**
 * @tc.number   Telephony_SmsMms_DelSimMessage_0400
 * @tc.name     When the value corresponding to msgIndex is invalid,Deletes a text message from the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_DelSimMessage_0400, Function | MediumTest | Level3)
{
    uint32_t addIndex = UINT32_MAX;
    bool result = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, addIndex);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_SmsMms_GetAllSimMessages_0100
 * @tc.name     When SLOTID is the correct value,Query all SMS records of the SIM card.
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_GetAllSimMessages_0100, Function | MediumTest | Level3)
{
    std::u16string pdu = CORRECT_SMS_PDU;
    std::u16string smsc = u"";
    bool result = g_smsClientPtr->GetPtr()->AddSimMessage(
        SLOT_ID_0, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(result);
    std::vector<OHOS::Telephony::ShortMessage> addSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_FALSE(addSmsRecord.empty());
    OHOS::Telephony::ShortMessage addMessages = addSmsRecord[0];
    std::string getPdu = (StringUtils::StringToHex(addMessages.GetPdu()));
    std::u16string originPdu = InterceptionPdu(StringUtils::ToUtf16(getPdu), PDU_LENGTH[CORRECT_SMS_PDU]);
    bool isAdd =
        (originPdu == pdu && addMessages.GetIccMessageStatus() ==
                               OHOS::Telephony::ShortMessage::SmsSimMessageStatus::SMS_SIM_MESSAGE_STATUS_SENT);
    ASSERT_TRUE(isAdd);
    bool isDelete = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, addMessages.GetIndexOnSim());
    ASSERT_TRUE(isDelete);
    std::vector<OHOS::Telephony::ShortMessage> delSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    ASSERT_TRUE(delSmsRecord.empty());
}

/**
 * @tc.number   Telephony_SmsMms_GetAllSimMessages_0200
 * @tc.name     When "SLOTID" is an error value,Failed to query all SMS records for SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SimSmsManagerTest, Telephony_SmsMms_GetAllSimMessages_0200, Function | MediumTest | Level3)
{
    std::vector<OHOS::Telephony::ShortMessage> curSmsRecord =
        g_smsClientPtr->GetPtr()->GetAllSimMessages(ERROR_SLOT_ID);
    ASSERT_TRUE(curSmsRecord.empty());
}

/**
 * @tc.number   Telephony_SmsMms_SetSmscAddr_0100
 * @tc.name     When SLOTID is the correct value,Set up the SMS service address.
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_SetSmscAddr_0100, Function | MediumTest | Level3)
{
    std::u16string beforeSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_0);
    std::u16string newSmsc = StringUtils::ToUtf16(OTHER_SMSC_NUMBER);
    if (beforeSmsc == newSmsc) {
        newSmsc = StringUtils::ToUtf16(USABLE_SMSC_NUMBER);
    }
    bool result = g_smsClientPtr->GetPtr()->SetSmscAddr(SLOT_ID_0, newSmsc);
    ASSERT_TRUE(result);
    std::u16string curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_0);
    ASSERT_TRUE(curSmsc == newSmsc);
}

/**
 * @tc.number   Telephony_SmsMms_SetSmscAddr_0200
 * @tc.name     When "SLOTID" is an error value,Failed to set short message service address
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_SetSmscAddr_0200, Function | MediumTest | Level3)
{
    std::u16string newSmsc = StringUtils::ToUtf16(USABLE_SMSC_NUMBER);
    bool result = g_smsClientPtr->GetPtr()->SetSmscAddr(ERROR_SLOT_ID, newSmsc);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetSmscAddr_0300
 * @tc.name     Set the value of “scAddr” to null,Failed to set short message service address
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_SetSmscAddr_0300, Function | MediumTest | Level3)
{
    std::u16string beforeSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_0);
    std::u16string newSmsc = u"";
    bool result = g_smsClientPtr->GetPtr()->SetSmscAddr(SLOT_ID_0, newSmsc);
    ASSERT_FALSE(result);
    std::u16string curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_0);
    ASSERT_TRUE(beforeSmsc == curSmsc);
}

/**
 * @tc.number   Telephony_SmsMms_SetSmscAddr_0400
 * @tc.name     Set scAddr to a pure number of the maximum length (20),
 *              the ADDRESS of the SMS center service is set successfully
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_SetSmscAddr_0400, Function | MediumTest | Level3)
{
    std::u16string beforeSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_0);
    std::u16string newSmsc = u"01234567890123456789";
    bool result = g_smsClientPtr->GetPtr()->SetSmscAddr(SLOT_ID_0, newSmsc);
    ASSERT_TRUE(result);
    std::u16string curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_0);
    ASSERT_TRUE(newSmsc == curSmsc);
}

/**
 * @tc.number   Telephony_SmsMms_SetSmscAddr_0500
 * @tc.name     Sets the “scAddr” length to exceed the maximum（20）,Failed to set short message service address
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_SetSmscAddr_0500, Function | MediumTest | Level3)
{
    std::u16string beforeSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_0);
    std::u16string newSmsc = u"012345678901234567890";
    bool result = g_smsClientPtr->GetPtr()->SetSmscAddr(SLOT_ID_0, newSmsc);
    ASSERT_FALSE(result);
    std::u16string curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_0);
    ASSERT_TRUE(beforeSmsc == curSmsc);
}

/**
 * @tc.number   Telephony_SmsMms_SetSmscAddr_0600
 * @tc.name     Set “scAddr” to Chinese ,Failed to set short message service address
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_SetSmscAddr_0600, Function | MediumTest | Level3)
{
    std::u16string beforeSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_0);
    std::u16string newSmsc = u"短信中心服务地址";
    bool result = g_smsClientPtr->GetPtr()->SetSmscAddr(SLOT_ID_0, newSmsc);
    ASSERT_FALSE(result);
    std::u16string curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_0);
    ASSERT_TRUE(beforeSmsc == curSmsc);
}

/**
 * @tc.number   Telephony_SmsMms_SetSmscAddr_0700
 * @tc.name     Set “scAddr” to English ,Failed to set short message service address
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_SetSmscAddr_0700, Function | MediumTest | Level3)
{
    std::u16string beforeSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_0);
    std::u16string newSmsc = u"zsAS";
    bool result = g_smsClientPtr->GetPtr()->SetSmscAddr(SLOT_ID_0, newSmsc);
    ASSERT_FALSE(result);
    std::u16string curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_0);
    ASSERT_TRUE(beforeSmsc == curSmsc);
}

/**
 * @tc.number   Telephony_SmsMms_SetSmscAddr_0800
 * @tc.name     Set “scAddr” to  special character ,Failed to set short message service address
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_SetSmscAddr_0800, Function | MediumTest | Level3)
{
    std::u16string beforeSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_0);
    std::u16string newSmsc = u"@！#￥%……&*";
    bool result = g_smsClientPtr->GetPtr()->SetSmscAddr(SLOT_ID_0, newSmsc);
    ASSERT_FALSE(result);
    std::u16string curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_0);
    ASSERT_TRUE(beforeSmsc == curSmsc);
}

/**
 * @tc.number   Telephony_SmsMms_SetSmscAddr_0900
 * @tc.name     Set “scAddr” to  special Mixed character ,Failed to set short message service address
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_SetSmscAddr_0900, Function | MediumTest | Level3)
{
    std::u16string beforeSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_0);
    std::u16string newSmsc = u"1Zz短信@！#￥%……&*+";
    bool result = g_smsClientPtr->GetPtr()->SetSmscAddr(SLOT_ID_0, newSmsc);
    ASSERT_FALSE(result);
    std::u16string curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_0);
    ASSERT_TRUE(beforeSmsc == curSmsc);
}

/**
 * @tc.number   Telephony_SmsMms_GetSmscAddr_0100
 * @tc.name     When SLOTID is the correct value,Get the SMS center service address.
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_GetSmscAddr_0100, Function | MediumTest | Level3)
{
    std::u16string newSmsc = StringUtils::ToUtf16(USABLE_SMSC_NUMBER);
    bool result = g_smsClientPtr->GetPtr()->SetSmscAddr(SLOT_ID_0, newSmsc);
    ASSERT_TRUE(result);
    std::u16string curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_0);
    ASSERT_TRUE(curSmsc == newSmsc);
}

/**
 * @tc.number   Telephony_SmsMms_GetSmscAddr_0200
 * @tc.name     When "SLOTID" is an error value,Failed to get SMS service address
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_GetSmscAddr_0200, Function | MediumTest | Level3)
{
    std::u16string curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(ERROR_SLOT_ID);
    ASSERT_TRUE(curSmsc.empty());
}

/**
 * @tc.number   Telephony_SmsMms_SetCBConfig_0100
 * @tc.name     Set "fromMsgId" to minimum(0x0000) and "toMsgId" to minimum(0x0000) for cell broadcast,
 *              Configure a cell broadcast for an identity.
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_SetCBConfig_0100, Function | MediumTest | Level3)
{
    uint8_t netType = 1;
    uint32_t fromMsgId = 0x0000;
    uint32_t toMsgId = 0x0000;
    bool enable = true;
    bool result = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_0, enable, fromMsgId, toMsgId, netType);
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBConfig_0200
 * @tc.name     Set "fromMsgId" to minimum(0x0000) and "toMsgId" to maximum(0xFFFF) for cell broadcast,
 *              Configure a cell broadcast for an identity.
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_SetCBConfig_0200, Function | MediumTest | Level3)
{
    uint8_t netType = 1;
    uint32_t fromMsgId = 0;
    uint32_t toMsgId = 0xFFFF;
    bool enable = true;
    bool result = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_0, enable, fromMsgId, toMsgId, netType);
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBConfig_0300
 * @tc.name     Set "fromMsgId" to minimum(0x0000) and "toMsgId" to maximum(0xFFFF) for cell broadcast,
 *              Set the enable to false,Configure a cell broadcast for an identity.
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_SetCBConfig_0300, Function | MediumTest | Level3)
{
    uint8_t netType = 1;
    uint32_t fromMsgId = 0;
    uint32_t toMsgId = 0xFFFF;
    bool enable = false;
    bool result = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_0, enable, fromMsgId, toMsgId, netType);
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBConfig_0400
 * @tc.name     Set "fromMsgId" to minimum (0x0000) and "toMsgId" to
 *              Is greater than maximum (0xFFFF + 1) for cell broadcast,Configuration failed
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_SetCBConfig_0400, Function | MediumTest | Level3)
{
    uint8_t netType = 1;
    uint32_t fromMsgId = 0;
    uint32_t toMsgId = 0xFFFF + 1;
    bool enable = true;
    bool result = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_0, enable, fromMsgId, toMsgId, netType);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBConfig_0500
 * @tc.name     Set "fromMsgId" to Less than 0 (-1) and "toMsgId" to  maximum (0xFFFF) for cell broadcast,
 *              Configuration failed
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_SetCBConfig_0500, Function | MediumTest | Level3)
{
    uint8_t netType = 1;
    uint32_t fromMsgId = -1;
    uint32_t toMsgId = 0xFFFF;
    bool enable = true;
    bool result = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_0, enable, fromMsgId, toMsgId, netType);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBConfig_0600
 * @tc.name     When "SLOTID" is an error value,Failed to set up cell broadcast
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_SetCBConfig_0600, Function | MediumTest | Level3)
{
    uint8_t netType = 1;
    uint32_t fromMsgId = -1;
    uint32_t toMsgId = 0xFFFF;
    bool enable = true;
    bool result = g_smsClientPtr->GetPtr()->SetCBConfig(ERROR_SLOT_ID, enable, fromMsgId, toMsgId, netType);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBConfig_0700
 * @tc.name     Enable flag parameter "enable" to true, then set to true,Configure a cell broadcast for an identity.
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_SetCBConfig_0700, Function | MediumTest | Level3)
{
    uint8_t netType = 1;
    bool enable = true;
    bool beforeResult = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_0, enable, 0, 0xFFFF, netType);
    ASSERT_TRUE(beforeResult);
    bool curResult = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_0, enable, 0, 0xFFFF, netType);
    ASSERT_TRUE(curResult);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBConfig_0800
 * @tc.name     Enable flag parameter "enable" to false, then set to false,Configure a cell broadcast for an identity.
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_SetCBConfig_0800, Function | MediumTest | Level3)
{
    uint8_t netType = 1;
    bool enable = false;
    bool initResult = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_0, enable, 0, 0xFFFF, netType);
    ASSERT_TRUE(initResult);
    bool curResult = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_0, false, 0, 0xFFFF, netType);
    ASSERT_TRUE(curResult);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBConfig_0900
 * @tc.name     Enable flag parameter "enable" to true, then set to false,Configure a cell broadcast for an identity.
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_SetCBConfig_0900, Function | MediumTest | Level3)
{
    uint8_t netType = 1;
    bool enable = true;
    bool beforeResult = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_0, enable, 0, 0xFFFF, netType);
    ASSERT_TRUE(beforeResult);
    enable = false;
    bool curResult = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_0, enable, 0, 0xFFFF, netType);
    ASSERT_TRUE(curResult);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBConfig_1000
 * @tc.name     Enable flag parameter "enable" to false, then set to true,Configure a cell broadcast for an identity.
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_SetCBConfig_1000, Function | MediumTest | Level3)
{
    uint8_t netType = 1;
    bool enable = false;
    bool curResult = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_0, enable, 0, 0xFFFF, netType);
    ASSERT_TRUE(curResult);
    enable = true;
    bool result = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_0, enable, 0, 0xFFFF, netType);
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBConfig_1100
 * @tc.name     Set the network standard parameter "netType" to 2(Cdma),Configuration failed
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_SetCBConfig_1100, Function | MediumTest | Level3)
{
    uint8_t netType = 2;
    uint32_t fromMsgId = 0;
    uint32_t toMsgId = 0xFFFF;
    bool enable = true;
    bool result = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_0, enable, fromMsgId, toMsgId, netType);
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBConfig_1200
 * @tc.name     Set the network standard parameter "netType" to an error value,
 *              Configuration failed
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_SetCBConfig_1200, Function | MediumTest | Level3)
{
    uint8_t netType = 3;
    bool result = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_0, true, 0, 0xFFFF, netType);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetDefaultSmsSlotId_0100
 * @tc.name     Set the default card slot ID for sending SMS
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_SetDefaultSmsSlotId_0100, Function | MediumTest | Level3)
{
    int beforeSlotId = g_smsClientPtr->GetPtr()->GetDefaultSmsSlotId();
    int slotId = SLOT_ID_1;
    if (slotId == beforeSlotId) {
        slotId = SLOT_ID_2;
    }
    bool isSet = g_smsClientPtr->GetPtr()->SetDefaultSmsSlotId(slotId);
    ASSERT_TRUE(isSet);
    int curSlotId = g_smsClientPtr->GetPtr()->GetDefaultSmsSlotId();
    ASSERT_TRUE(curSlotId == slotId);
}

/**
 * @tc.number   Telephony_SmsMms_SetDefaultSmsSlotId_0200
 * @tc.name     The default card slot ID is set to an error value,Failed to set send SMS card slot ID
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_SetDefaultSmsSlotId_0200, Function | MediumTest | Level3)
{
    int beforeSlotId = g_smsClientPtr->GetPtr()->GetDefaultSmsSlotId();
    int errorSlotId = ERROR_SLOT_ID;
    bool isSet = g_smsClientPtr->GetPtr()->SetDefaultSmsSlotId(errorSlotId);
    ASSERT_FALSE(isSet);
    int curSlotId = g_smsClientPtr->GetPtr()->GetDefaultSmsSlotId();
    ASSERT_TRUE(curSlotId == beforeSlotId);
}

/**
 * @tc.number   Telephony_SmsMms_GetDefaultSmsSlotId_0100
 * @tc.name     Set the default card slot ID for sending SMS
 * @tc.desc     Function test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_GetDefaultSmsSlotId_0100, Function | MediumTest | Level3)
{
    int curSlotId = g_smsClientPtr->GetPtr()->GetDefaultSmsSlotId();
    ASSERT_TRUE(curSlotId == SLOT_ID_0);
}