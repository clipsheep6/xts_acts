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
    int ret = Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_12000_MS);
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
    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
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
    LOCK_NUM_WHILE_NE(g_clientPtr->GetPtr()->GetCallState(), (int)CallStateToApp::CALL_STATE_IDLE,
            SLEEP_50_MS, SLEEP_12000_MS);
    EXPECT_NE(g_clientPtr->GetPtr()->IsRinging(), true);
}

/**
 * @tc.number   Telephony_CallManager_IsRinging_0200
 * @tc.name     coming empty call,test IsRinging(), return false
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IsRinging_0200, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(EMPTY_DEFAULT));
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
    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    EXPECT_NE(g_clientPtr->GetPtr()->IsRinging(), true);
}

/*************************************** Test SeparateConference() **************************************/

/**
 * @tc.number   Telephony_CallManager_SeparateConference_0100
 * @tc.name     Import callId "1234",test SeparateConference(),return non 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SeparateConference_0100, Function | MediumTest | Level3)
{
    EXPECT_NE(g_clientPtr->GetPtr()->SeparateConference(AT_WILL_CALLID), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SeparateConference_0200
 * @tc.name     Import long callId "1234567890",test SeparateConference(),return non 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SeparateConference_0200, Function | MediumTest | Level3)
{
    EXPECT_NE(g_clientPtr->GetPtr()->SeparateConference(LONG_AT_WILL_CALLID), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SeparateConference_0300
 * @tc.name     coming call,test SeparateConference(),return non 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_SeparateConference_0300, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    EXPECT_NE(g_clientPtr->GetPtr()->SeparateConference(g_newCallId), SUCCESSFUL);
}


/******************************************* Test RegisterCallBack() ************************************/

