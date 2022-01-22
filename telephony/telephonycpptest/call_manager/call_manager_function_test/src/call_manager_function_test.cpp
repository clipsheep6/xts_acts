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

#define CALLMANAGER_FOUNCTION_TEST
#include "call_manager_test.h"

#include <cstring>
#include <gtest/gtest.h>

#include "call_manager_basic.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;
using namespace OHOS::Telephony::CallManager;

/********************************************* Test DialCall() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_DialCall_0100
 * @tc.name     make a normal phone call with card1, TYPE_VOICE
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_DialCall_0100, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_DialCall_0200
 * @tc.name     make a normal phone call with null telephone numbers,
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_DialCall_0200, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(EMPTY_DEFAULT));
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_DialCall_0300
 * @tc.name     make a normal phone call with telephone numbers is negative number
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_DialCall_0300, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16("-12354785268"));
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_DialCall_0400
 * @tc.name     make a normal phone call with telephone numbers is too long
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_DialCall_0400, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(
        Str8ToStr16("19119080646435437102938190283912471651865810514786470168818468143768714648"));
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_DialCall_0500
 * @tc.name     If an invalid number is dialed, the DialCall() interface succeeds, but callId is not generated
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_DialCall_0500, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16("19!@#$%^&*:"));
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_DialCall_1000
 * @tc.name     make a normal phone call with card1, TYPE_VOICE, import phonynumber 10086
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_DialCall_1000, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_30000_MS);
}

/**
 * @tc.number   Telephony_CallManager_DialCall_1100
 * @tc.name     make a normal phone call with card1, TYPE_VOICE import phoneNumber 112
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_DialCall_1100, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16("112"));
    ASSERT_EQ(ret, SUCCESSFUL);
}

/********************************************* Test AnswerCall() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_AnswerCall_0100
 * @tc.name     test AnswerCall with the callId does not exist
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_AnswerCall_0100, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->AnswerCall(FALSE_CALLID_1000, (int)VideoStateType::TYPE_VOICE);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_AnswerCall_0200
 * @tc.name     test the AnswerCall with a negative value callId
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_AnswerCall_0200, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->AnswerCall(FALSE_NEGATIVE_CALLID_100, (int)VideoStateType::TYPE_VOICE);
    EXPECT_NE(ret, SUCCESSFUL);
}

/********************************************* Test RejectCall() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_RejectCall_0100
 * @tc.name     test RejectCall with the callId does not exist
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_RejectCall_0100, Function | MediumTest | Level3)
{
    u16string textMessage = Str8ToStr16("this is a test message");
    int ret = g_clientPtr->GetPtr()->RejectCall(FALSE_NEGATIVE_CALLID_100, true, textMessage);
    EXPECT_NE(ret, SUCCESSFUL);
}

/******************************************* Test HangUpCall() *********************************************/

/**
 * @tc.number   Telephony_CallManager_HangUpCall_0100
 * @tc.name     test ring disconnect call after DialCall,
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_HangUpCall_0100, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_1000_MS);
    int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
    EXPECT_EQ(hangUpRet, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true,
        SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_HangUpCall_0200
 * @tc.name     test disconnect call with wrong callId
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_HangUpCall_0200, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->HangUpCall(FALSE_NEGATIVE_CALLID_100);
    EXPECT_NE(ret, SUCCESSFUL);
}

/******************************************* Test GetCallState() *********************************************/

/**
 * @tc.number   Telephony_CallManager_GetCallState_0100
 * @tc.name     test GetCallState() without call, is idle status
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallState_0100, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->GetCallState();
    EXPECT_EQ(ret, (int)CallStateToApp::CALL_STATE_IDLE);
}

/**
 * @tc.number   Telephony_CallManager_GetCallState_0200
 * @tc.name     test GetCallState() after call
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_GetCallState_0200, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_1000_MS);
    ret = g_clientPtr->GetPtr()->GetCallState();
    EXPECT_EQ(ret, (int)CallStateToApp::CALL_STATE_OFFHOOK);
}

/******************************************* Test HoldCall() *********************************************/

