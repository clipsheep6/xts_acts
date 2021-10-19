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
#include "mock_vendor_common.h"

#include <cstring>
#include <gtest/gtest.h>
#include <securec.h>

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;
using namespace OHOS::Telephony::CallManager;

/********************************************* Test DialCall() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_DialCall_0800
 * @tc.name     make a normal phone call with card1, TYPE_VOICE, mock_vendor accept call
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_DialCall_0800, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_15000_MS);

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ACCEPT_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);
}

/**
 * @tc.number   Telephony_CallManager_DialCall_0900
 * @tc.name     make a normal phone call with card1, TYPE_VOICE, mock_vendor remove call
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_DialCall_0900, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_REMOVE_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_15000_MS);
}

/********************************************* Test AnswerCall() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_AnswerCall_0500
 * @tc.name     mock_vendor coming call, TYPE_VOICE, accept this call
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_AnswerCall_0500, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_AnswerCall_0600
 * @tc.name     mock_vendor coming call, TYPE_VOICE, accept this call and dial and hang up again
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_AnswerCall_0600, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);
    int firstCall = g_newCallId;

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, DEST_PHONY_NUMBER, strlen(DEST_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, firstCall, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_WAITING), true, SLEEP_50_MS, SLEEP_15000_MS);

    int ret = g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE);
    ASSERT_EQ(ret, SUCCESSFUL);
}

/********************************************* Test RejectCall() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_RejectCall_0400
 * @tc.name     mock_vendor coming call, TYPE_VOICE, reject this call
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_RejectCall_0400, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, DEST_PHONY_NUMBER, strlen(DEST_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);

    u16string textMessage = Str8ToStr16("this is a test message");
    ASSERT_EQ(g_clientPtr->GetPtr()->RejectCall(g_newCallId, true, textMessage), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_RejectCall_0500
 * @tc.name     mock_vendor coming call, TYPE_VOICE, accept this call and dial and not message reject again,
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_RejectCall_0500, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);
    int firstCall = g_newCallId;

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, DEST_PHONY_NUMBER, strlen(DEST_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, firstCall, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_WAITING), true, SLEEP_50_MS, SLEEP_15000_MS);

    u16string textMessage = Str8ToStr16("");
    ASSERT_EQ(g_clientPtr->GetPtr()->RejectCall(g_newCallId, false, textMessage), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_RejectCall_0600
 * @tc.name     mock_vendor coming call, TYPE_VOICE, accept this call and dial and message reject again
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_RejectCall_0600, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);
    int firstCall = g_newCallId;

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, DEST_PHONY_NUMBER, strlen(DEST_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, firstCall, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_WAITING), true, SLEEP_50_MS, SLEEP_15000_MS);

    u16string textMessage = Str8ToStr16("this is a test message");
    ASSERT_EQ(g_clientPtr->GetPtr()->RejectCall(g_newCallId, true, textMessage), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_RejectCall_0700
 * @tc.name     mock_vendor coming call, TYPE_VOICE, not message reject again,
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_RejectCall_0700, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, DEST_PHONY_NUMBER, strlen(DEST_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);

    u16string textMessage = Str8ToStr16("");
    ASSERT_EQ(g_clientPtr->GetPtr()->RejectCall(g_newCallId, false, textMessage), SUCCESSFUL);
}

/********************************************* Test HangUpCall() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_HangUpCall_0500
 * @tc.name     mock_vendor coming call, TYPE_VOICE, accept this call, and hang up call
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_HangUpCall_0500, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, DEST_PHONY_NUMBER, strlen(DEST_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);
    ASSERT_EQ(g_clientPtr->GetPtr()->HangUpCall(g_newCallId), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_15000_MS);
}

/**
 * @tc.number   Telephony_CallManager_HangUpCall_0600
 * @tc.name     mock_vendor coming two call, TYPE_VOICE, and after answering the phone separately
 *              wait for the correct status of the callback to execute correctly
 *              hang up the new one and hang up the old one
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_HangUpCall_0600, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, DEST_PHONY_NUMBER, strlen(DEST_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);
    int firstCall = g_newCallId;

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, firstCall, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_WAITING), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_EQ(g_newCallId, firstCall, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->HangUpCall(g_newCallId), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_15000_MS);
    ASSERT_EQ(g_clientPtr->GetPtr()->HangUpCall(firstCall), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(firstCall, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_15000_MS);
}

/**
 * @tc.number   Telephony_CallManager_HangUpCall_0700
 * @tc.name     mock_vendor coming two call, TYPE_VOICE, and after answering each call
 *              wait for the correct status of the callback to execute correctly
 *              hang up the old one and hang up the new one
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_HangUpCall_0700, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, DEST_PHONY_NUMBER, strlen(DEST_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);
    int firstCall = g_newCallId;

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_WAITING), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_EQ(g_newCallId, firstCall, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);

    LOG("new: %d   first: %d", g_newCallId, firstCall);
    ASSERT_EQ(g_clientPtr->GetPtr()->HangUpCall(firstCall), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(firstCall, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_15000_MS);
    ASSERT_EQ(g_clientPtr->GetPtr()->HangUpCall(g_newCallId), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_15000_MS);
}

/********************************************* Test GetCallState() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_GetCallState_0500
 * @tc.name     make a normal phone call with card1, TYPE_VOICE, and mock_vendor accept call
 *              wait for the correct status of the callback to execute correctly
 *              and hang up call, finally getcallstate for idle
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_GetCallState_0500, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ACCEPT_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->HangUpCall(g_newCallId), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_15000_MS);
    ASSERT_EQ(g_clientPtr->GetPtr()->GetCallState(), (int)CallStateToApp::CALL_STATE_IDLE);
}

/**
 * @tc.number   Telephony_CallManager_GetCallState_0600
 * @tc.name     make a normal phone call with card1, TYPE_VOICE, and mock_vendor accept call
 *              wait for the correct status of the callback to execute correctly
 *              finally getcallstate for offhook
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_GetCallState_0600, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ACCEPT_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);
    ASSERT_EQ(g_clientPtr->GetPtr()->GetCallState(), (int)CallStateToApp::CALL_STATE_OFFHOOK);
}

/**
 * @tc.number   Telephony_CallManager_GetCallState_0700
 * @tc.name     mock_vendor coming call, and getcallstate for ringing,
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_GetCallState_0700, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->HoldCall(g_newCallId), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_HOLDING), true, SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(g_clientPtr->GetPtr()->GetCallState(), (int)CallStateToApp::CALL_STATE_OFFHOOK, SLEEP_50_MS,
        SLEEP_15000_MS);
}

/**
 * @tc.number   Telephony_CallManager_GetCallState_0800
 * @tc.name     dial a call, and getcallstate for RINGING, mock_vendor of alerting
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_GetCallState_0800, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(g_clientPtr->GetPtr()->GetCallState(), (int)CallStateToApp::CALL_STATE_RINGING, SLEEP_50_MS,
        SLEEP_15000_MS);
}

/**
 * @tc.number   Telephony_CallManager_GetCallState_0900
 * @tc.name     dial a call, and getcallstate for RINGING, mock_vendor of alerting
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_GetCallState_0900, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, DEST_PHONY_NUMBER, strlen(DEST_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);
    int firstCall = g_newCallId;

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, firstCall, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_WAITING), true, SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(g_clientPtr->GetPtr()->GetCallState(), (int)CallStateToApp::CALL_STATE_RINGING, SLEEP_50_MS,
        SLEEP_15000_MS);
}

/**
 * @tc.number   Telephony_CallManager_GetCallState_1000
 * @tc.name     dial a call, and getcallstate for OFFHOOK, mock_vendor of alerting
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_GetCallState_1000, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ALERTING), true, SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(g_clientPtr->GetPtr()->GetCallState(), (int)CallStateToApp::CALL_STATE_OFFHOOK, SLEEP_50_MS,
        SLEEP_15000_MS);
}

/********************************************* Test HoldCall() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_HoldCall_0500
 * @tc.name     mock_vendor coming call, and accept call, finally hold call
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_HoldCall_0500, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);
    ASSERT_EQ(g_clientPtr->GetPtr()->HoldCall(g_newCallId), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_HOLDING), true, SLEEP_50_MS, SLEEP_15000_MS);
}

/********************************************* Test UnHoldCall() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_UnHoldCall_0500
 * @tc.name     mock_vendor coming call,and accept call, finally hold and unhold call
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_UnHoldCall_0500, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);
    ASSERT_EQ(g_clientPtr->GetPtr()->HoldCall(g_newCallId), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_HOLDING), true, SLEEP_50_MS, SLEEP_15000_MS);
    ASSERT_EQ(g_clientPtr->GetPtr()->UnHoldCall(g_newCallId), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);
}

/********************************************* Test SwitchCall() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_SwitchCall_0500
 * @tc.name     mock_vendor coming two call,and accept all call, finally switch call
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_SwitchCall_0500, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);
    int firstCall = g_newCallId;

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, DEST_PHONY_NUMBER, strlen(DEST_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, firstCall, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_WAITING), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(firstCall, CALL_STATUS_HOLDING), true, SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    ASSERT_EQ(g_clientPtr->GetPtr()->SwitchCall(g_newCallId), SUCCESSFUL);
}

/********************************************* Test HasCall() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_HasCall_0600
 * @tc.name     mock_vendor coming call, and hasCall, test whether or not call
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_HasCall_0600, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->HasCall(), true);
}

/**
 * @tc.number   Telephony_CallManager_HasCall_0700
 * @tc.name     mock_vendor coming call, and accept, finally hasCall, test whether or not call
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_HasCall_0700, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    ASSERT_EQ(g_clientPtr->GetPtr()->HasCall(), true);
}

/********************************************* Test CombineConference() *****************************************/

