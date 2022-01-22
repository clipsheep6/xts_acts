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
    for (int i = 1; i < TEST_RUN_TIME_10; i++) {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
            SLEEP_50_MS, SLEEP_30000_MS);
        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true,
            SLEEP_50_MS, SLEEP_30000_MS);
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
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
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
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
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
    for (int i = 0; i < TEST_RUN_TIME_10; i++) {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
            SLEEP_50_MS, SLEEP_30000_MS);
        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true,
            SLEEP_50_MS, SLEEP_30000_MS);
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
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
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
    for (int i = 0; i < TEST_RUN_TIME_10; i++) {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = CallManagerFunctionTest::Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);

        if (CallManagerFunctionTest::HasActiveStatus()) {
            ret = g_clientPtr->GetPtr()->HoldCall(g_newCallId);
            EXPECT_EQ(ret, SUCCESSFUL);
            LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_HOLDING), true,
                SLEEP_50_MS, SLEEP_30000_MS);
            int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
            ASSERT_EQ(hangUpRet, SUCCESSFUL);
            LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED),
                true, SLEEP_50_MS, SLEEP_30000_MS);
        } else {
            break;
        }
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
    for (int i = 0; i < TEST_RUN_TIME_10; i++) {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = CallManagerFunctionTest::Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);

        if (CallManagerFunctionTest::HasActiveStatus()) {
            ret = g_clientPtr->GetPtr()->HoldCall(g_newCallId);
            EXPECT_EQ(ret, SUCCESSFUL);
            LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_HOLDING), true,
                SLEEP_50_MS, SLEEP_30000_MS);
            EXPECT_EQ(g_clientPtr->GetPtr()->UnHoldCall(g_newCallId), 0);
            LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
                SLEEP_50_MS, SLEEP_30000_MS);
            int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
            ASSERT_EQ(hangUpRet, SUCCESSFUL);
            LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED),
                true, SLEEP_50_MS, SLEEP_30000_MS);
        } else {
            break;
        }
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
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
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
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
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
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
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
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
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
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
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
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
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
    for (int i = 0; i < TEST_RUN_TIME_10; i++) {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        ASSERT_EQ(g_clientPtr->GetPtr()->DialCall(Str8ToStr16(phoneNumber), g_dialInfo), 0);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
            SLEEP_50_MS, SLEEP_30000_MS);
        bool emergencyRet = g_clientPtr->GetPtr()->IsInEmergencyCall();
        EXPECT_EQ(emergencyRet, true);
        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(hangUpRet, 0);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true,
            SLEEP_50_MS, SLEEP_30000_MS);
    }
}

/*********************************** Test IsEmergencyPhoneNumber() ***********************************/

/**
 * @tc.number   Telephony_CallManager_IsEmergencyPhoneNumber_1800
 * @tc.name     test IsEmergencyPhoneNumber() 1000 times, EmergencyNumber 112
 * @tc.desc     Reliability test
 */
