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
 * @tc.name     coming call, Test whether the phone can be dialed again, return false
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_IsNewCallAllowed_0100, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(TEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    EXPECT_NE(g_clientPtr->GetPtr()->IsNewCallAllowed(), true);
}

/**
 * @tc.number   Telephony_CallManager_IsNewCallAllowed_0200
 * @tc.name     idle status, test IsNewCallAllowed(), return true
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IsNewCallAllowed_0200, Function | MediumTest | Level3)
{
    LOCK_NUM_WHILE_NE(g_clientPtr->GetPtr()->GetCallState(), (int)CallStateToApp::CALL_STATE_IDLE, SLEEP_50_MS,
            SLEEP_30000_MS);
    EXPECT_EQ(g_clientPtr->GetPtr()->IsNewCallAllowed(), true);
}

/**
 * @tc.number   Telephony_CallManager_IsNewCallAllowed_0300
 * @tc.name     coming call 10086, test IsNewCallAllowed(), return true
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IsNewCallAllowed_0300, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(OWNTEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_30000_MS);
    EXPECT_EQ(g_clientPtr->GetPtr()->IsNewCallAllowed(), true);
    int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
    EXPECT_EQ(hangUpRet, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_30000_MS);
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

    int retRinging = g_clientPtr->GetPtr()->IsRinging();
    EXPECT_NE(retRinging, true);
    if (ret == SUCCESSFUL) {
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
        ret = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        EXPECT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_30000_MS);
    }
}

/**
 * @tc.number   Telephony_CallManager_IsRinging_0300
 * @tc.name     coming call, Test whether there IsRinging(), return true
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_IsRinging_0300, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(TEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    Telephony::Utils::Msleep(SLEEP_3000_MS);
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
    int ret = Dial(Str8ToStr16(TEST_PHONY_NUMBER));
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
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_RegisterCallBack_0100, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(OWNTEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_30000_MS);
    std::string updatePhoneNumber = g_updateAccountNumber;
    std::string phoneNumber = OWNTEST_PHONY_NUMBER;
    EXPECT_EQ(updatePhoneNumber, phoneNumber);
    EXPECT_EQ(g_updateSpeaker, true);
    EXPECT_EQ(g_updateAccountId, SLOT_ID);
    EXPECT_EQ(g_updateVideoState, (int)VideoStateType::TYPE_VOICE);
    EXPECT_EQ(g_updateIsEcc, false);
    EXPECT_EQ(g_updateCallType, (int)CallType::TYPE_CS);
    EXPECT_EQ(g_updateConference, (int)TelConferenceState::TEL_CONFERENCE_IDLE);

    int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
    EXPECT_EQ(hangUpRet, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_30000_MS);
}

/**
 * @tc.number   Telephony_CallManager_RegisterCallBack_0200
 * @tc.name     Import "#43#", By dialing, test RegisterCallBack() argument,return 0
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
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_RegisterCallBack_0300, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(OWNTEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_30000_MS);
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
    CallRestrictionInfo type;
    CallRestrictionInfo info;
    info.fac = RESTRICTION_TYPE_ALL_INCOMING;
    info.mode = RESTRICTION_MODE_ACTIVATION;
    int ret = strcpy_s(info.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    type.fac = RESTRICTION_TYPE_ALL_INCOMING;

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, info), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, type.fac), SUCCESSFUL);
    TestRestrictionCallBack(OPEN);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_0200
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_INCOMING, mode RESTRICTION_MODE_DEACTIVATION,
 *              test GetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_0200, Function | MediumTest | Level3)
{
    CallRestrictionInfo type;
    CallRestrictionInfo info;
    info.fac = RESTRICTION_TYPE_ALL_INCOMING;
    info.mode = RESTRICTION_MODE_DEACTIVATION;
    type.fac = RESTRICTION_TYPE_ALL_INCOMING;

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, info), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, type.fac), SUCCESSFUL);
    TestRestrictionCallBack(OFF);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_0300
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_OUTGOING, mode RESTRICTION_MODE_ACTIVATION,
 *              test GetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_0300, Function | MediumTest | Level3)
{
    CallRestrictionInfo type;
    CallRestrictionInfo info;
    info.fac = RESTRICTION_TYPE_ALL_OUTGOING;
    info.mode = RESTRICTION_MODE_ACTIVATION;
    type.fac = RESTRICTION_TYPE_ALL_OUTGOING;

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, info), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, type.fac), SUCCESSFUL);
    TestRestrictionCallBack(OPEN);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_0400
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_OUTGOING, mode RESTRICTION_MODE_DEACTIVATION,
 *              test GetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_0400, Function | MediumTest | Level3)
{
    CallRestrictionInfo type;
    CallRestrictionInfo info;
    info.fac = RESTRICTION_TYPE_ALL_OUTGOING;
    info.mode = RESTRICTION_MODE_DEACTIVATION;
    type.fac = RESTRICTION_TYPE_ALL_OUTGOING;

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, info), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, type.fac), SUCCESSFUL);
    TestRestrictionCallBack(OFF);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_0500
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL, mode RESTRICTION_MODE_ACTIVATION,
 *              test GetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_0500, Function | MediumTest | Level3)
{
    CallRestrictionInfo type;
    CallRestrictionInfo info;
    info.fac = RESTRICTION_TYPE_INTERNATIONAL;
    info.mode = RESTRICTION_MODE_ACTIVATION;
    type.fac = RESTRICTION_TYPE_INTERNATIONAL;

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, info), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, type.fac), SUCCESSFUL);
    TestRestrictionCallBack(OPEN);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_0600
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL, mode RESTRICTION_MODE_DEACTIVATION,
 *              test GetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_0600, Function | MediumTest | Level3)
{
    CallRestrictionInfo type;
    CallRestrictionInfo info;
    info.fac = RESTRICTION_TYPE_INTERNATIONAL;
    info.mode = RESTRICTION_MODE_DEACTIVATION;
    type.fac = RESTRICTION_TYPE_INTERNATIONAL;

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, info), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, type.fac), SUCCESSFUL);
    TestRestrictionCallBack(OFF);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_0700
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME, mode RESTRICTION_MODE_ACTIVATION,
 *              test GetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_0700, Function | MediumTest | Level3)
{
    CallRestrictionInfo type;
    CallRestrictionInfo info;
    info.fac = RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME;
    info.mode = RESTRICTION_MODE_ACTIVATION;
    type.fac = RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME;

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, info), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, type.fac), SUCCESSFUL);
    TestRestrictionCallBack(OPEN);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_0800
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME, mode RESTRICTION_MODE_DEACTIVATION,
 *              test GetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_0800, Function | MediumTest | Level3)
{
    CallRestrictionInfo type;
    CallRestrictionInfo info;
    info.fac = RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME;
    info.mode = RESTRICTION_MODE_DEACTIVATION;
    type.fac = RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME;

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, info), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, type.fac), SUCCESSFUL);
    TestRestrictionCallBack(OFF);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_0900
 * @tc.name     enable fac RESTRICTION_TYPE_ROAMING_INCOMING, mode RESTRICTION_MODE_ACTIVATION,
 *              test GetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_0900, Function | MediumTest | Level3)
{
    CallRestrictionInfo type;
    CallRestrictionInfo info;
    info.fac = RESTRICTION_TYPE_ROAMING_INCOMING;
    info.mode = RESTRICTION_MODE_ACTIVATION;
    type.fac = RESTRICTION_TYPE_ROAMING_INCOMING;

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, info), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, type.fac), SUCCESSFUL);
    TestRestrictionCallBack(OPEN);
}

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_1000
 * @tc.name     enable fac RESTRICTION_TYPE_ROAMING_INCOMING, mode RESTRICTION_MODE_DEACTIVATION,
 *              test GetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallRestriction_1000, Function | MediumTest | Level3)
{
    CallRestrictionInfo type;
    CallRestrictionInfo info;
    info.fac = RESTRICTION_TYPE_ROAMING_INCOMING;
    info.mode = RESTRICTION_MODE_DEACTIVATION;
    type.fac = RESTRICTION_TYPE_ROAMING_INCOMING;

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, info), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, type.fac), SUCCESSFUL);
    TestRestrictionCallBack(OFF);
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
    CallRestrictionInfo info;
    info.fac = RESTRICTION_TYPE_ALL_INCOMING;
    int ret = strcpy_s(info.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    info.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, info), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_0200
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_INCOMING, mode RESTRICTION_MODE_DEACTIVATION,
 *              test SetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_0200, Function | MediumTest | Level3)
{
    CallRestrictionInfo info;
    info.fac = RESTRICTION_TYPE_ALL_INCOMING;
    int ret = strcpy_s(info.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    info.mode = RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, info), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_0300
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_OUTGOING, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_0300, Function | MediumTest | Level3)
{
    CallRestrictionInfo info;
    info.fac = RESTRICTION_TYPE_ALL_OUTGOING;
    int ret = strcpy_s(info.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    info.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, info), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_0400
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_OUTGOING, mode RESTRICTION_MODE_DEACTIVATION,
 *              test SetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_0400, Function | MediumTest | Level3)
{
    CallRestrictionInfo info;
    info.fac = RESTRICTION_TYPE_ALL_OUTGOING;
    int ret = strcpy_s(info.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    info.mode = RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, info), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_0500
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_0500, Function | MediumTest | Level3)
{
    CallRestrictionInfo info;
    info.fac = RESTRICTION_TYPE_INTERNATIONAL;
    int ret = strcpy_s(info.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    info.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, info), SUCCESSFUL);
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
    CallRestrictionInfo info;
    info.fac = RESTRICTION_TYPE_INTERNATIONAL;
    int ret = strcpy_s(info.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    info.mode = RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, info), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_0700
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_0700, Function | MediumTest | Level3)
{
    CallRestrictionInfo info;
    info.fac = RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME;
    int ret = strcpy_s(info.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    info.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, info), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_0800
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME, mode RESTRICTION_MODE_DEACTIVATION,
 *              test SetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_0800, Function | MediumTest | Level3)
{
    CallRestrictionInfo info;
    info.fac = RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME;
    int ret = strcpy_s(info.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    info.mode = RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, info), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_0900
 * @tc.name     enable fac RESTRICTION_TYPE_ROAMING_INCOMING, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_0900, Function | MediumTest | Level3)
{
    CallRestrictionInfo info;
    info.fac = RESTRICTION_TYPE_ROAMING_INCOMING;
    int ret = strcpy_s(info.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    info.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, info), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_1000
 * @tc.name     enable fac RESTRICTION_TYPE_ROAMING_INCOMING, mode RESTRICTION_MODE_DEACTIVATION,
 *              test SetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_1000, Function | MediumTest | Level3)
{
    CallRestrictionInfo info;
    info.fac = RESTRICTION_TYPE_ROAMING_INCOMING;
    int ret = strcpy_s(info.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    info.mode = RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, info), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_1300
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_INCOMING, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_1300, Function | MediumTest | Level3)
{
    CallRestrictionInfo info;
    info.fac = RESTRICTION_TYPE_ALL_INCOMING;
    int ret = strcpy_s(info.password, BUFSIZ, INVALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    info.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, info), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_1400
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_OUTGOING, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_1400, Function | MediumTest | Level3)
{
    CallRestrictionInfo info;
    info.fac = RESTRICTION_TYPE_ALL_OUTGOING;
    int ret = strcpy_s(info.password, BUFSIZ, INVALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    info.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, info), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_1500
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_1500, Function | MediumTest | Level3)
{
    CallRestrictionInfo info;
    info.fac = RESTRICTION_TYPE_INTERNATIONAL;
    int ret = strcpy_s(info.password, BUFSIZ, INVALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    info.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, info), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_1600
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_1600, Function | MediumTest | Level3)
{
    CallRestrictionInfo info;
    info.fac = RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME;
    int ret = strcpy_s(info.password, BUFSIZ, INVALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    info.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, info), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_1700
 * @tc.name     enable fac RESTRICTION_TYPE_ROAMING_INCOMING, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallRestriction_1700, Function | MediumTest | Level3)
{
    CallRestrictionInfo info;
    info.fac = RESTRICTION_TYPE_ROAMING_INCOMING;
    int ret = strcpy_s(info.password, BUFSIZ, INVALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    info.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, info), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/************************************ Test GetCallTransferInfo() ***************************************/

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_0100
 * @tc.name     enable type MOBILE_BUSY, settingType REGISTRATION, test GetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_0100, Function | MediumTest | Level3)
{
    CallTransferInfo init;
    CallTransferInfo info;
    info.type = MOBILE_BUSY;
    init.settingType = REGISTRATION;
    init.type = MOBILE_BUSY;
    int ret = strcpy_s(init.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, init), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, info.type), SUCCESSFUL);
    TestTransferCallBack(OPEN, MOBILE_BUSY);
}

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_0200
 * @tc.name     enable type MOBILE_BUSY, settingType REGISTRATION, test GetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_0200, Function | MediumTest | Level3)
{
    CallTransferInfo init;
    CallTransferInfo info;
    info.type = MOBILE_BUSY;
    init.settingType = ERASURE;
    init.type = MOBILE_BUSY;
    int ret = strcpy_s(init.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, init), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, info.type), SUCCESSFUL);
    TestTransferCallBack(OFF, MOBILE_BUSY);
}

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_0300
 * @tc.name     enable type NO_REPLY, settingType REGISTRATION, test GetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_0300, Function | MediumTest | Level3)
{
    CallTransferInfo init;
    CallTransferInfo info;
    info.type = NO_REPLY;
    init.settingType = REGISTRATION;
    init.type = NO_REPLY;
    int ret = strcpy_s(init.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, init), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, info.type), SUCCESSFUL);
    TestTransferCallBack(OPEN, NO_REPLY);
}

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_0400
 * @tc.name     enable type NO_REPLY, settingType ERASURE, test GetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_0400, Function | MediumTest | Level3)
{
    CallTransferInfo init;
    CallTransferInfo info;
    info.type = NO_REPLY;
    init.settingType = ERASURE;
    init.type = NO_REPLY;
    int ret = strcpy_s(init.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, init), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, info.type), SUCCESSFUL);
    TestTransferCallBack(OFF, NO_REPLY);
}

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_0500
 * @tc.name     enable type NOT_REACHABLE, settingType REGISTRATION, test GetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_0500, Function | MediumTest | Level3)
{
    CallTransferInfo init;
    CallTransferInfo info;
    info.type = NOT_REACHABLE;
    init.settingType = REGISTRATION;
    init.type = NOT_REACHABLE;
    int ret = strcpy_s(init.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, init), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, info.type), SUCCESSFUL);
    TestTransferCallBack(OPEN, NOT_REACHABLE);
}

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_0600
 * @tc.name     enable type NOT_REACHABLE, settingType ERASURE, test GetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_0600, Function | MediumTest | Level3)
{
    CallTransferInfo init;
    CallTransferInfo info;
    info.type = NOT_REACHABLE;
    init.settingType = ERASURE;
    init.type = NOT_REACHABLE;
    int ret = strcpy_s(init.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, init), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, info.type), SUCCESSFUL);
    TestTransferCallBack(OFF, NOT_REACHABLE);
}

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_0700
 * @tc.name     enable type UNCONDITIONAL, settingType REGISTRATION, test GetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_0700, Function | MediumTest | Level3)
{
    CallTransferInfo init;
    CallTransferInfo info;
    info.type = UNCONDITIONAL;
    init.settingType = REGISTRATION;
    init.type = UNCONDITIONAL;
    int ret = strcpy_s(init.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, init), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, info.type), SUCCESSFUL);
    TestTransferCallBack(OPEN, UNCONDITIONAL);
}


