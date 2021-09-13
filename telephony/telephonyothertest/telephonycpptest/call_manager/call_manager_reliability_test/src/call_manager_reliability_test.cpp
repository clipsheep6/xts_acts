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
using namespace OHOS::Telephony::CallManager;
using namespace OHOS::Telephony;

/********************************************* Test DialCall() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_DialCall_0700
 * @tc.name     test DialCall() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_DialCall_0700, Reliability | MediumTest | Level3)
{
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        int ret = Dial(Str8ToStr16(TEST_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_30000_MS);
        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_30000_MS);
    }
}

/********************************************* Test AnswerCall() ***************************************/

/**
 * @tc.number   Telephony_CallManager_AnswerCall_0400
 * @tc.name     test AnswerCall() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_AnswerCall_0400, Reliability | MediumTest | Level3)
{
    int videoState = (int)VideoStateType::TYPE_VOICE;
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->AnswerCall(FALSE_NEGATIVE_CALLID_100, videoState), SUCCESSFUL);
    }
}

/********************************************* Test RejectCall() *******************************************/

/**
 * @tc.number   Telephony_CallManager_RejectCall_0300
 * @tc.name     test RejectCall() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_RejectCall_0300, Reliability | MediumTest | Level3)
{
    u16string textMessage = Str8ToStr16("this is a test message");
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->RejectCall(FALSE_NEGATIVE_CALLID_100, true, textMessage), SUCCESSFUL);
    }
}

/******************************************* Test HangUpCall() *********************************************/

/**
 * @tc.number   Telephony_CallManager_HangUpCall_0400
 * @tc.name     test HangUpCall() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_HangUpCall_0400, Reliability | MediumTest | Level3)
{
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->HangUpCall(FALSE_NEGATIVE_CALLID_100), SUCCESSFUL);
    }
}

/******************************************* Test GetCallState() ******************************************/

/**
 * @tc.number   Telephony_CallManager_GetCallState_0400
 * @tc.name     test GetCallState() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_GetCallState_0400, Reliability | MediumTest | Level3)
{
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_EQ(g_clientPtr->GetPtr()->GetCallState(), (int)CallStateToApp::CALL_STATE_IDLE);
    }
}

/********************************************* Test HoldCall() ******************************************/

/**
 * @tc.number   Telephony_CallManager_HoldCall_0200
 * @tc.name     test HoldCall() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_HoldCall_0200, Reliability | MediumTest | Level3)
{
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->HoldCall(FALSE_NEGATIVE_CALLID_100), SUCCESSFUL);
    }
}

/********************************************* Test UnHoldCall() ************************************/

/**
 * @tc.number   Telephony_CallManager_UnHoldCall_0200
 * @tc.name     test UnHoldCall() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_UnHoldCall_0200, Reliability | MediumTest | Level3)
{
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->UnHoldCall(FALSE_NEGATIVE_CALLID_100), SUCCESSFUL);
    }
}

/********************************************* Test SwitchCall() **************************************/

/**
 * @tc.number   Telephony_CallManager_SwitchCall_0200
 * @tc.name     test SwitchCall() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_SwitchCall_0200, Reliability | MediumTest | Level3)
{
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->SwitchCall(FALSE_DEFAULT), SUCCESSFUL);
    }
}

/********************************************* Test HasCall() *****************************************/

/**
 * @tc.number   Telephony_CallManager_HasCall_0300
 * @tc.name     test HasCall() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_HasCall_0300, Reliability | MediumTest | Level3)
{
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->HasCall(), true);
    }
}

/**************************************** Test CombineConference() **************************************/

/**
 * @tc.number   Telephony_CallManager_CombineConference_0300
 * @tc.name     test CombineConference() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_CombineConference_0300, Reliability | MediumTest | Level3)
{
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->CombineConference(FALSE_NEGATIVE_CALLID_100), SUCCESSFUL);
    }
}

/********************************************* Test GetMainCallId() ***********************************/

/**
 * @tc.number   Telephony_CallManager_GetMainCallId_0300
 * @tc.name     test GetMainCallId() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_GetMainCallId_0300, Reliability | MediumTest | Level3)
{
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->GetMainCallId(FALSE_NEGATIVE_CALLID_100), SUCCESSFUL);
    }
}

/********************************************* Test GetSubCallIdList() *************************************/

/**
 * @tc.number   Telephony_CallManager_GetSubCallIdList_0300
 * @tc.name     test GetSubCallIdList() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_GetSubCallIdList_0300, Reliability | MediumTest | Level3)
{
    std::vector<std::u16string> resultDefault;
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        std::vector<std::u16string> str = g_clientPtr->GetPtr()->GetSubCallIdList(FALSE_NEGATIVE_CALLID_100);
        bool isEmpty = resultDefault.empty();
        ASSERT_EQ(isEmpty, true);
        if (!resultDefault.empty()) {
        resultDefault.clear();
        }
    }
}

/********************************** Test GetCallIdListForConference() **********************************/