/**
 * @tc.number   Telephony_CallManager_HoldCall_0100
 * @tc.name     Hold calls for non-existent call ID
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_HoldCall_0100, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->HoldCall(FALSE_NEGATIVE_CALLID_100);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_HoldCall_0200
 * @tc.name     coming call test hold call,return non-zero
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_HoldCall_0200, Function | MediumTest | Level2)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_1000_MS);
    ret = g_clientPtr->GetPtr()->HoldCall(g_newCallId);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_HoldCall_0600
 * @tc.name     coming a active call test hold call, return 0
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_HoldCall_0600, Function | MediumTest | Level2)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_30000_MS);
    ret = g_clientPtr->GetPtr()->HoldCall(g_newCallId);
    EXPECT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_HOLDING), true,
        SLEEP_50_MS, SLEEP_30000_MS);
}

/******************************************* Test UnHoldCall() *********************************************/

/**
 * @tc.number   Telephony_CallManager_UnHoldCall_0100
 * @tc.name     Replies calls to a call ID that does not exist , return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_UnHoldCall_0100, Function | MediumTest | Level3)
{
    EXPECT_NE(g_clientPtr->GetPtr()->UnHoldCall(FALSE_NEGATIVE_CALLID_100), 0);
}

/**
 * @tc.number   Telephony_CallManager_UnHoldCall_0200
 * @tc.name     Passing in the suspended call ID, test UnHoldCall() return non-zero
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_UnHoldCall_0200, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_1000_MS);
    ret = g_clientPtr->GetPtr()->UnHoldCall(g_newCallId);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_UnHoldCall_0600
 * @tc.name     coming a active call , holding the call ,and test unhold call , return 0
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_UnHoldCall_0600, Function | MediumTest | Level2)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_30000_MS);
    ret = g_clientPtr->GetPtr()->HoldCall(g_newCallId);
    EXPECT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_HOLDING), true,
        SLEEP_50_MS, SLEEP_30000_MS);
    ret = g_clientPtr->GetPtr()->UnHoldCall(g_newCallId);
    EXPECT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_30000_MS);
}

/******************************************* Test SwitchCall() *********************************************/

/**
 * @tc.number   Telephony_CallManager_SwitchCall_0100
 * @tc.name     Test returns 0 after hold call, and switching call
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_SwitchCall_0100, Function | MediumTest | Level3)
{
    LOCK_NUM_WHILE_NE(
        g_clientPtr->GetPtr()->GetCallState(), (int)CallStateToApp::CALL_STATE_IDLE, SLEEP_50_MS, SLEEP_30000_MS);
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_1000_MS);
    ret = g_clientPtr->GetPtr()->HoldCall(g_newCallId);
    EXPECT_NE(ret, SUCCESSFUL);
    ret = g_clientPtr->GetPtr()->SwitchCall(g_newCallId);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SwitchCall_0200
 * @tc.name     Test returns 0 after switching call, and DialCall() ,return true
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_SwitchCall_0200, Function | MediumTest | Level3)
{
    LOCK_NUM_WHILE_NE(
        g_clientPtr->GetPtr()->GetCallState(), (int)CallStateToApp::CALL_STATE_IDLE, SLEEP_50_MS, SLEEP_30000_MS);
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_1000_MS);
    ret = g_clientPtr->GetPtr()->SwitchCall(g_newCallId);
    EXPECT_NE(ret, SUCCESSFUL);
}

/********************************************* Test HasCall() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_HasCall_0100
 * @tc.name     Confirm whether you are currently on the phone after dialing ,return true
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_HasCall_0100, Function | MediumTest | Level3)
{
    LOCK_NUM_WHILE_NE(
        g_clientPtr->GetPtr()->GetCallState(), (int)CallStateToApp::CALL_STATE_IDLE, SLEEP_50_MS, SLEEP_30000_MS);
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_1000_MS);
    bool isRet = g_clientPtr->GetPtr()->HasCall();
    EXPECT_EQ(isRet, true);
}

/**
 * @tc.number   Telephony_CallManager_HasCall_0200
 * @tc.name     The wrong number is not on call,return false
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_HasCall_0200, Function | MediumTest | Level3)
{
    LOCK_NUM_WHILE_NE(
        g_clientPtr->GetPtr()->GetCallState(), (int)CallStateToApp::CALL_STATE_IDLE, SLEEP_50_MS, SLEEP_30000_MS);
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(EMPTY_DEFAULT));
    EXPECT_NE(ret, SUCCESSFUL);

    bool isRet = g_clientPtr->GetPtr()->HasCall();
    EXPECT_NE(isRet, true);
}

/**
 * @tc.number   Telephony_CallManager_HasCall_0300
 * @tc.name     Free time test Hascall() , return false
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_HasCall_0300, Function | MediumTest | Level3)
{
    LOCK_NUM_WHILE_NE(
        g_clientPtr->GetPtr()->GetCallState(), (int)CallStateToApp::CALL_STATE_IDLE, SLEEP_50_MS, SLEEP_30000_MS);
    bool isRet = g_clientPtr->GetPtr()->HasCall();
    EXPECT_NE(isRet, true);
}

/**
 * @tc.number   Telephony_CallManager_HasCall_0800
 * @tc.name     Free time test Hascall() , return false
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_HasCall_0800, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_30000_MS);
    bool isRet = g_clientPtr->GetPtr()->HasCall();
    EXPECT_EQ(isRet, true);
}

/***************************************** Test CombineConference() ********************************************/

