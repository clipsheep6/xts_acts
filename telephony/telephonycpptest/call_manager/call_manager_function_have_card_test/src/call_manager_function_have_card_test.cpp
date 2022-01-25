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

#define CALLMANAGER_FOUNCTION_HAVE_CARD_TEST
#include "call_manager_test.h"

#include <cstring>
#include <gtest/gtest.h>

#include "call_manager_basic.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;
using namespace OHOS::Telephony::CallManager;

/****************************************** Test IsNewCallAllowed() ***************************************/

/**
 * @tc.number   Telephony_CallManager_IsNewCallAllowed_0100
 * @tc.name     coming call 10086, Test whether the phone can be dialed again, return true
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_IsNewCallAllowed_0100, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    EXPECT_EQ(g_clientPtr->GetPtr()->IsNewCallAllowed(), true);
}

/**
 * @tc.number   Telephony_CallManager_IsNewCallAllowed_0200
 * @tc.name     idle status, test IsNewCallAllowed(), return true
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IsNewCallAllowed_0200, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_clientPtr->GetPtr()->IsNewCallAllowed(), true);
}

/**
 * @tc.number   Telephony_CallManager_IsNewCallAllowed_0300
 * @tc.name     coming call, test IsNewCallAllowed(), return false
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_IsNewCallAllowed_0300, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_1000_MS);
    sleep(SLEEP_3_SEC);
    EXPECT_NE(g_clientPtr->GetPtr()->IsNewCallAllowed(), true);
}

/********************************************* Test IsRinging() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_IsRinging_0100
 * @tc.name     idle status, test IsRinging(), return false
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IsRinging_0100, Function | MediumTest | Level3)
{
    LOCK_NUM_WHILE_NE(
        g_clientPtr->GetPtr()->GetCallState(), (int)CallStateToApp::CALL_STATE_IDLE, SLEEP_50_MS, SLEEP_1000_MS);
    EXPECT_NE(g_clientPtr->GetPtr()->IsRinging(), true);
}

/**
 * @tc.number   Telephony_CallManager_IsRinging_0200
 * @tc.name     coming empty call,test IsRinging(), return false
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IsRinging_0200, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(EMPTY_DEFAULT));
    ASSERT_NE(ret, SUCCESSFUL);

    EXPECT_NE(g_clientPtr->GetPtr()->IsRinging(), true);
}

/**
 * @tc.number   Telephony_CallManager_IsRinging_0300
 * @tc.name     coming call, Test whether there IsRinging(), return false
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_IsRinging_0300, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_1000_MS);
    sleep(SLEEP_3_SEC);
    EXPECT_NE(g_clientPtr->GetPtr()->IsRinging(), true);
}

/*************************************** Test SeparateConference() **************************************/

/**
 * @tc.number   Telephony_CallManager_SeparateConference_0100
 * @tc.name     Import callId "1234",test SeparateConference(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SeparateConference_0100, Function | MediumTest | Level3)
{
    EXPECT_NE(g_clientPtr->GetPtr()->SeparateConference(INVALID_CALLID), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SeparateConference_0200
 * @tc.name     Import long callId "1234567890",test SeparateConference(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SeparateConference_0200, Function | MediumTest | Level3)
{
    EXPECT_NE(g_clientPtr->GetPtr()->SeparateConference(LONG_INVALID_CALLID), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SeparateConference_0300
 * @tc.name     coming call,test SeparateConference(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_SeparateConference_0300, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_1000_MS);
    sleep(SLEEP_3_SEC);
    EXPECT_NE(g_clientPtr->GetPtr()->SeparateConference(g_newCallId), SUCCESSFUL);
}

/******************************************* Test RegisterCallBack() ************************************/

