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

#define CALLMANAGER_IMS_TEST
#include "call_manager_ims_test.h"

#include <cstring>
#include <gtest/gtest.h>

#include "call_manager_basic.h"
#include "input/camera_manager.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::CameraStandard;
using namespace OHOS::Telephony;
using namespace OHOS::Telephony::CallManager;

/********************************************* Test DialCall() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_DialCall_0100
 * @tc.name     make a normal phone call with card1, testing the active state, and testing DialCall()
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_DialCall_0100, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_30000_MS);
    sleep(SLEEP_2_SEC);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DialCall_0200
 * @tc.name     make a normal phone call with card1, testing the dialing state, and testing DialCall()
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_DialCall_0200, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DialCall_0300
 * @tc.name     make a normal phone call with accountId is card2, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_DialCall_0300, Function | MediumTest | Level3)
{
    AppExecFwk::PacMap dialInfo;
    dialInfo.PutIntValue("accountId", SLOT_ID);
    dialInfo.PutIntValue("videoState", (int)VideoStateType::TYPE_VOICE);
    dialInfo.PutIntValue("dialScene", (int)DialScene::CALL_PRIVILEGED);
    dialInfo.PutIntValue("dialType", (int)DialType::DIAL_CARRIER_TYPE);
    int ret = g_clientPtr->GetPtr()->DialCall(Str8ToStr16(TARGET_PHONY_NUMBER), dialInfo);
    ASSERT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DialCall_0400
 * @tc.name     make a normal phone call with telephone numbers is invalid english Phone
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_DialCall_0400, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16("abcdefghijk"));
    EXPECT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DialCall_0500
 * @tc.name     If an invalid charate is dial, the DialCall() interface succeeds, but callId is not generated
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_DialCall_0500, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16("!@#$%^&*()+"));
    EXPECT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DialCall_0600
 * @tc.name     If an invalid number is dialed, the DialCall() interface succeeds, but callId is not generated
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_DialCall_0600, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(
        "12345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901"));
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DialCall_0700
 * @tc.name     make a normal phone call with null telephone numbers, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_DialCall_0700, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(EMPTY_DEFAULT));
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DialCall_0800
 * @tc.name     make a normal phone call,The enumeration parameter extras.accountid is -1, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_DialCall_0800, Function | MediumTest | Level3)
{
    AppExecFwk::PacMap dialInfo;
    dialInfo.PutIntValue("accountId", (int)CallTestEnum::INVALID_NEGATIVE_VALUE);
    dialInfo.PutIntValue("videoState", (int)VideoStateType::TYPE_VOICE);
    dialInfo.PutIntValue("dialScene", (int)DialScene::CALL_PRIVILEGED);
    dialInfo.PutIntValue("dialType", (int)DialType::DIAL_CARRIER_TYPE);
    int ret = g_clientPtr->GetPtr()->DialCall(Str8ToStr16(OPERATOR_PHONY_NUMBER), dialInfo);
    ASSERT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DialCall_0900
 * @tc.name     make a normal phone call,The enumeration parameter extras.accountid is 2, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_DialCall_0900, Function | MediumTest | Level3)
{
    AppExecFwk::PacMap dialInfo;
    dialInfo.PutIntValue("accountId", (int)CallTestEnum::INVALID_VALUE_2);
    dialInfo.PutIntValue("videoState", (int)VideoStateType::TYPE_VOICE);
    dialInfo.PutIntValue("dialScene", (int)DialScene::CALL_PRIVILEGED);
    dialInfo.PutIntValue("dialType", (int)DialType::DIAL_CARRIER_TYPE);
    int ret = g_clientPtr->GetPtr()->DialCall(Str8ToStr16(OPERATOR_PHONY_NUMBER), dialInfo);
    ASSERT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DialCall_1000
 * @tc.name     make a normal phone call with card1, videoState is -1, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_DialCall_1000, Function | MediumTest | Level3)
{
    AppExecFwk::PacMap dialInfo;
    dialInfo.PutIntValue("accountId", SLOT_ID);
    dialInfo.PutIntValue("videoState", (int)CallTestEnum::INVALID_NEGATIVE_VALUE);
    dialInfo.PutIntValue("dialScene", (int)DialScene::CALL_PRIVILEGED);
    dialInfo.PutIntValue("dialType", (int)DialType::DIAL_CARRIER_TYPE);
    int ret = g_clientPtr->GetPtr()->DialCall(Str8ToStr16(OPERATOR_PHONY_NUMBER), dialInfo);
    ASSERT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DialCall_1100
 * @tc.name     make a normal phone call with card1, videoState is 2, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_DialCall_1100, Function | MediumTest | Level3)
{
    AppExecFwk::PacMap dialInfo;
    dialInfo.PutIntValue("accountId", SLOT_ID);
    dialInfo.PutIntValue("videoState", (int)CallTestEnum::INVALID_VALUE_2);
    dialInfo.PutIntValue("dialScene", (int)DialScene::CALL_PRIVILEGED);
    dialInfo.PutIntValue("dialType", (int)DialType::DIAL_CARRIER_TYPE);
    int ret = g_clientPtr->GetPtr()->DialCall(Str8ToStr16(OPERATOR_PHONY_NUMBER), dialInfo);
    ASSERT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DialCall_1200
 * @tc.name     make a normal phone call with dialScene is -1, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_DialCall_1200, Function | MediumTest | Level3)
{
    AppExecFwk::PacMap dialInfo;
    dialInfo.PutIntValue("accountId", SLOT_ID);
    dialInfo.PutIntValue("videoState", (int)VideoStateType::TYPE_VOICE);
    dialInfo.PutIntValue("dialScene", (int)CallTestEnum::INVALID_NEGATIVE_VALUE);
    dialInfo.PutIntValue("dialType", (int)DialType::DIAL_CARRIER_TYPE);
    int ret = g_clientPtr->GetPtr()->DialCall(Str8ToStr16(OPERATOR_PHONY_NUMBER), dialInfo);
    ASSERT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DialCall_1300
 * @tc.name     make a normal phone call with dialScene is 3, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_DialCall_1300, Function | MediumTest | Level3)
{
    AppExecFwk::PacMap dialInfo;
    dialInfo.PutIntValue("accountId", SLOT_ID);
    dialInfo.PutIntValue("videoState", (int)VideoStateType::TYPE_VOICE);
    dialInfo.PutIntValue("dialScene", (int)CallTestEnum::INVALID_VALUE_3);
    dialInfo.PutIntValue("dialType", (int)DialType::DIAL_CARRIER_TYPE);
    int ret = g_clientPtr->GetPtr()->DialCall(Str8ToStr16(OPERATOR_PHONY_NUMBER), dialInfo);
    ASSERT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DialCall_1400
 * @tc.name     make a normal phone call with dialType is -1, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_DialCall_1400, Function | MediumTest | Level3)
{
    AppExecFwk::PacMap dialInfo;
    dialInfo.PutIntValue("accountId", SLOT_ID);
    dialInfo.PutIntValue("videoState", (int)VideoStateType::TYPE_VOICE);
    dialInfo.PutIntValue("dialScene", (int)DialScene::CALL_PRIVILEGED);
    dialInfo.PutIntValue("dialType", (int)CallTestEnum::INVALID_NEGATIVE_VALUE);
    int ret = g_clientPtr->GetPtr()->DialCall(Str8ToStr16(OPERATOR_PHONY_NUMBER), dialInfo);
    ASSERT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DialCall_1500
 * @tc.name     make a normal phone call with dialType is 3, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_DialCall_1500, Function | MediumTest | Level3)
{
    AppExecFwk::PacMap dialInfo;
    dialInfo.PutIntValue("accountId", SLOT_ID);
    dialInfo.PutIntValue("videoState", (int)VideoStateType::TYPE_VOICE);
    dialInfo.PutIntValue("dialScene", (int)DialScene::CALL_PRIVILEGED);
    dialInfo.PutIntValue("dialType", (int)CallTestEnum::INVALID_VALUE_3);
    int ret = g_clientPtr->GetPtr()->DialCall(Str8ToStr16(OPERATOR_PHONY_NUMBER), dialInfo);
    ASSERT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DialCall_1600
 * @tc.name     make a normal phone call with card is 2 and dialType is -1, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_DialCall_1600, Function | MediumTest | Level3)
{
    AppExecFwk::PacMap dialInfo;
    dialInfo.PutIntValue("accountId", SLOT_ID_3);
    dialInfo.PutIntValue("videoState", (int)VideoStateType::TYPE_VOICE);
    dialInfo.PutIntValue("dialScene", (int)DialScene::CALL_PRIVILEGED);
    dialInfo.PutIntValue("dialType", (int)CallTestEnum::INVALID_NEGATIVE_VALUE);
    int ret = g_clientPtr->GetPtr()->DialCall(Str8ToStr16(OPERATOR_PHONY_NUMBER), dialInfo);
    ASSERT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DialCall_2100
 * @tc.name     make a CALL_NORMAL phone call with DIAL_CARRIER_TYPE, return zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_DialCall_2100, Function | MediumTest | Level3)
{
    AppExecFwk::PacMap dialInfo;
    dialInfo.PutIntValue("accountId", SLOT_ID);
    dialInfo.PutIntValue("videoState", (int)VideoStateType::TYPE_VOICE);
    dialInfo.PutIntValue("dialScene", (int)DialScene::CALL_NORMAL);
    dialInfo.PutIntValue("dialType", (int)DialType::DIAL_CARRIER_TYPE);
    int ret = g_clientPtr->GetPtr()->DialCall(Str8ToStr16(TARGET_PHONY_NUMBER), dialInfo);
    ASSERT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DialCall_2200
 * @tc.name     make a CALL_NORMAL phone call with DIAL_CARRIER_TYPE, EMERGENCY_PHONY_NUMBER return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_DialCall_2200, Function | MediumTest | Level3)
{
    AppExecFwk::PacMap dialInfo;
    dialInfo.PutIntValue("accountId", SLOT_ID);
    dialInfo.PutIntValue("videoState", (int)VideoStateType::TYPE_VOICE);
    dialInfo.PutIntValue("dialScene", (int)DialScene::CALL_NORMAL);
    dialInfo.PutIntValue("dialType", (int)DialType::DIAL_CARRIER_TYPE);
    int ret = g_clientPtr->GetPtr()->DialCall(Str8ToStr16(EMERGENCY_PHONY_NUMBER), dialInfo);
    ASSERT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DialCall_2300
 * @tc.name     make a CALL_EMERGENCY phone call with DIAL_CARRIER_TYPE, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_DialCall_2300, Function | MediumTest | Level3)
{
    AppExecFwk::PacMap dialInfo;
    dialInfo.PutIntValue("accountId", SLOT_ID);
    dialInfo.PutIntValue("videoState", (int)VideoStateType::TYPE_VOICE);
    dialInfo.PutIntValue("dialScene", (int)DialScene::CALL_EMERGENCY);
    dialInfo.PutIntValue("dialType", (int)DialType::DIAL_CARRIER_TYPE);
    int ret = g_clientPtr->GetPtr()->DialCall(Str8ToStr16(TARGET_PHONY_NUMBER), dialInfo);
    ASSERT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DialCall_2400
 * @tc.name     make a CALL_EMERGENCY phone call with DIAL_CARRIER_TYPE, EMERGENCY_PHONY_NUMBER return zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_DialCall_2400, Function | MediumTest | Level3)
{
    AppExecFwk::PacMap dialInfo;
    dialInfo.PutIntValue("accountId", SLOT_ID);
    dialInfo.PutIntValue("videoState", (int)VideoStateType::TYPE_VOICE);
    dialInfo.PutIntValue("dialScene", (int)DialScene::CALL_EMERGENCY);
    dialInfo.PutIntValue("dialType", (int)DialType::DIAL_CARRIER_TYPE);
    int ret = g_clientPtr->GetPtr()->DialCall(Str8ToStr16(EMERGENCY_PHONY_NUMBER), dialInfo);
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DialCall_2500
 * @tc.name     make a normal phone call with card1, EMERGENCY_PHONY_NUMBER, return zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_DialCall_2500, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(EMERGENCY_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
}

/********************************************* Test AnswerCall() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_AnswerCall_0100
 * @tc.name     test AnswerCall with the callId does not exist
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_AnswerCall_0100, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->AnswerCall(FALSE_CALLID_1000, (int)VideoStateType::TYPE_VOICE);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_AnswerCall_0200
 * @tc.name     test AnswerCall with the callId does not exist, videoState is TYPE_VIDEO
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_AnswerCall_0200, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->AnswerCall(FALSE_CALLID_1000, (int)VideoStateType::TYPE_VIDEO);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_AnswerCall_0300
 * @tc.name     test the AnswerCall with a negative value callId
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_AnswerCall_0300, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->AnswerCall(FALSE_NEGATIVE_CALLID_100, (int)VideoStateType::TYPE_VOICE);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_AnswerCall_0400
 * @tc.name     test the AnswerCall with a negative value callId, videoState is TYPE_VIDEO
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_AnswerCall_0400, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->AnswerCall(FALSE_NEGATIVE_CALLID_100, (int)VideoStateType::TYPE_VIDEO);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_AnswerCall_1100
 * @tc.name     make a normal phone call with card1, TARGET_PHONY_NUMBER, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_AnswerCall_1100, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_30000_MS);
    ret = g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE);
    EXPECT_NE(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_30000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_AnswerCall_1200
 * @tc.name     make a normal phone call with card1, OPERATOR_PHONY_NUMBER, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_AnswerCall_1200, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_30000_MS);
    ret = g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE);
    EXPECT_NE(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_30000_MS);
    sleep(SLEEP_2_SEC);
}

/********************************************* Test RejectCall() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_RejectCall_0100
 * @tc.name     test RejectCall with the callId does not exist
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_IMS_CallManager_RejectCall_0100, Function | MediumTest | Level3)
{
    u16string textMessage = Str8ToStr16("this is a test message");
    int ret = g_clientPtr->GetPtr()->RejectCall(FALSE_NEGATIVE_CALLID_100, true, textMessage);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_RejectCall_0700
 * @tc.name     During dial-up, pass the exception callId and call RejectCall() to verify that the exception
 *              return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_IMS_CallManager_RejectCall_0700, Function | MediumTest | Level3)
{
    u16string textMessage = Str8ToStr16("this is a test message");
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_30000_MS);
    ret = g_clientPtr->GetPtr()->RejectCall(g_newCallId, true, textMessage);
    EXPECT_NE(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_30000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_RejectCall_0800
 * @tc.name     During a call, pass the exception callId and call RejectCall() to verify that the return value
 *              of the exception is non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_IMS_CallManager_RejectCall_0800, Function | MediumTest | Level3)
{
    u16string textMessage = Str8ToStr16("this is a test message");
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TELEOPERATOR_OPERATOR_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_30000_MS);
    ret = g_clientPtr->GetPtr()->RejectCall(g_newCallId, true, textMessage);
    EXPECT_NE(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_30000_MS);
    sleep(SLEEP_2_SEC);
}

/******************************************* Test HangUpCall() *********************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_HangUpCall_0100
 * @tc.name     test ring disconnect call after DialCall,
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_HangUpCall_0100, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
    EXPECT_EQ(hangUpRet, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true,
        SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_HangUpCall_0200
 * @tc.name     test disconnect call with wrong callId and return value is non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_HangUpCall_0200, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->HangUpCall(FALSE_NEGATIVE_CALLID_100);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_HangUpCall_0900
 * @tc.name     During dialing, pass in the abnormal call ID, call HangUpCall(),
 *              and verify that the exception return value is non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_HangUpCall_0900, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_30000_MS);
    ret = g_clientPtr->GetPtr()->HangUpCall(FALSE_CALLID_100);
    EXPECT_NE(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_30000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_HangUpCall_1000
 * @tc.name     During a call, pass in the abnormal call ID, call HangUpCall(),
 *              and verify that the exception return value is non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_HangUpCall_1000, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TELEOPERATOR_OPERATOR_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_30000_MS);
    ret = g_clientPtr->GetPtr()->HangUpCall(FALSE_CALLID_100);
    EXPECT_NE(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_30000_MS);
    sleep(SLEEP_2_SEC);
}

/********************************************* Test StartDtmf() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_StartDtmf_0100
 * @tc.name     Import str '1', test StartDtmf(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_StartDtmf_0100, Function | MediumTest | Level3)
{
    char invalidNumberDtmf = '1';
    int ret = g_clientPtr->GetPtr()->StartDtmf(FALSE_NEGATIVE_CALLID_100, invalidNumberDtmf);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_StartDtmf_0200
 * @tc.name     Import str '1', test StartDtmf()
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_StartDtmf_0200, Function | MediumTest | Level3)
{
    char validNumberDtmf = '1';
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    g_clientPtr->GetPtr()->StartDtmf(g_newCallId, validNumberDtmf);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_StartDtmf_0300
 * @tc.name     Import str '5', test StartDtmf()
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_StartDtmf_0300, Function | MediumTest | Level3)
{
    char validNumberDtmf = '5';

    int ret = CallManagerFunctionTest::Dial(Str8ToStr16("10000000002"));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    g_clientPtr->GetPtr()->StartDtmf(g_newCallId, validNumberDtmf);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_StartDtmf_0400
 * @tc.name     Import str '8', test StartDtmf()
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_StartDtmf_0400, Function | MediumTest | Level3)
{
    char validNumberDtmf = '8';

    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->StartDtmf(g_newCallId, validNumberDtmf);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_StartDtmf_0500
 * @tc.name     Import str 'B', test StartDtmf()
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_StartDtmf_0500, Function | MediumTest | Level3)
{
    char validCharDtmf = 'B';
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->StartDtmf(g_newCallId, validCharDtmf);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_StartDtmf_0600
 * @tc.name     Import str 'C', test StartDtmf()
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_StartDtmf_0600, Function | MediumTest | Level3)
{
    char validCharDtmf = 'C';

    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->StartDtmf(g_newCallId, validCharDtmf);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_StartDtmf_0700
 * @tc.name     Import str 'D', test StartDtmf()
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_StartDtmf_0700, Function | MediumTest | Level3)
{
    char validCharDtmf = 'D';

    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->StartDtmf(g_newCallId, validCharDtmf);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_StartDtmf_0800
 * @tc.name     Import str 'a', test StartDtmf(),return non-zero
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_StartDtmf_0800, Function | MediumTest | Level3)
{
    char invalidDtmf = 'a';

    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->StartDtmf(g_newCallId, invalidDtmf);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_StartDtmf_0900
 * @tc.name     Import str 'a', test StartDtmf(),return non-zero
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_StartDtmf_0900, Function | MediumTest | Level3)
{
    char invalidDtmf = 'E';

    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    ret = g_clientPtr->GetPtr()->StartDtmf(g_newCallId, invalidDtmf);
    EXPECT_NE(ret, SUCCESSFUL);
    sleep(SLEEP_2_SEC);
}

/**
 * @tc.number   Telephony_CallManager_IMS_StartDtmf_1000
 * @tc.name     Import str '+', test StartDtmf(),return non-zero
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_StartDtmf_1000, Function | MediumTest | Level3)
{
    char invalidDtmf = '+';

    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    ret = g_clientPtr->GetPtr()->StartDtmf(g_newCallId, invalidDtmf);
    EXPECT_NE(ret, SUCCESSFUL);
    sleep(SLEEP_2_SEC);
}

/**
 * @tc.number   Telephony_CallManager_IMS_StartDtmf_1100
 * @tc.name     Import str 'Z', test StartDtmf(),return non-zero
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_StartDtmf_1100, Function | MediumTest | Level3)
{
    char invalidDtmf = 'Z';

    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->StartDtmf(g_newCallId, invalidDtmf);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_StartDtmf_1400
 * @tc.name     Import str 'B', test StartDtmf(),return non-zero
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_StartDtmf_1400, Function | MediumTest | Level3)
{
    char validDtmf = 'B';

    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->StartDtmf(FALSE_NEGATIVE_CALLID_100, validDtmf);
    EXPECT_NE(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_StartDtmf_1500
 * @tc.name     Import str 'B', test StartDtmf(),return non-zero
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_StartDtmf_1500, Function | MediumTest | Level3)
{
    char validDtmf = 'B';

    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(UNICOM_OPERATOR_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_30000_MS);
    ret = g_clientPtr->GetPtr()->StartDtmf(FALSE_NEGATIVE_CALLID_100, validDtmf);
    EXPECT_NE(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_30000_MS);
    sleep(SLEEP_2_SEC);
}

/********************************************* Test StopDtmf() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_StopDtmf_0100
 * @tc.name     Import callId -100, test StopDtmf(),return zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_StopDtmf_0100, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->StopDtmf(FALSE_NEGATIVE_CALLID_100);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_StopDtmf_0200
 * @tc.name     Import str s, and StartDtmf test StopDtmf() again
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_StopDtmf_0200, Function | MediumTest | Level3)
{
    char validNumberDtmf = '3';
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->StartDtmf(g_newCallId, validNumberDtmf);
    EXPECT_EQ(ret, SUCCESSFUL);
    ret = g_clientPtr->GetPtr()->StopDtmf(g_newCallId);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_StopDtmf_0300
 * @tc.name     Import str s, and StartDtmf test StopDtmf() again,return non-zero
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_StopDtmf_0300, Function | MediumTest | Level3)
{
    char validNumberDtmf = '3';
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->StartDtmf(g_newCallId, validNumberDtmf);
    EXPECT_EQ(ret, SUCCESSFUL);
    ret = g_clientPtr->GetPtr()->StopDtmf(INVALID_CALLID);
    EXPECT_NE(ret, SUCCESSFUL);
}

/******************************************** Test ControlCamera() *****************************************/

