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

#define CALL_MANAGER_RELIABILITY_TEST
#include <cstring>
#include <gtest/gtest.h>
#include "call_manager_test.h"
#include "call_manager_basic.h"
#include "input/camera_manager.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::CameraStandard;
using namespace OHOS::Telephony::CallManager;
using namespace OHOS::Telephony;

/********************************************* Test DialCall() ***********************************************/

/**
 * @tc.number   Telephony_CallManager_DialCall_0700
 * @tc.name     test DialCall() 50 times, add 3 seconds to prevent blocking by the carrier when dialing too fast
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_DialCall_0700, Reliability | MediumTest | Level3)
{
    for (int i = 1; i < TEST_RUN_TIME_50; i++)
    {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
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
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->AnswerCall(FALSE_NEGATIVE_CALLID_100, videoState), 0);
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
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->RejectCall(FALSE_NEGATIVE_CALLID_100, true, textMessage), 0);
    }
}

/******************************************* Test HangUpCall() *********************************************/

/**
 * @tc.number   Telephony_CallManager_HangUpCall_0400
 * @tc.name     test HangUpCall() 50 times, add 3 seconds to prevent blocking by the carrier when dialing too fast
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_HangUpCall_0400, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_50; i++)
    {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_30000_MS);
        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_30000_MS);
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
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_EQ(g_clientPtr->GetPtr()->GetCallState(), (int)CallStateToApp::CALL_STATE_IDLE);
    }
}

/********************************************* Test HoldCall() ******************************************/
/**
 * @tc.number   Telephony_CallManager_HoldCall_0300
 * @tc.name     test HoldCall() 50 times, add 3 seconds to prevent blocking by the carrier when dialing too fast
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_HoldCall_0300, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_50; i++)
    {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);

        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING),
            true, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_ACTIVE),
            true, SLEEP_50_MS, SLEEP_30000_MS);
        ret = g_clientPtr->GetPtr()->HoldCall(g_newCallId);
        EXPECT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_HOLDING),
            true, SLEEP_50_MS, SLEEP_30000_MS);
        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS,
            SLEEP_30000_MS);
    }
}

/********************************************* Test UnHoldCall() ************************************/

/**
 * @tc.number   Telephony_CallManager_UnHoldCall_0300
 * @tc.name     test UnHoldCall() 50 times, add 3 seconds to prevent blocking by the carrier when dialing too fast
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_UnHoldCall_0300, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_50; i++)
    {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);

        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING),
            true, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_ACTIVE),
            true, SLEEP_50_MS, SLEEP_30000_MS);
        ret = g_clientPtr->GetPtr()->HoldCall(g_newCallId);
        EXPECT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_HOLDING),
            true, SLEEP_50_MS, SLEEP_30000_MS);
        EXPECT_EQ(g_clientPtr->GetPtr()->UnHoldCall(g_newCallId), 0);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_ACTIVE),
            true, SLEEP_50_MS, SLEEP_30000_MS);
        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS,
            SLEEP_30000_MS);
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
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->SwitchCall(FALSE_NEGATIVE_CALLID_100), 0);
    }
}

/********************************************* Test HasCall() *****************************************/

/**
 * @tc.number   Telephony_CallManager_HasCall_0400
 * @tc.name     test HasCall() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_HasCall_0400, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->HasCall(), true);
    }
}

/**************************************** Test CombineConference() **************************************/

