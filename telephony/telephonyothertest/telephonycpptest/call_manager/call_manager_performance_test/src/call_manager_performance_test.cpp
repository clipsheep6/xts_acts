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
#include "time_count_helper.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony::CallManager;
using namespace OHOS::Telephony;

/********************************************* Test DialCall() *************************************/

/**
 * @tc.number   Telephony_CallManager_DialCall_0600
 * @tc.name     test DialCall() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_DialCall_0600, Performance | MediumTest | Level3)
{
    string phoneNumber = EMPTY_DEFAULT;
    AppExecFwk::PacMap dialInfo;
    dialInfo.PutIntValue("accountId", TRUE_DEFAULT);
    dialInfo.PutIntValue("videoState", (int)VideoStateType::TYPE_VOICE);
    dialInfo.PutIntValue("dialScene", CALL_NORMAL);
    dialInfo.PutIntValue("dialType", (int)DialType::DIAL_CARRIER_TYPE);

    TimeCountHelper timeHelper;
    int ret = FALSE_DEFAULT;

    timeHelper.StartCountUs();
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_20; i++)
    {
        ret = g_clientPtr->GetPtr()->DialCall(Str8ToStr16(phoneNumber), dialInfo);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    EXPECT_NE(ret, TRUE_DEFAULT);
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/********************************************* Test AnswerCall() ********************************/

/**
 * @tc.number   Telephony_CallManager_AnswerCall_0300
 * @tc.name     test AnswerCall() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_AnswerCall_0300, Performance | MediumTest | Level3)
{
    int32_t callId = FALSE_NEGATIVE_CALLID_100;
    int videoState = (int)VideoStateType::TYPE_VOICE;
    TimeCountHelper timeHelper;
    int ret = FALSE_DEFAULT;

    timeHelper.StartCountUs();
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_20; i++)
    {
        ret = g_clientPtr->GetPtr()->AnswerCall(callId, videoState);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    EXPECT_NE(ret, TRUE_DEFAULT);
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/********************************************* Test RejectCall() ***********************************/

/**
 * @tc.number   Telephony_CallManager_RejectCall_0200
 * @tc.name     test RejectCall() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_RejectCall_0200, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int32_t callId = FALSE_NEGATIVE_CALLID_100;
    u16string textMessage = Str8ToStr16("this is a test message");
    int ret = FALSE_DEFAULT;

    timeHelper.StartCountUs();
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_20; i++)
    {
        ret = g_clientPtr->GetPtr()->RejectCall(callId, true, textMessage);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    EXPECT_NE(ret, TRUE_DEFAULT);
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test HangUpCall() *********************************************/

/**
 * @tc.number   Telephony_CallManager_HangUpCall_0300
 * @tc.name     test HangUpCall() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_HangUpCall_0300, Performance | MediumTest | Level3)
{
    int32_t callId = FALSE_NEGATIVE_CALLID_100;
    TimeCountHelper timeHelper;
    int ret = TRUE_DEFAULT;

    timeHelper.StartCountUs();
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_20; i++)
    {
        ret = g_clientPtr->GetPtr()->HangUpCall(callId);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    EXPECT_NE(ret, TRUE_DEFAULT);
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test GetCallState() ****************************************/

/**
 * @tc.number   Telephony_CallManager_GetCallState_0300
 * @tc.name     test GetCallState() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_GetCallState_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int ret = FALSE_DEFAULT;

    timeHelper.StartCountUs();
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_20; i++)
    {
        ret = g_clientPtr->GetPtr()->GetCallState();
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    EXPECT_NE(ret, TRUE_DEFAULT);
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test HoldCall() ****************************************/

/**
 * @tc.number   Telephony_CallManager_HoldCall_0300
 * @tc.name     test HoldCall() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_HoldCall_0300, Performance | MediumTest | Level3)
{
    int32_t callId = FALSE_NEGATIVE_CALLID_100;
    TimeCountHelper timeHelper;
    int ret = FALSE_DEFAULT;

    timeHelper.StartCountUs();
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_20; i++)
    {
        ret = g_clientPtr->GetPtr()->HoldCall(callId);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    EXPECT_NE(ret, true);
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test UnHoldCall() *****************************************/

/**
 * @tc.number   Telephony_CallManager_UnHoldCall_0300
 * @tc.name     test UnHoldCall() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_UnHoldCall_0300, Performance | MediumTest | Level3)
{
    int32_t callId = FALSE_NEGATIVE_CALLID_100;
    TimeCountHelper timeHelper;
    int ret = FALSE_DEFAULT;

    timeHelper.StartCountUs();
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_20; i++)
    {
        ret = g_clientPtr->GetPtr()->UnHoldCall(callId);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    EXPECT_NE(ret, TRUE_DEFAULT);
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test SwitchCall() ****************************************/