/**
 * @tc.number   Telephony_CallManager_ControlCamera_0100
 * @tc.name     Import cameraId, dial call test ControlCamera(),return zero,and close camera
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_ControlCamera_0100, Function | MediumTest | Level3)
{
    std::string cameraId = g_cameraObjList[0]->GetID();
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->ControlCamera(Str8ToStr16(cameraId));
    EXPECT_EQ(ret, SUCCESSFUL);
    ret = g_clientPtr->GetPtr()->ControlCamera(Str8ToStr16(CLOSE_CAMERA));
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_ControlCamera_0200
 * @tc.name     Import invalid cameraId, dial call  test ControlCamera(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_ControlCamera_0200, Function | MediumTest | Level3)
{
    std::string cameraId = "xtsautotest123456";
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->ControlCamera(Str8ToStr16(cameraId));
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_ControlCamera_0300
 * @tc.name     Import cameraId, dial call  test ControlCamera(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_ControlCamera_0300, Function | MediumTest | Level3)
{
    std::string cameraId = g_cameraObjList[0]->GetID();
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->ControlCamera(Str8ToStr16(cameraId));
    EXPECT_NE(ret, SUCCESSFUL);

    // Currently, the callingPackage has not been checked, and the camera will be opened successfully
    ret = g_clientPtr->GetPtr()->ControlCamera(Str8ToStr16(CLOSE_CAMERA));
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_ControlCamera_0600
 * @tc.name     Import empty cameraId, dial call test ControlCamera(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_ControlCamera_0600, Function | MediumTest | Level3)
{
    // Before the camera is opened, import the empty cameraId and return non-zero
    std::string cameraId = "";
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->ControlCamera(Str8ToStr16(cameraId));
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_ControlCamera_0700
 * @tc.name     Import cameraId and, dial call  test ControlCamera() open
 *              and Import empty cameraId test ControlCamera() close again,return zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_ControlCamera_0700, Function | MediumTest | Level3)
{
    std::string cameraId = g_cameraObjList[0]->GetID();
    std::string callingPackage = "com.ohos.videocall";
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->ControlCamera(Str8ToStr16(cameraId));
    EXPECT_EQ(ret, SUCCESSFUL);

    // After successfully opening the camera, you can close the camera by importing an empty cameraId
    cameraId = "";
    ret = g_clientPtr->GetPtr()->ControlCamera(Str8ToStr16(cameraId));
    EXPECT_EQ(ret, SUCCESSFUL);
}

/******************************************** Test SetPreviewWindow() *****************************************/

