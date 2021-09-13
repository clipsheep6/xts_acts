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
    string phoneNumber = TEST_PHONY_NUMBER;
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_EQ(g_clientPtr->GetPtr()->DialCall(Str8ToStr16(phoneNumber), g_dialInfo), TRUE_DEFAULT);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
            SLEEP_30000_MS);
        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(hangUpRet, TRUE_DEFAULT);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS,
            SLEEP_30000_MS);
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
    int32_t callId = FALSE_NEGATIVE_CALLID_100;
    int videoState = (int)VideoStateType::TYPE_VOICE;
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->AnswerCall(callId, videoState), TRUE_DEFAULT);
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
    int32_t callId = FALSE_NEGATIVE_CALLID_100;
    u16string textMessage = Str8ToStr16("this is a test message");
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->RejectCall(callId, true, textMessage), TRUE_DEFAULT);
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
    int32_t callId = FALSE_NEGATIVE_CALLID_100;
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->HangUpCall(callId), TRUE_DEFAULT);
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
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_1000; i++)
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
    int32_t callId = FALSE_NEGATIVE_CALLID_100;
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->HoldCall(callId), TRUE_DEFAULT);
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
    int32_t callId = FALSE_NEGATIVE_CALLID_100;
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->UnHoldCall(callId), TRUE_DEFAULT);
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
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->SwitchCall(FALSE_NEGATIVE_CALLID_100), TRUE_DEFAULT);
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
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_1000; i++)
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
    int32_t callId = FALSE_NEGATIVE_CALLID_100;
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->CombineConference(callId), TRUE_DEFAULT);
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
    int32_t callId = FALSE_NEGATIVE_CALLID_100;
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->GetMainCallId(callId), TRUE_DEFAULT);
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
    int32_t callId = FALSE_NEGATIVE_CALLID_100;
    std::vector<std::u16string> resultDefault;
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_1000; i++)
    {
        std::vector<std::u16string> str = g_clientPtr->GetPtr()->GetSubCallIdList(callId);
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
    int32_t callId = FALSE_NEGATIVE_CALLID_100;
    std::vector<std::string> resultDefault;
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_1000; i++)
    {
        std::vector<std::u16string> str = g_clientPtr->GetPtr()->GetCallIdListForConference(callId);
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
    string phoneNumber = "112";
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_EQ(g_clientPtr->GetPtr()->DialCall(Str8ToStr16(phoneNumber), g_dialInfo), TRUE_DEFAULT);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
            SLEEP_30000_MS);
        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(hangUpRet, TRUE_DEFAULT);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS,
            SLEEP_30000_MS);
        ASSERT_EQ(g_clientPtr->GetPtr()->IsInEmergencyCall(), true);
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
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_1000; i++)
    {
        int32_t slotId = SLOT_ID;
        string number = "112";
        std::u16string formatPhoneNumber = Str8ToStr16(number);
        ASSERT_EQ(g_clientPtr->GetPtr()->IsEmergencyPhoneNumber(formatPhoneNumber, slotId), true);
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
    int32_t slotId = SLOT_ID;
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_EQ(g_clientPtr->GetPtr()->GetCallWaiting(slotId), TRUE_DEFAULT);
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
    int32_t slotId = SLOT_ID;
    bool activate = true;
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_EQ(g_clientPtr->GetPtr()->SetCallWaiting(slotId, activate), TRUE_DEFAULT);
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
    char str = 'a';
    string phoneNumber = TEST_PHONY_NUMBER;
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_EQ(g_clientPtr->GetPtr()->DialCall(Str8ToStr16(phoneNumber), g_dialInfo), TRUE_DEFAULT);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
            SLEEP_30000_MS);

        ASSERT_EQ(g_clientPtr->GetPtr()->StartDtmf(g_newCallId, str), TRUE_DEFAULT);
        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(hangUpRet, TRUE_DEFAULT);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS,
            SLEEP_30000_MS);
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
    string phoneNumber = TEST_PHONY_NUMBER;
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_EQ(g_clientPtr->GetPtr()->DialCall(Str8ToStr16(phoneNumber), g_dialInfo), TRUE_DEFAULT);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
            SLEEP_30000_MS);

        ASSERT_EQ(g_clientPtr->GetPtr()->StopDtmf(g_newCallId), TRUE_DEFAULT);
        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(hangUpRet, TRUE_DEFAULT);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS,
            SLEEP_30000_MS);
    }
}

