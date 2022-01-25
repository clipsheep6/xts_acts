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

#define CALLMANAGER_MOCK_TEST
#include "call_manager_basic.h"
#include "call_manager_test.h"
#include "call_manager_ims_test.h"
#include "mock_vendor_common.h"

#include <cstring>
#include <gtest/gtest.h>
#include <securec.h>

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;
using namespace OHOS::Telephony::CallManager;

/***************************************** Test SetCallRestriction() ******************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_2500
 * @tc.name     enable RESTRICTION_TYPE_ALL_OUTGOING and RESTRICTION_TYPE_ALL_INCOMING, test SetCallRestriction(),
 *              and Dial a call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_SetCallRestriction_2500, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_OUTGOING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);

    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_2600
 * @tc.name     enable RESTRICTION_TYPE_INTERNATIONAL and RESTRICTION_MODE_ACTIVATION, test SetCallRestriction(),
 *              and Dial a call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_SetCallRestriction_2600, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_INTERNATIONAL;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);

    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_2700
 * @tc.name     enable RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME and RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), and Dial a call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_SetCallRestriction_2700, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);

    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_2800
 * @tc.name     enable RESTRICTION_TYPE_ALL_INCOMING and RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), and coming a call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_SetCallRestriction_2800, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);

    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_2900
 * @tc.name     enable RESTRICTION_TYPE_ROAMING_INCOMING and RESTRICTION_MODE_ACTIVATION
 *              test SetCallRestriction(), and coming a call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_SetCallRestriction_2900, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ROAMING_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);

    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/***************************************** Test SetCallTransferInfo() ******************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_2400
 * @tc.name     enable REGISTRATION and TRANSFER_TYPE_BUSY, SetCallTransferInfo to phoneNumber for "12599"
 *              later Dial call, and mock accept.and mock coming call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_SetCallTransferInfo_2400, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransferInfo;
    setCallTransferInfo.settingType = CallTransferSettingType::CALL_TRANSFER_REGISTRATION;
    setCallTransferInfo.type = CallTransferType::TRANSFER_TYPE_BUSY;
    int ret = strcpy_s(setCallTransferInfo.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransferInfo), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_2500
 * @tc.name     enable CALL_TRANSFER_ERASURE and TRANSFER_TYPE_BUSY, SetCallTransferInfo to phoneNumber for "12599"
 *              later Dial call, and mock accept.and mock coming call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_SetCallTransferInfo_2500, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransferInfo;
    setCallTransferInfo.settingType = CallTransferSettingType::CALL_TRANSFER_ERASURE;
    setCallTransferInfo.type = CallTransferType::TRANSFER_TYPE_BUSY;
    int ret = strcpy_s(setCallTransferInfo.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransferInfo), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_2600
 * @tc.name     enable REGISTRATION and TRANSFER_TYPE_NO_REPLY, SetCallTransferInfo to phoneNumber for "12599",
 *              later Dial call, and mock accept.and mock coming call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_SetCallTransferInfo_2600, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransferInfo;
    setCallTransferInfo.settingType = CallTransferSettingType::CALL_TRANSFER_REGISTRATION;
    setCallTransferInfo.type = CallTransferType::TRANSFER_TYPE_NO_REPLY;
    int ret = strcpy_s(setCallTransferInfo.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransferInfo), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_2700
 * @tc.name     enable CALL_TRANSFER_ERASURE and TRANSFER_TYPE_NO_REPLY, SetCallTransferInfo to phoneNumber for "12599",
 *              later Dial call, and mock accept.and mock coming call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_SetCallTransferInfo_2700, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransferInfo;
    setCallTransferInfo.settingType = CallTransferSettingType::CALL_TRANSFER_ERASURE;
    setCallTransferInfo.type = CallTransferType::TRANSFER_TYPE_NO_REPLY;
    int ret = strcpy_s(setCallTransferInfo.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransferInfo), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}