HWTEST_F(
    CallManagerReliabilityTest, Telephony_CallManager_IsEmergencyPhoneNumber_1800, Reliability | MediumTest | Level3)
{
    int32_t errorCode = -1;
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
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
    for (int i = 0; i < TEST_RUN_TIME_10; i++) {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        ASSERT_EQ(g_clientPtr->GetPtr()->DialCall(Str8ToStr16(TARGET_PHONY_NUMBER), g_dialInfo), 0);
        LOCK_NUM_WHILE_EQ(g_newCallId, ERROR_VALUES, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
            SLEEP_50_MS, SLEEP_30000_MS);

        EXPECT_EQ(g_clientPtr->GetPtr()->StartDtmf(g_newCallId, str), 0);
        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(hangUpRet, 0);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true,
            SLEEP_50_MS, SLEEP_30000_MS);
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
    for (int i = 0; i < TEST_RUN_TIME_10; i++) {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        ASSERT_EQ(g_clientPtr->GetPtr()->DialCall(Str8ToStr16(TARGET_PHONY_NUMBER), g_dialInfo), 0);
        LOCK_NUM_WHILE_EQ(g_newCallId, ERROR_VALUES, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
            SLEEP_50_MS, SLEEP_30000_MS);

        EXPECT_EQ(g_clientPtr->GetPtr()->StopDtmf(g_newCallId), 0);
        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(hangUpRet, 0);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true,
            SLEEP_50_MS, SLEEP_30000_MS);
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
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
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
HWTEST_F(
    CallManagerReliabilityTest, Telephony_CallManager_FormatPhoneNumberToE164_0800, Reliability | MediumTest | Level3)
{
    string number = "(010)00000000";
    string Code = "CN";
    string formatBefore = "";
    u16string phonyNumber = Str8ToStr16(number);
    u16string countryCode = Str8ToStr16(Code);
    u16string formatNumber = Str8ToStr16(formatBefore);
    int32_t ans = SUCCESSFUL;
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
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
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
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
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
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
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
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
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ROAMING_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
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
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ROAMING_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
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
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
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
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
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
    for (int i = 0; i < TEST_RUN_TIME_10; i++) {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
            SLEEP_50_MS, SLEEP_30000_MS);

        std::string updatePhoneNumber = g_updateAccountNumber;
        std::string phoneNumber = TARGET_PHONY_NUMBER;
        LOCK_STRING_WHILE_NE(updatePhoneNumber.c_str(), phoneNumber.c_str(), SLEEP_50_MS, SLEEP_12000_MS);
        LOCK_NUM_WHILE_NE(g_updateAccountId, ACCOUNT_ID, SLEEP_50_MS, SLEEP_12000_MS);
        LOCK_NUM_WHILE_NE(g_updateVideoState, VideoStateType::TYPE_VOICE, SLEEP_50_MS, SLEEP_12000_MS);
        LOCK_NUM_WHILE_NE(g_updateCallType, CallType::TYPE_CS, SLEEP_50_MS, SLEEP_12000_MS);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
            SLEEP_50_MS, SLEEP_12000_MS);
        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true,
            SLEEP_50_MS, SLEEP_30000_MS);
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
    for (int i = 0; i < TEST_RUN_TIME_10; i++) {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = CallManagerFunctionTest::Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);

        if (CallManagerFunctionTest::HasActiveStatus()) {
            ASSERT_EQ(g_clientPtr->GetPtr()->SetMuted(true), SUCCESSFUL);
            int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
            ASSERT_EQ(hangUpRet, SUCCESSFUL);
            LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED),
                true, SLEEP_50_MS, SLEEP_30000_MS);
        } else {
            break;
        }
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
    for (int i = 0; i < TEST_RUN_TIME_10; i++) {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = CallManagerFunctionTest::Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        if (CallManagerFunctionTest::HasActiveStatus()) {
            EXPECT_EQ(g_clientPtr->GetPtr()->SetAudioDevice(AudioDevice::DEVICE_SPEAKER), SUCCESSFUL);
            int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
            ASSERT_EQ(hangUpRet, SUCCESSFUL);
            LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED),
                true, SLEEP_50_MS, SLEEP_30000_MS);
        } else {
            break;
        }
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
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
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
    for (int i = 0; i < TEST_RUN_TIME_10; i++) {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
            SLEEP_50_MS, SLEEP_30000_MS);
        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true,
            SLEEP_50_MS, SLEEP_30000_MS);
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
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_NE(
            g_clientPtr->GetPtr()->AnswerCall(FALSE_NEGATIVE_CALLID_100, (int)VideoStateType::TYPE_VOICE), SUCCESSFUL);
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
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
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
    for (int i = 0; i < TEST_RUN_TIME_10; i++) {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
            SLEEP_50_MS, SLEEP_30000_MS);
        ret = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true,
            SLEEP_50_MS, SLEEP_30000_MS);
    }
}

