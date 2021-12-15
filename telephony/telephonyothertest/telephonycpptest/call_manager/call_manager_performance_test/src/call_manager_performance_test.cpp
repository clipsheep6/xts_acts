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
 * @tc.number   Telephony_CallManager_IMS_StartDtmf_1300
 * @tc.name     test StartDtmf() 20 times, start str as 'a'
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_StartDtmf_1300, Performance | MediumTest | Level3)
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

    std::string cameraId = g_cameraObjList[0]->GetID();
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
 * @tc.number   Telephony_CallManager_IMS_SetCameraZoom_0700
 * @tc.name     test SetCameraZoom() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_SetCameraZoom_0700, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, SLEEP_50_MS,
        SLEEP_30000_MS);

    sptr<CameraInput> cameraInput = g_camManagerObj->CreateCameraInput(g_cameraObjList[0]);
    ASSERT_TRUE(cameraInput);
    std::vector<float> zoomList= cameraInput->GetSupportedZoomRatioRange();
    ASSERT_FALSE(zoomList.empty());
    float zoomRatio = zoomList[0];
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
    {
        g_clientPtr->GetPtr()->SetCameraZoom(zoomRatio);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;

    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_500);
}

/******************************************* Test SetPausePicture() **********************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SetPausePicture_0800
 * @tc.name     test SetPausePicture() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_SetPausePicture_0800, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, SLEEP_50_MS,
        SLEEP_30000_MS);
    std::string path = "/system/bin/callManager.png";

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++)
    {
        g_clientPtr->GetPtr()->SetPausePicture(Str8ToStr16(path));
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