/**
 * @tc.number   Telephony_CallManager_CombineConference_0400
 * @tc.name     test CombineConference() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_CombineConference_0400, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->CombineConference(FALSE_NEGATIVE_CALLID_100), 0);
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
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->GetMainCallId(FALSE_NEGATIVE_CALLID_100), 0);
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
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
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
 * @tc.number   Telephony_CallManager_GetCallIdListForConference_0300
 * @tc.name     test GetCallIdListForConference() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_GetCallIdListForConference_0300,
        Reliability | MediumTest | Level3)
{
    std::vector<std::string> resultDefault;
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
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
 * @tc.name     test IsInEmergencyCall() 50 times,
 *              add 3 seconds to prevent blocking by the carrier when dialing too fast
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IsInEmergencyCall_0300, Reliability | MediumTest | Level3)
{
    string phoneNumber = "112";
    for (int i = 0; i < TEST_RUN_TIME_50; i++)
    {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        ASSERT_EQ(g_clientPtr->GetPtr()->DialCall(Str8ToStr16(phoneNumber), g_dialInfo), 0);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING),
            true, SLEEP_50_MS, SLEEP_30000_MS);
        bool emergencyRet = g_clientPtr->GetPtr()->IsInEmergencyCall();
        EXPECT_EQ(emergencyRet, true);
        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(hangUpRet, 0);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DISCONNECTED),
            true, SLEEP_50_MS, SLEEP_30000_MS);
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
    int32_t errorCode = -1;
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
    {
        string number = "112";
        std::u16string formatPhoneNumber = Str8ToStr16(number);
        ASSERT_EQ(g_clientPtr->GetPtr()->IsEmergencyPhoneNumber(formatPhoneNumber, SLOT_ID, errorCode), true);
    }
}

/********************************************* Test StartDtmf() ***************************************/

/**
 * @tc.number   Telephony_CallManager_StartDtmf_0900
 * @tc.name     test StartDtmf() 50 times, start str as 'a',
 *              add 3 seconds to prevent blocking by the carrier when dialing too fast
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_StartDtmf_0900, Reliability | MediumTest | Level3)
{
    char str = 'A';
    for (int i = 0; i < TEST_RUN_TIME_50; i++)
    {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        ASSERT_EQ(g_clientPtr->GetPtr()->DialCall(Str8ToStr16(TARGET_PHONY_NUMBER), g_dialInfo), 0);
        LOCK_NUM_WHILE_EQ(g_newCallId, ERROR_VALUES, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING),
            true, SLEEP_50_MS, SLEEP_30000_MS);

        EXPECT_EQ(g_clientPtr->GetPtr()->StartDtmf(g_newCallId, str), 0);
        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(hangUpRet, 0);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DISCONNECTED),
            true, SLEEP_50_MS, SLEEP_30000_MS);
    }
}

/********************************************* Test StopDtmf() **************************************/

/**
 * @tc.number   Telephony_CallManager_StopDtmf_0300
 * @tc.name     test StopDtmf() 50 times, add 3 seconds to prevent blocking by the carrier when dialing too fast
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_StopDtmf_0300, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_50; i++)
    {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        ASSERT_EQ(g_clientPtr->GetPtr()->DialCall(Str8ToStr16(TARGET_PHONY_NUMBER), g_dialInfo), 0);
        LOCK_NUM_WHILE_EQ(g_newCallId, ERROR_VALUES, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING),
            true, SLEEP_50_MS, SLEEP_30000_MS);

        EXPECT_EQ(g_clientPtr->GetPtr()->StopDtmf(g_newCallId), 0);
        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(hangUpRet, 0);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DISCONNECTED),
            true, SLEEP_50_MS, SLEEP_30000_MS);
    }
}

/*************************************** Test FormatPhoneNumber() *****************************************/

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumber_0800
 * @tc.name     test FormatPhoneNumber() 1000 times, phonyNumber as "01000000000", countryCode as "Kr",
 *              formatNumber as empty
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_FormatPhoneNumber_0800, Reliability | MediumTest | Level3)
{
    string number = "01000000000";
    string Code = "CN";
    string formatBefore = "";
    u16string phonyNumber = Str8ToStr16(number);
    u16string countryCode = Str8ToStr16(Code);
    u16string formatNumber = Str8ToStr16(formatBefore);
    int32_t ans = SUCCESSFUL;
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_EQ(g_clientPtr->GetPtr()->FormatPhoneNumber(phonyNumber, countryCode, formatNumber), ans);
    }
}

/************************************ Test FormatPhoneNumberToE164() ***************************************/

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumberToE164_0800
 * @tc.name     test FormatPhoneNumberToE164() 1000 times, phonyNumber as "(010)00000000", countryCode as "Kr",
 *              formatNumber as empty
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_FormatPhoneNumberToE164_0800,
        Reliability | MediumTest | Level3)
{
    string number = "(010)00000000";
    string Code = "CN";
    string formatBefore = "";
    u16string phonyNumber = Str8ToStr16(number);
    u16string countryCode = Str8ToStr16(Code);
    u16string formatNumber = Str8ToStr16(formatBefore);
    int32_t ans = SUCCESSFUL;
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_EQ(g_clientPtr->GetPtr()->FormatPhoneNumberToE164(phonyNumber, countryCode, formatNumber), ans);
    }
}