/**
 * @tc.number   Telephony_CallManager_GetCallIdListForConference_0500
 * @tc.name     test GetCallIdListForConference() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_GetCallIdListForConference_0500,
        Reliability | MediumTest | Level3)
{
    std::vector<std::string> resultDefault;
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        std::vector<std::u16string> str = g_clientPtr->GetPtr()->GetCallIdListForConference(FALSE_NEGATIVE_CALLID_100);
        bool isEmpty = resultDefault.empty();
        ASSERT_EQ(isEmpty, true);
        if (!resultDefault.empty()) {
        resultDefault.clear();
        }
    }
}

/************************************ Test IsInEmergencyCall() ***************************************/

/**
 * @tc.number   Telephony_CallManager_IsInEmergencyCall_0300
 * @tc.name     test IsInEmergencyCall() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IsInEmergencyCall_0300, Reliability | MediumTest | Level3)
{
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->IsInEmergencyCall(), true);
    }
}

/*********************************** Test IsEmergencyPhoneNumber() ***********************************/

/**
 * @tc.number   Telephony_CallManager_IsEmergencyPhoneNumber_1800
 * @tc.name     test IsEmergencyPhoneNumber() 1000 times, EmergencyNumber 112
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IsEmergencyPhoneNumber_1800,
        Reliability | MediumTest | Level3)
{
    int32_t errorCode = ERROR_VALUES;
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        string number = "112";
        std::u16string formatPhoneNumber = Str8ToStr16(number);
        ASSERT_EQ(g_clientPtr->GetPtr()->IsEmergencyPhoneNumber(formatPhoneNumber, SLOT_ID, errorCode), true);
    }
}

/************************************ Test GetCallWaiting() *****************************************/

/**
 * @tc.number   Telephony_CallManager_GetCallWaiting_0400
 * @tc.name     test GetCallWaiting() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_GetCallWaiting_0400, Reliability | MediumTest | Level3)
{
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_EQ(g_clientPtr->GetPtr()->GetCallWaiting(SLOT_ID), SUCCESSFUL);
    }
}

/************************************ Test SetCallWaiting() *************************************/

/**
 * @tc.number   Telephony_CallManager_SetCallWaiting_0500
 * @tc.name     test SetCallWaiting() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_SetCallWaiting_0500, Reliability | MediumTest | Level3)
{
    bool activate = true;
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_EQ(g_clientPtr->GetPtr()->SetCallWaiting(SLOT_ID, activate), SUCCESSFUL);
    }
}

/********************************************* Test StartDtmf() ***************************************/

/**
 * @tc.number   Telephony_CallManager_StartDtmf_0900
 * @tc.name     test StartDtmf() 1000 times, start str as 'a'
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_StartDtmf_0900, Reliability | MediumTest | Level3)
{
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        char str = 'a';
        int32_t callId = SUCCESSFUL;
        ASSERT_NE(g_clientPtr->GetPtr()->StartDtmf(callId, str), SUCCESSFUL);
    }
}

/********************************************* Test StopDtmf() **************************************/

/**
 * @tc.number   Telephony_CallManager_StopDtmf_0300
 * @tc.name     test StopDtmf() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_StopDtmf_0300, Reliability | MediumTest | Level3)
{
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        int32_t callId = SUCCESSFUL;
        ASSERT_NE(g_clientPtr->GetPtr()->StopDtmf(callId), SUCCESSFUL);
    }
}

/*************************************** Test FormatPhoneNumber() *****************************************/

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumber_0800
 * @tc.name     test FormatPhoneNumber() 1000 times, phonyNumber as "01085198748", countryCode as "Kr",
 *              formatNumber as empty
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_FormatPhoneNumber_0800, Reliability | MediumTest | Level3)
{
    string number = "01085198748";
    string Code = "Kr";
    string formatBefore = "";
    u16string phonyNumber = Str8ToStr16(number);
    u16string countryCode = Str8ToStr16(Code);
    u16string formatNumber = Str8ToStr16(formatBefore);
    int32_t ans = SUCCESSFUL;
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_EQ(g_clientPtr->GetPtr()->FormatPhoneNumber(phonyNumber, countryCode, formatNumber), ans);
    }
}

/************************************ Test FormatPhoneNumberToE164() ***************************************/

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumberToE164_0800
 * @tc.name     test FormatPhoneNumberToE164() 1000 times, phonyNumber as "01085198748", countryCode as "Kr",
 *              formatNumber as empty
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_FormatPhoneNumberToE164_0800,
        Reliability | MediumTest | Level3)
{
    string number = "01085198748";
    string Code = "Kr";
    string formatBefore = "";
    u16string phonyNumber = Str8ToStr16(number);
    u16string countryCode = Str8ToStr16(Code);
    u16string formatNumber = Str8ToStr16(formatBefore);
    int32_t ans = SUCCESSFUL;
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_EQ(g_clientPtr->GetPtr()->FormatPhoneNumberToE164(phonyNumber, countryCode, formatNumber), ans);
    }
}