/**
 * @tc.number   Telephony_CallManager_RegisterCallBack_0100
 * @tc.name     Import phoneNumber, By dialing, test RegisterCallBack() argument, accountid for SLOT_ID, return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_RegisterCallBack_0100, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_12000_MS);
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
    int ret = Dial(Str8ToStr16("*43#"));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(g_updateReportId, GET_CALL_WAITING_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_RegisterCallBack_0300
 * @tc.name     active call, stop dtmf, test RegisterCallBack() argument,return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_RegisterCallBack_0300, Function | MediumTest | Level3)
{
    char validNumberDtmf = '9';
    int ret = Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_12000_MS);
    ret = g_clientPtr->GetPtr()->StartDtmf(g_newCallId, validNumberDtmf);
    EXPECT_EQ(ret, SUCCESSFUL);
    ret = g_clientPtr->GetPtr()->StopDtmf(g_newCallId);
    EXPECT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_STOP_DTMF_SUCCESS, SLEEP_50_MS, SLEEP_12000_MS);
}

/************************************* Test GetCallRestriction() ***************************************/

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_0100
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_INCOMING, mode RESTRICTION_MODE_ACTIVATION,
 *              test GetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_0100, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_ALL_INCOMING;
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OPEN);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_0200
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_INCOMING, mode RESTRICTION_MODE_DEACTIVATION,
 *              test GetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_ACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_0200, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    CallRestrictionInfo setRecoveryCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_ALL_INCOMING;
    setCallRestriction.mode = RESTRICTION_MODE_DEACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setRecoveryCallRestriction.fac = RESTRICTION_TYPE_ALL_INCOMING;

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OFF);
    RecoveryCallRestriction(setRecoveryCallRestriction);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_0300
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_OUTGOING, mode RESTRICTION_MODE_ACTIVATION,
 *              test GetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_0300, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_ALL_OUTGOING;
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OPEN);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_0400
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_OUTGOING, mode RESTRICTION_MODE_DEACTIVATION,
 *              test GetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_ACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_0400, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    CallRestrictionInfo setRecoveryCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_ALL_OUTGOING;
    setCallRestriction.mode = RESTRICTION_MODE_DEACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setRecoveryCallRestriction.fac = RESTRICTION_TYPE_ALL_OUTGOING;

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OFF);
    RecoveryCallRestriction(setRecoveryCallRestriction);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_0500
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL, mode RESTRICTION_MODE_ACTIVATION,
 *              test GetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_0500, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_INTERNATIONAL;
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OPEN);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_0600
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL, mode RESTRICTION_MODE_DEACTIVATION,
 *              test GetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_ACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_0600, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    CallRestrictionInfo setRecoveryCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_INTERNATIONAL;
    setCallRestriction.mode = RESTRICTION_MODE_DEACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setRecoveryCallRestriction.fac = RESTRICTION_TYPE_INTERNATIONAL;

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OFF);
    RecoveryCallRestriction(setRecoveryCallRestriction);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_0700
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME, mode RESTRICTION_MODE_ACTIVATION,
 *              test GetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_0700, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME;
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OPEN);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_0800
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME, mode RESTRICTION_MODE_DEACTIVATION,
 *              test GetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_ACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_0800, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    CallRestrictionInfo setRecoveryCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME;
    setCallRestriction.mode = RESTRICTION_MODE_DEACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setRecoveryCallRestriction.fac = RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME;

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OFF);
    RecoveryCallRestriction(setRecoveryCallRestriction);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_0900
 * @tc.name     enable fac RESTRICTION_TYPE_ROAMING_INCOMING, mode RESTRICTION_MODE_ACTIVATION,
 *              test GetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_0900, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_ROAMING_INCOMING;
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OPEN);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_1000
 * @tc.name     enable fac RESTRICTION_TYPE_ROAMING_INCOMING, mode RESTRICTION_MODE_DEACTIVATION,
 *              test GetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_ACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_1000, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    CallRestrictionInfo setRecoveryCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_ROAMING_INCOMING;
    setCallRestriction.mode = RESTRICTION_MODE_DEACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setRecoveryCallRestriction.fac = RESTRICTION_TYPE_ROAMING_INCOMING;

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OFF);
    RecoveryCallRestriction(setRecoveryCallRestriction);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_1300
 * @tc.name     enable fac RESTRICTION_TYPE_ROAMING_INCOMING
 *              test GetCallRestriction(), return non 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_1300, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_ROAMING_INCOMING;

    EXPECT_NE(g_clientPtr->GetPtr()->GetCallRestriction(INVALID_SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_1400
 * @tc.name     enable fac RESTRICTION_TYPE_ANONYMOUS
 *              test GetCallRestriction(), return non 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_1400, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_ANONYMOUS;

    EXPECT_NE(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, GET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_1500
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_CALLS
 *              test GetCallRestriction(), return non 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_1500, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_ALL_CALLS;

    EXPECT_NE(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, GET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_1600
 * @tc.name     enable fac RESTRICTION_TYPE_OUTGOING_SERVICES
 *              test GetCallRestriction(), return non 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_1600, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_OUTGOING_SERVICES;

    EXPECT_NE(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, GET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_1700
 * @tc.name     enable fac RESTRICTION_TYPE_INCOMING_SERVICES
 *              test GetCallRestriction(), return non 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_1700, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_INCOMING_SERVICES;

    EXPECT_NE(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, GET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_1800
 * @tc.name     enable fac RESTRICTION_TYPE_SPECIFIC_INCOMING
 *              test GetCallRestriction(), return non 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_1800, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_SPECIFIC_INCOMING;

    EXPECT_NE(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, GET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/****************************************** Test SetCallRestriction() ***************************************/

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_0100
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_INCOMING, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_0100, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_ALL_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_0200
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_INCOMING, mode RESTRICTION_MODE_DEACTIVATION,
 *              test SetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_ACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_0200, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    CallRestrictionInfo setRecoveryCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_ALL_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_DEACTIVATION;
    setRecoveryCallRestriction.fac = RESTRICTION_TYPE_ALL_INCOMING;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
    RecoveryCallRestriction(setRecoveryCallRestriction);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_0300
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_OUTGOING, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_0300, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_ALL_OUTGOING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_0400
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_OUTGOING, mode RESTRICTION_MODE_DEACTIVATION,
 *              test SetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_ACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_0400, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    CallRestrictionInfo setRecoveryCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_ALL_OUTGOING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_DEACTIVATION;
    setRecoveryCallRestriction.fac = RESTRICTION_TYPE_ALL_OUTGOING;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
    RecoveryCallRestriction(setRecoveryCallRestriction);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_0500
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_0500, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_INTERNATIONAL;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
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
    CallRestrictionInfo setRecoveryCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_INTERNATIONAL;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_DEACTIVATION;
    setRecoveryCallRestriction.fac = RESTRICTION_TYPE_INTERNATIONAL;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
    RecoveryCallRestriction(setRecoveryCallRestriction);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_0700
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_0700, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_0800
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME, mode RESTRICTION_MODE_DEACTIVATION,
 *              test SetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_ACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_0800, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    CallRestrictionInfo setRecoveryCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_DEACTIVATION;
    setRecoveryCallRestriction.fac = RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
    RecoveryCallRestriction(setRecoveryCallRestriction);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_0900
 * @tc.name     enable fac RESTRICTION_TYPE_ROAMING_INCOMING, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_0900, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_ROAMING_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_1000
 * @tc.name     enable fac RESTRICTION_TYPE_ROAMING_INCOMING, mode RESTRICTION_MODE_DEACTIVATION,
 *              test SetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_ACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_1000, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    CallRestrictionInfo setRecoveryCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_ROAMING_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_DEACTIVATION;
    setRecoveryCallRestriction.fac = RESTRICTION_TYPE_ROAMING_INCOMING;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
    RecoveryCallRestriction(setRecoveryCallRestriction);
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
    setCallRestriction.fac = RESTRICTION_TYPE_ALL_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, INVALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), ERROR_VALUES, SLEEP_50_MS, SLEEP_12000_MS);
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
    setCallRestriction.fac = RESTRICTION_TYPE_ALL_OUTGOING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, INVALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), ERROR_VALUES, SLEEP_50_MS, SLEEP_12000_MS);
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
    setCallRestriction.fac = RESTRICTION_TYPE_INTERNATIONAL;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, INVALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), ERROR_VALUES, SLEEP_50_MS, SLEEP_12000_MS);
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
    setCallRestriction.fac = RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, INVALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), ERROR_VALUES, SLEEP_50_MS, SLEEP_12000_MS);
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
    setCallRestriction.fac = RESTRICTION_TYPE_ROAMING_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, INVALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), ERROR_VALUES, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_2500
 * @tc.name     enable fac RESTRICTION_TYPE_ROAMING_INCOMING, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return non 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_2500, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_ALL_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, INVALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallRestriction(INVALID_SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/************************************ Test GetCallTransferInfo() ***************************************/

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_0100
 * @tc.name     enable type MOBILE_BUSY, settingType REGISTRATION, test GetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_0100, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = REGISTRATION;
    setCallTransfer.type = MOBILE_BUSY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    TestTransferCallBack(OPEN, MOBILE_BUSY);
}

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_0200
 * @tc.name     enable type MOBILE_BUSY, settingType REGISTRATION, test GetCallTransferInfo(), return 0
 *              Restoring the Initial Environment of REGISTRATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_0200, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    CallTransferInfo setRecoveryCallTransfer;
    setCallTransfer.settingType = ERASURE;
    setCallTransfer.type = MOBILE_BUSY;
    setRecoveryCallTransfer.type = MOBILE_BUSY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    TestTransferCallBack(OFF, MOBILE_BUSY);
    RecoveryCallTransfer(setRecoveryCallTransfer);
}

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_0300
 * @tc.name     enable type NO_REPLY, settingType REGISTRATION, test GetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_0300, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = REGISTRATION;
    setCallTransfer.type = NO_REPLY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    TestTransferCallBack(OPEN, NO_REPLY);
}

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_0400
 * @tc.name     enable type NO_REPLY, settingType ERASURE, test GetCallTransferInfo(), return 0
 *              Restoring the Initial Environment of REGISTRATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_0400, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    CallTransferInfo setRecoveryCallTransfer;
    setCallTransfer.settingType = ERASURE;
    setCallTransfer.type = NO_REPLY;
    setRecoveryCallTransfer.type = NO_REPLY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    TestTransferCallBack(OFF, NO_REPLY);
    RecoveryCallTransfer(setRecoveryCallTransfer);
}

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_0500
 * @tc.name     enable type NOT_REACHABLE, settingType REGISTRATION, test GetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_0500, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = REGISTRATION;
    setCallTransfer.type = NOT_REACHABLE;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    TestTransferCallBack(OPEN, NOT_REACHABLE);
}

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_0600
 * @tc.name     enable type NOT_REACHABLE, settingType ERASURE, test GetCallTransferInfo(), return 0
 *              Restoring the Initial Environment of REGISTRATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_0600, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    CallTransferInfo setRecoveryCallTransfer;
    setCallTransfer.settingType = ERASURE;
    setCallTransfer.type = NOT_REACHABLE;
    setRecoveryCallTransfer.type = NOT_REACHABLE;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    TestTransferCallBack(OFF, NOT_REACHABLE);
    RecoveryCallTransfer(setRecoveryCallTransfer);
}

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_0700
 * @tc.name     enable type UNCONDITIONAL, settingType REGISTRATION, test GetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_0700, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = REGISTRATION;
    setCallTransfer.type = UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    TestTransferCallBack(OPEN, UNCONDITIONAL);
}