/****************************************** Test IsNewCallAllowed() **********************************/

/**
 * @tc.number   Telephony_CallManager_IsNewCallAllowed_0400
 * @tc.name     test IsNewCallAllowed() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IsNewCallAllowed_0400, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_EQ(g_clientPtr->GetPtr()->IsNewCallAllowed(), true);
    }
}

/********************************************* Test IsRinging() ******************************************/

/**
 * @tc.number   Telephony_CallManager_IsRinging_0400
 * @tc.name     test IsRinging() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IsRinging_0400, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->IsRinging(), true);
    }
}

/*************************************** Test SeparateConference() ************************************/

/**
 * @tc.number   Telephony_CallManager_SeparateConference_0400
 * @tc.name     test SeparateConference() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_SeparateConference_0400, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->SeparateConference(FALSE_NEGATIVE_CALLID_100), SUCCESSFUL);
    }
}

/************************************** Test GetCallRestriction() *********************************/

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_1100
 * @tc.name     test GetCallRestriction() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_GetCallRestriction_1100, Reliability | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_ROAMING_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    }
}

/************************************* Test SetCallRestriction() ********************************/

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_1100
 * @tc.name     test SetCallRestriction() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_SetCallRestriction_1100, Reliability | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_ROAMING_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    }
}

/************************************** Test GetCallTransferInfo() **********************************/

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_1100
 * @tc.name     test GetCallTransferInfo() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_GetCallTransferInfo_1500, Reliability | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = REGISTRATION;
    setCallTransfer.type = UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    }
}

/************************************** Test SetCallTransferInfo() **************************************/

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_0900
 * @tc.name     test SetCallTransferInfo() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_SetCallTransferInfo_1400, Reliability | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = REGISTRATION;
    setCallTransfer.type = UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    }
}

/***************************************** Test RegisterCallBack() *******************************************/

/**
 * @tc.number   Telephony_CallManager_RegisterCallBack_0400
 * @tc.name     test RegisterCallBack() 50 times,
 *              add 3 seconds to prevent blocking by the carrier when dialing too fast
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_RegisterCallBack_0400, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_50; i++)
    {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_30000_MS);

        std::string updatePhoneNumber = g_updateAccountNumber;
        std::string phoneNumber = TARGET_PHONY_NUMBER;
        LOCK_STRING_WHILE_NE(updatePhoneNumber.c_str(), phoneNumber.c_str(), SLEEP_50_MS, SLEEP_12000_MS);
        LOCK_NUM_WHILE_NE(g_updateAccountId, ACCOUNT_ID, SLEEP_50_MS, SLEEP_12000_MS);
        LOCK_NUM_WHILE_NE(g_updateVideoState, (int)VideoStateType::TYPE_VOICE, SLEEP_50_MS, SLEEP_12000_MS);
        LOCK_NUM_WHILE_NE(g_updateCallType, (int)CallType::TYPE_CS, SLEEP_50_MS, SLEEP_12000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_30000_MS);
    }
}

/***************************************** Test SetMuted() *******************************************/

/**
 * @tc.number   Telephony_CallManager_SetMuted_0500
 * @tc.name     test SetMuted() 50 times, add 3 seconds to prevent blocking by the carrier when dialing too fast
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_SetMuted_0500, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_50; i++)
    {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_30000_MS);
        ASSERT_EQ(g_clientPtr->GetPtr()->SetMuted(true), SUCCESSFUL);
        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_30000_MS);
    }
}

/***************************************** Test SetAudioDevice() *******************************************/

