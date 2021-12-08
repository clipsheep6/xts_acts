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
    char callNumber[BUFSIZ] = TARGET_PHONY_NUMBER;
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_ALL_OUTGOING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);

    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_1000_MS);
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_REMOVE_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTING), true, SLEEP_50_MS, SLEEP_1000_MS);
    TestRegisterCallBack(callNumber);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_2600
 * @tc.name     enable RESTRICTION_TYPE_INTERNATIONAL and RESTRICTION_MODE_ACTIVATION, test SetCallRestriction(),
 *              and Dial a call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_SetCallRestriction_2600, Function | MediumTest | Level3)
{
    char callNumber[BUFSIZ] = INTERNATIONAL_PHONY_NUMBER;
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_INTERNATIONAL;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);

    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    ret = Dial(Str8ToStr16(INTERNATIONAL_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_1000_MS);
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_REMOVE_CALL, INTERNATIONAL_PHONY_NUMBER,
        strlen(INTERNATIONAL_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTING), true, SLEEP_50_MS, SLEEP_1000_MS);
    TestRegisterCallBack(callNumber);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_2700
 * @tc.name     enable RESTRICTION_TYPE_INTERNATIONAL and RESTRICTION_MODE_ACTIVATION, test SetCallRestriction(),
 *              and Dial a call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_SetCallRestriction_2700, Function | MediumTest | Level3)
{
    char callNumber[BUFSIZ] = TARGET_PHONY_NUMBER;
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_INTERNATIONAL;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);

    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ALERTING), true, SLEEP_50_MS, SLEEP_1000_MS);
    TestRegisterCallBack(callNumber);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_2800
 * @tc.name     enable RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME and RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), and Dial a call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_SetCallRestriction_2800, Function | MediumTest | Level3)
{
    char callNumber[BUFSIZ] = TARGET_PHONY_NUMBER;
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);

    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ALERTING), true, SLEEP_50_MS, SLEEP_1000_MS);
    TestRegisterCallBack(callNumber);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_2900
 * @tc.name     enable RESTRICTION_TYPE_ALL_INCOMING and RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), and coming a call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_SetCallRestriction_2900, Function | MediumTest | Level3)
{
    char callNumber[BUFSIZ] = OBJECT_PHONY_NUMBER;
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_ALL_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);

    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, OBJECT_PHONY_NUMBER, strlen(OBJECT_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTING), true, SLEEP_50_MS, SLEEP_1000_MS);
    TestRegisterCallBack(callNumber);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_3000
 * @tc.name     enable RESTRICTION_TYPE_ROAMING_INCOMING and RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), and coming a call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_SetCallRestriction_3000, Function | MediumTest | Level3)
{
    char callNumber[BUFSIZ] = AMERICA_PHONY_NUMBER;
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_ROAMING_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);

    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, AMERICA_PHONY_NUMBER, strlen(AMERICA_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTING), true, SLEEP_50_MS, SLEEP_1000_MS);
    TestRegisterCallBack(callNumber);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_3100
 * @tc.name     enable RESTRICTION_TYPE_ROAMING_INCOMING and RESTRICTION_MODE_ACTIVATION
 *              test SetCallRestriction(), and coming a call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_SetCallRestriction_3100, Function | MediumTest | Level3)
{
    char callNumber[BUFSIZ] = TARGET_PHONY_NUMBER;
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_ROAMING_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);

    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER,
        strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_1000_MS);
    TestRegisterCallBack(callNumber);
}