/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_0800
 * @tc.name     enable type UNCONDITIONAL, settingType ERASURE, test GetCallTransferInfo(), return 0
 *              Restoring the Initial Environment of REGISTRATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_0800, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    CallTransferInfo setRecoveryCallTransfer;
    setCallTransfer.settingType = ERASURE;
    setCallTransfer.type = UNCONDITIONAL;
    setRecoveryCallTransfer.type = UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    TestTransferCallBack(OFF, UNCONDITIONAL);
    RecoveryCallTransfer(setRecoveryCallTransfer);
}

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_1100
 * @tc.name     enable type MOBILE_BUSY, settingType REGISTRATION, empty phonenumber, return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_1100, Function | MediumTest | Level3)
{
    char phoneNumber[3] = "";
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = REGISTRATION;
    setCallTransfer.type = MOBILE_BUSY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, phoneNumber);
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, GET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("status"), OPEN, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_STRING_WHILE_NE(g_updateResult.GetStringValue("number").c_str(), phoneNumber, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("type"), MOBILE_BUSY, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_1200
 * @tc.name     enable type UNCONDITIONAL, settingType ERASURE, test GetCallTransferInfo(), return non 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_1200, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.type = UNCONDITIONAL;
    EXPECT_NE(g_clientPtr->GetPtr()->GetCallTransferInfo(INVALID_SLOT_ID, setCallTransfer.type), SUCCESSFUL);
}