/**
 * @tc.number   Telephony_CallManager_SetAudioDevice_0600
 * @tc.name     test SetMuted() 50 times, add 3 seconds to prevent blocking by the carrier when dialing too fast
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_SetAudioDevice_0600, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_50; i++)
    {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_30000_MS);
        EXPECT_EQ(g_clientPtr->GetPtr()->SetAudioDevice(AudioDevice::DEVICE_SPEAKER), SUCCESSFUL);
        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(hangUpRet, SUCCESSFUL);
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
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_EQ(g_clientPtr->GetPtr()->MuteRinger(), SUCCESSFUL);
    }
}

/***************************************** Test DialCall() *******************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_DialCall_1900
 * @tc.name     test DialCall() 50 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IMS_DialCall_1900, Reliability | MediumTest | Level3)
{
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, SLEEP_50_MS,
        SLEEP_30000_MS);
    for (int i = 0; i < TEST_RUN_TIME_50; i++)
    {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_30000_MS);
        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_30000_MS);
    }
}

/***************************************** Test AnswerCall() *******************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_AnswerCall_0600
 * @tc.name     test AnswerCall() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IMS_AnswerCall_0600, Reliability | MediumTest | Level3)
{
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, SLEEP_50_MS,
        SLEEP_30000_MS);
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
    {
        ASSERT_NE(g_clientPtr->GetPtr()->AnswerCall(FALSE_NEGATIVE_CALLID_100, (int)VideoStateType::TYPE_VOICE),
            SUCCESSFUL);
    }
}

/***************************************** Test RejectCall() *******************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_RejectCall_0300
 * @tc.name     test RejectCall() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IMS_RejectCall_0300, Reliability | MediumTest | Level3)
{
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, SLEEP_50_MS,
        SLEEP_30000_MS);
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
    {
        u16string textMessage = Str8ToStr16("this is a test message");
        int ret = g_clientPtr->GetPtr()->RejectCall(FALSE_NEGATIVE_CALLID_100, true, textMessage);
        EXPECT_NE(ret, SUCCESSFUL);
    }
}

/***************************************** Test HangUpCall() *******************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_HangUpCall_0400
 * @tc.name     test HangUpCall() 50 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IMS_HangUpCall_0400, Reliability | MediumTest | Level3)
{
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, SLEEP_50_MS,
        SLEEP_30000_MS);
    for (int i = 0; i < TEST_RUN_TIME_50; i++)
    {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_30000_MS);
        ret = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_30000_MS);
    }
}

/***************************************** Test StartDtmf() *******************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_StartDtmf_1400
 * @tc.name     test StartDtmf() 50 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IMS_StartDtmf_1400, Reliability | MediumTest | Level3)
{
    char validNumberDtmf = '4';
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, SLEEP_50_MS,
        SLEEP_30000_MS);
    for (int i = 0; i < TEST_RUN_TIME_50; i++)
    {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_30000_MS);
        ret = g_clientPtr->GetPtr()->StartDtmf(g_newCallId, validNumberDtmf);
        ASSERT_EQ(ret, SUCCESSFUL);
        ret = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_30000_MS);
    }
}

/***************************************** Test StopDtmf() *******************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_StopDtmf_0400
 * @tc.name     test StopDtmf() 50 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IMS_StopDtmf_0400, Reliability | MediumTest | Level3)
{
    char validNumberDtmf = '4';
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, SLEEP_50_MS,
        SLEEP_30000_MS);
    for (int i = 0; i < TEST_RUN_TIME_50; i++)
    {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_30000_MS);
        ret = g_clientPtr->GetPtr()->StartDtmf(g_newCallId, validNumberDtmf);
        ASSERT_EQ(ret, SUCCESSFUL);
        ret = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_30000_MS);
    }
}

/***************************************** Test ControlCamera() *******************************************/

/**
 * @tc.number   Telephony_CallManager_ControlCamera_0400
 * @tc.name     test ControlCamera() 50 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_ControlCamera_0400, Reliability | MediumTest | Level3)
{
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, SLEEP_50_MS,
        SLEEP_30000_MS);
    sptr<CameraManager> camManagerObj = CameraManager::GetInstance();
    std::vector<sptr<CameraInfo>> cameraObjList = camManagerObj->GetCameras();
    ASSERT_FALSE(cameraObjList.empty());
    std::string cameraId = cameraObjList[0]->GetID();
    std::string callingPackage = "com.ohos.videocall";
    for (int i = 0; i < TEST_RUN_TIME_50; i++)
    {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_30000_MS);
        ret = g_clientPtr->GetPtr()->ControlCamera(Str8ToStr16(cameraId), Str8ToStr16(callingPackage));
        ASSERT_EQ(ret, SUCCESSFUL);
        ret = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_30000_MS);
    }
}

/***************************************** Test SetPreviewWindow() *******************************************/

