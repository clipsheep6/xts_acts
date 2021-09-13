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

/********************************************* Test DialCall() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_DialCall_0100
 * @tc.name     make a normal phone call with card1, TYPE_VOICE
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_DialCall_0100, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(TEST_PHONY_NUMBER));
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
    int ret = Dial(Str8ToStr16(EMPTY_DEFAULT));
    EXPECT_NE(ret, SUCCESSFUL);
    if (ret == SUCCESSFUL) {
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
            SLEEP_30000_MS);
        ret = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        EXPECT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS,
            SLEEP_30000_MS);
    }
}

/**
 * @tc.number   Telephony_CallManager_DialCall_0300
 * @tc.name     make a normal phone call with telephone numbers is negative number
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_DialCall_0300, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16("-12354785268"));
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_DialCall_0400
 * @tc.name     make a normal phone call with telephone numbers is too long
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_DialCall_0400, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16("19119080646435437102938190283912471651865810514786470168818468143768714648"));
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_DialCall_0500
 * @tc.name     Input the symbol phone number can dial successfullybut the operator
 *              will not have a phone generation
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_DialCall_0500, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16("19!@#$%^&*:"));
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_DialCall_0800
 * @tc.name     make a normal phone call with card1, TYPE_VOICE, import phoneNumber 10086
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_DialCall_0800, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16("10086"));
    ASSERT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_DialCall_0900
 * @tc.name     make a normal phone call with card1, TYPE_VOICE import phoneNumber 112
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_DialCall_0900, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16("112"));
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
    int32_t callId = FALSE_CALLID_1000;
    int videoState = (int)VideoStateType::TYPE_VOICE;
    int ret = g_clientPtr->GetPtr()->AnswerCall(callId, videoState);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_AnswerCall_0200
 * @tc.name     test the AnswerCall with a negative value callId
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_AnswerCall_0200, Function | MediumTest | Level3)
{
    int32_t callId = FALSE_NEGATIVE_CALLID_100;
    int videoState = (int)VideoStateType::TYPE_VOICE;
    int ret = g_clientPtr->GetPtr()->AnswerCall(callId, videoState);
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
    int32_t callId = FALSE_NEGATIVE_CALLID_100;
    u16string textMessage = Str8ToStr16("this is a test message");
    int ret = g_clientPtr->GetPtr()->RejectCall(callId, true, textMessage);
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
    int ret = Dial(Str8ToStr16(TEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
        SLEEP_30000_MS);
    ret = g_clientPtr->GetPtr()->GetCallState();
    ASSERT_EQ(ret, (int)CallStateToApp::CALL_STATE_OFFHOOK);

    int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
    EXPECT_EQ(hangUpRet, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS,
        SLEEP_30000_MS);
}

/**
 * @tc.number   Telephony_CallManager_HangUpCall_0200
 * @tc.name     test disconnect call with wrong callId
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_HangUpCall_0200, Function | MediumTest | Level3)
{
    int32_t callId = FALSE_NEGATIVE_CALLID_100;
    int ret = g_clientPtr->GetPtr()->HangUpCall(callId);
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
    int ret = Dial(Str8ToStr16(TEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
        SLEEP_30000_MS);
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
    int32_t callId = FALSE_NEGATIVE_CALLID_100;
    int ret = g_clientPtr->GetPtr()->HoldCall(callId);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_HoldCall_0200
 * @tc.name     Newcase gets the current call ID to be 1,return non 0
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_HoldCall_0200, Function | MediumTest | Level2)
{
    int ret = Dial(Str8ToStr16(TEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
        SLEEP_30000_MS);
    ret = g_clientPtr->GetPtr()->HoldCall(g_newCallId);
    EXPECT_NE(ret, SUCCESSFUL);
}

/******************************************* Test UnHoldCall() *********************************************/

