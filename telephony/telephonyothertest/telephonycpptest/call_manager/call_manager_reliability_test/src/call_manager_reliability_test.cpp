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