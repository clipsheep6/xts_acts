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

#include <cstring>
#include <gtest/gtest.h>
#include "call_manager_test.h"
#include "call_manager_basic.h"
#include "time_count_helper.h"
#include "input/camera_manager.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::CameraStandard;
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
    TimeCountHelper timeHelper;

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;

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
    int videoState = (int)VideoStateType::TYPE_VOICE;
    TimeCountHelper timeHelper;

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->AnswerCall(FALSE_NEGATIVE_CALLID_100, videoState);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;

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
    u16string textMessage = Str8ToStr16("this is a test message");

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->RejectCall(FALSE_NEGATIVE_CALLID_100, true, textMessage);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;

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
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->HangUpCall(FALSE_NEGATIVE_CALLID_100);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;

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

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->GetCallState();
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;

    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test HoldCall() ****************************************/

/**
 * @tc.number   Telephony_CallManager_HoldCall_0400
 * @tc.name     test HoldCall() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_HoldCall_0400, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->HoldCall(FALSE_NEGATIVE_CALLID_100);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test UnHoldCall() *****************************************/

/**
 * @tc.number   Telephony_CallManager_UnHoldCall_0400
 * @tc.name     test UnHoldCall() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_UnHoldCall_0400, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->UnHoldCall(FALSE_NEGATIVE_CALLID_100);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;

    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test SwitchCall() ****************************************/

/**
 * @tc.number   Telephony_CallManager_SwitchCall_0400
 * @tc.name     test SwitchCall() 20 times, ret for false value
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_SwitchCall_0400, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->SwitchCall(ERROR_VALUES);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;

    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test HasCall() *********************************************/

/**
 * @tc.number   Telephony_CallManager_HasCall_0500
 * @tc.name     test HasCall() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_HasCall_0500, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->HasCall();
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test CombineConference() **********************************/

/**
 * @tc.number   Telephony_CallManager_CombineConference_0300
 * @tc.name     test CombineConference() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_CombineConference_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->CombineConference(FALSE_NEGATIVE_CALLID_100);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;

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

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->GetMainCallId(FALSE_NEGATIVE_CALLID_100);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;

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

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->GetSubCallIdList(FALSE_NEGATIVE_CALLID_100);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/************************************ Test GetCallIdListForConference() ********************************/

/**
 * @tc.number   Telephony_CallManager_GetCallIdListForConference_0400
 * @tc.name     test GetCallIdListForConference() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_GetCallIdListForConference_0400,
        Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->GetCallIdListForConference(FALSE_NEGATIVE_CALLID_100);
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

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->IsInEmergencyCall();
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
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
    string number = "000";
    std::u16string phoneNumber = Str8ToStr16(number);
    int32_t errorCode = -1;

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->IsEmergencyPhoneNumber(phoneNumber, SLOT_ID, errorCode);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
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
    char str = 'a';

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->StartDtmf(FALSE_NEGATIVE_CALLID_100, str);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;

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

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->StopDtmf(FALSE_NEGATIVE_CALLID_100);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;

    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test FormatPhoneNumber() *******************************/

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumber_9000
 * @tc.name     test FormatPhoneNumber() 20 times, phonyNumber as "01000000000", countryCode as "Kr",
 *              formatNumber as empty
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_FormatPhoneNumber_9000, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    string number = "01000000000";
    string Code = "CN";
    string formatBefore = "";
    u16string phonyNumber = Str8ToStr16(number);
    u16string countryCode = Str8ToStr16(Code);
    u16string formatNumber = Str8ToStr16(formatBefore);

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->FormatPhoneNumber(phonyNumber, countryCode, formatNumber);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/**************************************** Test FormatPhoneNumberToE164() **************************/

/**
 * @tc.number   Telephony_CallManager_FormatPhoneNumberToE164_0900
 * @tc.name     test FormatPhoneNumberToE164() 20 times, phonyNumber as "(010)00000000", countryCode as "Kr",
 *              formatNumber as empty
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_FormatPhoneNumberToE164_0900,
        Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    string number = "(010)00000000";
    string Code = "CN";
    string formatBefore = "";
    u16string phonyNumber = Str8ToStr16(number);
    u16string countryCode = Str8ToStr16(Code);
    u16string formatNumber = Str8ToStr16(formatBefore);

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->FormatPhoneNumberToE164(phonyNumber, countryCode, formatNumber);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test IsNewCallAllowed() *********************************************/