/**
 * @tc.number   Telephony_CallManager_UnHoldCall_0100
 * @tc.name     Replies calls to a call ID that does not exist , return non 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_UnHoldCall_0100, Function | MediumTest | Level3)
{
    int32_t callId = FALSE_NEGATIVE_CALLID_100;
    EXPECT_NE(g_clientPtr->GetPtr()->UnHoldCall(callId), 0);
}

/**
 * @tc.number   Telephony_CallManager_UnHoldCall_0200
 * @tc.name     Passing in the suspended call ID, test UnHoldCall() return non 0
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_UnHoldCall_0200, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(TEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
           SLEEP_30000_MS);
    ret = g_clientPtr->GetPtr()->UnHoldCall(g_newCallId);
    EXPECT_NE(ret, SUCCESSFUL);
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
    int ret = Dial(Str8ToStr16(TEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
           SLEEP_30000_MS);
    ret = g_clientPtr->GetPtr()->HoldCall(g_newCallId);
    EXPECT_NE(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
           SLEEP_30000_MS);
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
    int ret = Dial(Str8ToStr16(TEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
           SLEEP_30000_MS);
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
    int ret = g_clientPtr->GetPtr()->GetCallState();
    ASSERT_EQ(ret, (int)CallStateToApp::CALL_STATE_IDLE);
    ret = Dial(Str8ToStr16(TEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
           SLEEP_30000_MS);
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
    int ret = g_clientPtr->GetPtr()->GetCallState();
    ASSERT_EQ(ret, (int)CallStateToApp::CALL_STATE_IDLE);
    ret = Dial(Str8ToStr16(EMPTY_DEFAULT));
    EXPECT_NE(ret, SUCCESSFUL);

    bool isRet = g_clientPtr->GetPtr()->HasCall();
    EXPECT_NE(isRet, true);
    ret = (g_clientPtr->GetPtr()->HangUpCall(g_newCallId));
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_HasCall_0300
 * @tc.name     Free time test Hascall() , return false
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_HasCall_0300, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->GetCallState();
    ASSERT_EQ(ret, (int)CallStateToApp::CALL_STATE_IDLE);
    bool isRet = g_clientPtr->GetPtr()->HasCall();
    EXPECT_NE(isRet, true);
}

/***************************************** Test CombineConference() ********************************************/

/**
 * @tc.number   Telephony_CallManager_CombineConference_0100
 * @tc.name     Import callId "1234",test CombineConference(),return non 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_CombineConference_0100, Function | MediumTest | Level3)
{
    int32_t callId = AT_WILL_CALLID;
    int ret = g_clientPtr->GetPtr()->CombineConference(callId);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_CombineConference_0200
 * @tc.name     Import son callId,test CombineConference(),return non 0
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_CombineConference_0200, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(TEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
           SLEEP_30000_MS);
    ret = g_clientPtr->GetPtr()->CombineConference(g_updateCallId);
    EXPECT_NE(ret, SUCCESSFUL);
}

/********************************************* Test GetMainCallId() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_GetMainCallId_0100
 * @tc.name     Import callId "1234",test GetMainCallId(),return non 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetMainCallId_0100, Function | MediumTest | Level3)
{
    int32_t callId = AT_WILL_CALLID;
    int ret = g_clientPtr->GetPtr()->GetMainCallId(callId);
    EXPECT_NE(ret, SUCCESSFUL) << "callId = " << callId;
}

/**
 * @tc.number   Telephony_CallManager_GetMainCallId_0200
 * @tc.name     Import son callId,test GetMainCallId(),return non 0
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_GetMainCallId_0200, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(TEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
           SLEEP_30000_MS);
    ret = g_clientPtr->GetPtr()->GetMainCallId(g_updateCallId);
    EXPECT_NE(ret, SUCCESSFUL);
}

/***************************************** Test GetSubCallIdList() ******************************************/

