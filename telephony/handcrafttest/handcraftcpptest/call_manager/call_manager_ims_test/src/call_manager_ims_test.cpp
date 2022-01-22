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

#define CALLMANAGER_IMS_TEST
#include "call_manager_ims_test.h"

#include <cstring>
#include <gtest/gtest.h>

#include "time_count_helper.h"
#include "call_manager_basic.h"
#include "input/camera_manager.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::CameraStandard;
using namespace OHOS::Telephony;
using namespace OHOS::Telephony::CallManager;

/******************************************** Test SetPausePicture() *****************************************/

/**
 * @tc.number   Telephony_CallManager_SetPausePicture_01001
 * @tc.name     Import file path, dial call test SetPausePicture(),return zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetPausePicture_01001, Function | MediumTest | Level3)
{
    std::string path = "/system/data/callManager.png";
    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetPausePicture(Str8ToStr16(path));
    if (ret != SUCCESSFUL) {
        LOG("The SetPausePicture path is not found!");
    }
}

/**
 * @tc.number   Telephony_CallManager_SetPausePicture_02001
 * @tc.name     Import invalid file path, dial call test SetPausePicture(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetPausePicture_02001, Function | MediumTest | Level3)
{
    std::string invalidPath = "/system/data/callManager.jpg";
    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetPausePicture(Str8ToStr16(invalidPath));
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetPausePicture_03001
 * @tc.name     Import invalid file path, dial call test SetPausePicture(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetPausePicture_03001, Function | MediumTest | Level3)
{
    std::string invalidPath = "/system/data/callManager.bmp";
    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetPausePicture(Str8ToStr16(invalidPath));
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetPausePicture_04001
 * @tc.name     Import invalid file path, dial call test SetPausePicture(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetPausePicture_04001, Function | MediumTest | Level3)
{
    std::string invalidPath = "/system/data/callManager.webp";
    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetPausePicture(Str8ToStr16(invalidPath));
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetPausePicture_05001
 * @tc.name     Import invalid file path, dial call test SetPausePicture(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetPausePicture_05001, Function | MediumTest | Level3)
{
    std::string invalidPath = "/system/data/callManager/notexistpath.webp";
    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetPausePicture(Str8ToStr16(invalidPath));
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetPausePicture_06001
 * @tc.name     Import emptyPath, dial call test SetPausePicture(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetPausePicture_06001, Function | MediumTest | Level3)
{
    std::string emptyPath = "";
    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
    ret = g_clientPtr->GetPtr()->SetPausePicture(Str8ToStr16(emptyPath));
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetPausePicture_07001
 * @tc.name     test SetPausePicture() 50 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_SetPausePicture_07001, Reliability | MediumTest | Level3)
{
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, SLEEP_50_MS,
        SLEEP_30000_MS);
    for (int i = 0; i < TEST_RUN_TIME_10; i++)
    {
        std::string path = "/system/data/callManager.png";
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);
        LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_30000_MS);
        LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_30000_MS);

        ret = g_clientPtr->GetPtr()->SetPausePicture(Str8ToStr16(path));
        if(ret != SUCCESSFUL) {
            LOG("The SetPausePicture path is not found!");
            ret = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
            ASSERT_EQ(ret, SUCCESSFUL);
            LOCK_NUM_WHILE_NE(HasState(g_newCallId, CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_30000_MS);
            break;
        }
    }
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetPausePicture_08001
 * @tc.name     test SetPausePicture() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_SetPausePicture_08001, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(SLOT_ID, CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, SUCCESSFUL);
    std::string path = "/system/data/callManager.png";

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        g_clientPtr->GetPtr()->SetPausePicture(Str8ToStr16(path));
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;

    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}