/**
 * @tc.number   Telephony_CallManager_CombineConference_0500
 * @tc.name     mock_vendor coming two call, Starting a merge meeting, and getcallid
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_CombineConference_0500, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);
    ASSERT_EQ(g_updateCallState, CALL_STATUS_ACTIVE);
    LOCK_NUM_WHILE_NE(g_updateConference, (int)TelConferenceState::TEL_CONFERENCE_IDLE, SLEEP_50_MS, SLEEP_12000_MS);
    int firstCall = g_newCallId;

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, DEST_PHONY_NUMBER, strlen(DEST_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, firstCall, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_WAITING), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(firstCall, CALL_STATUS_HOLDING), true, SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);
    ASSERT_EQ(g_clientPtr->GetPtr()->CombineConference(g_newCallId), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateConference, (int)TelConferenceState::TEL_CONFERENCE_ACTIVE, SLEEP_50_MS, SLEEP_12000_MS);

    int retMain = g_clientPtr->GetPtr()->GetMainCallId(g_newCallId);
    EXPECT_EQ(retMain, g_newCallId);
    LOG("============================= GetMainCallId is %d==============================", retMain);

    std::vector<std::u16string> ret = g_clientPtr->GetPtr()->GetSubCallIdList(firstCall);
    GetCallList(ret);
    std::vector<std::u16string> retConference = g_clientPtr->GetPtr()->GetCallIdListForConference(firstCall);
    GetCallList(retConference);

    int retHold = g_clientPtr->GetPtr()->HoldCall(g_newCallId);
    EXPECT_EQ(retHold, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateConference, (int)TelConferenceState::TEL_CONFERENCE_DISCONNECTED, SLEEP_50_MS,
        SLEEP_12000_MS);
}

/********************************************* Test IsInEmergencyCall() ****************************************/