/**
 * @tc.number   Telephony_CallManager_GetSubCallIdList_0100
 * @tc.name     Import callId "1234",test GetSubCallIdList(),return non 0, Empty and destroy after completion
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetSubCallIdList_0100, Function | MediumTest | Level3)
{
    int32_t callId = AT_WILL_CALLID;
    std::vector<std::u16string> ans = g_clientPtr->GetPtr()->GetSubCallIdList(callId);
    bool isEmpty = ans.empty();
    EXPECT_EQ(isEmpty, true);
    if (!ans.empty()) {
        ans.clear();
    }
}

/**
 * @tc.number   Telephony_CallManager_GetSubCallIdList_0200
 * @tc.name     Import son callId,test GetSubCallIdList(),return non 0, Empty and destroy after completion
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_GetSubCallIdList_0200, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(TEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
           SLEEP_30000_MS);
    std::vector<std::u16string> ans = g_clientPtr->GetPtr()->GetSubCallIdList(g_newCallId);
    bool isEmpty = ans.empty();
    EXPECT_EQ(isEmpty, true);
    if (!ans.empty()) {
        ans.clear();
    }
}

/************************************ Test GetCallIdListForConference() ***************************************/

/**
 * @tc.number   Telephony_CallManager_GetCallIdListForConference_0100
 * @tc.name     Import callId "1234",test GetCallIdListForConference(),return non 0,Empty and destroy after completion
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallIdListForConference_0100, Function | MediumTest | Level3)
{
    int32_t callId = AT_WILL_CALLID;
    std::vector<std::u16string> ans = g_clientPtr->GetPtr()->GetCallIdListForConference(callId);
    bool isEmpty = ans.empty();
    EXPECT_EQ(isEmpty, true);
    if (!ans.empty()) {
        ans.clear();
    }
}

/**
 * @tc.number   Telephony_CallManager_GetCallIdListForConference_0200
 * @tc.name     Import son callId,test GetCallIdListForConference(),return non 0,Empty and destroy after completion
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_GetCallIdListForConference_0200, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(TEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
           SLEEP_30000_MS);
    std::vector<std::u16string> ans = g_clientPtr->GetPtr()->GetCallIdListForConference(g_newCallId);
    bool isEmpty = ans.empty();
    EXPECT_EQ(isEmpty, true);
    if (!ans.empty()) {
        ans.clear();
    }
}

/**************************************** Test IsInEmergencyCall() ******************************************/

/**
 * @tc.number   Telephony_CallManager_IsInEmergencyCall_0100
 * @tc.name     Call one phonynumber "16987458758",test IsInEmergencyCall(),return non 0
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_IsInEmergencyCall_0100, Function | MediumTest | Level3)
{
    string phoneNumber = "16987458758";
    int ret = Dial(Str8ToStr16(phoneNumber));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
           SLEEP_30000_MS);
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
    int ret = Dial(Str8ToStr16(phoneNumber));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
           SLEEP_30000_MS);
    bool emergencyRet = g_clientPtr->GetPtr()->IsInEmergencyCall();
    EXPECT_EQ(emergencyRet, true);
}

/************************************* Test IsEmergencyPhoneNumber() ***************************************/

