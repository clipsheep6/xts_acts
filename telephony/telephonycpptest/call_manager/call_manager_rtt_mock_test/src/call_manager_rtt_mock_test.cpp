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

#define CALLMANAGER_RTT_MOCK_TEST
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

/********************************************* Test CombineConference() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_CombineConference_0300
 * @tc.name     mock_vendor coming two call, Starting a merge meeting, and getcallid,testing CombineConference
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_IMS_CombineConference_0300, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_INCOMING), true,
        SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    ASSERT_EQ(g_updateCallState, TelCallState::CALL_STATUS_ACTIVE);
    LOCK_NUM_WHILE_NE(g_updateConference, TelConferenceState::TEL_CONFERENCE_IDLE, SLEEP_50_MS, SLEEP_12000_MS);
    int firstCall = g_newCallId;

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, DEST_PHONY_NUMBER, strlen(DEST_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, firstCall, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_WAITING), true,
        SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(firstCall, TelCallState::CALL_STATUS_HOLDING), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    ASSERT_EQ(g_clientPtr->GetPtr()->CombineConference(g_newCallId), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateConference, TelConferenceState::TEL_CONFERENCE_ACTIVE, SLEEP_50_MS, SLEEP_12000_MS);
}

/********************************************* Test SeparateConference() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SeparateConference_0300
 * @tc.name     mock_vendor coming two call, Starting a merge meeting, and getcallid,testing SeparateConference
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_IMS_SeparateConference_0300, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_INCOMING), true,
        SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    int firstCall = g_newCallId;

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, DEST_PHONY_NUMBER, strlen(DEST_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_WAITING), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_EQ(g_newCallId, firstCall, SLEEP_50_MS, SLEEP_1000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(firstCall, TelCallState::CALL_STATUS_HOLDING), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->CombineConference(g_newCallId), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateConference, TelConferenceState::TEL_CONFERENCE_ACTIVE, SLEEP_50_MS, SLEEP_12000_MS);
    ASSERT_EQ(g_clientPtr->GetPtr()->SeparateConference(firstCall), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SeparateConference_0400
 * @tc.name     mock_vendor coming three call, test SeparateConference()
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_IMS_SeparateConference_0400, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_INCOMING), true,
        SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    int firstCall = g_newCallId;

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, DEST_PHONY_NUMBER, strlen(DEST_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, firstCall, SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_WAITING), true,
        SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(firstCall, TelCallState::CALL_STATUS_HOLDING), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    int secondCall = g_newCallId;

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, OBJECT_PHONY_NUMBER, strlen(OBJECT_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, secondCall, SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_WAITING), true,
        SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(secondCall, TelCallState::CALL_STATUS_HOLDING), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->CombineConference(g_newCallId), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateConference, TelConferenceState::TEL_CONFERENCE_ACTIVE, SLEEP_50_MS, SLEEP_12000_MS);
    ASSERT_EQ(g_clientPtr->GetPtr()->SeparateConference(secondCall), SUCCESSFUL);
}

/********************************************* Test JoinConference() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_JoinConference_0300
 * @tc.name     mock_vendor coming two call, test JoinConference()
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_IMS_JoinConference_0300, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_INCOMING), true,
        SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    int firstCall = g_newCallId;

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, DEST_PHONY_NUMBER, strlen(DEST_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, firstCall, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_WAITING), true,
        SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(firstCall, TelCallState::CALL_STATUS_HOLDING), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    ASSERT_EQ(g_clientPtr->GetPtr()->CombineConference(g_newCallId), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateConference, TelConferenceState::TEL_CONFERENCE_ACTIVE, SLEEP_50_MS, SLEEP_12000_MS);

    int retMain = g_clientPtr->GetPtr()->GetMainCallId(g_newCallId);
    EXPECT_EQ(retMain, g_newCallId);

    std::vector<std::u16string> targetCallNumberList { Str8ToStr16(TARGET_PHONY_NUMBER) };
    ASSERT_EQ(g_clientPtr->GetPtr()->JoinConference(retMain, targetCallNumberList), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(
        g_updateReportId, CallResultReportId::INVITE_TO_CONFERENCE_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_JoinConference_0400
 * @tc.name     mock_vendor coming three call, input invalid callid test JoinConference(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_IMS_JoinConference_0400, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_INCOMING), true,
        SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    int firstCall = g_newCallId;

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, DEST_PHONY_NUMBER, strlen(DEST_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, firstCall, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_WAITING), true,
        SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(firstCall, TelCallState::CALL_STATUS_HOLDING), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    ASSERT_EQ(g_clientPtr->GetPtr()->CombineConference(g_newCallId), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateConference, TelConferenceState::TEL_CONFERENCE_ACTIVE, SLEEP_50_MS, SLEEP_12000_MS);

    std::vector<std::u16string> targetCallNumberList { Str8ToStr16(TARGET_PHONY_NUMBER) };
    ASSERT_NE(g_clientPtr->GetPtr()->JoinConference(INVALID_CALLID, targetCallNumberList), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_JoinConference_0500
 * @tc.name     mock_vendor coming two call, input empty callNumber,test JoinConference(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_IMS_JoinConference_0500, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_INCOMING), true,
        SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    int firstCall = g_newCallId;

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, DEST_PHONY_NUMBER, strlen(DEST_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, firstCall, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_WAITING), true,
        SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(firstCall, TelCallState::CALL_STATUS_HOLDING), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    ASSERT_EQ(g_clientPtr->GetPtr()->CombineConference(g_newCallId), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateConference, TelConferenceState::TEL_CONFERENCE_ACTIVE, SLEEP_50_MS, SLEEP_12000_MS);

    int retMain = g_clientPtr->GetPtr()->GetMainCallId(g_newCallId);
    EXPECT_EQ(retMain, g_newCallId);

    std::vector<std::u16string> targetCallNumberList { Str8ToStr16("") };
    ASSERT_NE(g_clientPtr->GetPtr()->JoinConference(retMain, targetCallNumberList), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_JoinConference_0600
 * @tc.name     mock_vendor coming two call, input invalid callNumber,test JoinConference(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_IMS_JoinConference_0600, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_INCOMING), true,
        SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    int firstCall = g_newCallId;

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, DEST_PHONY_NUMBER, strlen(DEST_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, firstCall, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_WAITING), true,
        SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(firstCall, TelCallState::CALL_STATUS_HOLDING), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    ASSERT_EQ(g_clientPtr->GetPtr()->CombineConference(g_newCallId), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateConference, TelConferenceState::TEL_CONFERENCE_ACTIVE, SLEEP_50_MS, SLEEP_12000_MS);

    int retMain = g_clientPtr->GetPtr()->GetMainCallId(g_newCallId);
    EXPECT_EQ(retMain, g_newCallId);

    std::vector<std::u16string> targetCallNumberList { Str8ToStr16(
        "12345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901") };
    ASSERT_NE(g_clientPtr->GetPtr()->JoinConference(retMain, targetCallNumberList), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_JoinConference_0700
 * @tc.name     mock_vendor coming two call, input empty callNumber and valid callNumber ,test
 * JoinConference(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_IMS_JoinConference_0700, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_INCOMING), true,
        SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    int firstCall = g_newCallId;

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, DEST_PHONY_NUMBER, strlen(DEST_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, firstCall, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_WAITING), true,
        SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(firstCall, TelCallState::CALL_STATUS_HOLDING), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    ASSERT_EQ(g_clientPtr->GetPtr()->CombineConference(g_newCallId), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateConference, TelConferenceState::TEL_CONFERENCE_ACTIVE, SLEEP_50_MS, SLEEP_12000_MS);

    int retMain = g_clientPtr->GetPtr()->GetMainCallId(g_newCallId);
    EXPECT_EQ(retMain, g_newCallId);

    std::vector<std::u16string> targetCallNumberList { Str8ToStr16(""), Str8ToStr16(TARGET_PHONY_NUMBER) };
    ASSERT_NE(g_clientPtr->GetPtr()->JoinConference(retMain, targetCallNumberList), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_JoinConference_0800
 * @tc.name     mock_vendor coming two call, input two callNumber,test JoinConference()
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_IMS_JoinConference_0800, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_INCOMING), true,
        SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    int firstCall = g_newCallId;

    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, DEST_PHONY_NUMBER, strlen(DEST_PHONY_NUMBER));
    LOCK_NUM_WHILE_EQ(g_newCallId, firstCall, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_WAITING), true,
        SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(firstCall, TelCallState::CALL_STATUS_HOLDING), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    ASSERT_EQ(g_clientPtr->GetPtr()->CombineConference(g_newCallId), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateConference, TelConferenceState::TEL_CONFERENCE_ACTIVE, SLEEP_50_MS, SLEEP_12000_MS);

    int retMain = g_clientPtr->GetPtr()->GetMainCallId(g_newCallId);
    EXPECT_EQ(retMain, g_newCallId);

    std::vector<std::u16string> targetCallNumberList { Str8ToStr16(TARGET_PHONY_NUMBER),
        Str8ToStr16(OBJECT_PHONY_NUMBER) };
    ASSERT_EQ(g_clientPtr->GetPtr()->JoinConference(retMain, targetCallNumberList), SUCCESSFUL);
}

/********************************************* Test StartRtt() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_StartRtt_0100
 * @tc.name     mock_vendor coming call, input callid and msg,test StartRtt()
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_IMS_StartRtt_0100, Function | MediumTest | Level3)
{
    std::string msg = "Ab666&#";
    std::u16string rttMsg = Str8ToStr16(msg);
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_INCOMING), true,
        SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    ASSERT_EQ(g_clientPtr->GetPtr()->StartRtt(g_newCallId, rttMsg), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::START_RTT_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_StartRtt_0200
 * @tc.name     mock_vendor coming call, call stopRtt() ,input callid and msg,test StartRtt()
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_IMS_StartRtt_0200, Function | MediumTest | Level3)
{
    std::string msg = "Ab666&#";
    std::u16string rttMsg = Str8ToStr16(msg);
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_INCOMING), true,
        SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    ASSERT_EQ(g_clientPtr->GetPtr()->StopRtt(g_newCallId), SUCCESSFUL);
    ASSERT_EQ(g_clientPtr->GetPtr()->StartRtt(g_newCallId, rttMsg), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::START_RTT_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/********************************************* Test StopRtt() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_StopRtt_0100
 * @tc.name     mock_vendor coming call, input callid,test StopRtt()
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_IMS_StopRtt_0100, Function | MediumTest | Level3)
{
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_INCOMING), true,
        SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    ASSERT_EQ(g_clientPtr->GetPtr()->StopRtt(g_newCallId), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::STOP_RTT_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_StopRtt_0200
 * @tc.name     mock_vendor coming call, call stopRtt() ,input callid and msg,test StopRtt()
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_IMS_StopRtt_0200, Function | MediumTest | Level3)
{
    std::string msg = "Ab666&#";
    std::u16string rttMsg = Str8ToStr16(msg);
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ADD_COMING_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_INCOMING), true,
        SLEEP_50_MS, SLEEP_15000_MS);

    ASSERT_EQ(g_clientPtr->GetPtr()->AnswerCall(g_newCallId, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_15000_MS);
    ASSERT_EQ(g_clientPtr->GetPtr()->StartRtt(g_newCallId, rttMsg), SUCCESSFUL);
    ASSERT_EQ(g_clientPtr->GetPtr()->StopRtt(g_newCallId), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::STOP_RTT_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/****************************************** Test UpdateImsCallMode() ***************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_UpdateImsCallMode_0300
 * @tc.name     testing UpdateImsCallMode,add a active call,and call UpdateImsCallMode again,return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_IMS_UpdateImsCallMode_0300, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ACCEPT_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    EXPECT_EQ(g_clientPtr->GetPtr()->UpdateImsCallMode(g_newCallId, ImsCallMode::CALL_MODE_SEND_RECEIVE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::UPDATE_MEDIA_MODE_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    EXPECT_EQ(g_clientPtr->GetPtr()->UpdateImsCallMode(g_newCallId, ImsCallMode::CALL_MODE_SEND_RECEIVE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::UPDATE_MEDIA_MODE_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), ERROR_RESULT, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_UpdateImsCallMode_0400
 * @tc.name     testing UpdateImsCallMode,add a active call,input CALL_MODE_AUDIO_ONLY return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_IMS_UpdateImsCallMode_0400, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ACCEPT_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    EXPECT_EQ(g_clientPtr->GetPtr()->UpdateImsCallMode(g_newCallId, ImsCallMode::CALL_MODE_AUDIO_ONLY), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::UPDATE_MEDIA_MODE_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), ERROR_RESULT, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_UpdateImsCallMode_0500
 * @tc.name     testing UpdateImsCallMode,add a active call,input CALL_MODE_SEND_RECEIVE return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_IMS_UpdateImsCallMode_0500, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ACCEPT_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    EXPECT_NE(
        g_clientPtr->GetPtr()->UpdateImsCallMode(FALSE_CALLID_999, ImsCallMode::CALL_MODE_SEND_RECEIVE), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_UpdateImsCallMode_0600
 * @tc.name     testing UpdateImsCallMode,add a active call,and call UpdateImsCallMode three times,return
 * non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerMockTest, Telephony_CallManager_IMS_UpdateImsCallMode_0600, Function | MediumTest | Level3)
{
    int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    g_mockVender_.MockVendorSet(DISPATCHID::CALL_ACCEPT_CALL, TARGET_PHONY_NUMBER, strlen(TARGET_PHONY_NUMBER));

    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    EXPECT_EQ(g_clientPtr->GetPtr()->UpdateImsCallMode(g_newCallId, ImsCallMode::CALL_MODE_SEND_RECEIVE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::UPDATE_MEDIA_MODE_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    EXPECT_EQ(g_clientPtr->GetPtr()->UpdateImsCallMode(g_newCallId, ImsCallMode::CALL_MODE_AUDIO_ONLY), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::UPDATE_MEDIA_MODE_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    EXPECT_EQ(g_clientPtr->GetPtr()->UpdateImsCallMode(g_newCallId, ImsCallMode::CALL_MODE_SEND_RECEIVE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::UPDATE_MEDIA_MODE_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}