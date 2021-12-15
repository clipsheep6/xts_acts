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
 * @tc.number   Telephony_CallManager_GetCallTransferInfo_0900
 * @tc.name     test GetCallTransferInfo() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_GetCallTransferInfo_0900, Reliability | MediumTest | Level3)
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
 * @tc.number   Telephony_CallManager_SetCallTransferInfo_1100
 * @tc.name     test SetCallTransferInfo() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_SetCallTransferInfo_1100, Reliability | MediumTest | Level3)
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
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_30000_MS);

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
        int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_30000_MS);
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
        int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_30000_MS);
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