/**
 * @tc.number   Telephony_CallManager_IsEmergencyPhoneNumber_0100
 * @tc.name     Call one phoneNumber "000",test IsEmergencyPhoneNumber(),return false
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IsEmergencyPhoneNumber_0100, Function | MediumTest | Level3)
{
    int32_t slotId = SLOT_ID;
    string number = "000";
    std::u16string phoneNumber = Str8ToStr16(number);

    bool isRet = g_clientPtr->GetPtr()->IsEmergencyPhoneNumber(phoneNumber, slotId);
    EXPECT_EQ(isRet, true);
}

/**
 * @tc.number   Telephony_CallManager_IsEmergencyPhoneNumber_0200
 * @tc.name     Call one phoneNumber "0-0-0",test IsEmergencyPhoneNumber(),return false
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IsEmergencyPhoneNumber_0200, Function | MediumTest | Level3)
{
    int32_t slotId = SLOT_ID;
    string number = "0-0-0";
    std::u16string phoneNumber = Str8ToStr16(number);

    bool isRet = g_clientPtr->GetPtr()->IsEmergencyPhoneNumber(phoneNumber, slotId);
    EXPECT_NE(isRet, true);
}

/**
 * @tc.number   Telephony_CallManager_IsEmergencyPhoneNumber_0300
 * @tc.name     Call one phoneNumber "112",test IsEmergencyPhoneNumber(),return false
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IsEmergencyPhoneNumber_0300, Function | MediumTest | Level3)
{
    int32_t slotId = SLOT_ID;
    string number = "112";
    std::u16string phoneNumber = Str8ToStr16(number);

    bool isRet = g_clientPtr->GetPtr()->IsEmergencyPhoneNumber(phoneNumber, slotId);
    EXPECT_EQ(isRet, true);
}

/**
 * @tc.number   Telephony_CallManager_IsEmergencyPhoneNumber_0400
 * @tc.name     Call one phoneNumber "911",test IsEmergencyPhoneNumber(),return false
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IsEmergencyPhoneNumber_0400, Function | MediumTest | Level3)
{
    int32_t slotId = SLOT_ID;
    string number = "911";
    std::u16string phoneNumber = Str8ToStr16(number);

    bool isRet = g_clientPtr->GetPtr()->IsEmergencyPhoneNumber(phoneNumber, slotId);
    EXPECT_EQ(isRet, true);
}

/**
 * @tc.number   Telephony_CallManager_IsEmergencyPhoneNumber_0500
 * @tc.name     Call one phoneNumber "08",test IsEmergencyPhoneNumber(),return false
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IsEmergencyPhoneNumber_0500, Function | MediumTest | Level3)
{
    int32_t slotId = SLOT_ID_NO_CARD;
    string number = "08";
    std::u16string phoneNumber = Str8ToStr16(number);

    bool isRet = g_clientPtr->GetPtr()->IsEmergencyPhoneNumber(phoneNumber, slotId);
    EXPECT_EQ(isRet, true);
}

/**
 * @tc.number   Telephony_CallManager_IsEmergencyPhoneNumber_0600
 * @tc.name     Call one phoneNumber "118",test IsEmergencyPhoneNumber(),return false
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IsEmergencyPhoneNumber_0600, Function | MediumTest | Level3)
{
    int32_t slotId = SLOT_ID_NO_CARD;
    string number = "118";
    std::u16string phoneNumber = Str8ToStr16(number);

    bool isRet = g_clientPtr->GetPtr()->IsEmergencyPhoneNumber(phoneNumber, slotId);
    EXPECT_EQ(isRet, true);
}

/**
 * @tc.number   Telephony_CallManager_IsEmergencyPhoneNumber_0700
 * @tc.name     Call one phoneNumber "119",test IsEmergencyPhoneNumber(),return false
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IsEmergencyPhoneNumber_0700, Function | MediumTest | Level3)
{
    int32_t slotId = SLOT_ID_NO_CARD;
    string number = "119";
    std::u16string phoneNumber = Str8ToStr16(number);

    bool isRet = g_clientPtr->GetPtr()->IsEmergencyPhoneNumber(phoneNumber, slotId);
    EXPECT_EQ(isRet, true);
}

/**
 * @tc.number   Telephony_CallManager_IsEmergencyPhoneNumber_0800
 * @tc.name     Call one phoneNumber "999",test IsEmergencyPhoneNumber(),return false
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IsEmergencyPhoneNumber_0800, Function | MediumTest | Level3)
{
    int32_t slotId = SLOT_ID_NO_CARD;
    string number = "999";
    std::u16string phoneNumber = Str8ToStr16(number);

    bool isRet = g_clientPtr->GetPtr()->IsEmergencyPhoneNumber(phoneNumber, slotId);
    EXPECT_EQ(isRet, true);
}

/********************************************* Test StartDtmf() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_StartDtmf_0100
 * @tc.name     Import str '1', test StartDtmf(),return non 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_StartDtmf_0100, Function | MediumTest | Level3)
{
    int32_t callId = AT_WILL_CALLID;
    char str = '1';
    int ret = g_clientPtr->GetPtr()->StartDtmf(callId, str);
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
    char str = '0';
    int ret = Dial(Str8ToStr16(TEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
           SLEEP_30000_MS);
    g_clientPtr->GetPtr()->StartDtmf(g_newCallId, str);
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
    char str = '9';

    int ret = Dial(Str8ToStr16(TEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
           SLEEP_30000_MS);
    g_clientPtr->GetPtr()->StartDtmf(g_newCallId, str);
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
    char str = '#';

    int ret = Dial(Str8ToStr16(TEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
           SLEEP_30000_MS);
    ret = g_clientPtr->GetPtr()->StartDtmf(g_newCallId, str);
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
    char str = '*';

    int ret = Dial(Str8ToStr16(TEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
           SLEEP_30000_MS);
    ret = g_clientPtr->GetPtr()->StartDtmf(g_newCallId, str);
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
    char str = 'A';

    int ret = Dial(Str8ToStr16(TEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
           SLEEP_30000_MS);
    ret = g_clientPtr->GetPtr()->StartDtmf(g_newCallId, str);
    ASSERT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_StartDtmf_0700
 * @tc.name     Import str 'd', test StartDtmf(),return non 0
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_StartDtmf_0700, Function | MediumTest | Level3)
{
    char str = 'd';

    int ret = Dial(Str8ToStr16(TEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
           SLEEP_30000_MS);
    ret = g_clientPtr->GetPtr()->StartDtmf(g_newCallId, str);
    ASSERT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_StartDtmf_0800
 * @tc.name     Import str '&', test StartDtmf(),return non 0
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_StartDtmf_0800, Function | MediumTest | Level3)
{
    char str = '&';

    int ret = Dial(Str8ToStr16(TEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
           SLEEP_30000_MS);
    ret = g_clientPtr->GetPtr()->StartDtmf(g_newCallId, str);
    ASSERT_NE(ret, SUCCESSFUL);
}

/********************************************* Test StopDtmf() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_StopDtmf_0100
 * @tc.name     Import callId 1234, test StopDtmf(),return non 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_StopDtmf_0100, Function | MediumTest | Level3)
{
    int32_t callId = AT_WILL_CALLID;
    int ret = g_clientPtr->GetPtr()->StopDtmf(callId);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_StopDtmf_0200
 * @tc.name     Import str A, test StopDtmf(),return non 0
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerDialTest, Telephony_CallManager_StopDtmf_0200, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(TEST_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
           SLEEP_30000_MS);
    ret = g_clientPtr->GetPtr()->StopDtmf(g_newCallId);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/********************************************* Test GetCallWaiting() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_GetCallWaiting_0100
 * @tc.name     Import slotId 1, set callwaiting to be on, test GetCallWaiting(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallWaiting_0100, Function | MediumTest | Level3)
{
    bool activate = true;
    int32_t slotId = SLOT_ID;
    int ret = g_clientPtr->GetPtr()->SetCallWaiting(slotId, activate);
    EXPECT_EQ(ret, SUCCESSFUL);
    ret = g_clientPtr->GetPtr()->GetCallWaiting(slotId);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_GetCallWaiting_0200
 * @tc.name     Import slotId 1,set callwaiting to be off,test GetCallWaiting(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_GetCallWaiting_0200, Function | MediumTest | Level3)
{
    bool activate = false;
    int32_t slotId = SLOT_ID;
    int ret = g_clientPtr->GetPtr()->SetCallWaiting(slotId, activate);
    EXPECT_EQ(ret, SUCCESSFUL);
    ret = g_clientPtr->GetPtr()->GetCallWaiting(slotId);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/********************************************* Test SetCallWaiting() ********************************************/