/**
 * @tc.number   Telephony_CallManager_IsInEmergencyCall_0500
 * @tc.name     make a normal phone call with card1, TYPE_VOICE, import phonynuber "911"
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_IsInEmergencyCall_0500, Function | MediumTest | Level3)
{
    string phoneNumber = "911";
    int ret = Dial(Str8ToStr16(phoneNumber));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_15000_MS);
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ACCEPT_CALL, phoneNumber.c_str(), strlen(phoneNumber.c_str()));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->IsInEmergencyCall(), true);
}

/**
 * @tc.number   Telephony_CallManager_IsInEmergencyCall_0600
 * @tc.name     make a normal phone call with card1, TYPE_VOICE, import phonynuber "119"
 *              wait for the correct status of the callback to execute correctlys
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_IsInEmergencyCall_0600, Function | MediumTest | Level3)
{
    string phoneNumber = "119";
    int ret = Dial(Str8ToStr16(phoneNumber));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_15000_MS);
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ACCEPT_CALL, phoneNumber.c_str(), strlen(phoneNumber.c_str()));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->IsInEmergencyCall(), true);
}

/********************************************* Test StartDtmf() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_StartDtmf_1100
 * @tc.name     Import str '9', test StartDtmf(),return 0
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_StartDtmf_1100, Function | MediumTest | Level3)
{
    char str = '9';
    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ACCEPT_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_ACTIVE), true,
    SLEEP_50_MS, SLEEP_15000_MS);
    ret = g_clientPtr->GetPtr()->StartDtmf(g_newCallId, str);
    ASSERT_EQ(ret, SUCCESSFUL);
}

/********************************************* Test IsNewCallAllowed() ****************************************/