/****************************************** Test IsNewCallAllowed() **********************************/

/**
 * @tc.number   Telephony_CallManager_IsNewCallAllowed_0300
 * @tc.name     test IsNewCallAllowed() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IsNewCallAllowed_0300, Reliability | MediumTest | Level3)
{
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_EQ(g_clientPtr->GetPtr()->IsNewCallAllowed(), true);
    }
}

/********************************************* Test IsRinging() ******************************************/

/**
 * @tc.number   Telephony_CallManager_IsRinging_0300
 * @tc.name     test IsRinging() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IsRinging_0300, Reliability | MediumTest | Level3)
{
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_EQ(g_clientPtr->GetPtr()->IsRinging(), true);
    }
}

/*************************************** Test SeparateConference() ************************************/

/**
 * @tc.number   Telephony_CallManager_SeparateConference_0500
 * @tc.name     test SeparateConference() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_SeparateConference_0500, Reliability | MediumTest | Level3)
{
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->SeparateConference(FALSE_NEGATIVE_CALLID_100), SUCCESSFUL);
    }
}

/************************************** Test GetCallRestriction() *********************************/

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_1200
 * @tc.name     test GetCallRestriction() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_GetCallRestriction_1200, Reliability | MediumTest | Level3)
{
    CallRestrictionInfo type;
    type.fac = RESTRICTION_TYPE_ALL_INCOMING;
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, type.fac), SUCCESSFUL);
    }
}

/************************************* Test SetCallRestriction() ********************************/

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_1300
 * @tc.name     test SetCallRestriction() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_SetCallRestriction_1300, Reliability | MediumTest | Level3)
{
    CallRestrictionInfo info;
    info.fac = RESTRICTION_TYPE_ALL_INCOMING;
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, info), SUCCESSFUL);
    }
}

/************************************** Test GetCallTransferInfo() **********************************/

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_1500
 * @tc.name     test GetCallTransferInfo() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_GetCallTransferInfo_1500, Reliability | MediumTest | Level3)
{
    CallTransferInfo info;
    info.type = MOBILE_BUSY;
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, info.type), SUCCESSFUL);
    }
}

/************************************** Test SetCallTransferInfo() **************************************/

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_1400
 * @tc.name     test SetCallTransferInfo() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_SetCallTransferInfo_1400, Reliability | MediumTest | Level3)
{
    char phonyNumber[12] = "";
    CallTransferInfo *info = new CallTransferInfo;
    info->settingType = DISABLE;
    info->type = MOBILE_BUSY;
    int ret = strcpy_s(info->transferNum, BUFSIZ, phonyNumber);
    ASSERT_EQ(ret, SUCCESSFUL);
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, *info), SUCCESSFUL);
    }
}

/***************************************** Test RegisterCallBack() *******************************************/

/**
 * @tc.number   Telephony_CallManager_RegisterCallBack_0400
 * @tc.name     test RegisterCallBack() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_RegisterCallBack_0400, Reliability | MediumTest | Level3)
{
    int dafaultTrue = 1;
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        int ret = Dial(Str8ToStr16(TEST_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_30000_MS);

        EXPECT_EQ(g_updateAccountNumber, EMPTY_DEFAULT);
        EXPECT_EQ(g_updateAccountId, dafaultTrue);
        EXPECT_EQ(g_updateVideoState, SUCCESSFUL);
        EXPECT_EQ(g_updateCallType, SUCCESSFUL);
        EXPECT_EQ(g_updateCallState, FALSE_DEFAULT);
        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_30000_MS);
    }
}

/***************************************** Test SetMuted() *******************************************/

/**
 * @tc.number   Telephony_CallManager_SetMuted_0500
 * @tc.name     test SetMuted() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_SetMuted_0500, Reliability | MediumTest | Level3)
{
    bool isMute = true;
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        int ret = Dial(Str8ToStr16(TEST_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_30000_MS);
        ASSERT_EQ(g_clientPtr->GetPtr()->SetMuted(isMute), SUCCESSFUL);
        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        EXPECT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_30000_MS);
    }
}

/***************************************** Test MuteRinger() *******************************************/

/**
 * @tc.number   Telephony_CallManager_MuteRinger_0300
 * @tc.name     test MuteRinger() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_MuteRinger_0300, Reliability | MediumTest | Level3)
{
    for (int i = SUCCESSFUL; i < TEST_RUN_TIME_1000; i++)
    {
        EXPECT_EQ(g_clientPtr->GetPtr()->MuteRinger(), SUCCESSFUL);
    }
}