/**
 * @tc.number   Telephony_CallManager_CombineConference_0100
 * @tc.name     Import callId "1234",test CombineConference(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_CombineConference_0100, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->CombineConference(INVALID_CALLID);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_CombineConference_0200
 * @tc.name     Import son callId,test CombineConference(),return non-zero
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_CombineConference_0200, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_1000_MS);
    ret = g_clientPtr->GetPtr()->CombineConference(g_updateCallId);
    EXPECT_NE(ret, SUCCESSFUL);
}

/********************************************* Test GetMainCallId() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_GetMainCallId_0100
 * @tc.name     Import callId "1234",test GetMainCallId(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetMainCallId_0100, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->GetMainCallId(INVALID_CALLID);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_GetMainCallId_0200
 * @tc.name     Import son callId,test GetMainCallId(),return non-zero
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_GetMainCallId_0200, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_1000_MS);
    ret = g_clientPtr->GetPtr()->GetMainCallId(g_updateCallId);
    EXPECT_NE(ret, SUCCESSFUL);
}

/***************************************** Test GetSubCallIdList() ******************************************/

/**
 * @tc.number   Telephony_CallManager_GetSubCallIdList_0100
 * @tc.name     Import callId "1234",test GetSubCallIdList(),return non-zero, Empty and destroy after completion
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetSubCallIdList_0100, Function | MediumTest | Level3)
{
    std::vector<std::u16string> ans = g_clientPtr->GetPtr()->GetSubCallIdList(INVALID_CALLID);
    EXPECT_EQ(ans.empty(), true);
}

/**
 * @tc.number   Telephony_CallManager_GetSubCallIdList_0200
 * @tc.name     Import son callId,test GetSubCallIdList(),return non-zero, Empty and destroy after completion
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_GetSubCallIdList_0200, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_1000_MS);
    std::vector<std::u16string> ans = g_clientPtr->GetPtr()->GetSubCallIdList(g_newCallId);
    EXPECT_EQ(ans.empty(), true);
}

/************************************ Test GetCallIdListForConference() ***************************************/

/**
 * @tc.number   Telephony_CallManager_GetCallIdListForConference_0100
 * @tc.name     Import callId "1234",test GetCallIdListForConference(),return non-zero,Empty and destroy after
 *              completion
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallIdListForConference_0100, Function | MediumTest | Level3)
{
    std::vector<std::u16string> ans = g_clientPtr->GetPtr()->GetCallIdListForConference(INVALID_CALLID);
    EXPECT_EQ(ans.empty(), true);
}

/**
 * @tc.number   Telephony_CallManager_GetCallIdListForConference_0200
 * @tc.name     Import son callId,test GetCallIdListForConference(),return non-zero,Empty and destroy after completion
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_GetCallIdListForConference_0200, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_1000_MS);
    std::vector<std::u16string> ans = g_clientPtr->GetPtr()->GetCallIdListForConference(g_newCallId);
    EXPECT_EQ(ans.empty(), true);
}

/**************************************** Test IsInEmergencyCall() ******************************************/

/**
 * @tc.number   Telephony_CallManager_IsInEmergencyCall_0100
 * @tc.name     Call one phonynumber, test IsInEmergencyCall(),return non-zero
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_IsInEmergencyCall_0100, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_1000_MS);
    bool emergencyRet = g_clientPtr->GetPtr()->IsInEmergencyCall();
    EXPECT_NE(emergencyRet, true);
}

/**
 * @tc.number   Telephony_CallManager_IsInEmergencyCall_0200
 * @tc.name     Call one phonynumber "112",test IsInEmergencyCall(),return false
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_IsInEmergencyCall_0200, Function | MediumTest | Level3)
{
    string phoneNumber = "112";
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(phoneNumber));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_1000_MS);
    bool emergencyRet = g_clientPtr->GetPtr()->IsInEmergencyCall();
    EXPECT_EQ(emergencyRet, true);
}

/************************************* Test IsEmergencyPhoneNumber() ***************************************/