/**
 * @tc.number   Telephony_CallManager_IsNewCallAllowed_0600
 * @tc.name     mock_vendor coming call, make a normal phone agin, test IsNewCallAllowed()
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_IsNewCallAllowed_0600, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_NE(g_clientPtr->GetPtr()->IsNewCallAllowed(), true);
}

/********************************************* Test IsRinging() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_IsRinging_0600
 * @tc.name     mock_vendor coming call, test IsRinging()
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_IsRinging_0600, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->IsRinging(), true);
}

/**
 * @tc.number   Telephony_CallManager_IsRinging_0700
 * @tc.name     active status, mock_vendor coming call, test IsRinging()
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_IsRinging_0700, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);
    int firstCall = g_newCallId;

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, OBJECT_PHONY_NUMBER, strlen(OBJECT_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, firstCall, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_WAITING), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->IsRinging(), true);
}

/***************************************** Test SeparateConference() ******************************************/

/**
 * @tc.number   Telephony_CallManager_SeparateConference_0600
 * @tc.name     mock_vendor coming two call, test SeparateConference()
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_SeparateConference_0600, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);
    int firstCall = g_newCallId;

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, DEST_PHONY_NUMBER, strlen(DEST_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_WAITING), true, SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_EQ(g_newCallId, firstCall, SLEEP_50_MS, SLEEP_12000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(firstCall, CALL_STATUS_HOLDING), true, SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->CombineConference(g_newCallId), SUCCESSFUL);
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    ASSERT_EQ(g_clientPtr->GetPtr()->SeparateConference(g_newCallId), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SeparateConference_0700
 * @tc.name     mock_vendor coming three call, test SeparateConference()
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_SeparateConference_0700, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);
    int firstCall = g_newCallId;

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, DEST_PHONY_NUMBER, strlen(DEST_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, firstCall, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_WAITING), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(firstCall, CALL_STATUS_HOLDING), true, SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);
    int secondCall = g_newCallId;

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, OBJECT_PHONY_NUMBER, strlen(OBJECT_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, secondCall, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_WAITING), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(secondCall, CALL_STATUS_HOLDING), true, SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->CombineConference(g_newCallId), SUCCESSFUL);
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    ASSERT_EQ(g_clientPtr->GetPtr()->SeparateConference(g_newCallId), SUCCESSFUL);
}

/***************************************** Test MuteRinger() ************************************************/