/**
 * @tc.number   Telephony_CallManager_SetCallWaiting_0100
 * @tc.name     Import slotId 1,test SetCallWaiting(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallWaiting_0100, Function | MediumTest | Level3)
{
    bool activate = true;
    int32_t slotId = SLOT_ID;
    int ret = g_clientPtr->GetPtr()->SetCallWaiting(slotId, activate);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCallWaiting_0200
 * @tc.name     Import slotId 1,set callwaiting to be on,test SetCallWaiting(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_SetCallWaiting_0200, Function | MediumTest | Level3)
{
    bool activate = false;
    int32_t slotId = SLOT_ID;
    int ret = g_clientPtr->GetPtr()->SetCallWaiting(slotId, activate);
    EXPECT_EQ(ret, SUCCESSFUL);
}


/********************************************* Test FormatPhoneNumber() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumber_0100
 * @tc.name     Import phoneNumber 01085198748, countryCode as "kr", test FormatPhoneNumber(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_FormatPhoneNumber_0100, Function | MediumTest | Level3)
{
    string number = "01085198748";
    string code = "Kr";
    string formatBefore = EMPTY_DEFAULT;
    u16string phoneNumber = Str8ToStr16(number);
    u16string countryCode = Str8ToStr16(code);
    u16string formatNumber = Str8ToStr16(formatBefore);
    int32_t ans = SUCCESSFUL;
    int ret = g_clientPtr->GetPtr()->FormatPhoneNumber(phoneNumber, countryCode, formatNumber);
    EXPECT_EQ(ret, ans);
}

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumber_0200
 * @tc.name     Import countryCode KR, phoneNumber as "010-8519-8748", test FormatPhoneNumber(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_FormatPhoneNumber_0200, Function | MediumTest | Level3)
{
    string number = "010-8519-8748";
    string code = "KR";
    string formatBefore = EMPTY_DEFAULT;
    u16string phoneNumber = Str8ToStr16(number);
    u16string countryCode = Str8ToStr16(code);
    u16string formatNumber = Str8ToStr16(formatBefore);
    int32_t ans = SUCCESSFUL;
    int ret = g_clientPtr->GetPtr()->FormatPhoneNumber(phoneNumber, countryCode, formatNumber);
    EXPECT_NE(ret, ans);
}

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumber_0300
 * @tc.name     Import countryCode JP, phoneNumber (03)38122111,test FormatPhoneNumber(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_FormatPhoneNumber_0300, Function | MediumTest | Level3)
{
    string number = "(03)38122111";
    string code = "JP";
    string formatBefore = EMPTY_DEFAULT;
    u16string phoneNumber = Str8ToStr16(number);
    u16string countryCode = Str8ToStr16(code);
    u16string formatNumber = Str8ToStr16(formatBefore);
    int32_t ans = SUCCESSFUL;
    int ret = g_clientPtr->GetPtr()->FormatPhoneNumber(phoneNumber, countryCode, formatNumber);
    EXPECT_EQ(ret, ans);
}

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumber_0400
 * @tc.name     Import countryCode CN, phoneNumber 13888888888,test FormatPhoneNumber(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_FormatPhoneNumber_0400, Function | MediumTest | Level3)
{
    string number = "13888888888";
    string code = "CN";
    string formatBefore = EMPTY_DEFAULT;
    u16string phoneNumber = Str8ToStr16(number);
    u16string countryCode = Str8ToStr16(code);
    u16string formatNumber = Str8ToStr16(formatBefore);
    int32_t ans = SUCCESSFUL;
    int ret = g_clientPtr->GetPtr()->FormatPhoneNumber(phoneNumber, countryCode, formatNumber);
    EXPECT_EQ(ret, ans);
}

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumber_0500
 * @tc.name     Import countryCode abcdefg jp, phoneNumber +81338122111,test FormatPhoneNumber(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_FormatPhoneNumber_0500, Function | MediumTest | Level3)
{
    string number = "+81338122111";
    string code = "jp";
    string formatBefore = EMPTY_DEFAULT;
    u16string phoneNumber = Str8ToStr16(number);
    u16string countryCode = Str8ToStr16(code);
    u16string formatNumber = Str8ToStr16(formatBefore);
    int32_t ans = SUCCESSFUL;
    int ret = g_clientPtr->GetPtr()->FormatPhoneNumber(phoneNumber, countryCode, formatNumber);
    EXPECT_EQ(ret, ans);
}

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumber_0600
 * @tc.name     Import countryCode CN, phoneNumber 666666999999,test FormatPhoneNumber(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_FormatPhoneNumber_0600, Function | MediumTest | Level3)
{
    string number = "666666999999";
    string code = "CN";
    string formatBefore = EMPTY_DEFAULT;
    u16string phoneNumber = Str8ToStr16(number);
    u16string countryCode = Str8ToStr16(code);
    u16string formatNumber = Str8ToStr16(formatBefore);
    int32_t ans = SUCCESSFUL;
    int ret = g_clientPtr->GetPtr()->FormatPhoneNumber(phoneNumber, countryCode, formatNumber);
    EXPECT_NE(ret, ans);
}

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumber_0700
 * @tc.name     Import countryCode abcdefg, phoneNumber 13888888888, test FormatPhoneNumber(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_FormatPhoneNumber_0700, Function | MediumTest | Level3)
{
    string number = "13888888888";
    string code = "abcdefg";
    string formatBefore = EMPTY_DEFAULT;
    u16string phoneNumber = Str8ToStr16(number);
    u16string countryCode = Str8ToStr16(code);
    u16string formatNumber = Str8ToStr16(formatBefore);
    int32_t ans = SUCCESSFUL;
    int ret = g_clientPtr->GetPtr()->FormatPhoneNumber(phoneNumber, countryCode, formatNumber);
    EXPECT_NE(ret, ans);
}

/******************************* Test FormatPhoneNumberToE164() ***************************************/

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumberToE164_0100
 * @tc.name     Import phoneNumber 01085198748, countryCode Kr, test FormatPhoneNumberToE164(),return +821085198748
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_FormatPhoneNumberToE164_0100, Function | MediumTest | Level3)
{
    string number = "01085198748";
    string code = "Kr";
    string formatBefore = EMPTY_DEFAULT;
    u16string phoneNumber = Str8ToStr16(number);
    u16string countryCode = Str8ToStr16(code);
    u16string formatNumber = Str8ToStr16(formatBefore);
    int32_t ans = SUCCESSFUL;
    int ret = g_clientPtr->GetPtr()->FormatPhoneNumberToE164(phoneNumber, countryCode, formatNumber);
    EXPECT_EQ(ret, ans);
}

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumberToE164_0200
 * @tc.name     Import phoneNumber "(03)38122111" countryCode JP,test FormatPhoneNumberToE164(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_FormatPhoneNumberToE164_0200, Function | MediumTest | Level3)
{
    string number = "(03)38122111";
    string code = "JP";
    string formatBefore = EMPTY_DEFAULT;
    u16string phoneNumber = Str8ToStr16(number);
    u16string countryCode = Str8ToStr16(code);
    u16string formatNumber = Str8ToStr16(formatBefore);
    int32_t ans = SUCCESSFUL;
    int ret = g_clientPtr->GetPtr()->FormatPhoneNumberToE164(phoneNumber, countryCode, formatNumber);
    EXPECT_EQ(ret, ans);
}

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumberToE164_0300
 * @tc.name     Import phoneNumber 13888888888, countryCode as cn, test FormatPhoneNumberToE164(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_FormatPhoneNumberToE164_0300, Function | MediumTest | Level3)
{
    string number = "13888888888";
    string code = "cn";
    string formatBefore = EMPTY_DEFAULT;
    u16string phoneNumber = Str8ToStr16(number);
    u16string countryCode = Str8ToStr16(code);
    u16string formatNumber = Str8ToStr16(formatBefore);
    int32_t ans = SUCCESSFUL;
    int ret = g_clientPtr->GetPtr()->FormatPhoneNumberToE164(phoneNumber, countryCode, formatNumber);
    EXPECT_EQ(ret, ans);
}

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumberToE164_0400
 * @tc.name     Import phoneNumber +81338122111, countryCode as "jp", test FormatPhoneNumberToE164(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_FormatPhoneNumberToE164_0400, Function | MediumTest | Level3)
{
    string number = "+81338122111";
    string code = "jp";
    string formatBefore = EMPTY_DEFAULT;
    u16string phoneNumber = Str8ToStr16(number);
    u16string countryCode = Str8ToStr16(code);
    u16string formatNumber = Str8ToStr16(formatBefore);
    int32_t ans = SUCCESSFUL;
    int ret = g_clientPtr->GetPtr()->FormatPhoneNumberToE164(phoneNumber, countryCode, formatNumber);
    EXPECT_NE(ret, ans);
}

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumberToE164_0500
 * @tc.name     Import phoneNumber 03-3812-2111, countryCode as "JP", test FormatPhoneNumberToE164(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_FormatPhoneNumberToE164_0500, Function | MediumTest | Level3)
{
    string number = "03-3812-2111";
    string code = "JP";
    string formatBefore = EMPTY_DEFAULT;
    u16string phoneNumber = Str8ToStr16(number);
    u16string countryCode = Str8ToStr16(code);
    u16string formatNumber = Str8ToStr16(formatBefore);
    int32_t ans = SUCCESSFUL;
    int ret = g_clientPtr->GetPtr()->FormatPhoneNumberToE164(phoneNumber, countryCode, formatNumber);
    EXPECT_EQ(ret, ans);
}

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumberToE164_0600
 * @tc.name     Import phoneNumber 666666999999, countryCode as cn, test FormatPhoneNumberToE164(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_FormatPhoneNumberToE164_0600, Function | MediumTest | Level3)
{
    string number = "666666999999";
    string code = "CN";
    string formatBefore = EMPTY_DEFAULT;
    u16string phoneNumber = Str8ToStr16(number);
    u16string countryCode = Str8ToStr16(code);
    u16string formatNumber = Str8ToStr16(formatBefore);
    int32_t ans = SUCCESSFUL;
    int ret = g_clientPtr->GetPtr()->FormatPhoneNumberToE164(phoneNumber, countryCode, formatNumber);
    EXPECT_NE(ret, ans);
}

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumberToE164_0700
 * @tc.name     Import countryCode abcdefg, phoneNumber "13888888888", test FormatPhoneNumberToE164(),return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_FormatPhoneNumberToE164_0700, Function | MediumTest | Level3)
{
    string number = "13888888888";
    string code = "abcdefg";
    string formatBefore = EMPTY_DEFAULT;
    u16string phoneNumber = Str8ToStr16(number);
    u16string countryCode = Str8ToStr16(code);
    u16string formatNumber = Str8ToStr16(formatBefore);
    int32_t ans = SUCCESSFUL;
    int ret = g_clientPtr->GetPtr()->FormatPhoneNumberToE164(phoneNumber, countryCode, formatNumber);
    EXPECT_NE(ret, ans);
}