/**
 * @tc.number   Telephony_CallManager_RegisterCallBack_0100
 * @tc.name     Import phoneNumber, By dialing, test RegisterCallBack() argument, accountid for SLOT_ID, return 0
 *              TestRegisterCallBack is a function that encapsulates the result of the validation callback
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_RegisterCallBack_0100, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    char phoneNumber[BUFSIZ] = OPERATOR_PHONY_NUMBER;
    TestRegisterCallBack(phoneNumber);
}

/**
 * @tc.number   Telephony_CallManager_RegisterCallBack_0200
 * @tc.name     Import "*43#", By dialing, test RegisterCallBack() argument,return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_RegisterCallBack_0200, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16("*43#"));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::GET_CALL_WAITING_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_RegisterCallBack_0300
 * @tc.name     active call, stop dtmf, test RegisterCallBack() argument,return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_RegisterCallBack_0300, Function | MediumTest | Level3)
{
    char validNumberDtmf = '9';
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    ret = g_clientPtr->GetPtr()->StartDtmf(g_newCallId, validNumberDtmf);
    EXPECT_EQ(ret, SUCCESSFUL);
    ret = g_clientPtr->GetPtr()->StopDtmf(g_newCallId);
    EXPECT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::START_DTMF_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
}

/************************************* Test GetCallRestriction() ***************************************/

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_0100
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_INCOMING, mode RESTRICTION_MODE_ACTIVATION,
 *              test GetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_DEACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_0100, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_INCOMING;
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OPEN);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_0200
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_INCOMING, mode RESTRICTION_MODE_DEACTIVATION,
 *              test GetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_0200, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_INCOMING;
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OFF);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_0300
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_OUTGOING, mode RESTRICTION_MODE_ACTIVATION,
 *              test GetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_DEACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_0300, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_OUTGOING;
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OPEN);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_0400
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_OUTGOING, mode RESTRICTION_MODE_DEACTIVATION,
 *              test GetCallRestriction(), return 0,
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_0400, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_OUTGOING;
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OFF);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_0500
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL, mode RESTRICTION_MODE_ACTIVATION,
 *              test GetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_DEACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_0500, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_INTERNATIONAL;
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OPEN);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_0600
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL, mode RESTRICTION_MODE_DEACTIVATION,
 *              test GetCallRestriction(), return 0,
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_0600, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_INTERNATIONAL;
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OFF);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_0700
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME, mode RESTRICTION_MODE_ACTIVATION,
 *              test GetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_DEACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_0700, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME;
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OPEN);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_0800
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME, mode RESTRICTION_MODE_DEACTIVATION,
 *              test GetCallRestriction(), return 0,
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_0800, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME;
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OFF);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_0900
 * @tc.name     enable fac RESTRICTION_TYPE_ROAMING_INCOMING, mode RESTRICTION_MODE_ACTIVATION,
 *              test GetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_DEACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_0900, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ROAMING_INCOMING;
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OPEN);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_1000
 * @tc.name     enable fac RESTRICTION_TYPE_ROAMING_INCOMING, mode RESTRICTION_MODE_DEACTIVATION,
 *              test GetCallRestriction(), return 0,
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_1000, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ROAMING_INCOMING;
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OFF);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_1300
 * @tc.name     enable fac RESTRICTION_TYPE_ROAMING_INCOMING, INVALID_NEGATIVE_SLOT_ID -1
 *              test GetCallRestriction(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_1300, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ROAMING_INCOMING;

    EXPECT_NE(g_clientPtr->GetPtr()->GetCallRestriction(INVALID_NEGATIVE_SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_1400
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_CALLS
 *              test GetCallRestriction(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_1400, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_CALLS;

    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::GET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_1500
 * @tc.name     enable fac RESTRICTION_TYPE_OUTGOING_SERVICES
 *              test GetCallRestriction(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_1500, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_OUTGOING_SERVICES;

    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::GET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_1600
 * @tc.name     enable fac RESTRICTION_TYPE_INCOMING_SERVICES
 *              test GetCallRestriction(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_1600, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_INCOMING_SERVICES;

    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::GET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_1700
 * @tc.name     enable fac RESTRICTION_TYPE_ROAMING_INCOMING, INVALID_SLOT_ID 2
 *              test GetCallRestriction(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_1700, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ROAMING_INCOMING;

    EXPECT_NE(g_clientPtr->GetPtr()->GetCallRestriction(INVALID_SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_1800
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_INCOMING, test GetCallRestriction(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_1800, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_INCOMING;
    EXPECT_NE(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID_3, setCallRestriction.fac), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_1900
 * @tc.name     enable fac INVALID_NEGATIVE_CALL_TYPE -1,
 *              test GetCallRestriction(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_1900, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType(INVALID_NEGATIVE_CALL_TYPE);

    EXPECT_NE(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_2000
 * @tc.name     enable fac INVALID_RESTRICTION_TYPE 8,
 *              test GetCallRestriction(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_2000, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType(INVALID_RESTRICTION_TYPE);

    EXPECT_NE(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
}

/****************************************** Test SetCallRestriction() ***************************************/

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_0100
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_INCOMING, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_DEACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_0100, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_0200
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_INCOMING, mode RESTRICTION_MODE_DEACTIVATION,
 *              test SetCallRestriction(), return 0,
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_0200, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_0300
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_OUTGOING, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_DEACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_0300, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_OUTGOING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_0400
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_OUTGOING, mode RESTRICTION_MODE_DEACTIVATION,
 *              test SetCallRestriction(), return 0,
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_0400, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_OUTGOING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_0500
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_DEACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_0500, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_INTERNATIONAL;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_0600
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL, mode RESTRICTION_MODE_DEACTIVATION,
 *              test SetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_0600, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_INTERNATIONAL;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_0700
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_DEACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_0700, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_0800
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME, mode RESTRICTION_MODE_DEACTIVATION,
 *              test SetCallRestriction(), return 0,
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_0800, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_0900
 * @tc.name     enable fac RESTRICTION_TYPE_ROAMING_INCOMING, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_DEACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_0900, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ROAMING_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_1000
 * @tc.name     enable fac RESTRICTION_TYPE_ROAMING_INCOMING, mode RESTRICTION_MODE_DEACTIVATION,
 *              test SetCallRestriction(), return 0,
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_1000, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ROAMING_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_1300
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_INCOMING, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0,INVALID_CALL_PASSWORD result error
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_1300, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, INVALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), ERROR_VALUES, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_1400
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_OUTGOING, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0,INVALID_CALL_PASSWORD result ACTIVE error
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_1400, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_OUTGOING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, INVALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), ERROR_VALUES, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_1500
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0,INVALID_CALL_PASSWORD result ACTIVE error
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_1500, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_INTERNATIONAL;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, INVALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), ERROR_VALUES, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_1600
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0,INVALID_CALL_PASSWORD result ACTIVE error
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_1600, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, INVALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), ERROR_VALUES, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_1700
 * @tc.name     enable fac RESTRICTION_TYPE_ROAMING_INCOMING, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0,INVALID_CALL_PASSWORD result ACTIVE error
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_1700, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ROAMING_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, INVALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), ERROR_VALUES, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_2500
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_INCOMING, mode RESTRICTION_MODE_ACTIVATION,
 *              INVALID_NEGATIVE_SLOT_ID -1, test SetCallRestriction(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_2500, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallRestriction(INVALID_NEGATIVE_SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_2600
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_INCOMING, mode RESTRICTION_MODE_ACTIVATION,INVALID_SLOT_ID of 2
 *              test SetCallRestriction(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_2600, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallRestriction(INVALID_SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_2700
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_OUTGOING, mode RESTRICTION_MODE_ACTIVATION,SLOT_ID_3 of 3
 *              test SetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_DEACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_2700, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_OUTGOING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID_3, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OPEN);

    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_2800
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_OUTGOING, mode INVALID_NEGATIVE_MODE of -1,SLOT_ID of 0
 *              test SetCallRestriction(), return 0, result ACTIVE error
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_2800, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_OUTGOING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode(INVALID_NEGATIVE_MODE);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_2900
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_OUTGOING, mode INVALID_MODE of 2,SLOT_ID of 0
 *              test SetCallRestriction(), return 0, result ACTIVE error
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_2900, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_OUTGOING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode(INVALID_MODE);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_3000
 * @tc.name     enable fac INVALID_NEGATIVE_CALL_TYPE of -1, mode RESTRICTION_MODE_DEACTIVATION,SLOT_ID of 0
 *              test SetCallRestriction(), return 0, result ACTIVE error
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_3000, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType(INVALID_NEGATIVE_CALL_TYPE);
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_3100
 * @tc.name     enable fac INVALID_RESTRICTION_TYPE of 8, mode RESTRICTION_MODE_DEACTIVATION,SLOT_ID of 0
 *              test SetCallRestriction(), return 0, result ACTIVE error
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_3100, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType(INVALID_RESTRICTION_TYPE);
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_3200
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_CALLS, mode RESTRICTION_MODE_ACTIVATION,SLOT_ID of 0
 *              test SetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_DEACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_3200, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_CALLS;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_3300
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_CALLS, mode RESTRICTION_MODE_DEACTIVATION,SLOT_ID of 0
 *              test SetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_3300, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_CALLS;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_3400
 * @tc.name     enable fac RESTRICTION_TYPE_OUTGOING_SERVICES, mode RESTRICTION_MODE_ACTIVATION,SLOT_ID of 0
 *              test SetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_DEACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_3400, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_OUTGOING_SERVICES;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_3500
 * @tc.name     enable fac RESTRICTION_TYPE_OUTGOING_SERVICES, mode RESTRICTION_MODE_DEACTIVATION,SLOT_ID of 0
 *              test SetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_3500, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_OUTGOING_SERVICES;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_3600
 * @tc.name     enable fac RESTRICTION_TYPE_INCOMING_SERVICES, mode RESTRICTION_MODE_ACTIVATION,SLOT_ID of 0
 *              test SetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_DEACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_3600, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_INCOMING_SERVICES;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_3700
 * @tc.name     enable fac RESTRICTION_TYPE_INCOMING_SERVICES, mode RESTRICTION_MODE_DEACTIVATION,SLOT_ID of 0
 *              test SetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_3700, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_INCOMING_SERVICES;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/************************************ Test GetCallTransferInfo() ***************************************/

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_0100
 * @tc.name     enable type TRANSFER_TYPE_BUSY, settingType CALL_TRANSFER_ENABLE, test GetCallTransferInfo(),
 *              Restoring the Initial Environment of CALL_TRANSFER_ERASUR return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_0100, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_BUSY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    TestTransferCallBack(OPEN);
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_0200
 * @tc.name     enable type TRANSFER_TYPE_BUSY, settingType CALL_TRANSFER_ERASUR, test GetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_0200, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_BUSY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    TestTransferCallBack(OFF);
}

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_0300
 * @tc.name     enable type TRANSFER_TYPE_NO_REPLY, settingType CALL_TRANSFER_ENABLE, test GetCallTransferInfo(),
 *               return 0
 *              Restoring the Initial Environment of CALL_TRANSFER_ERASUR
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_0300, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_NO_REPLY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    TestTransferCallBack(OPEN);
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_0400
 * @tc.name     enable type TRANSFER_TYPE_NO_REPLY, settingType CALL_TRANSFER_ERASUR, test GetCallTransferInfo(),
 *              return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_0400, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_NO_REPLY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    TestTransferCallBack(OFF);
}

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_0500
 * @tc.name     enable type TRANSFER_TYPE_NOT_REACHABLE, settingType CALL_TRANSFER_ENABLE,
 *               test GetCallTransferInfo(), return 0.Restoring the Initial Environment of CALL_TRANSFER_ERASUR
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_0500, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_NOT_REACHABLE;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    TestTransferCallBack(OPEN);
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_0600
 * @tc.name     enable type TRANSFER_TYPE_NOT_REACHABLE, settingType CALL_TRANSFER_ERASUR,
 *              test GetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_0600, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_NOT_REACHABLE;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    TestTransferCallBack(OFF);
}

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_0700
 * @tc.name     enable type TRANSFER_TYPE_UNCONDITIONAL, settingType CALL_TRANSFER_ENABLE, test GetCallTransferInfo(),
 * return 0 Restoring the Initial Environment of CALL_TRANSFER_ERASUR
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_0700, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    TestTransferCallBack(OPEN);
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_0800
 * @tc.name     enable type TRANSFER_TYPE_UNCONDITIONAL, test GetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_0800, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    TestTransferCallBack(OFF);
}

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_1100
 * @tc.name     enable type TRANSFER_TYPE_BUSY, settingType CALL_TRANSFER_ENABLE, empty phonenumber, return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_1100, Function | MediumTest | Level3)
{
    char phoneNumber[3] = "";
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_BUSY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, phoneNumber);
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::GET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("status"), OFF, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_STRING_WHILE_NE(g_updateResult.GetStringValue("number").c_str(), phoneNumber, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_1200
 * @tc.name     enable type TRANSFER_TYPE_UNCONDITIONAL, test GetCallTransferInfo(), return non-zero
 *              INVALID_NEGATIVE_SLOT_ID -2
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_1200, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    EXPECT_NE(g_clientPtr->GetPtr()->GetCallTransferInfo(INVALID_NEGATIVE_SLOT_ID, setCallTransfer.type), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_1300
 * @tc.name     enable type TRANSFER_TYPE_UNCONDITIONAL, test GetCallTransferInfo(), return non-zero
 *              INVALID_SLOT_ID 2
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_1300, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    EXPECT_NE(g_clientPtr->GetPtr()->GetCallTransferInfo(INVALID_SLOT_ID, setCallTransfer.type), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_1400
 * @tc.name     enable type TRANSFER_TYPE_ALWAYS, test GetCallTransferInfo(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_1400, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    EXPECT_NE(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID_3, setCallTransfer.type), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_1500
 * @tc.name     enable type INVALID_NEGATIVE_CALL_TYPE, test GetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_1500, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.type = CallTransferType(INVALID_NEGATIVE_CALL_TYPE);
    EXPECT_NE(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_1600
 * @tc.name     enable type INVALID_TRANSFER_TYPE of 4, test GetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_1600, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.type = CallTransferType(INVALID_TRANSFER_TYPE);
    EXPECT_NE(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
}

/************************************** Test SetCallTransferInfo() ***********************************/

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_0100
 * @tc.name     enable type TRANSFER_TYPE_BUSY, settingType CALL_TRANSFER_ENABLE,
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_0100, Function | MediumTest | Level3)
{
    char invalidPhoneNumber[] = "12345678901234567890123456789";
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_BUSY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, invalidPhoneNumber);
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), ERROR_VALUES, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_0200
 * @tc.name     enable type TRANSFER_TYPE_BUSY, settingType CALL_TRANSFER_ENABLE, test SetCallTransferInfo(),
 *              Restoring the Initial Environment of CALL_TRANSFER_ERASUR return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_0200, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_BUSY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_0300
 * @tc.name     enable type TRANSFER_TYPE_BUSY, settingType CALL_TRANSFER_ERASUR,
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_0300, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_BUSY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_0400
 * @tc.name     enable type TRANSFER_TYPE_NO_REPLY, settingType CALL_TRANSFER_ENABLE, test SetCallTransferInfo(),
 *              Restoring the Initial Environment of CALL_TRANSFER_ERASUR return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_0400, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_NO_REPLY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_0500
 * @tc.name     enable type TRANSFER_TYPE_NO_REPLY, settingType CALL_TRANSFER_ERASUR, test SetCallTransferInfo(),
 *              return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_0500, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_NO_REPLY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_0600
 * @tc.name     enable type TRANSFER_TYPE_NOT_REACHABLE, settingType CALL_TRANSFER_ENABLE,
 *              Restoring the Initial Environment of CALL_TRANSFER_ERASUR
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_0600, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_NOT_REACHABLE;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_0700
 * @tc.name     enable type TRANSFER_TYPE_NOT_REACHABLE, settingType CALL_TRANSFER_ERASUR,
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_0700, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_NOT_REACHABLE;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_0800
 * @tc.name     enable type TRANSFER_TYPE_UNCONDITIONAL, settingType CALL_TRANSFER_ENABLE,
 *              Restoring the Initial Environment of CALL_TRANSFER_ERASUR
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_0800, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_0900
 * @tc.name     enable type TRANSFER_TYPE_UNCONDITIONAL, settingType CALL_TRANSFER_ERASUR,
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_0900, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_1000
 * @tc.name     enable type TRANSFER_TYPE_BUSY, settingType CALL_TRANSFER_ENABLE, test SetCallTransferInfo(),
 *              return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_1000, Function | MediumTest | Level3)
{
    char emptyPhoneNumber[3] = "";
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_BUSY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, emptyPhoneNumber);
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_1900
 * @tc.name     enable type TRANSFER_TYPE_NO_REPLY, settingType CALL_TRANSFER_ERASUR, test SetCallTransferInfo(),
 *              INVALID_NEGATIVE_SLOT_ID -1 return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_1900, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_NO_REPLY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(INVALID_NEGATIVE_SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_2000
 * @tc.name     enable type TRANSFER_TYPE_NO_REPLY, settingType CALL_TRANSFER_ERASUR, test SetCallTransferInfo()
 *              INVALID_SLOT_ID 2 return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_2000, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_NO_REPLY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(INVALID_SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_2100
 * @tc.name     enable type TRANSFER_TYPE_ALWAYS, settingType CALL_TRANSFER_ENABLE, test SetCallTransferInfo(),
 *              return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_2100, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID_3, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    TestTransferCallBack(OFF);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_2200
 * @tc.name     enable type TRANSFER_TYPE_ALWAYS, settingType INVALID_NEGATIVE_CALL_TYPE,
 *              test SetCallTransferInfo(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_2200, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType(INVALID_NEGATIVE_CALL_TYPE);
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_2300
 * @tc.name     enable type TRANSFER_TYPE_ALWAYS, settingType INVALID_TRANSFER_TYPE of 4,
 *              test SetCallTransferInfo(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_2300, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType(INVALID_TRANSFER_TYPE);
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_2400
 * @tc.name     enable type INVALID_NEGATIVE_MODE, settingType CALL_TRANSFER_ENABLE,
 *              test SetCallTransferInfo(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_2400, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType(INVALID_NEGATIVE_MODE);
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_2500
 * @tc.name     enable type INVALID_TRANSFER_TYPE of 4, settingType CALL_TRANSFER_ENABLE,
 *              test SetCallTransferInfo(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_2500, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType(INVALID_TRANSFER_TYPE);
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_2600
 * @tc.name     enable type TRANSFER_TYPE_UNCONDITIONAL, settingType CALL_TRANSFER_ENABLE, CALL_TRANSFER_ERASUR,
 *              test SetCallTransferInfo() again,Whether the transferNumber is incorrect return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_2600, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);

    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_2700
 * @tc.name     enable type TRANSFER_TYPE_UNCONDITIONAL, settingType CALL_TRANSFER_ERASUR, test SetCallTransferInfo(),
 *              CALL_TRANSFER_ENABLE, test SetCallTransferInfo() again,Whether the transferNumber is incorrect
 *              return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_2700, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);

    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_2800
 * @tc.name     enable type TRANSFER_TYPE_ALWAYS, settingType CALL_TRANSFER_ENABLE,
 *              test SetCallTransferInfo(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_2800, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_2900
 * @tc.name     enable type TRANSFER_TYPE_ALWAYS, settingType CALL_TRANSFER_UNREGISTER,
 *              test SetCallTransferInfo(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_2900, Function | MediumTest | Level3)
{
    int CALL_TRANSFER_UNREGISTER = 3;
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType(CALL_TRANSFER_UNREGISTER);
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/********************************************* Test SetMuted() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_SetMuted_0100
 * @tc.name     coming active call, isMute true, test SetMuted(),return 0,
 *              and Restoring the Initial Environment
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_SetMuted_0100, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetMuted(true), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetMuted(false), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetMuted_0200
 * @tc.name     coming active call, isMute false, test SetMuted(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_SetMuted_0200, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetMuted(false), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetMuted_0300
 * @tc.name     idle status, isMute true, test SetMuted(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetMuted_0300, Function | MediumTest | Level3)
{
    LOCK_NUM_WHILE_NE(
        g_clientPtr->GetPtr()->GetCallState(), (int)CallStateToApp::CALL_STATE_IDLE, SLEEP_50_MS, SLEEP_1000_MS);
    EXPECT_NE(g_clientPtr->GetPtr()->SetMuted(true), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetMuted_0400
 * @tc.name     idle status, isMute false, test SetMuted(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetMuted_0400, Function | MediumTest | Level3)
{
    LOCK_NUM_WHILE_NE(
        g_clientPtr->GetPtr()->GetCallState(), (int)CallStateToApp::CALL_STATE_IDLE, SLEEP_50_MS, SLEEP_1000_MS);
    EXPECT_NE(g_clientPtr->GetPtr()->SetMuted(false), SUCCESSFUL);
}

/********************************************* Test SetAudioDevice() ********************************************/

/**
 * @tc.number   Telephony_CallManager_SetAudioDevice_0100
 * @tc.name     coming active call, device DEVICE_EARPIECE, test SetAudioDevice(),return 0,
 *              and Restoring the Initial Environment
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_SetAudioDevice_0100, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_30000_MS);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetAudioDevice(AudioDevice::DEVICE_EARPIECE), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetAudioDevice_0200
 * @tc.name     coming active call, device DEVICE_SPEAKER, test SetAudioDevice(),return 0
 *              and Restoring the Initial Environment
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_SetAudioDevice_0200, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_30000_MS);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetAudioDevice(AudioDevice::DEVICE_SPEAKER), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetAudioDevice(AudioDevice::DEVICE_SPEAKER), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetAudioDevice_0300
 * @tc.name     coming active call, device DEVICE_WIRED_HEADSET, test SetAudioDevice(),return 0
 *              and Restoring the Initial Environment
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_SetAudioDevice_0300, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_30000_MS);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetAudioDevice(AudioDevice::DEVICE_WIRED_HEADSET), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetAudioDevice(AudioDevice::DEVICE_SPEAKER), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetAudioDevice_0400
 * @tc.name     coming active call, device DEVICE_BLUETOOTH_SCO, test SetAudioDevice(),return 0
 *              and Restoring the Initial Environment
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_SetAudioDevice_0400, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_30000_MS);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetAudioDevice(AudioDevice::DEVICE_BLUETOOTH_SCO), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetAudioDevice(AudioDevice::DEVICE_SPEAKER), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetAudioDevice_0500
 * @tc.name     idle status, device DEVICE_EARPIECE, test SetAudioDevice(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetAudioDevice_0500, Function | MediumTest | Level3)
{
    LOCK_NUM_WHILE_NE(
        g_clientPtr->GetPtr()->GetCallState(), (int)CallStateToApp::CALL_STATE_IDLE, SLEEP_50_MS, SLEEP_1000_MS);
    EXPECT_NE(g_clientPtr->GetPtr()->SetAudioDevice(AudioDevice::DEVICE_EARPIECE), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetAudioDevice_0800
 * @tc.name     idle status, device INVALID_NEGATIVE_MODE, test SetAudioDevice(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_SetAudioDevice_0800, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_30000_MS);
    EXPECT_NE(g_clientPtr->GetPtr()->SetAudioDevice(AudioDevice(INVALID_NEGATIVE_MODE)), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetAudioDevice_0900
 * @tc.name     idle status, device INVALID_AUDIO_TYPE of 4, test SetAudioDevice(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_SetAudioDevice_0900, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_30000_MS);
    EXPECT_NE(g_clientPtr->GetPtr()->SetAudioDevice(AudioDevice(INVALID_AUDIO_TYPE)), SUCCESSFUL);
}

/********************************************* Test MuteRinger() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_MuteRinger_0100
 * @tc.name     idle status, enable muteRinger, test MuteRinger(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_MuteRinger_0100, Function | MediumTest | Level3)
{
    LOCK_NUM_WHILE_NE(
        g_clientPtr->GetPtr()->GetCallState(), (int)CallStateToApp::CALL_STATE_IDLE, SLEEP_50_MS, SLEEP_1000_MS);
    EXPECT_EQ(g_clientPtr->GetPtr()->MuteRinger(), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_MuteRinger_0200
 * @tc.name     coming active call, enable muteRinger, test MuteRinger(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_MuteRinger_0200, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    EXPECT_EQ(g_clientPtr->GetPtr()->MuteRinger(), SUCCESSFUL);
}