/**
 * @tc.number   Telephony_CallManager_MuteRinger_0500
 * @tc.name     mock_vendor coming call, test MuteRinger()
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_MuteRinger_0500, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);

    EXPECT_EQ(g_clientPtr->GetPtr()->MuteRinger(), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_MuteRinger_0600
 * @tc.name     mock_vendor coming call, test MuteRinger()
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_MuteRinger_0600, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);
    int firstCall = g_newCallId;

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, DEST_PHONY_NUMBER, strlen(DEST_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, firstCall, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_WAITING), true, SLEEP_50_MS, SLEEP_15000_MS);

    EXPECT_EQ(g_clientPtr->GetPtr()->MuteRinger(), SUCCESSFUL);
}

/***************************************** Test SetCallRestriction() ******************************************/

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_1800
 * @tc.name     enable RESTRICTION_MODE_ACTIVATION and RESTRICTION_TYPE_ALL_INCOMING, test SetCallRestriction(),
 *              and Dial a call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_SetCallRestriction_1800, Function | MediumTest | Level3)
{
    char callNumber[BUFSIZ] = OPERATOR_PHONY_NUMBER;
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_ALL_OUTGOING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);

    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_15000_MS);
    ret = Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTING), true, SLEEP_50_MS, SLEEP_15000_MS);
    TestRegisterCallBack(callNumber);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_1900
 * @tc.name     enable RESTRICTION_TYPE_INTERNATIONAL and RESTRICTION_MODE_ACTIVATION, test SetCallRestriction(),
 *              and Dial a call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_SetCallRestriction_1900, Function | MediumTest | Level3)
{
    char callNumber[BUFSIZ] = INTERNATIONAL_PHONY_NUMBER;
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_INTERNATIONAL;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);

    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_15000_MS);
    ret = Dial(Str8ToStr16(INTERNATIONAL_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTING), true, SLEEP_50_MS, SLEEP_15000_MS);
    TestRegisterCallBack(callNumber);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_2000
 * @tc.name     enable RESTRICTION_TYPE_INTERNATIONAL and RESTRICTION_MODE_ACTIVATION, test SetCallRestriction(),
 *              and Dial a call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_SetCallRestriction_2000, Function | MediumTest | Level3)
{
    char callNumber[BUFSIZ] = RESTRICTION_PHONY_NUMBER;
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_INTERNATIONAL;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);

    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_15000_MS);
    ret = Dial(Str8ToStr16(RESTRICTION_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ALERTING), true, SLEEP_50_MS, SLEEP_15000_MS);
    TestRegisterCallBack(callNumber);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_2100
 * @tc.name     enable RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME and RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), and Dial a call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_SetCallRestriction_2100, Function | MediumTest | Level3)
{
    char callNumber[BUFSIZ] = RESTRICTION_PHONY_NUMBER;
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);

    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_15000_MS);
    ret = Dial(Str8ToStr16(RESTRICTION_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTING), true, SLEEP_50_MS, SLEEP_15000_MS);
    TestRegisterCallBack(callNumber);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_2200
 * @tc.name     enable RESTRICTION_TYPE_ALL_INCOMING and RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), and coming a call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_SetCallRestriction_2200, Function | MediumTest | Level3)
{
    char callNumber[BUFSIZ] = RESTRICTION_PHONY_NUMBER;
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_ALL_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);

    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_15000_MS);
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, OBJECT_PHONY_NUMBER, strlen(OBJECT_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    TestRegisterCallBack(callNumber);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_2300
 * @tc.name     enable RESTRICTION_TYPE_ROAMING_INCOMING and RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), and coming a call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_SetCallRestriction_2300, Function | MediumTest | Level3)
{
    char callNumber[BUFSIZ] = AMERICA_PHONY_NUMBER;
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_ROAMING_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);

    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_15000_MS);
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(AMERICA_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    TestRegisterCallBack(callNumber);
}

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_2400
 * @tc.name     enable RESTRICTION_TYPE_ROAMING_INCOMING and RESTRICTION_MODE_ACTIVATION
 *              test SetCallRestriction(), and coming a call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_SetCallRestriction_2400, Function | MediumTest | Level3)
{
    char callNumber[BUFSIZ] = RESTRICTION_PHONY_NUMBER;
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_ROAMING_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);

    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_15000_MS);
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(RESTRICTION_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    TestRegisterCallBack(callNumber);
}