/************************************** Test SetCallTransferInfo() ***********************************/

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_0100
 * @tc.name     enable type MOBILE_BUSY, settingType REGISTRATION, test SetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_0100, Function | MediumTest | Level3)
{
    char invalidPhoneNumber[30] = "1234567890123456789012345678";
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = REGISTRATION;
    setCallTransfer.type = MOBILE_BUSY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, invalidPhoneNumber);
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), ERROR_VALUES, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_0200
 * @tc.name     enable type MOBILE_BUSY, settingType REGISTRATION, test SetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_0200, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = REGISTRATION;
    setCallTransfer.type = MOBILE_BUSY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_0300
 * @tc.name     enable type MOBILE_BUSY, settingType ERASURE, test SetCallTransferInfo(), return 0
 *              Restoring the Initial Environment of REGISTRATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_0300, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    CallTransferInfo setRecoveryCallTransfer;
    setCallTransfer.settingType = ERASURE;
    setCallTransfer.type = MOBILE_BUSY;
    setRecoveryCallTransfer.type = MOBILE_BUSY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
    RecoveryCallTransfer(setRecoveryCallTransfer);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_0400
 * @tc.name     enable type NO_REPLY, settingType REGISTRATION, test SetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_0400, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = REGISTRATION;
    setCallTransfer.type = NO_REPLY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_0500
 * @tc.name     enable type NO_REPLY, settingType ERASURE, test SetCallTransferInfo(), return 0
 *              Restoring the Initial Environment of REGISTRATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_0500, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    CallTransferInfo setRecoveryCallTransfer;
    setCallTransfer.settingType = ERASURE;
    setCallTransfer.type = NO_REPLY;
    setRecoveryCallTransfer.type = NO_REPLY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
    RecoveryCallTransfer(setRecoveryCallTransfer);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_0600
 * @tc.name     enable type NOT_REACHABLE, settingType REGISTRATION, test SetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_0600, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = REGISTRATION;
    setCallTransfer.type = NOT_REACHABLE;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_0700
 * @tc.name     enable type NOT_REACHABLE, settingType ERASURE, test SetCallTransferInfo(), return 0
 *              Restoring the Initial Environment of REGISTRATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_0700, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    CallTransferInfo setRecoveryCallTransfer;
    setCallTransfer.settingType = ERASURE;
    setCallTransfer.type = NOT_REACHABLE;
    setRecoveryCallTransfer.type = NOT_REACHABLE;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
    RecoveryCallTransfer(setRecoveryCallTransfer);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_0800
 * @tc.name     enable type UNCONDITIONAL, settingType REGISTRATION, test SetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_0800, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = REGISTRATION;
    setCallTransfer.type = UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_0900
 * @tc.name     enable type UNCONDITIONAL, settingType ERASURE, test SetCallTransferInfo(), return 0
 *              Restoring the Initial Environment of REGISTRATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_0900, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    CallTransferInfo setRecoveryCallTransfer;
    setCallTransfer.settingType = ERASURE;
    setCallTransfer.type = UNCONDITIONAL;
    setRecoveryCallTransfer.type = UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
    RecoveryCallTransfer(setRecoveryCallTransfer);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_1000
 * @tc.name     enable type MOBILE_BUSY, settingType REGISTRATION, test SetCallTransferInfo(), return non 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_1000, Function | MediumTest | Level3)
{
    char emptyPhoneNumber[3] = "";
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = REGISTRATION;
    setCallTransfer.type = MOBILE_BUSY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, emptyPhoneNumber);
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), ERROR_VALUES, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_1900
 * @tc.name     enable type NO_REPLY, settingType ERASURE, test SetCallTransferInfo(), return non 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_1900, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = ERASURE;
    setCallTransfer.type = NO_REPLY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(INVALID_SLOT_ID, setCallTransfer), SUCCESSFUL);
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
    int ret = Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_12000_MS);
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
    int ret = Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_12000_MS);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetMuted(false), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetMuted_0300
 * @tc.name     idle status, isMute true, test SetMuted(),return non 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetMuted_0300, Function | MediumTest | Level3)
{
    LOCK_NUM_WHILE_NE(g_clientPtr->GetPtr()->GetCallState(), (int)CallStateToApp::CALL_STATE_IDLE, SLEEP_50_MS,
            SLEEP_12000_MS);
    EXPECT_NE(g_clientPtr->GetPtr()->SetMuted(true), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetMuted_0400
 * @tc.name     idle status, isMute false, test SetMuted(),return non 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetMuted_0400, Function | MediumTest | Level3)
{
    LOCK_NUM_WHILE_NE(g_clientPtr->GetPtr()->GetCallState(), (int)CallStateToApp::CALL_STATE_IDLE, SLEEP_50_MS,
            SLEEP_12000_MS);
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
    int ret = Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_12000_MS);
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
    int ret = Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_12000_MS);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetAudioDevice(AudioDevice::DEVICE_SPEAKER), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetAudioDevice(AudioDevice::DEVICE_EARPIECE), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetAudioDevice_0300
 * @tc.name     coming active call, device DEVICE_WIRED_HEADSET, test SetAudioDevice(),return 0
 *              and Restoring the Initial Environment
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_SetAudioDevice_0300, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_12000_MS);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetAudioDevice(AudioDevice::DEVICE_WIRED_HEADSET), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetAudioDevice(AudioDevice::DEVICE_EARPIECE), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetAudioDevice_0400
 * @tc.name     coming active call, device DEVICE_BLUETOOTH_SCO, test SetAudioDevice(),return 0
 *              and Restoring the Initial Environment
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_SetAudioDevice_0400, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_12000_MS);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetAudioDevice(AudioDevice::DEVICE_BLUETOOTH_SCO), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetAudioDevice(AudioDevice::DEVICE_EARPIECE), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetAudioDevice_0500
 * @tc.name     idle status, device DEVICE_EARPIECE, test SetAudioDevice(),return non 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetAudioDevice_0500, Function | MediumTest | Level3)
{
    LOCK_NUM_WHILE_NE(g_clientPtr->GetPtr()->GetCallState(), (int)CallStateToApp::CALL_STATE_IDLE, SLEEP_50_MS,
            SLEEP_12000_MS);
    EXPECT_NE(g_clientPtr->GetPtr()->SetAudioDevice(AudioDevice::DEVICE_EARPIECE), SUCCESSFUL);
}

/********************************************* Test MuteRinger() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_MuteRinger_0100
 * @tc.name     idle status, enable muteRinger, test MuteRinger(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_MuteRinger_0100, Function | MediumTest | Level3)
{
    LOCK_NUM_WHILE_NE(g_clientPtr->GetPtr()->GetCallState(), (int)CallStateToApp::CALL_STATE_IDLE, SLEEP_50_MS,
             SLEEP_12000_MS);
    EXPECT_EQ(g_clientPtr->GetPtr()->MuteRinger(), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_MuteRinger_0200
 * @tc.name     coming active call, enable muteRinger, test MuteRinger(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_MuteRinger_0200, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_12000_MS);
    EXPECT_EQ(g_clientPtr->GetPtr()->MuteRinger(), SUCCESSFUL);
}