/**
 * @tc.number   Telephony_CallManager_SwitchCall_0300
 * @tc.name     test SwitchCall() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_SwitchCall_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int ret = FALSE_DEFAULT;

    timeHelper.StartCountUs();
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_20; i++)
    {
        ret = g_clientPtr->GetPtr()->SwitchCall(FALSE_DEFAULT);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    EXPECT_NE(ret, TRUE_DEFAULT);
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test HasCall() *********************************************/

/**
 * @tc.number   Telephony_CallManager_HasCall_0400
 * @tc.name     test HasCall() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_HasCall_0400, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int ret = FALSE_DEFAULT;

    timeHelper.StartCountUs();
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_20; i++)
    {
        ret = g_clientPtr->GetPtr()->HasCall();
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    EXPECT_NE(ret, true);
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test CombineConference() **********************************/

/**
 * @tc.number   Telephony_CallManager_CombineConference_0400
 * @tc.name     test CombineConference() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_CombineConference_0400, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int ret = FALSE_DEFAULT;
    int32_t callId = FALSE_NEGATIVE_CALLID_100;

    timeHelper.StartCountUs();
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_20; i++)
    {
        ret = g_clientPtr->GetPtr()->CombineConference(callId);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    EXPECT_NE(ret, TRUE_DEFAULT);
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test GetMainCallId() *************************************/

/**
 * @tc.number   Telephony_CallManager_GetMainCallId_0400
 * @tc.name     test GetMainCallId() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_GetMainCallId_0400, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int ret = FALSE_DEFAULT;
    int32_t callId = FALSE_NEGATIVE_CALLID_100;

    timeHelper.StartCountUs();
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_20; i++)
    {
        ret = g_clientPtr->GetPtr()->GetMainCallId(callId);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    EXPECT_NE(ret, TRUE_DEFAULT);
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test GetSubCallIdList() ************************************/

/**
 * @tc.number   Telephony_CallManager_GetSubCallIdList_0400
 * @tc.name     test GetSubCallIdList() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_GetSubCallIdList_0400, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int32_t callId = FALSE_NEGATIVE_CALLID_100;

    timeHelper.StartCountUs();
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->GetSubCallIdList(callId);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/************************************ Test GetCallIdListForConference() ********************************/

/**
 * @tc.number   Telephony_CallManager_GetCallIdListForConference_0600
 * @tc.name     test GetCallIdListForConference() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_GetCallIdListForConference_0600,
        Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int32_t callId = FALSE_NEGATIVE_CALLID_100;

    timeHelper.StartCountUs();
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->GetCallIdListForConference(callId);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/***************************************** Test IsInEmergencyCall() *********************************/

/**
 * @tc.number   Telephony_CallManager_IsInEmergencyCall_0400
 * @tc.name     test IsInEmergencyCall() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IsInEmergencyCall_0400, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int ret = FALSE_DEFAULT;

    timeHelper.StartCountUs();
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_20; i++)
    {
        ret = g_clientPtr->GetPtr()->IsInEmergencyCall();
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    EXPECT_NE(ret, true);
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/*********************************** Test IsEmergencyPhoneNumber() *********************************/

/**
 * @tc.number   Telephony_CallManager_IsEmergencyPhoneNumber_1900
 * @tc.name     test IsEmergencyPhoneNumber() 20 times, EmergencyPhoneNumber as "000"
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IsEmergencyPhoneNumber_1900,
        Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int ret = FALSE_DEFAULT;
    string number = "000";
    std::u16string phoneNumber = Str8ToStr16(number);
    int32_t slotId = SLOT_ID;

    timeHelper.StartCountUs();
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_20; i++)
    {
        ret = g_clientPtr->GetPtr()->IsEmergencyPhoneNumber(phoneNumber, slotId);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    EXPECT_EQ(ret, true);
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/**************************************** Test GetCallWaiting() *******************************/

/**
 * @tc.number   Telephony_CallManager_GetCallWaiting_0500
 * @tc.name     test GetCallWaiting() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_GetCallWaiting_0500, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int ret = FALSE_DEFAULT;
    int32_t slotId = SLOT_ID;

    timeHelper.StartCountUs();
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_20; i++)
    {
        ret = g_clientPtr->GetPtr()->GetCallWaiting(slotId);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    EXPECT_EQ(ret, TRUE_DEFAULT);
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/**************************************** Test SetCallWaiting() ******************************/

