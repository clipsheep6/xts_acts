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

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony::CallManager;
using namespace OHOS::Telephony;

/******************************************* Test IsNewCallAllowed() *********************************************/

/**
 * @tc.number   Telephony_CallManager_IsNewCallAllowed_0500
 * @tc.name     test IsNewCallAllowed() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IsNewCallAllowed_0500, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int ret = FALSE_DEFAULT;

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++) {
        ret = g_clientPtr->GetPtr()->IsNewCallAllowed();
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
    int ret = FALSE_DEFAULT;

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++) {
        ret = g_clientPtr->GetPtr()->IsRinging();
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
    int ret = FALSE_DEFAULT;

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++) {
        ret = g_clientPtr->GetPtr()->SeparateConference(FALSE_NEGATIVE_CALLID_100);
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
        ret = g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac);
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
        ret = g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction);
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
        ret = g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type);
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
        ret = g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer);
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
    int ret = FALSE_DEFAULT;

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
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
    int ret = FALSE_DEFAULT;

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        ret = g_clientPtr->GetPtr()->SetMuted(isMute);
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
    int ret = FALSE_DEFAULT;

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        ret = g_clientPtr->GetPtr()->SetAudioDevice(device);
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
    int ret = FALSE_DEFAULT;

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++)
    {
        ret = g_clientPtr->GetPtr()->MuteRinger();
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}