/**
 * @tc.number   Telephony_CallManager_SetPreviewWindow_0100
 * @tc.name     Import coordinateX Y Z and width height, dial call  test SetPreviewWindow(),return zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetPreviewWindow_0100, Function | MediumTest | Level3)
{
    VideoWindow window;
    window.x = 700;
    window.y = 10;
    window.z = 1;
    window.width = 300;
    window.height = 600;

    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetPreviewWindow(window);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetPreviewWindow_0200
 * @tc.name     Import coordinateX Y Z and width height, dial call  test SetPreviewWindow(),return zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetPreviewWindow_0200, Function | MediumTest | Level3)
{
    VideoWindow window;
    window.x = 700;
    window.y = 10;
    window.z = 0;
    window.width = 300;
    window.height = 600;

    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetPreviewWindow(window);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetPreviewWindow_0300
 * @tc.name     Import coordinateX Y ,Z is invalid coordinate and width height,
 *              dial call test SetPreviewWindow(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetPreviewWindow_0300, Function | MediumTest | Level3)
{
    VideoWindow window;
    window.x = 700;
    window.y = 10;
    window.z = -1;
    window.width = 300;
    window.height = 600;

    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetPreviewWindow(window);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetPreviewWindow_0400
 * @tc.name     Import coordinateX Y ,Z is invalid coordinate and width height,
 *              dial call test SetPreviewWindow(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetPreviewWindow_0400, Function | MediumTest | Level3)
{
    VideoWindow window;
    window.x = 700;
    window.y = 10;
    window.z = 2;
    window.width = 300;
    window.height = 600;

    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetPreviewWindow(window);
    EXPECT_NE(ret, SUCCESSFUL);
}

/******************************************** Test SetDisplayWindow() *****************************************/

