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
 * @tc.number   Telephony_CallManager_IMS_StartDtmf_1200
 * @tc.name     test StartDtmf() 50 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IMS_StartDtmf_1200, Reliability | MediumTest | Level3)
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

    std::string cameraId = g_cameraObjList[0]->GetID();
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
 * @tc.number   Telephony_CallManager_SetCameraZoom_0600
 * @tc.name     test SetCameraZoom() 50 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_SetCameraZoom_0600, Reliability | MediumTest | Level3)
{
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, SLEEP_50_MS,
        SLEEP_30000_MS);

    sptr<CameraInput> cameraInput = g_camManagerObj->CreateCameraInput(g_cameraObjList[0]);
    ASSERT_TRUE(cameraInput);
    std::vector<float> zoomList= cameraInput->GetSupportedZoomRatioRange();
    ASSERT_FALSE(zoomList.empty());
    float zoomRatio = zoomList[0];
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
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, SLEEP_50_MS,
        SLEEP_30000_MS);
    for (int i = 0; i < TEST_RUN_TIME_50; i++)
    {
        std::string path = "/system/bin/callManager.png";
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_30000_MS);
        ret = g_clientPtr->GetPtr()->SetPausePicture(Str8ToStr16(path));
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