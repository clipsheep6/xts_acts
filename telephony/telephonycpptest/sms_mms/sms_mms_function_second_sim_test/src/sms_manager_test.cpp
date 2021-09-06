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
HWTEST_F(SmsManagerTest, Telephony_SmsMms_DelSimMessage_0100, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    int addIndex = 0;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            addIndex = i;
            break;
        }
    }
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        std::u16string pdu = RECEIVE_SMS_PDU;
        std::u16string smsc = u"";
        bool isAdd = g_smsClientPtr->GetPtr()->AddSimMessage(
            SLOT_ID_1, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
        if (isAdd) {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }

    bool result = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_1, addIndex);
    ASSERT_TRUE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = (curSmsRecord[addIndex] == INVALID_SMS_VALUES || curSmsRecord[addIndex].empty());
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_DelSimMessage_0200
 * @tc.name     When SLOTID is the wrong value,Deletes a text message from the SIM card fail
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_DelSimMessage_0200, Function | MediumTest | Level3)
{
    bool result = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_0, 0);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_SmsMms_DelSimMessage_0300
 * @tc.name     When the value corresponding to msgIndex is invalid,Deletes a text message from the SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_DelSimMessage_0300, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    int addIndex = 0;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            addIndex = i;
            break;
        }
    }
    bool result = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_1, addIndex);
    ASSERT_TRUE(result);
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = (curSmsRecord[addIndex] == INVALID_SMS_VALUES || curSmsRecord[addIndex].empty());
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_GetAllSimMessages_0100
 * @tc.name     When SLOTID is the correct value,Query all SMS records of the SIM card.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetAllSimMessages_0100, Function | MediumTest | Level3)
{
    std::vector<std::u16string> newSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isGet = true;
    if (newSmsRecord.empty()) {
        isGet = false;
    }
    ASSERT_TRUE(isGet);
}