/**
 * @tc.number   Telephony_CallManager_SetDisplayWindow_0100
 * @tc.name     Import coordinateX Y Z and width height, dial call  test SetDisplayWindow(),return zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetDisplayWindow_0100, Function | MediumTest | Level3)
{
    VideoWindow window;
    window.x = 700;
    window.y = 10;
    window.z = 1;
    window.width = 300;
    window.height = 600;

    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetDisplayWindow(window);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetDisplayWindow_0200
 * @tc.name     Import coordinateX Y Z and width height, dial call  test SetDisplayWindow(),return zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetDisplayWindow_0200, Function | MediumTest | Level3)
{
    VideoWindow window;
    window.x = 700;
    window.y = 10;
    window.z = 0;
    window.width = 300;
    window.height = 600;

    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetDisplayWindow(window);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetDisplayWindow_0300
 * @tc.name     Import coordinateX Y ,Z is invalid coordinate and width height,
 *              dial call test SetDisplayWindow(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetDisplayWindow_0300, Function | MediumTest | Level3)
{
    VideoWindow window;
    window.x = 700;
    window.y = 10;
    window.z = -1;
    window.width = 300;
    window.height = 600;

    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetDisplayWindow(window);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetDisplayWindow_0400
 * @tc.name     Import coordinateX Y ,Z is invalid coordinate and width height,
 *              dial call test SetDisplayWindow(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetDisplayWindow_0400, Function | MediumTest | Level3)
{
    VideoWindow window;
    window.x = 700;
    window.y = 10;
    window.z = 2;
    window.width = 300;
    window.height = 600;

    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetDisplayWindow(window);
    EXPECT_NE(ret, SUCCESSFUL);
}

/******************************************** Test SetCameraZoom() *****************************************/