/**
 * @tc.number   Telephony_CallManager_SetCallWaiting_0600
 * @tc.name     test SetCallWaiting() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_SetCallWaiting_0600, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int ret = FALSE_DEFAULT;
    int32_t slotId = SLOT_ID;
    bool activate = true;

    timeHelper.StartCountUs();
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_20; i++)
    {
        ret = g_clientPtr->GetPtr()->SetCallWaiting(slotId, activate);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    EXPECT_EQ(ret, TRUE_DEFAULT);
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test StartDtmf() ************************************/

/**
 * @tc.number   Telephony_CallManager_StartDtmf_1000
 * @tc.name     test StartDtmf() 20 times, start str as 'a'
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_StartDtmf_1000, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int ret = FALSE_DEFAULT;
    int32_t callId = FALSE_NEGATIVE_CALLID_100;
    char str = 'a';

    timeHelper.StartCountUs();
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_20; i++)
    {
        ret = g_clientPtr->GetPtr()->StartDtmf(callId, str);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    EXPECT_NE(ret, TRUE_DEFAULT);
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test StopDtmf() **********************************/

/**
 * @tc.number   Telephony_CallManager_StopDtmf_0400
 * @tc.name     test StopDtmf() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_StopDtmf_0400, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int ret = FALSE_DEFAULT;
    int32_t callId = FALSE_NEGATIVE_CALLID_100;

    timeHelper.StartCountUs();
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_20; i++)
    {
        ret = g_clientPtr->GetPtr()->StopDtmf(callId);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    EXPECT_NE(ret, TRUE_DEFAULT);
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test SendDtmf() *************************************/

/**
 * @tc.number   Telephony_CallManager_SendDtmf_0600
 * @tc.name     test SendDtmf() 20 times,  send str as 'a'
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_SendDtmf_0600, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int ret = FALSE_DEFAULT;
    int32_t callId = FALSE_NEGATIVE_CALLID_100;
    char str = 'a';

    timeHelper.StartCountUs();
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_20; i++)
    {
        ret = g_clientPtr->GetPtr()->SendDtmf(callId, str);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    EXPECT_NE(ret, TRUE_DEFAULT);
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test SendBurstDtmf() ***********************************/

/**
 * @tc.number   Telephony_CallManager_SendBurstDtmf_1700
 * @tc.name     test SendBurstDtmf() 20 times,  send str as 'a'
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_SendBurstDtmf_1700, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int ret = FALSE_DEFAULT;
    int32_t callId = FALSE_NEGATIVE_CALLID_100;
    string str = "a";
    int32_t on = TRUE_DEFAULT;
    int32_t off = TRUE_DEFAULT;

    timeHelper.StartCountUs();
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_20; i++)
    {
        ret = g_clientPtr->GetPtr()->SendBurstDtmf(callId, Str8ToStr16(str), on, off);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    EXPECT_NE(ret, TRUE_DEFAULT);
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test FormatPhoneNumber() *******************************/

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumber_9000
 * @tc.name     test FormatPhoneNumber() 20 times, phoneNumber as "01085198748", countryCode as "Kr",
 *              formatNumber as empty
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_FormatPhoneNumber_9000, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int ret = FALSE_DEFAULT;
    string number = "01085198748";
    string Code = "Kr";
    string formatBefore = "";
    char formatAfter[ARRAY_NUMBER_SIZE] = "010-8519-8748";
    u16string phoneNumber = Str8ToStr16(number);
    u16string countryCode = Str8ToStr16(Code);
    u16string formatNumber = Str8ToStr16(formatBefore);
    int32_t ans = (int32_t)formatAfter;

    timeHelper.StartCountUs();
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_20; i++)
    {
        ret = g_clientPtr->GetPtr()->FormatPhoneNumber(phoneNumber, countryCode, formatNumber);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    EXPECT_EQ(ret, ans);
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/**************************************** Test FormatPhoneNumberToE164() **************************/

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumberToE164_0900
 * @tc.name     test FormatPhoneNumberToE164() 20 times, phoneNumber as "01085198748", countryCode as "Kr",
 *              formatNumber as empty
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_FormatPhoneNumberToE164_0900,
        Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int ret = FALSE_DEFAULT;    string number = "01085198748";
    string Code = "Kr";
    string formatBefore = "";
    char formatAfter[ARRAY_NUMBER_SIZE] = "821085198748";
    u16string phoneNumber = Str8ToStr16(number);
    u16string countryCode = Str8ToStr16(Code);
    u16string formatNumber = Str8ToStr16(formatBefore);
    int32_t ans = (int32_t)formatAfter;

    timeHelper.StartCountUs();
    for (int i = TRUE_DEFAULT; i < TEST_RUN_TIME_20; i++)
    {
        ret = g_clientPtr->GetPtr()->FormatPhoneNumberToE164(phoneNumber, countryCode, formatNumber);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    EXPECT_EQ(ret, ans);
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}