/***************************************** Test SetCallTransferInfo() ******************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_2300
 * @tc.name     enable REGISTRATION and TRANSFER_TYPE_BUSY,SetCallTransferInfo to empty phonynumber
 *              later Dial call, and mock accept.and mock coming call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_SetCallTransferInfo_2300, Function | MediumTest | Level3)
{
    char emptyPhoneNumber[3] = "";
    char callNumber[BUFSIZ] = TARGET_PHONY_NUMBER;
    char mockNumber[BUFSIZ] = OBJECT_PHONY_NUMBER;
    CallTransferInfo setCallTransferInfo;
    setCallTransferInfo.settingType = CALL_TRANSFER_REGISTRATION;
    setCallTransferInfo.type = TRANSFER_TYPE_BUSY;
    int ret = strcpy_s(setCallTransferInfo.transferNum, BUFSIZ, emptyPhoneNumber);
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransferInfo), SUCCESSFUL);
    ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_1000_MS);
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ACCEPT_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_1000_MS);
    TestRegisterCallBack(callNumber);

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, OBJECT_PHONY_NUMBER, strlen(OBJECT_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_WAITING), true, SLEEP_50_MS, SLEEP_1000_MS);
    TestRegisterCallBack(mockNumber);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_2400
 * @tc.name     enable REGISTRATION and TRANSFER_TYPE_BUSY, SetCallTransferInfo to phoneNumber for "12599"
 *              later Dial call, and mock accept.and mock coming call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_SetCallTransferInfo_2400, Function | MediumTest | Level3)
{
    char callNumber[BUFSIZ] = TARGET_PHONY_NUMBER;
    CallTransferInfo setCallTransferInfo;
    setCallTransferInfo.settingType = CALL_TRANSFER_REGISTRATION;
    setCallTransferInfo.type = TRANSFER_TYPE_BUSY;
    int ret = strcpy_s(setCallTransferInfo.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransferInfo), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);

    ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_1000_MS);
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ACCEPT_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_1000_MS);
    TestRegisterCallBack(callNumber);
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, OBJECT_PHONY_NUMBER, strlen(OBJECT_PHONY_NUMBER));
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_2500
 * @tc.name     enable CALL_TRANSFER_ERASURE and TRANSFER_TYPE_BUSY, SetCallTransferInfo to phoneNumber for "12599"
 *              later Dial call, and mock accept.and mock coming call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_SetCallTransferInfo_2500, Function | MediumTest | Level3)
{
    char callNumber[BUFSIZ] = TARGET_PHONY_NUMBER;
    char mockNumber[BUFSIZ] = OBJECT_PHONY_NUMBER;
    CallTransferInfo setCallTransferInfo;
    setCallTransferInfo.settingType = CALL_TRANSFER_ERASURE;
    setCallTransferInfo.type = TRANSFER_TYPE_BUSY;
    int ret = strcpy_s(setCallTransferInfo.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransferInfo), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);

    ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_1000_MS);
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ACCEPT_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_1000_MS);
    TestRegisterCallBack(callNumber);

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, OBJECT_PHONY_NUMBER, strlen(OBJECT_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_WAITING), true, SLEEP_50_MS, SLEEP_1000_MS);
    TestRegisterCallBack(mockNumber);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_2600
 * @tc.name     enable REGISTRATION and TRANSFER_TYPE_NO_REPLY, and SetCallTransferInfo to empty phonenumber
 *              later Dial call, and mock accept.and mock coming call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_SetCallTransferInfo_2600, Function | MediumTest | Level3)
{
    char emptyPhoneNumber[3] = "";
    char callNumber[BUFSIZ] = TARGET_PHONY_NUMBER;
    char mockNumber[BUFSIZ] = OBJECT_PHONY_NUMBER;
    CallTransferInfo setCallTransferInfo;
    setCallTransferInfo.settingType = CALL_TRANSFER_REGISTRATION;
    setCallTransferInfo.type = TRANSFER_TYPE_NO_REPLY;
    int ret = strcpy_s(setCallTransferInfo.transferNum, BUFSIZ, emptyPhoneNumber);
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransferInfo), SUCCESSFUL);
    ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_1000_MS);
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ACCEPT_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_1000_MS);
    TestRegisterCallBack(callNumber);

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, OBJECT_PHONY_NUMBER, strlen(OBJECT_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_WAITING), true, SLEEP_50_MS, SLEEP_1000_MS);
    TestRegisterCallBack(mockNumber);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_2700
 * @tc.name     enable REGISTRATION and TRANSFER_TYPE_NO_REPLY, SetCallTransferInfo to phoneNumber for "12599",
 *              later Dial call, and mock accept.and mock coming call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_SetCallTransferInfo_2700, Function | MediumTest | Level3)
{
    char callNumber[BUFSIZ] = TARGET_PHONY_NUMBER;
    CallTransferInfo setCallTransferInfo;
    setCallTransferInfo.settingType = CALL_TRANSFER_REGISTRATION;
    setCallTransferInfo.type = TRANSFER_TYPE_NO_REPLY;
    int ret = strcpy_s(setCallTransferInfo.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransferInfo), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);

    ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_1000_MS);
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ACCEPT_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_1000_MS);
    TestRegisterCallBack(callNumber);

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, OBJECT_PHONY_NUMBER, strlen(OBJECT_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_WAITING), true, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_2800
 * @tc.name     enable CALL_TRANSFER_ERASURE and TRANSFER_TYPE_NO_REPLY, SetCallTransferInfo to phoneNumber for "12599",
 *              later Dial call, and mock accept.and mock coming call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_SetCallTransferInfo_2800, Function | MediumTest | Level3)
{
    char callNumber[BUFSIZ] = TARGET_PHONY_NUMBER;
    char mockNumber[BUFSIZ] = OBJECT_PHONY_NUMBER;
    CallTransferInfo setCallTransferInfo;
    setCallTransferInfo.settingType = CALL_TRANSFER_ERASURE;
    setCallTransferInfo.type = TRANSFER_TYPE_NO_REPLY;
    int ret = strcpy_s(setCallTransferInfo.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransferInfo), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);

    ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_1000_MS);
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ACCEPT_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_1000_MS);
    TestRegisterCallBack(callNumber);

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, OBJECT_PHONY_NUMBER, strlen(OBJECT_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_WAITING), true, SLEEP_50_MS, SLEEP_1000_MS);
    TestRegisterCallBack(mockNumber);
}