/**
 * @tc.number   Telephony_CallManager_SetCameraZoom_0100
 * @tc.name     Import zoomRatio, dial call test SetCameraZoom(),return zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetCameraZoom_0100, Function | MediumTest | Level3)
{
    sptr<CameraInput> cameraInput = g_camManagerObj->CreateCameraInput(g_cameraObjList[0]);
    ASSERT_TRUE(cameraInput);
    std::vector<float> zoomList = cameraInput->GetSupportedZoomRatioRange();
    ASSERT_FALSE(zoomList.empty());
    float zoomRatio = zoomList[0];
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    EXPECT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetCameraZoom(zoomRatio);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCameraZoom_0200
 * @tc.name     Import zoomRatio, dial call test SetCameraZoom(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetCameraZoom_0200, Function | MediumTest | Level3)
{
    float invalidZoomRatio = 15.0;
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetCameraZoom(invalidZoomRatio);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCameraZoom_0300
 * @tc.name     Import invalid zoomRatio, dial call test SetCameraZoom(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetCameraZoom_0300, Function | MediumTest | Level3)
{
    float invalidZoomRatio = 0.0;
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetCameraZoom(invalidZoomRatio);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCameraZoom_0400
 * @tc.name     Import invalid zoomRatio, dial call test SetCameraZoom(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetCameraZoom_0400, Function | MediumTest | Level3)
{
    float invalidZoomRatio = -1.0;
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetCameraZoom(invalidZoomRatio);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetCameraZoom_0500
 * @tc.name     Import invalid zoomRatio, dial call test SetCameraZoom(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetCameraZoom_0500, Function | MediumTest | Level3)
{
    float invalidZoomRatio = 10.1;
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetCameraZoom(invalidZoomRatio);
    EXPECT_NE(ret, SUCCESSFUL);
}

/******************************************** Test SetPausePicture() *****************************************/