/**
 * @tc.number   Telephony_CallManager_SetPreviewWindow_0500
 * @tc.name     test SetPreviewWindow() 50 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_SetPreviewWindow_0500, Reliability | MediumTest | Level3)
{
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, SLEEP_50_MS,
        SLEEP_30000_MS);
    for (int i = 0; i < TEST_RUN_TIME_50; i++)
    {
        int coordinateX = 700;
        int coordinateY = 10;
        int coordinateZ = 1;
        int width = 300;
        int height = 600;

        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_30000_MS);
        ret = g_clientPtr->GetPtr()->SetPreviewWindow(coordinateX, coordinateY, coordinateZ, width, height);
        EXPECT_EQ(ret, SUCCESSFUL);
        ret = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_30000_MS);
    }
}

/***************************************** Test SetDisplayWindow() *******************************************/

/**
 * @tc.number   Telephony_CallManager_SetDisplayWindow_0500
 * @tc.name     test SetDisplayWindow() 50 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_SetDisplayWindow_0500, Reliability | MediumTest | Level3)
{
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, SLEEP_50_MS,
        SLEEP_30000_MS);
    for (int i = 0; i < TEST_RUN_TIME_50; i++)
    {
        int coordinateX = 700;
        int coordinateY = 10;
        int coordinateZ = 1;
        int width = 300;
        int height = 600;

        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_30000_MS);
        ret = g_clientPtr->GetPtr()->SetDisplayWindow(coordinateX, coordinateY, coordinateZ, width, height);
        EXPECT_EQ(ret, SUCCESSFUL);
        ret = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_30000_MS);
    }
}

/***************************************** Test SetCameraZoom() *******************************************/

/**
 * @tc.number   Telephony_CallManager_SetCameraZoom_0500
 * @tc.name     test SetCameraZoom() 50 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_SetCameraZoom_0500, Reliability | MediumTest | Level3)
{
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, SLEEP_50_MS,
        SLEEP_30000_MS);

    // initialization CameraInfo
    sptr<CameraManager> camManagerObj = CameraManager::GetInstance();
    std::vector<sptr<CameraInfo>> cameraObjList = camManagerObj->GetCameras();
    sptr<ICameraDeviceService> deviceObj;
    sptr<CameraInfo> camera;

    OHOS::CameraStandard::CameraInput GetCamera(deviceObj, camera);
    std::vector<float> getZoomRatio = GetCamera.GetSupportedZoomRatioRange();
    ASSERT_FALSE(getZoomRatio.empty());
    float zoomRatio = getZoomRatio[0];
    for (int i = 0; i < TEST_RUN_TIME_50; i++)
    {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_30000_MS);
        ret = g_clientPtr->GetPtr()->SetCameraZoom(zoomRatio);
        EXPECT_EQ(ret, SUCCESSFUL);
        ret = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_30000_MS);
    }
}

/***************************************** Test SetPauseImage() *******************************************/

/**
 * @tc.number   Telephony_CallManager_SetPauseImage_0700
 * @tc.name     test SetPauseImage() 50 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_SetPauseImage_0700, Reliability | MediumTest | Level3)
{
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, SLEEP_50_MS,
        SLEEP_30000_MS);
    for (int i = 0; i < TEST_RUN_TIME_50; i++)
    {
        std::string path = "";
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_30000_MS);
        ret = g_clientPtr->GetPtr()->SetPauseImage(Str8ToStr16(path));
        EXPECT_EQ(ret, SUCCESSFUL);
        ret = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_30000_MS);
    }
}

/***************************************** Test SetDeviceDirection() *******************************************/

/**
 * @tc.number   Telephony_CallManager_SetDeviceDirection_0800
 * @tc.name     test SetDeviceDirection() 50 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_SetDeviceDirection_0800, Reliability | MediumTest | Level3)
{
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, SLEEP_50_MS,
        SLEEP_30000_MS);
    for (int i = 0; i < TEST_RUN_TIME_50; i++)
    {
        int rotation = 0;
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_30000_MS);
        ret = g_clientPtr->GetPtr()->SetDeviceDirection(rotation);
        EXPECT_EQ(ret, SUCCESSFUL);
        ret = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_30000_MS);
    }
}