/**
 * @tc.number
 * @tc.name     Call one phonynumber "000",test IsEmergencyPhoneNumber(),return true
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IsEmergencyPhoneNumber_0100, Function | MediumTest | Level3)
{
    string number = "000";
    std::u16string phoneNumber = Str8ToStr16(number);
    int32_t errorCode = ERROR_VALUES;

    bool isRet = g_clientPtr->GetPtr()->IsEmergencyPhoneNumber(phoneNumber, SLOT_ID, errorCode);
    EXPECT_EQ(isRet, true);
    EXPECT_EQ(errorCode, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IsEmergencyPhoneNumber_0200
 * @tc.name     Call one phoneNumber "0-0-0",test IsEmergencyPhoneNumber(),return false
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IsEmergencyPhoneNumber_0200, Function | MediumTest | Level3)
{
    string invalidNumber = "0-0-0";
    std::u16string phoneNumber = Str8ToStr16(invalidNumber);
    int32_t errorCode = ERROR_VALUES;

    bool isRet = g_clientPtr->GetPtr()->IsEmergencyPhoneNumber(phoneNumber, SLOT_ID, errorCode);
    EXPECT_NE(isRet, true);
    EXPECT_EQ(errorCode, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IsEmergencyPhoneNumber_0300
 * @tc.name     Call one phonynumber "112",test IsEmergencyPhoneNumber(),return true
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IsEmergencyPhoneNumber_0300, Function | MediumTest | Level3)
{
    string number = "112";
    std::u16string phoneNumber = Str8ToStr16(number);
    int32_t errorCode = ERROR_VALUES;

    bool isRet = g_clientPtr->GetPtr()->IsEmergencyPhoneNumber(phoneNumber, SLOT_ID, errorCode);
    EXPECT_EQ(isRet, true);
    EXPECT_EQ(errorCode, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IsEmergencyPhoneNumber_0400
 * @tc.name     Call one phonynumber "911",test IsEmergencyPhoneNumber(),return true
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IsEmergencyPhoneNumber_0400, Function | MediumTest | Level3)
{
    string number = "911";
    std::u16string phoneNumber = Str8ToStr16(number);
    int32_t errorCode = ERROR_VALUES;

    bool isRet = g_clientPtr->GetPtr()->IsEmergencyPhoneNumber(phoneNumber, SLOT_ID, errorCode);
    EXPECT_EQ(isRet, true);
    EXPECT_EQ(errorCode, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IsEmergencyPhoneNumber_0500
 * @tc.name     Call one phonynumber "08",test IsEmergencyPhoneNumber(),return true
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IsEmergencyPhoneNumber_0500, Function | MediumTest | Level3)
{
    string number = "08";
    std::u16string phoneNumber = Str8ToStr16(number);
    int32_t errorCode = ERROR_VALUES;

    bool isRet = g_clientPtr->GetPtr()->IsEmergencyPhoneNumber(phoneNumber, SLOT_ID, errorCode);
    EXPECT_EQ(isRet, true);
}

/**
 * @tc.number   Telephony_CallManager_IsEmergencyPhoneNumber_0600
 * @tc.name     Call one phoneNumber "118",test IsEmergencyPhoneNumber(),return false
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IsEmergencyPhoneNumber_0600, Function | MediumTest | Level3)
{
    string number = "118";
    std::u16string phoneNumber = Str8ToStr16(number);
    int32_t errorCode = ERROR_VALUES;

    bool isRet = g_clientPtr->GetPtr()->IsEmergencyPhoneNumber(phoneNumber, SLOT_ID, errorCode);
    EXPECT_EQ(isRet, true);
    EXPECT_EQ(errorCode, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IsEmergencyPhoneNumber_0700
 * @tc.name     Call one phonynumber "119",test IsEmergencyPhoneNumber(),return true
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IsEmergencyPhoneNumber_0700, Function | MediumTest | Level3)
{
    string number = "119";
    std::u16string phoneNumber = Str8ToStr16(number);
    int32_t errorCode = ERROR_VALUES;

    bool isRet = g_clientPtr->GetPtr()->IsEmergencyPhoneNumber(phoneNumber, SLOT_ID, errorCode);
    EXPECT_EQ(isRet, true);
    EXPECT_EQ(errorCode, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IsEmergencyPhoneNumber_0800
 * @tc.name     Call one phonynumber "999",test IsEmergencyPhoneNumber(),return true
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IsEmergencyPhoneNumber_0800, Function | MediumTest | Level3)
{
    string number = "999";
    std::u16string phoneNumber = Str8ToStr16(number);
    int32_t errorCode = ERROR_VALUES;

    bool isRet = g_clientPtr->GetPtr()->IsEmergencyPhoneNumber(phoneNumber, SLOT_ID, errorCode);
    EXPECT_EQ(isRet, true);
    EXPECT_EQ(errorCode, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IsEmergencyPhoneNumber_1100
 * @tc.name     Import INVALID_SLOT_ID, Call one phonynumber "119",test IsEmergencyPhoneNumber(),return true
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IsEmergencyPhoneNumber_1100, Function | MediumTest | Level3)
{
    string invalidNumber = "119";
    std::u16string phoneNumber = Str8ToStr16(invalidNumber);
    int32_t errorCode = ERROR_VALUES;

    bool isRet = g_clientPtr->GetPtr()->IsEmergencyPhoneNumber(phoneNumber, INVALID_SLOT_ID, errorCode);
    EXPECT_NE(isRet, true);
    EXPECT_NE(errorCode, SUCCESSFUL);
}

/************************************* Test GetCallWaiting() ***************************************/

