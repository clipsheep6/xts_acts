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

/********************************************* Test CombineConference() **************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_CombineConference_0500
 * @tc.name     test CombineConference() 1000 times
 * @tc.desc     Performance test
 */
HWTEST_F(
    CallManagerPerformanceTest, Telephony_CallManager_IMS_CombineConference_0500, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        g_clientPtr->GetPtr()->CombineConference(INVALID_CALLID);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/********************************************* Test SeparateConference() **************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SeparateConference_0600
 * @tc.name     test SeparateConference() 1000 times
 * @tc.desc     Performance test
 */
HWTEST_F(
    CallManagerPerformanceTest, Telephony_CallManager_IMS_SeparateConference_0600, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        g_clientPtr->GetPtr()->SeparateConference(INVALID_CALLID);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/********************************************* Test JoinConference() **************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_JoinConference_1000
 * @tc.name     test JoinConference() 1000 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_JoinConference_1000, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    std::vector<std::u16string> targetCallNumberList{ Str8ToStr16(TARGET_PHONY_NUMBER) };
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        g_clientPtr->GetPtr()->JoinConference(INVALID_CALLID, targetCallNumberList);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/********************************************* Test EnableLteEnhanceMode() **************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_EnableLteEnhanceMode_0700
 * @tc.name     test EnableLteEnhanceMode() 1000 times
 * @tc.desc     Performance test
 */
HWTEST_F(
    CallManagerPerformanceTest, Telephony_CallManager_IMS_EnableLteEnhanceMode_0700, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        g_clientPtr->GetPtr()->EnableLteEnhanceMode(SLOT_ID);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/********************************************* Test DisableLteEnhanceMode() **************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_DisableLteEnhanceMode_0700
 * @tc.name     test DisableLteEnhanceMode() 1000 times
 * @tc.desc     Performance test
 */
HWTEST_F(
    CallManagerPerformanceTest, Telephony_CallManager_IMS_DisableLteEnhanceMode_0700, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        g_clientPtr->GetPtr()->DisableLteEnhanceMode(SLOT_ID);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/********************************************* Test IsLteEnhanceModeEnabled() **************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_IsLteEnhanceModeEnabled_0700
 * @tc.name     test IsLteEnhanceModeEnabled() 1000 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_IsLteEnhanceModeEnabled_0700,
    Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        g_clientPtr->GetPtr()->IsLteEnhanceModeEnabled(SLOT_ID);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/********************************************* Test StartRtt() **************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_StartRtt_0600
 * @tc.name     test StartRtt() 1000 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_StartRtt_0600, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    std::string msg = "Ab666&#";
    std::u16string rttMsg = Str8ToStr16(msg);
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        g_clientPtr->GetPtr()->StartRtt(INVALID_CALLID, rttMsg);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/********************************************* Test StopRtt() **************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_StopRtt_0600
 * @tc.name     test StopRtt() 1000 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_StopRtt_0600, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        g_clientPtr->GetPtr()->StopRtt(INVALID_CALLID);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/********************************************* Test GetImsConfig() **************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_GetImsConfig_0700
 * @tc.name     test GetImsConfig() 1000 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_GetImsConfig_0700, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        g_clientPtr->GetPtr()->GetImsConfig(SLOT_ID, ImsConfigItem::ITEM_VIDEO_QUALITY);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/********************************************* Test SetImsConfig() **************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SetImsConfig_0900
 * @tc.name     test SetImsConfig() 1000 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_SetImsConfig_0900, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    std::u16string imsValues = Str8ToStr16(IMS_VALUES_1);
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        g_clientPtr->GetPtr()->SetImsConfig(SLOT_ID, ImsConfigItem::ITEM_IMS_SWITCH_STATUS, imsValues);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/********************************************* Test GetImsFeatureValue() **************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_GetImsFeatureValue_0700
 * @tc.name     test GetImsFeatureValue() 1000 times
 * @tc.desc     Performance test
 */
HWTEST_F(
    CallManagerPerformanceTest, Telephony_CallManager_IMS_GetImsFeatureValue_0700, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    std::u16string imsValues = Str8ToStr16(IMS_VALUES_1);
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        g_clientPtr->GetPtr()->GetImsFeatureValue(SLOT_ID, FeatureType::TYPE_VOICE_OVER_LTE);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/********************************************* Test SetImsFeatureValue() **************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SetImsFeatureValue_0900
 * @tc.name     test SetImsFeatureValue() 1000 times
 * @tc.desc     Performance test
 */
HWTEST_F(
    CallManagerPerformanceTest, Telephony_CallManager_IMS_SetImsFeatureValue_0900, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int imsValues = 1;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        g_clientPtr->GetPtr()->SetImsFeatureValue(SLOT_ID, FeatureType::TYPE_VOICE_OVER_LTE, imsValues);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/********************************************* Test UpdateImsCallMode() **************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_UpdateImsCallMode_0900
 * @tc.name     test UpdateImsCallMode() 1000 times
 * @tc.desc     Performance test
 */
HWTEST_F(
    CallManagerPerformanceTest, Telephony_CallManager_IMS_UpdateImsCallMode_0900, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    std::u16string imsValues = Str8ToStr16(IMS_VALUES_1);
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        g_clientPtr->GetPtr()->UpdateImsCallMode(FALSE_CALLID_999, ImsCallMode::CALL_MODE_SEND_RECEIVE);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_1000;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}