/********************************************* Test SendDtmf() **************************************/

/**
 * @tc.number   Telephony_CallManager_SendDtmf_0500
 * @tc.name     test SendDtmf() 1000 times, send str as 'a'
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_SendDtmf_0500, Reliability | MediumTest | Level3)
{
    char str = 'a';
    string phoneNumber = TEST_PHONY_NUMBER;
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_EQ(g_clientPtr->GetPtr()->DialCall(Str8ToStr16(phoneNumber), g_dialInfo), TRUE_DEFAULT);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
            SLEEP_30000_MS);

        ASSERT_NE(g_clientPtr->GetPtr()->SendDtmf(g_newCallId, str), TRUE_DEFAULT);
        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(hangUpRet, TRUE_DEFAULT);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS,
            SLEEP_30000_MS);
    }
}

/********************************************* Test SendBurstDtmf() **************************************/

/**
 * @tc.number   Telephony_CallManager_SendBurstDtmf_1600
 * @tc.name     test SendBurstDtmf() 1000 times, send str as "1"
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_SendBurstDtmf_1600, Reliability | MediumTest | Level3)
{
    string key = "1";
    u16string str = Str8ToStr16(key);
    int32_t on = TRUE_DEFAULT;
    int32_t off = TRUE_DEFAULT;
    string phoneNumber = TEST_PHONY_NUMBER;
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_EQ(g_clientPtr->GetPtr()->DialCall(Str8ToStr16(phoneNumber), g_dialInfo), TRUE_DEFAULT);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
            SLEEP_30000_MS);

        ASSERT_EQ(g_clientPtr->GetPtr()->SendBurstDtmf(g_newCallId, str, on, off), TRUE_DEFAULT);
        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(hangUpRet, TRUE_DEFAULT);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS,
            SLEEP_30000_MS);
    }
}

/*************************************** Test FormatPhoneNumber() *****************************************/

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumber_0800
 * @tc.name     test FormatPhoneNumber() 1000 times, phoneNumber as "01085198748", countryCode as "Kr",
 *              formatNumber as empty
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_FormatPhoneNumber_0800, Reliability | MediumTest | Level3)
{
    string number = "01085198748";
    string Code = "Kr";
    string formatBefore = "";
    u16string phoneNumber = Str8ToStr16(number);
    u16string countryCode = Str8ToStr16(Code);
    u16string formatNumber = Str8ToStr16(formatBefore);
    int32_t ans = TRUE_DEFAULT;
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_EQ(g_clientPtr->GetPtr()->FormatPhoneNumber(phoneNumber, countryCode, formatNumber), ans);
    }
}

/************************************ Test FormatPhoneNumberToE164() ***************************************/

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumberToE164_0800
 * @tc.name     test FormatPhoneNumberToE164() 1000 times, phoneNumber as "01085198748", countryCode as "Kr",
 *              formatNumber as empty
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_FormatPhoneNumberToE164_0800,
        Reliability | MediumTest | Level3)
{
    string number = "01085198748";
    string Code = "Kr";
    string formatBefore = "";
    u16string phoneNumber = Str8ToStr16(number);
    u16string countryCode = Str8ToStr16(Code);
    u16string formatNumber = Str8ToStr16(formatBefore);
    int32_t ans = TRUE_DEFAULT;
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_EQ(g_clientPtr->GetPtr()->FormatPhoneNumberToE164(phoneNumber, countryCode, formatNumber), ans);
    }
}