/***************************************** Test StartDtmf() *******************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_StartDtmf_1200
 * @tc.name     test StartDtmf() 50 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IMS_StartDtmf_1200, Reliability | MediumTest | Level3)
{
    char validNumberDtmf = '4';
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    for (int i = 0; i < TEST_RUN_TIME_10; i++) {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
            SLEEP_50_MS, SLEEP_30000_MS);
        ret = g_clientPtr->GetPtr()->StartDtmf(g_newCallId, validNumberDtmf);
        ASSERT_EQ(ret, SUCCESSFUL);
        ret = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true,
            SLEEP_50_MS, SLEEP_30000_MS);
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
    for (int i = 0; i < TEST_RUN_TIME_10; i++) {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
            SLEEP_50_MS, SLEEP_30000_MS);
        ret = g_clientPtr->GetPtr()->StartDtmf(g_newCallId, validNumberDtmf);
        ASSERT_EQ(ret, SUCCESSFUL);
        ret = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true,
            SLEEP_50_MS, SLEEP_30000_MS);
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

    std::string cameraId = g_cameraObjList[0]->GetID();
    std::string callingPackage = "com.ohos.videocall";
    for (int i = 0; i < TEST_RUN_TIME_10; i++) {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
            SLEEP_50_MS, SLEEP_30000_MS);
        ret = g_clientPtr->GetPtr()->ControlCamera(Str8ToStr16(cameraId));
        ASSERT_EQ(ret, SUCCESSFUL);
        ret = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true,
            SLEEP_50_MS, SLEEP_30000_MS);
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
    for (int i = 0; i < TEST_RUN_TIME_10; i++) {
        VideoWindow window;
        window.x = 700;
        window.y = 10;
        window.z = 1;
        window.width = 300;
        window.height = 600;

        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
            SLEEP_50_MS, SLEEP_30000_MS);
        ret = g_clientPtr->GetPtr()->SetPreviewWindow(window);
        EXPECT_EQ(ret, SUCCESSFUL);
        ret = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true,
            SLEEP_50_MS, SLEEP_30000_MS);
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
    for (int i = 0; i < TEST_RUN_TIME_10; i++) {
        VideoWindow window;
        window.x = 700;
        window.y = 10;
        window.z = 1;
        window.width = 300;
        window.height = 600;

        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
            SLEEP_50_MS, SLEEP_30000_MS);
        ret = g_clientPtr->GetPtr()->SetDisplayWindow(window);
        EXPECT_EQ(ret, SUCCESSFUL);
        ret = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true,
            SLEEP_50_MS, SLEEP_30000_MS);
    }
}

/***************************************** Test SetCameraZoom() *******************************************/

/**
 * @tc.number   Telephony_CallManager_SetCameraZoom_0600
 * @tc.name     test SetCameraZoom() 50 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_SetCameraZoom_0600, Reliability | MediumTest | Level3)
{
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);

    sptr<CameraInput> cameraInput = g_camManagerObj->CreateCameraInput(g_cameraObjList[0]);
    ASSERT_TRUE(cameraInput);
    std::vector<float> zoomList = cameraInput->GetSupportedZoomRatioRange();
    ASSERT_FALSE(zoomList.empty());
    float zoomRatio = zoomList[0];

    for (int i = 0; i < TEST_RUN_TIME_10; i++) {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
            SLEEP_50_MS, SLEEP_30000_MS);
        ret = g_clientPtr->GetPtr()->SetCameraZoom(zoomRatio);
        EXPECT_EQ(ret, SUCCESSFUL);
        ret = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true,
            SLEEP_50_MS, SLEEP_30000_MS);
    }
}

/***************************************** Test SetPausePicture() *******************************************/