/**
 * @tc.number   Telephony_CallManager_GetCallWaiting_0100
 * @tc.name     imput slot_id 0,test GetCallWaiting()
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallWaiting_0100, Function | MediumTest | Level3)
{
    int isRet = g_clientPtr->GetPtr()->GetCallWaiting(SLOT_ID);
    EXPECT_EQ(isRet, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("status"), OPEN, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_GetCallWaiting_0200
 * @tc.name     imput slot_id 10,test GetCallWaiting(),return non 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallWaiting_0200, Function | MediumTest | Level3)
{
    int isRet = g_clientPtr->GetPtr()->GetCallWaiting(INVALID_SLOT_ID);
    EXPECT_NE(isRet, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_GetCallWaiting_0300
 * @tc.name     imput slot_id 0,before call SetCallWaiting enable open, and test GetCallWaiting() again
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallWaiting_0300, Function | MediumTest | Level3)
{
    int isRet = g_clientPtr->GetPtr()->SetCallWaiting(SLOT_ID, true);
    ASSERT_EQ(isRet, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("status"), OPEN, SLEEP_50_MS, SLEEP_12000_MS);
    isRet = g_clientPtr->GetPtr()->GetCallWaiting(SLOT_ID);
    EXPECT_EQ(isRet, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_GetCallWaiting_0400
 * @tc.name     imput slot_id 0,before call SetCallWaiting enable off, and test GetCallWaiting() again
 *              and restoring the Default Environment
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallWaiting_0400, Function | MediumTest | Level3)
{
    int isRet = g_clientPtr->GetPtr()->SetCallWaiting(SLOT_ID, false);
    ASSERT_EQ(isRet, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("status"), OFF, SLEEP_50_MS, SLEEP_12000_MS);
    isRet = g_clientPtr->GetPtr()->GetCallWaiting(SLOT_ID);
    EXPECT_EQ(isRet, SUCCESSFUL);
    isRet = g_clientPtr->GetPtr()->SetCallWaiting(SLOT_ID, true);
    ASSERT_EQ(isRet, SUCCESSFUL);
}

/************************************* Test SetCallWaiting() ***************************************/