/**
 * @tc.number   Telephony_CallManager_SetPausePicture_0100
 * @tc.name     Import file path, dial call test SetPausePicture(),return zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetPausePicture_0100, Function | MediumTest | Level3)
{
    std::string path = "/system/data/callManager.png";
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetPausePicture(Str8ToStr16(path));
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetPausePicture_0200
 * @tc.name     Import invalid file path, dial call test SetPausePicture(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetPausePicture_0200, Function | MediumTest | Level3)
{
    std::string invalidPath = "/system/data/callManager.jpg";
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetPausePicture(Str8ToStr16(invalidPath));
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetPausePicture_0300
 * @tc.name     Import invalid file path, dial call test SetPausePicture(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetPausePicture_0300, Function | MediumTest | Level3)
{
    std::string invalidPath = "/system/data/callManager.bmp";
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetPausePicture(Str8ToStr16(invalidPath));
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetPausePicture_0400
 * @tc.name     Import invalid file path, dial call test SetPausePicture(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetPausePicture_0400, Function | MediumTest | Level3)
{
    std::string invalidPath = "/system/data/callManager.webp";
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetPausePicture(Str8ToStr16(invalidPath));
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetPausePicture_0500
 * @tc.name     Import invalid file path, dial call test SetPausePicture(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetPausePicture_0500, Function | MediumTest | Level3)
{
    std::string invalidPath = "/system/data/callManager/notexistpath.webp";
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetPausePicture(Str8ToStr16(invalidPath));
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetPausePicture_0600
 * @tc.name     Import emptyPath, dial call test SetPausePicture(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetPausePicture_0600, Function | MediumTest | Level3)
{
    std::string emptyPath = "";
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetPausePicture(Str8ToStr16(emptyPath));
    EXPECT_NE(ret, SUCCESSFUL);
}

/******************************************** Test SetDeviceDirection() *****************************************/