/**
 * @tc.number   Telephony_CallManager_SetPausePicture_0700
 * @tc.name     test SetPausePicture() 50 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_SetPausePicture_0700, Reliability | MediumTest | Level3)
{
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    for (int i = 0; i < TEST_RUN_TIME_10; i++) {
        std::string path = "/system/bin/callManager.png";
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
            SLEEP_50_MS, SLEEP_30000_MS);
        ret = g_clientPtr->GetPtr()->SetPausePicture(Str8ToStr16(path));
        EXPECT_EQ(ret, SUCCESSFUL);
        ret = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true,
            SLEEP_50_MS, SLEEP_30000_MS);
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
    for (int i = 0; i < TEST_RUN_TIME_10; i++) {
        int rotation = 0;
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = CallManagerFunctionTest::Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true,
            SLEEP_50_MS, SLEEP_30000_MS);
        ret = g_clientPtr->GetPtr()->SetDeviceDirection(rotation);
        EXPECT_EQ(ret, SUCCESSFUL);
        ret = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true,
            SLEEP_50_MS, SLEEP_30000_MS);
    }
}

/********************************************* Test HoldCall() ******************************************/
/**
 * @tc.number   Telephony_CallManager_IMS_HoldCall_0800
 * @tc.name     test HoldCall() 5 times, add 3 seconds to prevent blocking by the carrier when dialing too fast
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IMS_HoldCall_0800, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_5; i++) {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = CallManagerFunctionTest::Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);

        if (CallManagerFunctionTest::HasActiveStatus()) {
            ret = g_clientPtr->GetPtr()->HoldCall(g_newCallId);
            EXPECT_EQ(ret, SUCCESSFUL);
            LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_HOLDING), true,
                SLEEP_50_MS, SLEEP_12000_MS);
            int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
            ASSERT_EQ(hangUpRet, SUCCESSFUL);
            LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED),
                true, SLEEP_50_MS, SLEEP_12000_MS);
        } else {
            break;
        }
    }
}

/********************************************* Test UnHoldCall() ************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_UnHoldCall_0800
 * @tc.name     test UnHoldCall() 5 times, add 3 seconds to prevent blocking by the carrier when dialing too fast
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IMS_UnHoldCall_0800, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_5; i++) {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = CallManagerFunctionTest::Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);

        if (CallManagerFunctionTest::HasActiveStatus()) {
            ret = g_clientPtr->GetPtr()->HoldCall(g_newCallId);
            EXPECT_EQ(ret, SUCCESSFUL);
            LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_HOLDING), true,
                SLEEP_50_MS, SLEEP_12000_MS);
            EXPECT_EQ(g_clientPtr->GetPtr()->UnHoldCall(g_newCallId), 0);
            LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true,
                SLEEP_50_MS, SLEEP_12000_MS);
            int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
            ASSERT_EQ(hangUpRet, SUCCESSFUL);
            LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED),
                true, SLEEP_50_MS, SLEEP_12000_MS);
        } else {
            break;
        }
    }
}

/********************************************* Test SwitchCall() **************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SwitchCall_1100
 * @tc.name     test SwitchCall() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IMS_SwitchCall_1100, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_NE(g_clientPtr->GetPtr()->SwitchCall(FALSE_NEGATIVE_CALLID_100), 0);
    }
}

/************************************ Test SetCallWaiting() *************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallWaiting_0900
 * @tc.name     test SetCallWaiting() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IMS_SetCallWaiting_0900, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_EQ(g_clientPtr->GetPtr()->SetCallWaiting(SLOT_ID, true), 0);
    }
}

/************************************ Test GetCallWaiting() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallWaiting_0700
 * @tc.name     test GetCallWaiting() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IMS_GetCallWaiting_0700, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_EQ(g_clientPtr->GetPtr()->GetCallWaiting(SLOT_ID), 0);
    }
}

/************************************ Test SetCallRestriction() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_3200
 * @tc.name     test SetCallRestriction() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(
    CallManagerReliabilityTest, Telephony_CallManager_IMS_SetCallRestriction_3200, Reliability | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ROAMING_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;

    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    }
}

/************************************ Test GetCallRestriction() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallRestriction_1900
 * @tc.name     test GetCallRestriction() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(
    CallManagerReliabilityTest, Telephony_CallManager_IMS_GetCallRestriction_1900, Reliability | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ROAMING_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);

    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    }
}

/************************************ Test SetCallTransferInfo() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_2900
 * @tc.name     test SetCallTransferInfo() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(
    CallManagerReliabilityTest, Telephony_CallManager_IMS_SetCallTransferInfo_2900, Reliability | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    }
}

/************************************ Test GetCallTransferInfo() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallTransferInfo_1500
 * @tc.name     test GetCallTransferInfo() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(
    CallManagerReliabilityTest, Telephony_CallManager_IMS_GetCallTransferInfo_1500, Reliability | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);

    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    }
}

/************************************ Test EnableImsSwitch() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_EnableImsSwitch_0600
 * @tc.name     test EnableImsSwitch() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IMS_EnableImsSwitch_0600, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        int ret = g_clientPtr->GetPtr()->EnableImsSwitch(SLOT_ID);
        ASSERT_EQ(ret, SUCCESSFUL);
    }
}

/************************************ Test DisableImsSwitch() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_DisableImsSwitch_0800
 * @tc.name     test DisableImsSwitch() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IMS_DisableImsSwitch_0800, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        int ret = g_clientPtr->GetPtr()->DisableImsSwitch(SLOT_ID);
        ASSERT_EQ(ret, SUCCESSFUL);
    }
}

/************************************ Test IsImsSwitchEnabled() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_IsImsSwitchEnabled_0700
 * @tc.name     test IsImsSwitchEnabled() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(
    CallManagerReliabilityTest, Telephony_CallManager_IMS_IsImsSwitchEnabled_0700, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        int ret = g_clientPtr->GetPtr()->IsImsSwitchEnabled(SLOT_ID);
        ASSERT_EQ(ret, SUCCESSFUL);
    }
}

/************************************ Test CombineConference() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_CombineConference_0400
 * @tc.name     test CombineConference() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(
    CallManagerReliabilityTest, Telephony_CallManager_IMS_CombineConference_0400, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_NE(g_clientPtr->GetPtr()->CombineConference(INVALID_CALLID), SUCCESSFUL);
    }
}

/************************************ Test SeparateConference() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SeparateConference_0500
 * @tc.name     test SeparateConference() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(
    CallManagerReliabilityTest, Telephony_CallManager_IMS_SeparateConference_0500, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_NE(g_clientPtr->GetPtr()->SeparateConference(INVALID_CALLID), SUCCESSFUL);
    }
}

/************************************ Test JoinConference() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_JoinConference_0900
 * @tc.name     test JoinConference() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IMS_JoinConference_0900, Reliability | MediumTest | Level3)
{
    std::vector<std::u16string> targetCallNumberList{ Str8ToStr16(TARGET_PHONY_NUMBER) };
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_NE(g_clientPtr->GetPtr()->JoinConference(INVALID_CALLID, targetCallNumberList), SUCCESSFUL);
    }
}

/************************************ Test EnableLteEnhanceMode() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_EnableLteEnhanceMode_0600
 * @tc.name     test EnableLteEnhanceMode() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(
    CallManagerReliabilityTest, Telephony_CallManager_IMS_EnableLteEnhanceMode_0600, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_EQ(g_clientPtr->GetPtr()->EnableLteEnhanceMode(SLOT_ID), SUCCESSFUL);
    }
}

/************************************ Test DisableLteEnhanceMode() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_DisableLteEnhanceMode_0600
 * @tc.name     test DisableLteEnhanceMode() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(
    CallManagerReliabilityTest, Telephony_CallManager_IMS_DisableLteEnhanceMode_0600, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_EQ(g_clientPtr->GetPtr()->DisableLteEnhanceMode(SLOT_ID), SUCCESSFUL);
    }
}

/************************************ Test IsLteEnhanceModeEnabled() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_IsLteEnhanceModeEnabled_0600
 * @tc.name     test IsLteEnhanceModeEnabled() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IMS_IsLteEnhanceModeEnabled_0600,
    Reliability | MediumTest | Level3)
{
    ASSERT_EQ(g_clientPtr->GetPtr()->EnableLteEnhanceMode(SLOT_ID), SUCCESSFUL);
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_EQ(g_clientPtr->GetPtr()->IsLteEnhanceModeEnabled(SLOT_ID), SUCCESSFUL);
    }
}

/****************************************** Test StartRtt() ************************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_StartRtt_0500
 * @tc.name     test StartRtt() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IMS_StartRtt_0500, Reliability | MediumTest | Level3)
{
    std::string msg = "Ab666&#";
    std::u16string rttMsg = Str8ToStr16(msg);
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_NE(g_clientPtr->GetPtr()->StartRtt(INVALID_CALLID, rttMsg), SUCCESSFUL);
    }
}

/****************************************** Test StopRtt() ************************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_StopRtt_0500
 * @tc.name     test StopRtt() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IMS_StopRtt_0500, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_NE(g_clientPtr->GetPtr()->StopRtt(INVALID_CALLID), SUCCESSFUL);
    }
}

/****************************************** Test GetImsConfig() ************************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_GetImsConfig_0600
 * @tc.name     test GetImsConfig() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IMS_GetImsConfig_0600, Reliability | MediumTest | Level3)
{
    std::u16string imsValues = Str8ToStr16(IMS_VALUES_0);
    ASSERT_EQ(g_clientPtr->GetPtr()->SetImsConfig(SLOT_ID, ImsConfigItem::ITEM_VIDEO_QUALITY, imsValues), SUCCESSFUL);
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_EQ(g_clientPtr->GetPtr()->GetImsConfig(SLOT_ID, ImsConfigItem::ITEM_VIDEO_QUALITY), SUCCESSFUL);
    }
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::GET_IMS_CONFIG_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(
        g_updateResult.GetIntValue("value"), ImsConfigItem::ITEM_VIDEO_QUALITY, SLEEP_50_MS, SLEEP_1000_MS);
}

/****************************************** Test SetImsConfig() ************************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SetImsConfig_0800
 * @tc.name     test SetImsConfig() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IMS_SetImsConfig_0800, Reliability | MediumTest | Level3)
{
    std::u16string imsValues = Str8ToStr16(IMS_VALUES_1);
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_EQ(
            g_clientPtr->GetPtr()->SetImsConfig(SLOT_ID, ImsConfigItem::ITEM_IMS_SWITCH_STATUS, imsValues), SUCCESSFUL);
    }
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_IMS_CONFIG_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/****************************************** Test GetImsFeatureValue() ************************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_GetImsFeatureValue_0600
 * @tc.name     test GetImsFeatureValue() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(
    CallManagerReliabilityTest, Telephony_CallManager_IMS_GetImsFeatureValue_0600, Reliability | MediumTest | Level3)
{
    int imsValues = 0;
    ASSERT_EQ(
        g_clientPtr->GetPtr()->SetImsFeatureValue(SLOT_ID, FeatureType::TYPE_VOICE_OVER_LTE, imsValues), SUCCESSFUL);
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_EQ(g_clientPtr->GetPtr()->GetImsFeatureValue(SLOT_ID, FeatureType::TYPE_VOICE_OVER_LTE), SUCCESSFUL);
    }
    LOCK_NUM_WHILE_NE(
        g_updateReportId, CallResultReportId::GET_IMS_FEATURE_VALUE_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(
        g_updateResult.GetIntValue("value"), FeatureType::TYPE_VOICE_OVER_LTE, SLEEP_50_MS, SLEEP_1000_MS);
}

/****************************************** Test SetImsFeatureValue() ************************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SetImsFeatureValue_0800
 * @tc.name     test SetImsFeatureValue() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(
    CallManagerReliabilityTest, Telephony_CallManager_IMS_SetImsFeatureValue_0800, Reliability | MediumTest | Level3)
{
    int imsValues = 0;
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_EQ(g_clientPtr->GetPtr()->SetImsFeatureValue(SLOT_ID, FeatureType::TYPE_VOICE_OVER_LTE, imsValues),
            SUCCESSFUL);
    }
    LOCK_NUM_WHILE_NE(
        g_updateReportId, CallResultReportId::SET_IMS_FEATURE_VALUE_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/****************************************** Test UpdateImsCallMode() ************************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_UpdateImsCallMode_0800
 * @tc.name     test UpdateImsCallMode() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(
    CallManagerReliabilityTest, Telephony_CallManager_IMS_UpdateImsCallMode_0800, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_NE(g_clientPtr->GetPtr()->UpdateImsCallMode(FALSE_CALLID_999, ImsCallMode::CALL_MODE_SEND_RECEIVE),
            SUCCESSFUL);
    }
}