/**
 * @tc.number   Telephony_CallManager_IsNewCallAllowed_0500
 * @tc.name     test IsNewCallAllowed() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IsNewCallAllowed_0500, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->IsNewCallAllowed();
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test IsRinging() *********************************************/

/**
 * @tc.number   Telephony_CallManager_IsRinging_0500
 * @tc.name     test IsRinging() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IsRinging_0500, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->IsRinging();
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}


/******************************************* Test SeparateConference() *******************************/

/**
 * @tc.number   Telephony_CallManager_SeparateConference_0500
 * @tc.name     test CombineConference() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_SeparateConference_0500, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->SeparateConference(FALSE_NEGATIVE_CALLID_100);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}


/**************************************** Test GetCallRestriction() ********************************/

/**
 * @tc.number   Telephony_CallManager_GetCallRestriction_1200
 * @tc.name     test GetCallRestriction() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_GetCallRestriction_1200, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int ret = FALSE_DEFAULT;
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_ROAMING_INCOMING;
    ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/**************************************** Test SetCallRestriction() *********************************/

/**
 * @tc.number   Telephony_CallManager_SetCallRestriction_1200
 * @tc.name     test SetCallRestriction() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_SetCallRestriction_1200, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int ret = FALSE_DEFAULT;
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = RESTRICTION_TYPE_ROAMING_INCOMING;
    ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = RESTRICTION_MODE_ACTIVATION;

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/**************************************** Test GetCallTransferInfo() ******************************/

/**
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_1000
 * @tc.name     test GetCallTransferInfo() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_GetCallTransferInfo_1000, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int ret = FALSE_DEFAULT;
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = REGISTRATION;
    setCallTransfer.type = UNCONDITIONAL;
    ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/************************************** Test SetCallTransferInfo() *******************************/

/**
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_1200
 * @tc.name     test SetCallTransferInfo() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_SetCallTransferInfo_1200, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int ret = FALSE_DEFAULT;
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = REGISTRATION;
    setCallTransfer.type = UNCONDITIONAL;
    ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/****************************************** Test RegisterCallBack() **************************************/

/**
 * @tc.number   Telephony_CallManager_RegisterCallBack_0500
 * @tc.name     test RegisterCallBack() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_RegisterCallBack_0500, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/****************************************** Test SetMuted() **************************************/

/**
 * @tc.number   Telephony_CallManager_SetMuted_0600
 * @tc.name     test SetMuted() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_SetMuted_0600, Performance | MediumTest | Level3)
{
    bool isMute = true;
    TimeCountHelper timeHelper;

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->SetMuted(isMute);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/****************************************** Test SetAudioDevice() **************************************/

/**
 * @tc.number   Telephony_CallManager_SetAudioDevice_0700
 * @tc.name     test SetAudioDevice() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_SetAudioDevice_0700, Performance | MediumTest | Level3)
{
    AudioDevice device = AudioDevice::DEVICE_SPEAKER;
    TimeCountHelper timeHelper;

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->SetAudioDevice(device);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/****************************************** Test MuteRinger() **************************************/

/**
 * @tc.number   Telephony_CallManager_MuteRinger_0400
 * @tc.name     test MuteRinger() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_MuteRinger_0400, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->MuteRinger();
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/********************************************* Test DialCall() *************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_DialCall_2000
 * @tc.name     test DialCall() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_DialCall_2000, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, SLEEP_50_MS,
        SLEEP_30000_MS);

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;

    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/********************************************* Test AnswerCall() ********************************/

/**
 * @tc.number   Telephony_CallManager_IMS_AnswerCall_0500
 * @tc.name     test AnswerCall() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_AnswerCall_0500, Performance | MediumTest | Level3)
{
    int videoState = (int)VideoStateType::TYPE_VOICE;
    TimeCountHelper timeHelper;
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, SLEEP_50_MS,
        SLEEP_30000_MS);

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->AnswerCall(FALSE_NEGATIVE_CALLID_100, videoState);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;

    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/********************************************* Test RejectCall() ***********************************/