/********************************************* Test MMI() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_MMI_0100
 * @tc.name     coming call, send MMI *31# enable show CID, return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_MMI_0100, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16("*31#"));
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_MMI_0200
 * @tc.name     coming call, send MMI #31# enable conceal CID, return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_MMI_0200, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16("#31#"));
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_MMI_0300
 * @tc.name     coming call, send MMI *#31# query CID, return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_MMI_0300, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16("*#31#"));
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_MMI_0400
 * @tc.name     coming call, send MMI *#330#0000# query all incoming calls, return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_MMI_0400, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16("*#330#0000#"));
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_MMI_0500
 * @tc.name     coming call, send MMI ##330#0000# disable all incoming calls, return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_MMI_0500, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16("##330#0000#"));
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_MMI_0600
 * @tc.name     coming call, send MMI #35*0000# disable to restrict all incoming calls, return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_MMI_0600, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16("#35*0000#"));
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_MMI_0700
 * @tc.name     coming call, send MMI *331*0000# disable all international outgoing calls, return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_MMI_0700, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16("*331*0000#"));
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_MMI_0800
 * @tc.name     coming call, send MMI **33*0000# disable all outgoing calls, return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_MMI_0800, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16("**33*0000#"));
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_MMI_0900
 * @tc.name     coming call, send MMI "**21*16987458758*10#" enable the unconditional transfer
 *              and transfer number, return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_MMI_0900, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16("**21*16987458758*10#"));
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_MMI_1000
 * @tc.name     coming call, send MMI ##002# set CID, return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_MMI_1000, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16("##002#"));
    EXPECT_EQ(ret, SUCCESSFUL);
}