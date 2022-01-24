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

#define CALLMANAGER_VOLTE_TEST
#include "call_manager_ims_test.h"

#include <cstring>
#include <gtest/gtest.h>

#include "call_manager_basic.h"
#include "input/camera_manager.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;
using namespace OHOS::CameraStandard;
using namespace OHOS::Telephony::CallManager;

/******************************************* Test HoldCall() *********************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_HoldCall_0100
 * @tc.name     Hold calls for non-existent call ID,return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_HoldCall_0100, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->HoldCall(FALSE_CALLID_999);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_HoldCall_0200
 * @tc.name     coming call test hold call,return non-zero
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_HoldCall_0200, Function | MediumTest | Level2)
{
    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    ret = g_clientPtr->GetPtr()->HoldCall(g_newCallId);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_HoldCall_0300
 * @tc.name     coming call test hold call,imput LONG_NEGATIVE_CALLID return non-zero
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_HoldCall_0300, Function | MediumTest | Level2)
{
    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    ret = g_clientPtr->GetPtr()->HoldCall(LONG_NEGATIVE_CALLID);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_HoldCall_0400
 * @tc.name     coming a active call test hold call
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_HoldCall_0400, Function | MediumTest | Level2)
{
    sleep(SLEEP_5_SEC);
    int ret = Dial(Str8ToStr16(UNICOM_OPERATOR_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    if (CallManagerFunctionTest::HasActiveStatus()) {
        ret = g_clientPtr->GetPtr()->HoldCall(g_newCallId);
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_HOLDING), true, SLEEP_50_MS, SLEEP_12000_MS);

        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        EXPECT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
    }
}

/**
 * @tc.number   Telephony_CallManager_IMS_HoldCall_0500
 * @tc.name     coming a active call test hold call, return non-zero
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_HoldCall_0500, Function | MediumTest | Level2)
{
    sleep(SLEEP_5_SEC);
    int ret = Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    sleep(SLEEP_8_SEC);
    if (CallManagerFunctionTest::HasActiveStatus()) {
        ret = g_clientPtr->GetPtr()->HoldCall(LONG_FALSE_CALLID);
        EXPECT_NE(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_12000_MS);

        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        EXPECT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
    }
}

/**
 * @tc.number   Telephony_CallManager_IMS_HoldCall_0600
 * @tc.name     coming a active call test hold call and hod call again
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_HoldCall_0600, Function | MediumTest | Level2)
{
    sleep(SLEEP_5_SEC);
    int ret = Dial(Str8ToStr16(TELEOPERATOR_OPERATOR_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    if (CallManagerFunctionTest::HasActiveStatus()) {
        ret = g_clientPtr->GetPtr()->HoldCall(g_newCallId);
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_HOLDING), true, SLEEP_50_MS, SLEEP_12000_MS);
        ret = g_clientPtr->GetPtr()->HoldCall(g_newCallId);
        EXPECT_NE(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_HOLDING), true, SLEEP_50_MS, SLEEP_12000_MS);

        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        EXPECT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
    }
}

/**
 * @tc.number   Telephony_CallManager_IMS_HoldCall_0700
 * @tc.name     coming a active call test hold call, and hod call again return non-zero
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_HoldCall_0700, Function | MediumTest | Level2)
{
    int ret = Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    sleep(SLEEP_8_SEC);
    if (CallManagerFunctionTest::HasActiveStatus()) {
        ret = g_clientPtr->GetPtr()->HoldCall(g_newCallId);
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_HOLDING), true, SLEEP_50_MS, SLEEP_12000_MS);
        ret = g_clientPtr->GetPtr()->HoldCall(CallManagerIMSTest::LONG_NEGATIVE_CALLID);
        EXPECT_NE(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_HOLDING), true, SLEEP_50_MS, SLEEP_12000_MS);

        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        EXPECT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
    }
}

/******************************************* Test UnHoldCall() *********************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_UnHoldCall_0100
 * @tc.name     Hold calls for non-existent call ID,return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_UnHoldCall_0100, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->UnHoldCall(FALSE_CALLID_999);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_UnHoldCall_0200
 * @tc.name     coming call test hold call,return non-zero
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_UnHoldCall_0200, Function | MediumTest | Level2)
{
    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    ret = g_clientPtr->GetPtr()->UnHoldCall(g_newCallId);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_UnHoldCall_0300
 * @tc.name     coming call test hold call,imput LONG_NEGATIVE_CALLID return non-zero
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_UnHoldCall_0300, Function | MediumTest | Level2)
{
    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    ret = g_clientPtr->GetPtr()->UnHoldCall(LONG_NEGATIVE_CALLID);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_UnHoldCall_0400
 * @tc.name     coming a active call test hold call, return non-zero
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_UnHoldCall_0400, Function | MediumTest | Level2)
{
    sleep(SLEEP_5_SEC);
    int ret = Dial(Str8ToStr16(UNICOM_OPERATOR_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    if (CallManagerFunctionTest::HasActiveStatus()) {
        ret = g_clientPtr->GetPtr()->UnHoldCall(g_newCallId);
        EXPECT_NE(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_12000_MS);

        ret = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        EXPECT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
    }
}

/**
 * @tc.number   Telephony_CallManager_IMS_UnHoldCall_0500
 * @tc.name     coming a active call test hold call, return non-zero
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_UnHoldCall_0500, Function | MediumTest | Level2)
{
    sleep(SLEEP_5_SEC);
    int ret = Dial(Str8ToStr16(TELEOPERATOR_OPERATOR_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    if (CallManagerFunctionTest::HasActiveStatus()) {
        ret = g_clientPtr->GetPtr()->UnHoldCall(CallManagerIMSTest::LONG_NEGATIVE_CALLID);
        EXPECT_NE(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_12000_MS);

        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        EXPECT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
    }
}

/**
 * @tc.number   Telephony_CallManager_IMS_UnHoldCall_0600
 * @tc.name     coming a active call test hold call
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_UnHoldCall_0600, Function | MediumTest | Level2)
{
    sleep(SLEEP_5_SEC);
    int ret = Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    sleep(SLEEP_8_SEC);
    if (CallManagerFunctionTest::HasActiveStatus()) {
        ret = g_clientPtr->GetPtr()->HoldCall(g_newCallId);
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_HOLDING), true, SLEEP_50_MS, SLEEP_12000_MS);
        ret = g_clientPtr->GetPtr()->UnHoldCall(g_newCallId);
        EXPECT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_12000_MS);

        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        EXPECT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
    }
}

/**
 * @tc.number   Telephony_CallManager_IMS_UnHoldCall_0700
 * @tc.name     coming a active call test hold call, return non-zero
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_UnHoldCall_0700, Function | MediumTest | Level2)
{
    sleep(SLEEP_5_SEC);
    int ret = Dial(Str8ToStr16(TELEOPERATOR_OPERATOR_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    if (CallManagerFunctionTest::HasActiveStatus()) {
        ret = g_clientPtr->GetPtr()->HoldCall(g_newCallId);
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_HOLDING), true, SLEEP_50_MS, SLEEP_12000_MS);
        ret = g_clientPtr->GetPtr()->UnHoldCall(CallManagerIMSTest::LONG_NEGATIVE_CALLID);
        EXPECT_NE(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_HOLDING), true, SLEEP_50_MS, SLEEP_12000_MS);

        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        EXPECT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
    }
}

/******************************************* Test SwitchCall() *********************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SwitchCall_0100
 * @tc.name     Switch calls for non-existent call ID,return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SwitchCall_0100, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->SwitchCall(FALSE_CALLID_999);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SwitchCall_0200
 * @tc.name     coming call test Switch call,return non-zero
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_SwitchCall_0200, Function | MediumTest | Level2)
{
    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    ret = g_clientPtr->GetPtr()->SwitchCall(g_newCallId);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SwitchCall_0300
 * @tc.name     coming call test Switch call,imput LONG_NEGATIVE_CALLID return non-zero
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_SwitchCall_0300, Function | MediumTest | Level2)
{
    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    ret = g_clientPtr->GetPtr()->SwitchCall(LONG_NEGATIVE_CALLID);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SwitchCall_0400
 * @tc.name     coming a active call test Switch call,imput LONG_NEGATIVE_CALLID return non-zero
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SwitchCall_0400, Function | MediumTest | Level2)
{
    sleep(SLEEP_5_SEC);
    int ret = Dial(Str8ToStr16(TELEOPERATOR_OPERATOR_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    if (CallManagerFunctionTest::HasActiveStatus()) {
        ret = g_clientPtr->GetPtr()->SwitchCall(CallManagerIMSTest::LONG_NEGATIVE_CALLID);
        EXPECT_NE(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_12000_MS);

        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        EXPECT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
    }
}

/**
 * @tc.number   Telephony_CallManager_IMS_SwitchCall_0500
 * @tc.name     coming a active call test Switch call,return non-zero
 *              wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SwitchCall_0500, Function | MediumTest | Level2)
{
    sleep(SLEEP_5_SEC);
    int ret = Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    sleep(SLEEP_8_SEC);
    if (CallManagerFunctionTest::HasActiveStatus()) {
        ret = g_clientPtr->GetPtr()->SwitchCall(g_newCallId);
        EXPECT_NE(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_12000_MS);

        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        EXPECT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
    }
}

/**
 * @tc.number   Telephony_CallManager_IMS_SwitchCall_0600
 * @tc.name     coming a active call test Switch call,and coming a dialingcall again, return non-zero
 *              imput dial-out calid, wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SwitchCall_0600, Function | MediumTest | Level2)
{
    sleep(SLEEP_5_SEC);
    int ret = Dial(Str8ToStr16(TELEOPERATOR_OPERATOR_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    int firstCall = -1;
    if (CallManagerFunctionTest::HasActiveStatus()) {
        firstCall = g_newCallId;
        ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, firstCall, SLEEP_50_MS, SLEEP_12000_MS);
        ret = g_clientPtr->GetPtr()->SwitchCall(g_newCallId);
        EXPECT_NE(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);

        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        EXPECT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);

        ret = g_clientPtr->GetPtr()->HangUpCall(firstCall);
        EXPECT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            HasState(firstCall, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
    }
}

/**
 * @tc.number   Telephony_CallManager_IMS_SwitchCall_0700
 * @tc.name     coming a active call test Switch call,and coming a dialingcall again, return non-zero
 *              imput active calid, wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SwitchCall_0700, Function | MediumTest | Level2)
{
    sleep(SLEEP_5_SEC);
    int ret = Dial(Str8ToStr16(UNICOM_OPERATOR_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    int firstCall = -1;
    if (CallManagerFunctionTest::HasActiveStatus()) {
        firstCall = g_newCallId;
        ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, firstCall, SLEEP_50_MS, SLEEP_12000_MS);
        ret = g_clientPtr->GetPtr()->SwitchCall(firstCall);
        EXPECT_NE(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);

        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        EXPECT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);

        ret = g_clientPtr->GetPtr()->HangUpCall(firstCall);
        EXPECT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            HasState(firstCall, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
    }
}

/**
 * @tc.number   Telephony_CallManager_IMS_SwitchCall_0800
 * @tc.name     coming a active call test Switch call,and coming a active again, return non-zero
 *              imput active calid, wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SwitchCall_0800, Function | MediumTest | Level2)
{
    sleep(SLEEP_5_SEC);
    int ret = Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    sleep(SLEEP_8_SEC);
    int firstCall = -1;
    if (CallManagerFunctionTest::HasActiveStatus()) {
        firstCall = g_newCallId;
        ret = Dial(Str8ToStr16(UNICOM_OPERATOR_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, firstCall, SLEEP_50_MS, SLEEP_12000_MS);

        if (CallManagerFunctionTest::HasActiveStatus()) {
            ret = g_clientPtr->GetPtr()->SwitchCall(firstCall);
            EXPECT_EQ(ret, SUCCESSFUL);
            LOCK_NUM_WHILE_NE(
                HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_12000_MS);

            int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(firstCall);
            EXPECT_EQ(hangUpRet, SUCCESSFUL);
            LOCK_NUM_WHILE_NE(
                HasState(firstCall, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
        }
        ret = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        EXPECT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
    }
}

/**
 * @tc.number   Telephony_CallManager_IMS_SwitchCall_0900
 * @tc.name     coming a active call test Switch call,and coming a dialingcall again, return non-zero
 *              imput active calid, wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SwitchCall_0900, Function | MediumTest | Level2)
{
    sleep(SLEEP_5_SEC);
    int ret = Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    sleep(SLEEP_8_SEC);
    int firstCall = -1;
    if (CallManagerFunctionTest::HasActiveStatus()) {
        firstCall = g_newCallId;
        ret = Dial(Str8ToStr16(TELEOPERATOR_OPERATOR_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, firstCall, SLEEP_50_MS, SLEEP_12000_MS);

        if (CallManagerFunctionTest::HasActiveStatus()) {
            ret = g_clientPtr->GetPtr()->SwitchCall(g_newCallId);
            EXPECT_NE(ret, SUCCESSFUL);
            LOCK_NUM_WHILE_NE(
                HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_30000_MS);

            int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(firstCall);
            EXPECT_EQ(hangUpRet, SUCCESSFUL);
            LOCK_NUM_WHILE_NE(
                HasState(firstCall, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
        }

        ret = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        EXPECT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
    }
}

/**
 * @tc.number   Telephony_CallManager_IMS_SwitchCall_1000
 * @tc.name     coming a active call test Switch call,and coming a active again, return non-zero
 *              imput active calid, wait for the correct status of the callback to execute correctly
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SwitchCall_1000, Function | MediumTest | Level2)
{
    sleep(SLEEP_5_SEC);
    int ret = Dial(Str8ToStr16(UNICOM_OPERATOR_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    int firstCall = -1;
    if (CallManagerFunctionTest::HasActiveStatus()) {
        firstCall = g_newCallId;
        ret = Dial(Str8ToStr16(TELEOPERATOR_OPERATOR_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, firstCall, SLEEP_50_MS, SLEEP_12000_MS);
        if (CallManagerFunctionTest::HasActiveStatus()) {
            ret = g_clientPtr->GetPtr()->SwitchCall(CallManagerIMSTest::LONG_NEGATIVE_CALLID);
            EXPECT_NE(ret, SUCCESSFUL);
            LOCK_NUM_WHILE_NE(
                HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_30000_MS);

            ret = g_clientPtr->GetPtr()->HangUpCall(firstCall);
            EXPECT_EQ(ret, SUCCESSFUL);
            LOCK_NUM_WHILE_NE(
                HasState(firstCall, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
        }
        ret = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        EXPECT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
    }
}

/******************************************* Test EnableImsSwitch() *********************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_EnableImsSwitch_0100
 * @tc.name     test EnableImsSwitch() interface, SLOT_ID of 0,Test the callback results
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_EnableImsSwitch_0100, Function | MediumTest | Level2)
{
    int ret = g_clientPtr->GetPtr()->EnableImsSwitch(SLOT_ID);
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_VOTLE_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_EnableImsSwitch_0200
 * @tc.name     test EnableImsSwitch() interface, SLOT_ID of 0,and call EnableImsSwitch() again,Test the callback
 * results
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_EnableImsSwitch_0200, Function | MediumTest | Level2)
{
    int ret = g_clientPtr->GetPtr()->EnableImsSwitch(SLOT_ID);
    ASSERT_EQ(ret, SUCCESSFUL);
    ret = g_clientPtr->GetPtr()->EnableImsSwitch(SLOT_ID);
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_VOTLE_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_EnableImsSwitch_0300
 * @tc.name     test EnableImsSwitch() interface, SLOT_ID_3 of 3,return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_EnableImsSwitch_0300, Function | MediumTest | Level2)
{
    int ret = g_clientPtr->GetPtr()->EnableImsSwitch(SLOT_ID_3);
    ASSERT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_EnableImsSwitch_0400
 * @tc.name     test EnableImsSwitch() interface, INVALID_NEGATIVE_SLOT_ID of -1,return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_EnableImsSwitch_0400, Function | MediumTest | Level2)
{
    int ret = g_clientPtr->GetPtr()->EnableImsSwitch(INVALID_NEGATIVE_SLOT_ID);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_EnableImsSwitch_0500
 * @tc.name     test EnableImsSwitch() interface, INVALID_SLOT_ID of 2,return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_EnableImsSwitch_0500, Function | MediumTest | Level2)
{
    int ret = g_clientPtr->GetPtr()->EnableImsSwitch(INVALID_SLOT_ID);
    ASSERT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_EnableImsSwitch_0800
 * @tc.name     test EnableImsSwitch() interface,Test the callback results,testing TYPE_IMS
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_EnableImsSwitch_0800, Function | MediumTest | Level2)
{
    int ret = g_clientPtr->GetPtr()->EnableImsSwitch(SLOT_ID);
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_VOTLE_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);

    ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateCallType, CallType::TYPE_IMS, SLEEP_50_MS, SLEEP_1000_MS);
}

/******************************************* Test DisableImsSwitch() *********************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_DisableImsSwitch_0100
 * @tc.name     test DisableImsSwitch() interface,Test the callback results,and Restoring the Default Environment
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_DisableImsSwitch_0100, Function | MediumTest | Level2)
{
    int ret = g_clientPtr->GetPtr()->DisableImsSwitch(SLOT_ID);
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_VOTLE_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    ret = g_clientPtr->GetPtr()->EnableImsSwitch(SLOT_ID);
    ASSERT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DisableImsSwitch_0200
 * @tc.name     test DisableImsSwitch() interface,and call DisableImsSwitch() again,Test the callback results
 *              and Restoring the Default Environment
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_DisableImsSwitch_0200, Function | MediumTest | Level2)
{
    int ret = g_clientPtr->GetPtr()->DisableImsSwitch(SLOT_ID);
    ASSERT_EQ(ret, SUCCESSFUL);
    ret = g_clientPtr->GetPtr()->DisableImsSwitch(SLOT_ID);
    EXPECT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_VOTLE_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    ret = g_clientPtr->GetPtr()->EnableImsSwitch(SLOT_ID);
    ASSERT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DisableImsSwitch_0300
 * @tc.name     call EnableImsSwitch() interface,test call DisableImsSwitch() again,Test the callback results
 *              and Restoring the Default Environment
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_DisableImsSwitch_0300, Function | MediumTest | Level2)
{
    int ret = g_clientPtr->GetPtr()->EnableImsSwitch(SLOT_ID);
    ASSERT_EQ(ret, SUCCESSFUL);
    ret = g_clientPtr->GetPtr()->DisableImsSwitch(SLOT_ID);
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_VOTLE_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    ret = g_clientPtr->GetPtr()->EnableImsSwitch(SLOT_ID);
    ASSERT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DisableImsSwitch_0400
 * @tc.name     test DisableImsSwitch() interface,and call EnableImsSwitch() again,Test the callback results
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_DisableImsSwitch_0400, Function | MediumTest | Level2)
{
    int ret = g_clientPtr->GetPtr()->DisableImsSwitch(SLOT_ID);
    ASSERT_EQ(ret, SUCCESSFUL);
    ret = g_clientPtr->GetPtr()->EnableImsSwitch(SLOT_ID);
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_VOTLE_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DisableImsSwitch_0500
 * @tc.name     test DisableImsSwitch() interface,return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_DisableImsSwitch_0500, Function | MediumTest | Level2)
{
    int ret = g_clientPtr->GetPtr()->DisableImsSwitch(SLOT_ID_3);
    ASSERT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DisableImsSwitch_0600
 * @tc.name     test DisableImsSwitch() interface,INVALID_NEGATIVE_SLOT_ID of -1,return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_DisableImsSwitch_0600, Function | MediumTest | Level2)
{
    int ret = g_clientPtr->GetPtr()->DisableImsSwitch(INVALID_NEGATIVE_SLOT_ID);
    ASSERT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DisableImsSwitch_0700
 * @tc.name     test DisableImsSwitch() interface,INVALID_SLOT_ID of 2,return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_DisableImsSwitch_0700, Function | MediumTest | Level2)
{
    int ret = g_clientPtr->GetPtr()->DisableImsSwitch(INVALID_SLOT_ID);
    ASSERT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DisableImsSwitch_1000
 * @tc.name     test DisableImsSwitch() interface,Test the callback results,testing callType is TYPE_CS
 *              and restoring the Default Environment
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_DisableImsSwitch_1000, Function | MediumTest | Level2)
{
    sleep(SLEEP_5_SEC);
    int ret = g_clientPtr->GetPtr()->DisableImsSwitch(SLOT_ID);
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_VOTLE_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);

    ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateCallType, CallType::TYPE_CS, SLEEP_50_MS, SLEEP_1000_MS);

    ret = g_clientPtr->GetPtr()->EnableImsSwitch(SLOT_ID);
    ASSERT_EQ(ret, SUCCESSFUL);
}

/******************************************* Test IsImsSwitchEnabled() *********************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_IsImsSwitchEnabled_0100
 * @tc.name     test IsImsSwitchEnabled() interface, SLOT_ID of 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_IsImsSwitchEnabled_0100, Function | MediumTest | Level2)
{
    int ret = g_clientPtr->GetPtr()->IsImsSwitchEnabled(SLOT_ID);
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::GET_CALL_VOTLE_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("active"), OPEN, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_IsImsSwitchEnabled_0200
 * @tc.name     test IsImsSwitchEnabled() interface,before call EnableImsSwitch() interface
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_IsImsSwitchEnabled_0200, Function | MediumTest | Level2)
{
    int ret = g_clientPtr->GetPtr()->EnableImsSwitch(SLOT_ID);
    ASSERT_EQ(ret, SUCCESSFUL);
    ret = g_clientPtr->GetPtr()->IsImsSwitchEnabled(SLOT_ID);
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::GET_CALL_VOTLE_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("active"), OPEN, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_IsImsSwitchEnabled_0300
 * @tc.name     test IsImsSwitchEnabled() interface,before call DisableImsSwitch() interface,Restoring the Default
 * Environment
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_IsImsSwitchEnabled_0300, Function | MediumTest | Level2)
{
    int ret = g_clientPtr->GetPtr()->DisableImsSwitch(SLOT_ID);
    ASSERT_EQ(ret, SUCCESSFUL);
    ret = g_clientPtr->GetPtr()->IsImsSwitchEnabled(SLOT_ID);
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::GET_CALL_VOTLE_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("active"), OFF, SLEEP_50_MS, SLEEP_1000_MS);
    ret = g_clientPtr->GetPtr()->EnableImsSwitch(SLOT_ID);
    ASSERT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_IsImsSwitchEnabled_0400
 * @tc.name     test IsImsSwitchEnabled() interface,imput SLOT_ID_3, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_IsImsSwitchEnabled_0400, Function | MediumTest | Level2)
{
    int ret = g_clientPtr->GetPtr()->IsImsSwitchEnabled(SLOT_ID_3);
    ASSERT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_IsImsSwitchEnabled_0500
 * @tc.name     test IsImsSwitchEnabled() interface,imput INVALID_NEGATIVE_SLOT_ID of -1, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_IsImsSwitchEnabled_0500, Function | MediumTest | Level2)
{
    int ret = g_clientPtr->GetPtr()->IsImsSwitchEnabled(INVALID_NEGATIVE_SLOT_ID);
    ASSERT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_IsImsSwitchEnabled_0600
 * @tc.name     test IsImsSwitchEnabled() interface,imput INVALID_SLOT_ID of 2, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_IsImsSwitchEnabled_0600, Function | MediumTest | Level2)
{
    int ret = g_clientPtr->GetPtr()->IsImsSwitchEnabled(INVALID_SLOT_ID);
    ASSERT_NE(ret, SUCCESSFUL);
}

/******************************************* Test DialCal() *********************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_USSD_DialCall_0100
 * @tc.name     test USSD_DialCall() interface,imput USSD number, and verify the obtained registration callback results
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_USSD_DialCall_0100, Function | MediumTest | Level2)
{
    sleep(SLEEP_5_SEC);
    int ret = Dial(Str8ToStr16("*43#"));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_WAITING_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SET_CALL_WAITING_FIAL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_USSD_DialCall_0200
 * @tc.name     test USSD_DialCall() interface,imput USSD number, and verify the obtained registration callback results
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_USSD_DialCall_0200, Function | MediumTest | Level2)
{
    sleep(SLEEP_8_SEC);
    int ret = Dial(Str8ToStr16("#43#"));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_WAITING_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SET_CALL_WAITING_FIAL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_USSD_DialCall_0300
 * @tc.name     test USSD_DialCall() interface,imput USSD number, and verify the obtained registration callback results
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_USSD_DialCall_0300, Function | MediumTest | Level2)
{
    sleep(SLEEP_8_SEC);
    int ret = Dial(Str8ToStr16("*#43#"));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::GET_CALL_WAITING_REPORT_ID, SLEEP_50_MS, SLEEP_30000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_USSD_DialCall_0400
 * @tc.name     test USSD_DialCall() interface,imput USSD number, and verify the obtained registration callback results
 *              imput "##21#" call DialCall(), restoring the Default Environment
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_USSD_DialCall_0400, Function | MediumTest | Level2)
{
    sleep(SLEEP_5_SEC);
    int ret = Dial(Str8ToStr16("*21*10000000001#"));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), ERROR_VALUES, SLEEP_50_MS, SLEEP_12000_MS);
    ret = Dial(Str8ToStr16("##21#"));
    ASSERT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_USSD_DialCall_0500
 * @tc.name     test USSD_DialCall() interface,imput USSD number, and verify the obtained registration callback results
 *              imput "##21#" call DialCall(), restoring the Default Environment
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_USSD_DialCall_0500, Function | MediumTest | Level2)
{
    sleep(SLEEP_5_SEC);
    int ret = Dial(Str8ToStr16("*21*10000000001*10#"));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), ERROR_VALUES, SLEEP_50_MS, SLEEP_12000_MS);
    ret = Dial(Str8ToStr16("##21#"));
    ASSERT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_USSD_DialCall_0600
 * @tc.name     test USSD_DialCall() interface,imput USSD number, and verify the obtained registration callback results
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_USSD_DialCall_0600, Function | MediumTest | Level2)
{
    int ret = Dial(Str8ToStr16("**21*10000000001******10#"));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SEND_USSD_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("value"), OFF, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_USSD_DialCall_0700
 * @tc.name     test USSD_DialCall() interface,imput USSD number, and verify the obtained registration callback results
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_USSD_DialCall_0700, Function | MediumTest | Level2)
{
    int ret = Dial(Str8ToStr16("*ABCDEF123456789#"));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SEND_USSD_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("value"), OFF, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_USSD_DialCall_0800
 * @tc.name     test USSD_DialCall() interface,imput USSD number, and verify the obtained registration callback results
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_USSD_DialCall_0800, Function | MediumTest | Level2)
{
    int ret = Dial(Str8ToStr16("#ABCDEF123456789#"));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SEND_USSD_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("value"), OFF, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_USSD_DialCall_0900
 * @tc.name     test USSD_DialCall() interface,imput USSD number, and verify the obtained registration callback results
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_USSD_DialCall_0900, Function | MediumTest | Level2)
{
    int ret = Dial(Str8ToStr16("##ABCDEF123456789#"));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SEND_USSD_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("value"), OFF, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_USSD_DialCall_1000
 * @tc.name     test USSD_DialCall() interface,imput USSD number, and verify the obtained registration callback results
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_USSD_DialCall_1000, Function | MediumTest | Level2)
{
    int ret = Dial(Str8ToStr16("*#ABCDEF123456789#"));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SEND_USSD_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("value"), OFF, SLEEP_50_MS, SLEEP_1000_MS);
}