/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_0800
 * @tc.name     enable type UNCONDITIONAL, settingType ERASURE, test GetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_0800, Function | MediumTest | Level3)
{
    CallTransferInfo init;
    CallTransferInfo info;
    info.type = UNCONDITIONAL;
    init.settingType = ERASURE;
    init.type = UNCONDITIONAL;
    int ret = strcpy_s(init.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, init), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, info.type), SUCCESSFUL);
    TestTransferCallBack(OFF, UNCONDITIONAL);
}

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_1100
 * @tc.name     enable type MOBILE_BUSY, settingType REGISTRATION, empty phonenumber, return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallTransferInfo_1100, Function | MediumTest | Level3)
{
    char phoneNumber[3] = "";
    CallTransferInfo init;
    CallTransferInfo info;
    info.type = MOBILE_BUSY;
    init.settingType = REGISTRATION;
    init.type = MOBILE_BUSY;
    int ret = strcpy_s(init.transferNum, BUFSIZ, phoneNumber);
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, init), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, info.type), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, GET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("status"), OPEN, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_STRING_WHILE_NE(g_updateResult.GetStringValue("number").c_str(), phoneNumber, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("type"), MOBILE_BUSY, SLEEP_50_MS, SLEEP_12000_MS);
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
    CallTransferInfo init;
    init.settingType = REGISTRATION;
    init.type = MOBILE_BUSY;
    int ret = strcpy_s(init.transferNum, BUFSIZ, invalidPhoneNumber);
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, init), SUCCESSFUL);
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
    CallTransferInfo init;
    init.settingType = REGISTRATION;
    init.type = MOBILE_BUSY;
    int ret = strcpy_s(init.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, init), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_0300
 * @tc.name     enable type MOBILE_BUSY, settingType ERASURE, test SetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_0300, Function | MediumTest | Level3)
{
    CallTransferInfo init;
    init.settingType = ERASURE;
    init.type = MOBILE_BUSY;
    int ret = strcpy_s(init.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, init), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_0400
 * @tc.name     enable type NO_REPLY, settingType REGISTRATION, test SetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_0400, Function | MediumTest | Level3)
{
    CallTransferInfo init;
    init.settingType = REGISTRATION;
    init.type = NO_REPLY;
    int ret = strcpy_s(init.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, init), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_0500
 * @tc.name     enable type NO_REPLY, settingType ERASURE, test SetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_0500, Function | MediumTest | Level3)
{
    CallTransferInfo init;
    init.settingType = ERASURE;
    init.type = NO_REPLY;
    int ret = strcpy_s(init.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, init), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_0600
 * @tc.name     enable type NOT_REACHABLE, settingType REGISTRATION, test SetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_0600, Function | MediumTest | Level3)
{
    CallTransferInfo init;
    init.settingType = REGISTRATION;
    init.type = NOT_REACHABLE;
    int ret = strcpy_s(init.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, init), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_0700
 * @tc.name     enable type NOT_REACHABLE, settingType ERASURE, test SetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_0700, Function | MediumTest | Level3)
{
    CallTransferInfo init;
    init.settingType = ERASURE;
    init.type = NOT_REACHABLE;
    int ret = strcpy_s(init.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, init), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_0800
 * @tc.name     enable type UNCONDITIONAL, settingType REGISTRATION, test SetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_0800, Function | MediumTest | Level3)
{
    CallTransferInfo init;
    init.settingType = REGISTRATION;
    init.type = UNCONDITIONAL;
    int ret = strcpy_s(init.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, init), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_0900
 * @tc.name     enable type UNCONDITIONAL, settingType ERASURE, test SetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_0900, Function | MediumTest | Level3)
{
    CallTransferInfo init;
    init.settingType = ERASURE;
    init.type = UNCONDITIONAL;
    int ret = strcpy_s(init.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, init), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_1000
 * @tc.name     enable type MOBILE_BUSY, settingType REGISTRATION, test SetCallTransferInfo(), return non 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallTransferInfo_1000, Function | MediumTest | Level3)
{
    char emptyPhoneNumber[3] = "";
    CallTransferInfo init;
    init.settingType = REGISTRATION;
    init.type = MOBILE_BUSY;
    int ret = strcpy_s(init.transferNum, BUFSIZ, emptyPhoneNumber);
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, init), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), ERROR_VALUES, SLEEP_50_MS, SLEEP_12000_MS);
}