/***************************************** Test SetCallTransferInfo() ******************************************/

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_1300
 * @tc.name     enable REGISTRATION and MOBILE_BUSY,SetCallTransferInfo to empty phonynumber
 *              later Dial call, and mock accept.and mock coming call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_SetCallTransferInfo_1300, Function | MediumTest | Level3)
{
    char emptyPhoneNumber[3] = "";
    char callNumber[BUFSIZ] = TARGET_PHONY_NUMBER;
    char mockNumber[BUFSIZ] = OBJECT_PHONY_NUMBER;
    CallTransferInfo setCallTransferInfo;
    setCallTransferInfo.settingType = REGISTRATION;
    setCallTransferInfo.type = MOBILE_BUSY;
    int ret = strcpy_s(setCallTransferInfo.transferNum, BUFSIZ, emptyPhoneNumber);
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransferInfo), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_15000_MS);

    ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ACCEPT_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);
    TestRegisterCallBack(callNumber);

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, OBJECT_PHONY_NUMBER, strlen(OBJECT_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);
    TestRegisterCallBack(mockNumber);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_1400
 * @tc.name     enable REGISTRATION and MOBILE_BUSY, SetCallTransferInfo to phoneNumber for "12599"
 *              later Dial call, and mock accept.and mock coming call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_SetCallTransferInfo_1400, Function | MediumTest | Level3)
{
    char callNumber[BUFSIZ] = TARGET_PHONY_NUMBER;
    CallTransferInfo setCallTransferInfo;
    setCallTransferInfo.settingType = REGISTRATION;
    setCallTransferInfo.type = MOBILE_BUSY;
    int ret = strcpy_s(setCallTransferInfo.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransferInfo), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_15000_MS);

    ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ACCEPT_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);
    TestRegisterCallBack(callNumber);
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, OBJECT_PHONY_NUMBER, strlen(OBJECT_PHONY_NUMBER));
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_1500
 * @tc.name     enable ERASURE and MOBILE_BUSY, SetCallTransferInfo to phoneNumber for "12599"
 *              later Dial call, and mock accept.and mock coming call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_SetCallTransferInfo_1500, Function | MediumTest | Level3)
{
    char callNumber[BUFSIZ] = TARGET_PHONY_NUMBER;
    char mockNumber[BUFSIZ] = OBJECT_PHONY_NUMBER;
    CallTransferInfo setCallTransferInfo;
    setCallTransferInfo.settingType = ERASURE;
    setCallTransferInfo.type = MOBILE_BUSY;
    int ret = strcpy_s(setCallTransferInfo.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransferInfo), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_15000_MS);

    ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ACCEPT_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);
    TestRegisterCallBack(callNumber);

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, OBJECT_PHONY_NUMBER, strlen(OBJECT_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);
    TestRegisterCallBack(mockNumber);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_1600
 * @tc.name     enable REGISTRATION and NO_REPLY, and SetCallTransferInfo to empty phonenumber
 *              later Dial call, and mock accept.and mock coming call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_SetCallTransferInfo_1600, Function | MediumTest | Level3)
{
    char emptyPhoneNumber[3] = "";
    char callNumber[BUFSIZ] = TARGET_PHONY_NUMBER;
    char mockNumber[BUFSIZ] = OBJECT_PHONY_NUMBER;
    CallTransferInfo setCallTransferInfo;
    setCallTransferInfo.settingType = REGISTRATION;
    setCallTransferInfo.type = NO_REPLY;
    int ret = strcpy_s(setCallTransferInfo.transferNum, BUFSIZ, emptyPhoneNumber);
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransferInfo), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_15000_MS);

    ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ACCEPT_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);
    TestRegisterCallBack(callNumber);

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, OBJECT_PHONY_NUMBER, strlen(OBJECT_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);
    TestRegisterCallBack(mockNumber);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_1700
 * @tc.name     enable REGISTRATION and NO_REPLY, SetCallTransferInfo to phoneNumber for "12599",
 *              later Dial call, and mock accept.and mock coming call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_SetCallTransferInfo_1700, Function | MediumTest | Level3)
{
    char callNumber[BUFSIZ] = TARGET_PHONY_NUMBER;
    CallTransferInfo setCallTransferInfo;
    setCallTransferInfo.settingType = REGISTRATION;
    setCallTransferInfo.type = NO_REPLY;
    int ret = strcpy_s(setCallTransferInfo.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransferInfo), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_15000_MS);

    ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ACCEPT_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);
    TestRegisterCallBack(callNumber);

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, OBJECT_PHONY_NUMBER, strlen(OBJECT_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);
}

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_1800
 * @tc.name     enable ERASURE and NO_REPLY, SetCallTransferInfo to phoneNumber for "12599",
 *              later Dial call, and mock accept.and mock coming call
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_SetCallTransferInfo_1800, Function | MediumTest | Level3)
{
    char callNumber[BUFSIZ] = TARGET_PHONY_NUMBER;
    char mockNumber[BUFSIZ] = OBJECT_PHONY_NUMBER;
    CallTransferInfo setCallTransferInfo;
    setCallTransferInfo.settingType = ERASURE;
    setCallTransferInfo.type = NO_REPLY;
    int ret = strcpy_s(setCallTransferInfo.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransferInfo), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_15000_MS);

    ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ACCEPT_CALL, VALID_TRANSFER_NUMBER.c_str(),
        strlen(VALID_TRANSFER_NUMBER.c_str()));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_15000_MS);
    TestRegisterCallBack(callNumber);

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, OBJECT_PHONY_NUMBER, strlen(OBJECT_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_INCOMING), true, SLEEP_50_MS, SLEEP_15000_MS);
    TestRegisterCallBack(mockNumber);
}