/**
 * @tc.number   Telephony_SmsMms_GetAllSimMessages_0200
 * @tc.name     When "SLOTID" is an error value,Failed to query all SMS records for SIM card
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetAllSimMessages_0200, Function | MediumTest | Level3)
{
    std::vector<std::u16string> newSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_0);
    bool isGet = true;
    if (newSmsRecord.empty()) {
        isGet = false;
    }
    ASSERT_FALSE(isGet);
}

/**
 * @tc.number   Telephony_SmsMms_GetAllSimMessages_0300
 * @tc.name     Add SMS, get all SMS and include new SMS
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetAllSimMessages_0300, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            addIndex = i;
            break;
        }
    }
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        std::u16string pdu = RECEIVE_SMS_PDU;
        std::u16string smsc = u"";
        bool isAdd = g_smsClientPtr->GetPtr()->AddSimMessage(
            SLOT_ID_1, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
        if (isAdd) {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = (curSmsRecord[addIndex] != INVALID_SMS_VALUES && !curSmsRecord[addIndex].empty());
    ASSERT_TRUE(isThere);
}

/**
 * @tc.number   Telephony_SmsMms_GetAllSimMessages_0400
 * @tc.name     Delete the SMS, then get all the SMS
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetAllSimMessages_0400, Function | MediumTest | Level3)
{
    std::vector<std::u16string> beforeSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    std::u16string pdu = RECEIVE_SMS_PDU;
    std::u16string smsc = u"";
    int addIndex = 0;
    for (uint i = 0; i < beforeSmsRecord.size(); ++i) {
        if (beforeSmsRecord[i] == INVALID_SMS_VALUES || beforeSmsRecord[i].empty()) {
            addIndex = i;
            break;
        }
    }
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        std::u16string pdu = RECEIVE_SMS_PDU;
        std::u16string smsc = u"";
        bool isAdd = g_smsClientPtr->GetPtr()->AddSimMessage(
            SLOT_ID_1, smsc, pdu, OHOS::Telephony::ISmsServiceInterface::SimMessageStatus::SIM_MESSAGE_STATUS_READ);
        if (isAdd) {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    std::vector<std::u16string> curSmsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool isThere = (curSmsRecord[addIndex] != INVALID_SMS_VALUES && !curSmsRecord[addIndex].empty());
    ASSERT_TRUE(isThere);
    bool isDelete = g_smsClientPtr->GetPtr()->DelSimMessage(SLOT_ID_1, addIndex);
    ASSERT_TRUE(isDelete);
    std::vector<std::u16string> smsRecord = g_smsClientPtr->GetPtr()->GetAllSimMessages(SLOT_ID_1);
    bool result = (smsRecord[addIndex] == INVALID_SMS_VALUES || smsRecord[addIndex].empty());
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetSmscAddr_0100
 * @tc.name     When SLOTID is the correct value,Set up the SMS service address.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetSmscAddr_0100, Function | MediumTest | Level3)
{
    std::u16string beforeSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_1);
    std::u16string newSmsc = OTHER_SMSC_NUMBER;
    if (beforeSmsc == newSmsc) {
        newSmsc = USABLE_SMSC_NUMBER;
    }
    bool result = g_smsClientPtr->GetPtr()->SetSmscAddr(SLOT_ID_1, newSmsc);
    ASSERT_TRUE(result);
    std::u16string curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_1);
    bool isSetScAddr = false;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        if (curSmsc.empty()) {
            curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_1);
        } else if (curSmsc == newSmsc) {
            isSetScAddr = true;
            break;
        } else {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    ASSERT_TRUE(isSetScAddr);
}

/**
 * @tc.number   Telephony_SmsMms_SetSmscAddr_0200
 * @tc.name     When "SLOTID" is an error value,Failed to set short message service address
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetSmscAddr_0200, Function | MediumTest | Level3)
{
    std::u16string newSmsc = USABLE_SMSC_NUMBER;
    bool result = g_smsClientPtr->GetPtr()->SetSmscAddr(SLOT_ID_0, newSmsc);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetSmscAddr_0300
 * @tc.name     Set the value of “scAddr” to correct value ,Set up the SMS service address.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetSmscAddr_0300, Function | MediumTest | Level3)
{
    std::u16string beforeSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_1);
    std::u16string newSmsc = OTHER_SMSC_NUMBER;
    if (beforeSmsc == newSmsc) {
        newSmsc = USABLE_SMSC_NUMBER;
    }
    bool result = g_smsClientPtr->GetPtr()->SetSmscAddr(SLOT_ID_1, newSmsc);
    ASSERT_TRUE(result);
    std::u16string curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_1);
    bool isSetScAddr = false;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        if (curSmsc.empty()) {
            curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_1);
        } else if (curSmsc == newSmsc) {
            isSetScAddr = true;
            break;
        } else {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    ASSERT_TRUE(isSetScAddr);
}

/**
 * @tc.number   Telephony_SmsMms_SetSmscAddr_0400
 * @tc.name     Set the value of “scAddr” to null,Failed to set short message service address
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetSmscAddr_0400, Function | MediumTest | Level3)
{
    std::u16string beforeSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_1);
    std::u16string newSmsc = u"";
    bool result = g_smsClientPtr->GetPtr()->SetSmscAddr(SLOT_ID_1, newSmsc);
    ASSERT_FALSE(result);
    std::u16string curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_1);
    bool isSetScAddr = (beforeSmsc == curSmsc);
    ASSERT_TRUE(isSetScAddr);
}

/**
 * @tc.number   Telephony_SmsMms_SetSmscAddr_0500
 * @tc.name     Sets the “scAddr” length to exceed the maximum（20）,Failed to set short message service address
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetSmscAddr_0500, Function | MediumTest | Level3)
{
    std::u16string beforeSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_1);
    std::u16string newSmsc(SMSC_MAX + 2, '0');
    bool result = g_smsClientPtr->GetPtr()->SetSmscAddr(SLOT_ID_1, newSmsc);
    ASSERT_FALSE(result);
    std::u16string curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_1);
    bool isSetScAddr = (beforeSmsc == curSmsc);
    ASSERT_TRUE(isSetScAddr);
}

/**
 * @tc.number   Telephony_SmsMms_SetSmscAddr_0600
 * @tc.name     Set “scAddr” to Chinese ,Set up the SMS service address.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetSmscAddr_0600, Function | MediumTest | Level3)
{
    std::u16string beforeSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_1);
    std::u16string newSmsc = u"中文文本";
    if (beforeSmsc == newSmsc) {
        newSmsc = u"中文文本二";
    }
    bool result = g_smsClientPtr->GetPtr()->SetSmscAddr(SLOT_ID_1, newSmsc);
    ASSERT_FALSE(result);
    std::u16string curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_1);
    bool isSetScAddr = false;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        if (curSmsc.empty()) {
            curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_1);
        } else if (curSmsc == beforeSmsc) {
            isSetScAddr = true;
            break;
        } else {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    ASSERT_TRUE(isSetScAddr);
}

/**
 * @tc.number   Telephony_SmsMms_SetSmscAddr_0700
 * @tc.name     Set “scAddr” to English ,Set up the SMS service address.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetSmscAddr_0700, Function | MediumTest | Level3)
{
    std::u16string beforeSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_1);
    std::u16string newSmsc = u"English text";
    if (beforeSmsc == newSmsc) {
        newSmsc = u"English";
    }
    bool result = g_smsClientPtr->GetPtr()->SetSmscAddr(SLOT_ID_1, newSmsc);
    ASSERT_FALSE(result);
    std::u16string curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_1);
    bool isSetScAddr = false;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        if (curSmsc.empty()) {
            curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_1);
        } else if (curSmsc == beforeSmsc) {
            isSetScAddr = true;
            break;
        } else {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    ASSERT_TRUE(isSetScAddr);
}

/**
 * @tc.number   Telephony_SmsMms_SetSmscAddr_0800
 * @tc.name     Set “scAddr” to  special character ,Set up the SMS service address.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetSmscAddr_0800, Function | MediumTest | Level3)
{
    std::u16string beforeSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_1);
    std::u16string newSmsc = u"<>?^&*$";
    if (beforeSmsc == newSmsc) {
        newSmsc = u"<>?^&*$???";
    }
    bool result = g_smsClientPtr->GetPtr()->SetSmscAddr(SLOT_ID_1, newSmsc);
    ASSERT_FALSE(result);
    std::u16string curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_1);
    bool isSetScAddr = false;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        if (curSmsc.empty()) {
            curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_1);
        } else if (curSmsc == beforeSmsc) {
            isSetScAddr = true;
            break;
        } else {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    ASSERT_TRUE(isSetScAddr);
}

/**
 * @tc.number   Telephony_SmsMms_SetSmscAddr_0900
 * @tc.name     Set “scAddr” to  special Mixed character ,Set up the SMS service address.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetSmscAddr_0900, Function | MediumTest | Level3)
{
    std::u16string beforeSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_1);
    std::u16string newSmsc = u"Eng中文*^*(12?";
    if (beforeSmsc == newSmsc) {
        newSmsc = u"#%@中文Eng(12?";
    }
    bool result = g_smsClientPtr->GetPtr()->SetSmscAddr(SLOT_ID_1, newSmsc);
    ASSERT_FALSE(result);
    std::u16string curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_1);
    bool isSetScAddr = false;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        if (curSmsc.empty()) {
            curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_1);
        } else if (curSmsc == beforeSmsc) {
            isSetScAddr = true;
            break;
        } else {
            break;
        }
        ASSERT_NE(i, LOOP_MULTITUDE_NUMBER);
    }
    ASSERT_TRUE(isSetScAddr);
}

/**
 * @tc.number   Telephony_SmsMms_GetSmscAddr_0100
 * @tc.name     When SLOTID is the correct value,Get the SMS center service address.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetSmscAddr_0100, Function | MediumTest | Level3)
{
    std::u16string newSmsc = USABLE_SMSC_NUMBER;
    bool result = g_smsClientPtr->GetPtr()->SetSmscAddr(SLOT_ID_1, newSmsc);
    ASSERT_TRUE(result);
    std::u16string curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_1);
    bool isGetScAddr = (curSmsc == newSmsc);
    ASSERT_TRUE(isGetScAddr);
}

/**
 * @tc.number   Telephony_SmsMms_GetSmscAddr_0200
 * @tc.name     When "SLOTID" is an error value,Failed to get SMS service address
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetSmscAddr_0200, Function | MediumTest | Level3)
{
    std::u16string curSmsc = g_smsClientPtr->GetPtr()->GetSmscAddr(SLOT_ID_0);
    bool isGetScAddr = false;
    if (curSmsc.empty()) {
        isGetScAddr = false;
    }
    ASSERT_FALSE(isGetScAddr);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBConfig_0100
 * @tc.name     Set "msgId" for Cell Broadcast to Minimum (0x0000),Configure a cell broadcast for an identity.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetCBConfig_0100, Function | MediumTest | Level3)
{
    uint32_t msgIdMin = 0;
    bool result = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_1, true, msgIdMin, 1);
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBConfig_0200
 * @tc.name     Set "msgId" for Cell Broadcast to maximum  (0xFFFF),Configure a cell broadcast for an identity.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetCBConfig_0200, Function | MediumTest | Level3)
{
    uint32_t msgIdMax = 0xFFFF;
    bool result = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_1, true, msgIdMax, 1);
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBConfig_0300
 * @tc.name     Set cell broadcast msgId above maximum (0xFFFF + 1),Failed to set up cell broadcast
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetCBConfig_0300, Function | MediumTest | Level3)
{
    uint32_t msgId = 0xFFFF + 1;
    bool result = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_1, true, msgId, 1);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBConfig_0400
 * @tc.name     Set the unit broadcast msgId to be less than 0 (-1),Failed to set up cell broadcast
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetCBConfig_0400, Function | MediumTest | Level3)
{
    uint32_t msgId = -1;
    bool result = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_1, true, msgId, 1);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBConfig_0500
 * @tc.name     When "SLOTID" is an error value,Failed to set up cell broadcast
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetCBConfig_0500, Function | MediumTest | Level3)
{
    bool result = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_0, true, 0, 1);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBConfig_0600
 * @tc.name     Enable flag parameter "enable" to true, then set to true,Configure a cell broadcast for an identity.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetCBConfig_0600, Function | MediumTest | Level3)
{
    bool enable = true;
    bool beforeResult = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_1, enable, 0, 1);
    ASSERT_TRUE(beforeResult);
    bool curResult = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_1, enable, 0, 1);
    ASSERT_TRUE(curResult);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBConfig_0700
 * @tc.name     Enable flag parameter "enable" to false, then set to false,Configure a cell broadcast for an identity.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetCBConfig_0700, Function | MediumTest | Level3)
{
    bool enable = false;
    bool initResult = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_1, enable, 0, 1);
    ASSERT_TRUE(initResult);
    bool curResult = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_1, enable, 0, 1);
    ASSERT_TRUE(curResult);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBConfig_0800
 * @tc.name     Enable flag parameter "enable" to true, then set to false,Configure a cell broadcast for an identity.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetCBConfig_0800, Function | MediumTest | Level3)
{
    bool enable = true;
    bool beforeResult = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_1, enable, 0, 1);
    ASSERT_TRUE(beforeResult);
    enable = false;
    bool curResult = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_1, enable, 0, 1);
    ASSERT_TRUE(curResult);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBConfig_0900
 * @tc.name     Enable flag parameter "enable" to false, then set to true,Configure a cell broadcast for an identity.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetCBConfig_0900, Function | MediumTest | Level3)
{
    bool enable = false;
    bool beforeResult = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_1, enable, 0, 1);
    ASSERT_TRUE(beforeResult);
    enable = true;
    bool curResult = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_1, enable, 0, 1);
    ASSERT_TRUE(curResult);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBConfig_1000
 * @tc.name     Set the network standard parameter "netType" to 1(Gsm),Configure a cell broadcast for an identity.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetCBConfig_1000, Function | MediumTest | Level3)
{
    uint8_t netType = 1;
    bool result = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_1, true, 0, netType);
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBConfig_1100
 * @tc.name     Set the network standard parameter "netType" to 2(Cdma),Configure a cell broadcast for an identity.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetCBConfig_1100, Function | MediumTest | Level3)
{
    uint8_t netType = 2;
    bool result = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_1, true, 0, netType);
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBConfig_1200
 * @tc.name     Set the network standard parameter "netType" to an error value,
 *              Configure a cell broadcast for an identity.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetCBConfig_1200, Function | MediumTest | Level3)
{
    uint8_t netType = 3;
    bool result = g_smsClientPtr->GetPtr()->SetCBConfig(SLOT_ID_1, true, 0, netType);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBRangeConfig_0100
 * @tc.name     Set "fromMsgId" to minimum(0x0000) and "toMsgId" to maximum(0xFFFF) for cell broadcast,
 *              Configure a cell broadcast for an identity.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetCBRangeConfig_0100, Function | MediumTest | Level3)
{
    uint32_t fromMsgId = 0;
    uint32_t toMsgId = 0xFFFF;
    bool result = g_smsClientPtr->GetPtr()->SetCBRangeConfig(SLOT_ID_1, true, fromMsgId, toMsgId, 1);
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBRangeConfig_0200
 * @tc.name     Set "fromMsgId" to minimum (0x0000) and "toMsgId" to  
 *              Is greater than maximum (0xFFFF + 1) for cell broadcast,Configuration failed
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetCBRangeConfig_0200, Function | MediumTest | Level3)
{
    uint32_t fromMsgId = 0;
    uint32_t toMsgId = 0xFFFF + 1;
    bool result = g_smsClientPtr->GetPtr()->SetCBRangeConfig(SLOT_ID_1, true, fromMsgId, toMsgId, 1);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBRangeConfig_0300
 * @tc.name     Set "fromMsgId" to Less than 0 (-1) and "toMsgId" to  maximum (0xFFFF) for cell broadcast,
 *              Configuration failed
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetCBRangeConfig_0300, Function | MediumTest | Level3)
{
    uint32_t fromMsgId = -1;
    uint32_t toMsgId = 0xFFFF;
    bool result = g_smsClientPtr->GetPtr()->SetCBRangeConfig(SLOT_ID_1, true, fromMsgId, toMsgId, 1);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBRangeConfig_0400
 * @tc.name     When "SLOTID" is an error value,Failed to set up cell broadcast
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetCBRangeConfig_0400, Function | MediumTest | Level3)
{
    bool result = g_smsClientPtr->GetPtr()->SetCBRangeConfig(SLOT_ID_0, true, 0, 0xFFFF, 1);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBRangeConfig_0500
 * @tc.name     Enable flag parameter "enable" to true, then set to true,Configure a cell broadcast for an identity.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetCBRangeConfig_0500, Function | MediumTest | Level3)
{
    bool enable = true;
    bool beforeResult = g_smsClientPtr->GetPtr()->SetCBRangeConfig(SLOT_ID_1, enable, 0, 0xFFFF - 1, 1);
    ASSERT_TRUE(beforeResult);
    bool curResult = g_smsClientPtr->GetPtr()->SetCBRangeConfig(SLOT_ID_1, enable, 0, 0xFFFF - 1, 1);
    ASSERT_TRUE(curResult);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBRangeConfig_0600
 * @tc.name     Enable flag parameter "enable" to false, then set to false,Configure a cell broadcast for an identity.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetCBRangeConfig_0600, Function | MediumTest | Level3)
{
    bool enable = false;
    bool initResult = g_smsClientPtr->GetPtr()->SetCBRangeConfig(SLOT_ID_1, enable, 0, 0xFFFF - 1, 1);
    ASSERT_TRUE(initResult);
    bool curResult = g_smsClientPtr->GetPtr()->SetCBRangeConfig(SLOT_ID_1, false, 0, 0xFFFF - 1, 1);
    ASSERT_TRUE(curResult);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBRangeConfig_0700
 * @tc.name     Enable flag parameter "enable" to true, then set to false,Configure a cell broadcast for an identity.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetCBRangeConfig_0700, Function | MediumTest | Level3)
{
    bool enable = true;
    bool beforeResult = g_smsClientPtr->GetPtr()->SetCBRangeConfig(SLOT_ID_1, enable, 0, 0xFFFF - 1, 1);
    ASSERT_TRUE(beforeResult);
    enable = false;
    bool curResult = g_smsClientPtr->GetPtr()->SetCBRangeConfig(SLOT_ID_1, enable, 0, 0xFFFF - 1, 1);
    ASSERT_TRUE(curResult);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBRangeConfig_0800
 * @tc.name     Enable flag parameter "enable" to false, then set to true,Configure a cell broadcast for an identity.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetCBRangeConfig_0800, Function | MediumTest | Level3)
{
    bool enable = false;
    bool curResult = g_smsClientPtr->GetPtr()->SetCBRangeConfig(SLOT_ID_1, enable, 0, 0xFFFF - 1, 1);
    ASSERT_TRUE(curResult);;
    enable = true;
    bool result = g_smsClientPtr->GetPtr()->SetCBRangeConfig(SLOT_ID_1, enable, 0, 0xFFFF - 1, 1);
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBRangeConfig_0900
 * @tc.name     Set the network standard parameter "netType" to 1(Gsm),Configure a cell broadcast for an identity.
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetCBRangeConfig_0900, Function | MediumTest | Level3)
{
    uint8_t netType = 1;
    bool result = g_smsClientPtr->GetPtr()->SetCBRangeConfig(SLOT_ID_1, true, 0, 0xFFFF - 1, netType);
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBRangeConfig_1000
 * @tc.name     Set the network standard parameter "netType" to 2(Cdma),Configuration failed
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetCBRangeConfig_1000, Function | MediumTest | Level3)
{
    uint8_t netType = 2;
    bool result = g_smsClientPtr->GetPtr()->SetCBRangeConfig(SLOT_ID_1, true, 0, 0xFFFF - 1, netType);
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetCBRangeConfig_1100
 * @tc.name     Set the network standard parameter "netType" to an error value,
 *              Configuration failed
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetCBRangeConfig_1100, Function | MediumTest | Level3)
{
    uint8_t netType = 3;
    bool result = g_smsClientPtr->GetPtr()->SetCBRangeConfig(SLOT_ID_1, true, 0, 0xFFFF - 1, netType);
    ASSERT_FALSE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetDefaultSmsSlotId_0100
 * @tc.name     Set the default card slot ID for sending SMS
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetDefaultSmsSlotId_0100, Function | MediumTest | Level3)
{
    int beforeSlotId = g_smsClientPtr->GetPtr()->GetDefaultSmsSlotId();
    int slotId = SLOT_ID_1;
    if (slotId == beforeSlotId) {
        slotId = SLOT_ID_2;
    }
    bool isSet = g_smsClientPtr->GetPtr()->SetDefaultSmsSlotId(slotId);
    ASSERT_TRUE(isSet);
    int curSlotId = g_smsClientPtr->GetPtr()->GetDefaultSmsSlotId();
    bool result = (curSlotId == slotId);
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_SmsMms_SetDefaultSmsSlotId_0200
 * @tc.name     The default card slot ID is set to an error value,Failed to set send SMS card slot ID
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SetDefaultSmsSlotId_0200, Function | MediumTest | Level3)
{
    int beforeSlotId = g_smsClientPtr->GetPtr()->GetDefaultSmsSlotId();
    int errorSlotId = ERROR_VALUES;
    if (errorSlotId == beforeSlotId) {
        errorSlotId = OTHER_ERROR_VALUES;
    }
    bool isSet = g_smsClientPtr->GetPtr()->SetDefaultSmsSlotId(errorSlotId);
    ASSERT_FALSE(isSet);
    int curSlotId = g_smsClientPtr->GetPtr()->GetDefaultSmsSlotId();
    bool result = (curSlotId == beforeSlotId);
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_SmsMms_GetDefaultSmsSlotId_0100
 * @tc.name     Set the default card slot ID for sending SMS
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetDefaultSmsSlotId_0100, Function | MediumTest | Level3)
{
    int slotId = SLOT_ID_1;
    bool isSet = g_smsClientPtr->GetPtr()->SetDefaultSmsSlotId(slotId);
    ASSERT_TRUE(isSet);
    int curSlotId = g_smsClientPtr->GetPtr()->GetDefaultSmsSlotId();
    bool result = (curSlotId == slotId);
    ASSERT_TRUE(result);
}

/**
 * @tc.number   Telephony_SmsMms_GetDefaultSmsSlotId_0200
 * @tc.name     The default card slot ID is set to an error value,Failed to set send SMS card slot ID
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetDefaultSmsSlotId_0200, Function | MediumTest | Level3)
{
    int beforeSlotId = g_smsClientPtr->GetPtr()->GetDefaultSmsSlotId();
    int errorSlotId = ERROR_VALUES;
    if (errorSlotId == beforeSlotId) {
        errorSlotId = OTHER_ERROR_VALUES;
    }
    bool isSet = g_smsClientPtr->GetPtr()->SetDefaultSmsSlotId(errorSlotId);
    ASSERT_FALSE(isSet);
    int curSlotId = g_smsClientPtr->GetPtr()->GetDefaultSmsSlotId();
    bool result = (curSlotId == beforeSlotId);
    ASSERT_TRUE(result);
}