/**
 * @tc.number   Telephony_CallManager_SetCallWaiting_0100
 * @tc.name     imput slot_id 0,test SetCallWaiting() enable open
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallWaiting_0100, Function | MediumTest | Level3)
{
    int isRet = g_clientPtr->GetPtr()->SetCallWaiting(SLOT_ID, true);
    EXPECT_EQ(isRet, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("status"), OPEN, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallWaiting_0200
 * @tc.name     imput slot_id 0,test SetCallWaiting() enable open
 *              and restoring the Default Environment
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallWaiting_0200, Function | MediumTest | Level3)
{
    int isRet = g_clientPtr->GetPtr()->SetCallWaiting(SLOT_ID, false);
    ASSERT_EQ(isRet, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("status"), OFF, SLEEP_50_MS, SLEEP_12000_MS);
    isRet = g_clientPtr->GetPtr()->SetCallWaiting(SLOT_ID, true);
    EXPECT_EQ(isRet, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallWaiting_0500
 * @tc.name     Import slot_id 10,set callwaiting to be off,test SetCallWaiting(),return non 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallWaiting_0500, Function | MediumTest | Level3)
{
    int isRet = g_clientPtr->GetPtr()->SetCallWaiting(INVALID_SLOT_ID, false);
    EXPECT_NE(isRet, SUCCESSFUL);
}

/********************************************* Test StartDtmf() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_StartDtmf_0100
 * @tc.name     Import str '1', test StartDtmf(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_StartDtmf_0100, Function | MediumTest | Level3)
{
    char invalidNumberDtmf = '1';
    int ret = g_clientPtr->GetPtr()->StartDtmf(INVALID_CALLID, invalidNumberDtmf);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_StartDtmf_0200
 * @tc.name     Import str '0', test StartDtmf(),return 0
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_StartDtmf_0200, Function | MediumTest | Level3)
{
    char validNumberDtmf = '0';
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_1000_MS);
    g_clientPtr->GetPtr()->StartDtmf(g_newCallId, validNumberDtmf);
    ASSERT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_StartDtmf_0300
 * @tc.name     Import str '9', test StartDtmf(),return 0
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_StartDtmf_0300, Function | MediumTest | Level3)
{
    char validNumberDtmf = '9';

    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_1000_MS);
    g_clientPtr->GetPtr()->StartDtmf(g_newCallId, validNumberDtmf);
    ASSERT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_StartDtmf_0400
 * @tc.name     Import str '#', test StartDtmf(),return 0
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_StartDtmf_0400, Function | MediumTest | Level3)
{
    char validCharDtmf = '#';

    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_1000_MS);
    ret = g_clientPtr->GetPtr()->StartDtmf(g_newCallId, validCharDtmf);
    ASSERT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_StartDtmf_0500
 * @tc.name     Import str '*', test StartDtmf(),return 0
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_StartDtmf_0500, Function | MediumTest | Level3)
{
    char validCharDtmf = '*';
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_1000_MS);
    ret = g_clientPtr->GetPtr()->StartDtmf(g_newCallId, validCharDtmf);
    ASSERT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_StartDtmf_0600
 * @tc.name     Import str 'A', test StartDtmf(),return 0
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_StartDtmf_0600, Function | MediumTest | Level3)
{
    char validLetterDtmf = 'A';

    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_1000_MS);
    ret = g_clientPtr->GetPtr()->StartDtmf(g_newCallId, validLetterDtmf);
    ASSERT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_StartDtmf_0700
 * @tc.name     Import str 'd', test StartDtmf(),return non-zero
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_StartDtmf_0700, Function | MediumTest | Level3)
{
    char invalidDtmf = 'd';

    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_1000_MS);
    ret = g_clientPtr->GetPtr()->StartDtmf(g_newCallId, invalidDtmf);
    ASSERT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_StartDtmf_0800
 * @tc.name     Import str '&', test StartDtmf(),return non-zero
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_StartDtmf_0800, Function | MediumTest | Level3)
{
    char invalidDtmf = '&';

    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_1000_MS);
    ret = g_clientPtr->GetPtr()->StartDtmf(g_newCallId, invalidDtmf);
    ASSERT_NE(ret, SUCCESSFUL);
}

/********************************************* Test StopDtmf() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_StopDtmf_0100
 * @tc.name     Import callId 1234, test StopDtmf(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_StopDtmf_0100, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->StopDtmf(INVALID_CALLID);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_StopDtmf_0200
 * @tc.name     Import str A, test StopDtmf(),return non-zero
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_StopDtmf_0200, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_1000_MS);
    ret = g_clientPtr->GetPtr()->StopDtmf(g_newCallId);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/********************************************* Test FormatPhoneNumber() ****************************************/

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumber_0100
 * @tc.name     Import phoneNumber 100000000000, countryCode as "CN", test FormatPhoneNumber(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_FormatPhoneNumber_0100, Function | MediumTest | Level3)
{
    u16string phonyNumber = Str8ToStr16("100000000000");
    u16string countryCode = Str8ToStr16("CN");
    u16string formatNumber = Str8ToStr16(EMPTY_DEFAULT);
    int ret = g_clientPtr->GetPtr()->FormatPhoneNumber(phonyNumber, countryCode, formatNumber);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumber_0200
 * @tc.name     Import countryCode CN, phoneNumber as "010-0000-0000", test FormatPhoneNumber(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_FormatPhoneNumber_0200, Function | MediumTest | Level3)
{
    u16string phonyNumber = Str8ToStr16("010-0000-0000");
    u16string countryCode = Str8ToStr16("CN");
    u16string formatNumber = Str8ToStr16(EMPTY_DEFAULT);
    int ret = g_clientPtr->GetPtr()->FormatPhoneNumber(phonyNumber, countryCode, formatNumber);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumber_0300
 * @tc.name     Import countryCode CN, phoneNumber (010)00000000,test FormatPhoneNumber(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_FormatPhoneNumber_0300, Function | MediumTest | Level3)
{
    u16string phonyNumber = Str8ToStr16("(010)00000000");
    u16string countryCode = Str8ToStr16("CN");
    u16string formatNumber = Str8ToStr16(EMPTY_DEFAULT);
    int ret = g_clientPtr->GetPtr()->FormatPhoneNumber(phonyNumber, countryCode, formatNumber);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumber_0400
 * @tc.name     Import countryCode CN, phoneNumber 2000000000,test FormatPhoneNumber(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_FormatPhoneNumber_0400, Function | MediumTest | Level3)
{
    u16string phonyNumber = Str8ToStr16("2000000000");
    u16string countryCode = Str8ToStr16("CN");
    u16string formatNumber = Str8ToStr16(EMPTY_DEFAULT);
    int ret = g_clientPtr->GetPtr()->FormatPhoneNumber(phonyNumber, countryCode, formatNumber);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumber_0500
 * @tc.name     Import countryCode abcdefg CN, phoneNumber +861000000000,test FormatPhoneNumber(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_FormatPhoneNumber_0500, Function | MediumTest | Level3)
{
    u16string phonyNumber = Str8ToStr16("+861000000000");
    u16string countryCode = Str8ToStr16("CN");
    u16string formatNumber = Str8ToStr16(EMPTY_DEFAULT);
    int ret = g_clientPtr->GetPtr()->FormatPhoneNumber(phonyNumber, countryCode, formatNumber);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumber_0600
 * @tc.name     Import countryCode CN, phoneNumber 666666999999,test FormatPhoneNumber(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_FormatPhoneNumber_0600, Function | MediumTest | Level3)
{
    u16string phonyNumber = Str8ToStr16("666666999999");
    u16string countryCode = Str8ToStr16("CN");
    u16string formatNumber = Str8ToStr16(EMPTY_DEFAULT);
    int ret = g_clientPtr->GetPtr()->FormatPhoneNumber(phonyNumber, countryCode, formatNumber);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumber_0700
 * @tc.name     Import countryCode abcdefg, phoneNumber 2000000000, test FormatPhoneNumber(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_FormatPhoneNumber_0700, Function | MediumTest | Level3)
{
    u16string phonyNumber = Str8ToStr16("2000000000");
    u16string countryCode = Str8ToStr16("abcdefg");
    u16string formatNumber = Str8ToStr16(EMPTY_DEFAULT);
    int ret = g_clientPtr->GetPtr()->FormatPhoneNumber(phonyNumber, countryCode, formatNumber);
    EXPECT_NE(ret, SUCCESSFUL);
}

/******************************* Test FormatPhoneNumberToE164() ***************************************/

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumberToE164_0100
 * @tc.name     Import phoneNumber 01000000000, countryCode CN, test FormatPhoneNumberToE164(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_FormatPhoneNumberToE164_0100, Function | MediumTest | Level3)
{
    u16string phonyNumber = Str8ToStr16("01000000000");
    u16string countryCode = Str8ToStr16("CN");
    u16string formatNumber = Str8ToStr16(EMPTY_DEFAULT);
    int ret = g_clientPtr->GetPtr()->FormatPhoneNumberToE164(phonyNumber, countryCode, formatNumber);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumberToE164_0200
 * @tc.name     Import phoneNumber "(010)00000000" countryCode CN,test FormatPhoneNumberToE164(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_FormatPhoneNumberToE164_0200, Function | MediumTest | Level3)
{
    u16string phonyNumber = Str8ToStr16("(010)00000000");
    u16string countryCode = Str8ToStr16("CN");
    u16string formatNumber = Str8ToStr16(EMPTY_DEFAULT);
    int ret = g_clientPtr->GetPtr()->FormatPhoneNumberToE164(phonyNumber, countryCode, formatNumber);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumberToE164_0300
 * @tc.name     Import phoneNumber 010-0000-0000, countryCode as CN, test FormatPhoneNumberToE164(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_FormatPhoneNumberToE164_0300, Function | MediumTest | Level3)
{
    u16string phonyNumber = Str8ToStr16("010-0000-0000");
    u16string countryCode = Str8ToStr16("CN");
    u16string formatNumber = Str8ToStr16(EMPTY_DEFAULT);
    int ret = g_clientPtr->GetPtr()->FormatPhoneNumberToE164(phonyNumber, countryCode, formatNumber);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumberToE164_0400
 * @tc.name     Import phoneNumber +8601000000000, countryCode as "CN", test FormatPhoneNumberToE164(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_FormatPhoneNumberToE164_0400, Function | MediumTest | Level3)
{
    u16string phonyNumber = Str8ToStr16("+8601000000000");
    u16string countryCode = Str8ToStr16("CN");
    u16string formatNumber = Str8ToStr16(EMPTY_DEFAULT);
    int ret = g_clientPtr->GetPtr()->FormatPhoneNumberToE164(phonyNumber, countryCode, formatNumber);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumberToE164_0500
 * @tc.name     Import phoneNumber 052300000000, countryCode as "CN", test FormatPhoneNumberToE164(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_FormatPhoneNumberToE164_0500, Function | MediumTest | Level3)
{
    u16string phonyNumber = Str8ToStr16("052300000000");
    u16string countryCode = Str8ToStr16("CN");
    u16string formatNumber = Str8ToStr16(EMPTY_DEFAULT);
    int ret = g_clientPtr->GetPtr()->FormatPhoneNumberToE164(phonyNumber, countryCode, formatNumber);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumberToE164_0600
 * @tc.name     Import phoneNumber 666666999999, countryCode as CN, test FormatPhoneNumberToE164(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_FormatPhoneNumberToE164_0600, Function | MediumTest | Level3)
{
    u16string phonyNumber = Str8ToStr16("666666999999");
    u16string countryCode = Str8ToStr16("CN");
    u16string formatNumber = Str8ToStr16(EMPTY_DEFAULT);
    int ret = g_clientPtr->GetPtr()->FormatPhoneNumberToE164(phonyNumber, countryCode, formatNumber);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumberToE164_0700
 * @tc.name     Import countryCode abcdefg, phoneNumber "01000000000", test FormatPhoneNumberToE164(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_FormatPhoneNumberToE164_0700, Function | MediumTest | Level3)
{
    u16string phonyNumber = Str8ToStr16("01000000000");
    u16string countryCode = Str8ToStr16("abcdefg");
    u16string formatNumber = Str8ToStr16(EMPTY_DEFAULT);
    int ret = g_clientPtr->GetPtr()->FormatPhoneNumberToE164(phonyNumber, countryCode, formatNumber);
    EXPECT_NE(ret, SUCCESSFUL);
}

/********************************************* Test MMI() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_MMI_0100
 * @tc.name     coming call, send MMI *31# enable show CID, return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_MMI_0100, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16("*31#"));
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_MMI_0200
 * @tc.name     coming call, send MMI #31# enable conceal CID, return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_MMI_0200, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16("#31#"));
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_MMI_0300
 * @tc.name     coming call, send MMI *#31# query CID, return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_MMI_0300, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16("*#31#"));
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_MMI_0400
 * @tc.name     coming call, send MMI *#330#0000# query all incoming calls, return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_MMI_0400, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16("*#330#0000#"));
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_MMI_0500
 * @tc.name     coming call, send MMI ##330#0000# disable all incoming calls, return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_MMI_0500, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16("##330#0000#"));
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_MMI_0600
 * @tc.name     coming call, send MMI #35*0000# disable to restrict all incoming calls, return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_MMI_0600, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16("#35*0000#"));
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_MMI_0700
 * @tc.name     coming call, send MMI *331*0000# disable all international outgoing calls, return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_MMI_0700, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16("*331*0000#"));
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_MMI_0800
 * @tc.name     coming call, send MMI **33*0000# disable all outgoing calls, return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_MMI_0800, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16("**33*0000#"));
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_MMI_0900
 * @tc.name     coming call, send MMI "**21*12599*10#" enable the unconditional transfer
 *              and transfer number, return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_MMI_0900, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16("**21*12599*10#"));
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_MMI_1000
 * @tc.name     coming call, send MMI ##002# set CID, return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_MMI_1000, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16("##002#"));
    EXPECT_EQ(ret, SUCCESSFUL);
}