/**
 * @tc.number   Telephony_CallManager_IMS_RejectCall_0200
 * @tc.name     test RejectCall() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_RejectCall_0200, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    u16string textMessage = Str8ToStr16("this is a test message");
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, SLEEP_50_MS,
        SLEEP_30000_MS);

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->RejectCall(FALSE_NEGATIVE_CALLID_100, true, textMessage);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;

    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test HangUpCall() *********************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_HangUpCall_0300
 * @tc.name     test HangUpCall() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_HangUpCall_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, SLEEP_50_MS,
        SLEEP_30000_MS);

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->HangUpCall(FALSE_NEGATIVE_CALLID_100);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;

    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test StartDtmf() ************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_StartDtmf_1500
 * @tc.name     test StartDtmf() 20 times, start str as 'a'
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_StartDtmf_1500, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    char str = 'a';
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, SLEEP_50_MS,
        SLEEP_30000_MS);

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->StartDtmf(FALSE_NEGATIVE_CALLID_100, str);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;

    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test StopDtmf() **********************************/

/**
 * @tc.number   Telephony_CallManager_IMS_StopDtmf_0500
 * @tc.name     test StopDtmf() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_StopDtmf_0500, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, SLEEP_50_MS,
        SLEEP_30000_MS);

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        g_clientPtr->GetPtr()->StopDtmf(FALSE_NEGATIVE_CALLID_100);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;

    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test ControlCamera() **********************************/

/**
 * @tc.number   Telephony_CallManager_IMS_ControlCamera_0500
 * @tc.name     test ControlCamera() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_ControlCamera_0500, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, SLEEP_50_MS,
        SLEEP_30000_MS);

    sptr<CameraManager> camManagerObj = CameraManager::GetInstance();
    std::vector<sptr<CameraInfo>> cameraObjList = camManagerObj->GetCameras();
    ASSERT_FALSE(cameraObjList.empty());
    std::string cameraId = cameraObjList[0]->GetID();
    std::string callingPackage = "com.ohos.videocall";
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
    {
        g_clientPtr->GetPtr()->ControlCamera(Str8ToStr16(cameraId), Str8ToStr16(callingPackage));
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;

    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test SetPreviewWindow() **********************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SetPreviewWindow_0600
 * @tc.name     test SetPreviewWindow() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_SetPreviewWindow_0600,
    Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, SLEEP_50_MS,
        SLEEP_30000_MS);

    int coordinateX = 700;
    int coordinateY = 10;
    int coordinateZ = 1;
    int width = 300;
    int height = 600;

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
    {
        g_clientPtr->GetPtr()->SetPreviewWindow(coordinateX, coordinateY, coordinateZ, width, height);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;

    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test SetDisplayWindow() **********************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SetDisplayWindow_0600
 * @tc.name     test SetDisplayWindow() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_SetDisplayWindow_0600,
    Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, SLEEP_50_MS,
        SLEEP_30000_MS);

    int coordinateX = 700;
    int coordinateY = 10;
    int coordinateZ = 1;
    int width = 300;
    int height = 600;

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
    {
        g_clientPtr->GetPtr()->SetPreviewWindow(coordinateX, coordinateY, coordinateZ, width, height);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;

    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test SetCameraZoom() **********************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SetCameraZoom_0600
 * @tc.name     test SetCameraZoom() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_SetCameraZoom_0600, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
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

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
    {
        g_clientPtr->GetPtr()->SetCameraZoom(zoomRatio);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;

    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test SetPauseImage() **********************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SetPauseImage_0800
 * @tc.name     test SetPauseImage() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_SetPauseImage_0800, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, SLEEP_50_MS,
        SLEEP_30000_MS);
    std::string path = "";

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
    {
        g_clientPtr->GetPtr()->SetPauseImage(Str8ToStr16(path));
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;

    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test SetDeviceDirection() **********************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SetDeviceDirection_0800
 * @tc.name     test SetDeviceDirection() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_SetDeviceDirection_0800,
    Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, SLEEP_50_MS,
        SLEEP_30000_MS);
    int rotation = 0;

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
    {
        g_clientPtr->GetPtr()->SetDeviceDirection(rotation);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;

    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}