/********************************************* Test SetMuted() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_SetMuted_0100
 * @tc.name     coming active call, isMute true, test SetMuted(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetMuted_0100, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(OWNTEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_30000_MS);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetMuted(true), SUCCESSFUL);
    int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
    EXPECT_EQ(hangUpRet, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_30000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetMuted_0200
 * @tc.name     coming active call, isMute false, test SetMuted(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetMuted_0200, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(OWNTEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_30000_MS);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetMuted(false), SUCCESSFUL);
    int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
    EXPECT_EQ(hangUpRet, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_30000_MS);
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
 * @tc.name     coming active call, device DEVICE_EARPIECE, test SetAudioDevice(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetAudioDevice_0100, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(OWNTEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_30000_MS);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetAudioDevice(AudioDevice::DEVICE_EARPIECE), SUCCESSFUL);
    int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
    EXPECT_EQ(hangUpRet, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_30000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetAudioDevice_0200
 * @tc.name     coming active call, device DEVICE_SPEAKER, test SetAudioDevice(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetAudioDevice_0200, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(OWNTEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_30000_MS);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetAudioDevice(AudioDevice::DEVICE_SPEAKER), SUCCESSFUL);
    int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
    EXPECT_EQ(hangUpRet, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_30000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetAudioDevice_0300
 * @tc.name     idle status, device DEVICE_EARPIECE, test SetAudioDevice(),return non 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetAudioDevice_0300, Function | MediumTest | Level3)
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
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_MuteRinger_0200, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(OWNTEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_30000_MS);
    EXPECT_EQ(g_clientPtr->GetPtr()->MuteRinger(), SUCCESSFUL);
    int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
    EXPECT_EQ(hangUpRet, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_30000_MS);
}