/**
 * @tc.number   Telephony_CallManager_SetDeviceDirection_0100
 * @tc.name     Import rotation, dial call test SetDeviceDirection(),return zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetDeviceDirection_0100, Function | MediumTest | Level3)
{
    int rotation = 0;
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetDeviceDirection(rotation);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetDeviceDirection_0200
 * @tc.name     Import rotation, dial call test SetDeviceDirection(),return zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetDeviceDirection_0200, Function | MediumTest | Level3)
{
    int rotation = 90;
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetDeviceDirection(rotation);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetDeviceDirection_0300
 * @tc.name     Import rotation, dial call test SetDeviceDirection(),return zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetDeviceDirection_0300, Function | MediumTest | Level3)
{
    int rotation = 180;
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetDeviceDirection(rotation);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetDeviceDirection_0400
 * @tc.name     Import rotation, dial call test SetDeviceDirection(),return zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetDeviceDirection_0400, Function | MediumTest | Level3)
{
    int rotation = 270;
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetDeviceDirection(rotation);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetDeviceDirection_0500
 * @tc.name     Import invalid rotation, dial call test SetDeviceDirection(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetDeviceDirection_0500, Function | MediumTest | Level3)
{
    int invalidRotation = -1;
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetDeviceDirection(invalidRotation);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetDeviceDirection_0600
 * @tc.name     Import invalid rotation, dial call test SetDeviceDirection(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetDeviceDirection_0600, Function | MediumTest | Level3)
{
    int invalidRotation = 60;
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetDeviceDirection(invalidRotation);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetDeviceDirection_0700
 * @tc.name     Import invalid rotation, dial call test SetDeviceDirection(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetDeviceDirection_0700, Function | MediumTest | Level3)
{
    int invalidRotation = 360;
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetDeviceDirection(invalidRotation);
    EXPECT_NE(ret, SUCCESSFUL);
}