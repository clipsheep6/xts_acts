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

#define CALLMANAGER_RTT_TEST
#include "call_manager_ims_test.h"

#include <cstring>
#include <gtest/gtest.h>

#include "call_manager_basic.h"
#include "input/camera_manager.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;
using namespace OHOS::CameraStandard;
using namespace OHOS::Telephony::CallManager;

/****************************************** Test CombineConference() ***************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_CombineConference_0100
 * @tc.name     input INVALID_CALLID is 1234, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_CombineConference_0100, Function | MediumTest | Level3)
{
    EXPECT_NE(g_clientPtr->GetPtr()->CombineConference(INVALID_CALLID), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_CombineConference_0200
 * @tc.name     add a active call, testing CombineConference return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_CombineConference_0200, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    EXPECT_NE(g_clientPtr->GetPtr()->CombineConference(g_newCallId), SUCCESSFUL);
    sleep(SLEEP_2_SEC);
}

/****************************************** Test SeparateConference() ***************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SeparateConference_0100
 * @tc.name     input INVALID_CALLID is 1234, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SeparateConference_0100, Function | MediumTest | Level3)
{
    EXPECT_NE(g_clientPtr->GetPtr()->SeparateConference(INVALID_CALLID), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SeparateConference_0200
 * @tc.name     add a call, testing SeparateConference return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_SeparateConference_0200, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    EXPECT_NE(g_clientPtr->GetPtr()->SeparateConference(g_newCallId), SUCCESSFUL);
    sleep(SLEEP_2_SEC);
}

/****************************************** Test JoinConference() ***************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_JoinConference_0100
 * @tc.name     input INVALID_CALLID is 1234, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_JoinConference_0100, Function | MediumTest | Level3)
{
    std::vector<std::u16string> targetCallNumberList{ Str8ToStr16(TARGET_PHONY_NUMBER),
        Str8ToStr16(OBJECT_PHONY_NUMBER) };
    EXPECT_NE(g_clientPtr->GetPtr()->JoinConference(INVALID_CALLID, targetCallNumberList), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_JoinConference_0200
 * @tc.name     add a active call, testing JoinConference return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_JoinConference_0200, Function | MediumTest | Level3)
{
    std::vector<std::u16string> targetCallNumberList{ Str8ToStr16(OBJECT_PHONY_NUMBER),
        Str8ToStr16(DEST_PHONY_NUMBER) };
    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    EXPECT_NE(g_clientPtr->GetPtr()->JoinConference(g_newCallId, targetCallNumberList), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_2_SEC);
}

/****************************************** Test EnableLteEnhanceMode() ***************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_EnableLteEnhanceMode_0100
 * @tc.name     testing enable EnableLteEnhanceMode, test the callback return result
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_EnableLteEnhanceMode_0100, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_clientPtr->GetPtr()->EnableLteEnhanceMode(SLOT_ID), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_LTE_ENHANCE_MODE_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_EnableLteEnhanceMode_0200
 * @tc.name     testing enable EnableLteEnhanceMode, test the callback return result
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_EnableLteEnhanceMode_0200, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_clientPtr->GetPtr()->DisableLteEnhanceMode(SLOT_ID), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->EnableLteEnhanceMode(SLOT_ID), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_LTE_ENHANCE_MODE_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_EnableLteEnhanceMode_0300
 * @tc.name     input slotId is 1,testing enable EnableLteEnhanceMode, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_EnableLteEnhanceMode_0300, Function | MediumTest | Level3)
{
    EXPECT_NE(g_clientPtr->GetPtr()->EnableLteEnhanceMode(SLOT_ID_3), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_EnableLteEnhanceMode_0400
 * @tc.name     input slotId is -1,testing enable EnableLteEnhanceMode, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_EnableLteEnhanceMode_0400, Function | MediumTest | Level3)
{
    EXPECT_NE(g_clientPtr->GetPtr()->EnableLteEnhanceMode(INVALID_NEGATIVE_SLOT_ID), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_EnableLteEnhanceMode_0500
 * @tc.name     input slotId is 2,testing enable EnableLteEnhanceMode, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_EnableLteEnhanceMode_0500, Function | MediumTest | Level3)
{
    EXPECT_NE(g_clientPtr->GetPtr()->EnableLteEnhanceMode(INVALID_SLOT_ID), SUCCESSFUL);
}

/****************************************** Test DisableLteEnhanceMode() ***************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_DisableLteEnhanceMode_0100
 * @tc.name     testing enable DisableLteEnhanceMode, test the callback return result
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_DisableLteEnhanceMode_0100, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_clientPtr->GetPtr()->DisableLteEnhanceMode(SLOT_ID), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_LTE_ENHANCE_MODE_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DisableLteEnhanceMode_0200
 * @tc.name     testing enable DisableLteEnhanceMode, test the callback return result
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_DisableLteEnhanceMode_0200, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_clientPtr->GetPtr()->EnableLteEnhanceMode(SLOT_ID), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->DisableLteEnhanceMode(SLOT_ID), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_LTE_ENHANCE_MODE_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DisableLteEnhanceMode_0300
 * @tc.name     input slotId is 1,testing enable DisableLteEnhanceMode, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_DisableLteEnhanceMode_0300, Function | MediumTest | Level3)
{
    EXPECT_NE(g_clientPtr->GetPtr()->DisableLteEnhanceMode(SLOT_ID_3), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DisableLteEnhanceMode_0400
 * @tc.name     input slotId is -1,testing enable DisableLteEnhanceMode, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_DisableLteEnhanceMode_0400, Function | MediumTest | Level3)
{
    EXPECT_NE(g_clientPtr->GetPtr()->DisableLteEnhanceMode(INVALID_NEGATIVE_SLOT_ID), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_DisableLteEnhanceMode_0500
 * @tc.name     input slotId is 2,testing enable DisableLteEnhanceMode, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_DisableLteEnhanceMode_0500, Function | MediumTest | Level3)
{
    EXPECT_NE(g_clientPtr->GetPtr()->DisableLteEnhanceMode(INVALID_SLOT_ID), SUCCESSFUL);
}

/****************************************** Test IsLteEnhanceModeEnabled() ***************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_IsLteEnhanceModeEnabled_0100
 * @tc.name     enable EnableLteEnhanceMode open, testing IsLteEnhanceModeEnabled, test the callback return value
 * @tc.desc     Function test
 */
HWTEST_F(
    CallManagerFunctionTest, Telephony_CallManager_IMS_IsLteEnhanceModeEnabled_0100, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_clientPtr->GetPtr()->EnableLteEnhanceMode(SLOT_ID), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->IsLteEnhanceModeEnabled(SLOT_ID), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::GET_LTE_ENHANCE_MODE_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("value"), true, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_IsLteEnhanceModeEnabled_0200
 * @tc.name     enable EnableLteEnhanceMode off, testing IsLteEnhanceModeEnabled, test the callback return value
 * @tc.desc     Function test
 */
HWTEST_F(
    CallManagerFunctionTest, Telephony_CallManager_IMS_IsLteEnhanceModeEnabled_0200, Function | MediumTest | Level3)
{
    EXPECT_EQ(g_clientPtr->GetPtr()->DisableLteEnhanceMode(SLOT_ID), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->IsLteEnhanceModeEnabled(SLOT_ID), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::GET_LTE_ENHANCE_MODE_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("value"), false, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_IsLteEnhanceModeEnabled_0300
 * @tc.name     input slotId is 1,testing IsLteEnhanceModeEnabled, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(
    CallManagerFunctionTest, Telephony_CallManager_IMS_IsLteEnhanceModeEnabled_0300, Function | MediumTest | Level3)
{
    EXPECT_NE(g_clientPtr->GetPtr()->IsLteEnhanceModeEnabled(SLOT_ID_3), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_IsLteEnhanceModeEnabled_0400
 * @tc.name     input slotId is -1,testing IsLteEnhanceModeEnabled, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(
    CallManagerFunctionTest, Telephony_CallManager_IMS_IsLteEnhanceModeEnabled_0400, Function | MediumTest | Level3)
{
    EXPECT_NE(g_clientPtr->GetPtr()->IsLteEnhanceModeEnabled(INVALID_NEGATIVE_SLOT_ID), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_IsLteEnhanceModeEnabled_0500
 * @tc.name     input slotId is 2,testing IsLteEnhanceModeEnabled, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(
    CallManagerFunctionTest, Telephony_CallManager_IMS_IsLteEnhanceModeEnabled_0500, Function | MediumTest | Level3)
{
    EXPECT_NE(g_clientPtr->GetPtr()->IsLteEnhanceModeEnabled(INVALID_SLOT_ID), SUCCESSFUL);
}

/****************************************** Test StartRtt() ***************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_StartRtt_0300
 * @tc.name     add a call, testing StartRtt return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_StartRtt_0300, Function | MediumTest | Level3)
{
    std::string msg = "Ab666&#";
    std::u16string rttMsg = Str8ToStr16(msg);
    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    EXPECT_NE(g_clientPtr->GetPtr()->StartRtt(g_newCallId, rttMsg), SUCCESSFUL);
    sleep(SLEEP_2_SEC);
}

/**
 * @tc.number   Telephony_CallManager_IMS_StartRtt_0400
 * @tc.name     testing StartRtt,input invalid slotId return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_StartRtt_0400, Function | MediumTest | Level3)
{
    std::string msg = "Ab666&#";
    std::u16string rttMsg = Str8ToStr16(msg);
    EXPECT_NE(g_clientPtr->GetPtr()->StartRtt(INVALID_CALLID, rttMsg), SUCCESSFUL);
}

/****************************************** Test StopRtt() ***************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_StopRtt_0300
 * @tc.name     add a call, testing StopRtt return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_IMS_StopRtt_0300, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    EXPECT_NE(g_clientPtr->GetPtr()->StopRtt(g_newCallId), SUCCESSFUL);
    sleep(SLEEP_2_SEC);
}

/**
 * @tc.number   Telephony_CallManager_IMS_StopRtt_0400
 * @tc.name     testing StopRtt,input invalid slotId return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_StopRtt_0400, Function | MediumTest | Level3)
{
    EXPECT_NE(g_clientPtr->GetPtr()->StopRtt(INVALID_CALLID), SUCCESSFUL);
}

/****************************************** Test GetImsConfig() ***************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_GetImsConfig_0100
 * @tc.name     call GetImsConfig, and testing GetImsConfig,input ITEM_VIDEO_QUALITY return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetImsConfig_0100, Function | MediumTest | Level3)
{
    std::u16string imsValues = Str8ToStr16(IMS_VALUES_1);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetImsConfig(SLOT_ID, ImsConfigItem::ITEM_VIDEO_QUALITY, imsValues), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_IMS_CONFIG_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);

    EXPECT_EQ(g_clientPtr->GetPtr()->GetImsConfig(SLOT_ID, ImsConfigItem::ITEM_VIDEO_QUALITY), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::GET_IMS_CONFIG_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("value"), true, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetImsConfig_0200
 * @tc.name     call GetImsConfig, and testing GetImsConfig,input ITEM_IMS_SWITCH_STATUS return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetImsConfig_0200, Function | MediumTest | Level3)
{
    std::u16string imsValues = Str8ToStr16(IMS_VALUES_0);
    EXPECT_EQ(
        g_clientPtr->GetPtr()->SetImsConfig(SLOT_ID, ImsConfigItem::ITEM_IMS_SWITCH_STATUS, imsValues), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_IMS_CONFIG_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);

    EXPECT_EQ(g_clientPtr->GetPtr()->GetImsConfig(SLOT_ID, ImsConfigItem::ITEM_IMS_SWITCH_STATUS), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::GET_IMS_CONFIG_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("value"), false, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetImsConfig_0300
 * @tc.name     input slotId is -1,testing GetImsConfig, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetImsConfig_0300, Function | MediumTest | Level3)
{
    EXPECT_NE(
        g_clientPtr->GetPtr()->GetImsConfig(INVALID_NEGATIVE_SLOT_ID, ImsConfigItem::ITEM_VIDEO_QUALITY), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetImsConfig_0400
 * @tc.name     input slotId is 2,testing GetImsConfig, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetImsConfig_0400, Function | MediumTest | Level3)
{
    EXPECT_NE(g_clientPtr->GetPtr()->GetImsConfig(INVALID_SLOT_ID, ImsConfigItem::ITEM_VIDEO_QUALITY), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetImsConfig_0500
 * @tc.name     input slotId is 1,testing GetImsConfig, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetImsConfig_0500, Function | MediumTest | Level3)
{
    EXPECT_NE(g_clientPtr->GetPtr()->GetImsConfig(SLOT_ID_3, ImsConfigItem::ITEM_VIDEO_QUALITY), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetImsConfig_0800
 * @tc.name     call GetImsConfig, and testing GetImsConfig,input IMS_VALUES_0 return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetImsConfig_0800, Function | MediumTest | Level3)
{
    std::u16string imsValues = Str8ToStr16(IMS_VALUES_0);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetImsConfig(SLOT_ID, ImsConfigItem::ITEM_VIDEO_QUALITY, imsValues), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_IMS_CONFIG_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);

    EXPECT_EQ(g_clientPtr->GetPtr()->GetImsConfig(SLOT_ID, ImsConfigItem::ITEM_VIDEO_QUALITY), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::GET_IMS_CONFIG_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("value"), static_cast<int>(ImsConfigItem::ITEM_VIDEO_QUALITY),
        SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetImsConfig_0900
 * @tc.name     call GetImsConfig, and testing GetImsConfig,input IMS_VALUES_1 return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetImsConfig_0900, Function | MediumTest | Level3)
{
    std::u16string imsValues = Str8ToStr16(IMS_VALUES_1);
    EXPECT_EQ(
        g_clientPtr->GetPtr()->SetImsConfig(SLOT_ID, ImsConfigItem::ITEM_IMS_SWITCH_STATUS, imsValues), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_IMS_CONFIG_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);

    EXPECT_EQ(g_clientPtr->GetPtr()->GetImsConfig(SLOT_ID, ImsConfigItem::ITEM_IMS_SWITCH_STATUS), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::GET_IMS_CONFIG_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("value"), static_cast<int>(ImsConfigItem::ITEM_IMS_SWITCH_STATUS),
        SLEEP_50_MS, SLEEP_1000_MS);
}

/****************************************** Test SetImsConfig() ***************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SetImsConfig_0100
 * @tc.name     testing SetImsConfig,input ITEM_VIDEO_QUALITY return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetImsConfig_0100, Function | MediumTest | Level3)
{
    std::u16string imsValues = Str8ToStr16(IMS_VALUES_0);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetImsConfig(SLOT_ID, ImsConfigItem::ITEM_VIDEO_QUALITY, imsValues), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_IMS_CONFIG_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetImsConfig_0200
 * @tc.name     testing SetImsConfig,input ITEM_VIDEO_QUALITY ,IMS_VALUES_1 return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetImsConfig_0200, Function | MediumTest | Level3)
{
    std::u16string imsValues = Str8ToStr16(IMS_VALUES_1);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetImsConfig(SLOT_ID, ImsConfigItem::ITEM_VIDEO_QUALITY, imsValues), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_IMS_CONFIG_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetImsConfig_0300
 * @tc.name     testing SetImsConfig,input imsValues return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetImsConfig_0300, Function | MediumTest | Level3)
{
    std::u16string imsValues = Str8ToStr16(IMS_VALUES_0);
    EXPECT_EQ(
        g_clientPtr->GetPtr()->SetImsConfig(SLOT_ID, ImsConfigItem::ITEM_IMS_SWITCH_STATUS, imsValues), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_IMS_CONFIG_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOG("g_updateReportId is %d", g_updateReportId);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetImsConfig_0400
 * @tc.name     testing SetImsConfig,input 1 return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetImsConfig_0400, Function | MediumTest | Level3)
{
    std::u16string imsValues = Str8ToStr16(IMS_VALUES_1);
    EXPECT_EQ(
        g_clientPtr->GetPtr()->SetImsConfig(SLOT_ID, ImsConfigItem::ITEM_IMS_SWITCH_STATUS, imsValues), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_IMS_CONFIG_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetImsConfig_0500
 * @tc.name     input slotId is -1,testing SetImsConfig, input imsValues, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetImsConfig_0500, Function | MediumTest | Level3)
{
    std::u16string imsValues = Str8ToStr16(IMS_VALUES_0);
    EXPECT_NE(
        g_clientPtr->GetPtr()->SetImsConfig(INVALID_NEGATIVE_SLOT_ID, ImsConfigItem::ITEM_IMS_SWITCH_STATUS, imsValues),
        SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetImsConfig_0600
 * @tc.name     input slotId is 2,testing SetImsConfig, input imsValues, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetImsConfig_0600, Function | MediumTest | Level3)
{
    std::u16string imsValues = Str8ToStr16(IMS_VALUES_1);
    EXPECT_NE(g_clientPtr->GetPtr()->SetImsConfig(INVALID_SLOT_ID, ImsConfigItem::ITEM_IMS_SWITCH_STATUS, imsValues),
        SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetImsConfig_0700
 * @tc.name     input slotId is 1,testing SetImsConfig, input imsValues, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetImsConfig_0700, Function | MediumTest | Level3)
{
    std::u16string imsValues = Str8ToStr16(IMS_VALUES_0);
    EXPECT_NE(
        g_clientPtr->GetPtr()->SetImsConfig(SLOT_ID_3, ImsConfigItem::ITEM_IMS_SWITCH_STATUS, imsValues), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetImsConfig_1000
 * @tc.name     input slotId is -1,testing SetImsConfig, input imsValues, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetImsConfig_1000, Function | MediumTest | Level3)
{
    std::u16string imsValues = Str8ToStr16(IMS_VALUES_1);
    EXPECT_NE(
        g_clientPtr->GetPtr()->SetImsConfig(INVALID_NEGATIVE_SLOT_ID, ImsConfigItem::ITEM_IMS_SWITCH_STATUS, imsValues),
        SUCCESSFUL);
}

/****************************************** Test GetImsFeatureValue() ***************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_GetImsFeatureValue_0100
 * @tc.name     call SetImsFeatureValue,and testing GetImsFeatureValue,input imsValues is 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetImsFeatureValue_0100, Function | MediumTest | Level3)
{
    int imsValues = 0;
    EXPECT_EQ(
        g_clientPtr->GetPtr()->SetImsFeatureValue(SLOT_ID, FeatureType::TYPE_VOICE_OVER_LTE, imsValues), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(
        g_updateReportId, CallResultReportId::SET_IMS_FEATURE_VALUE_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);

    EXPECT_EQ(g_clientPtr->GetPtr()->GetImsFeatureValue(SLOT_ID, FeatureType::TYPE_VOICE_OVER_LTE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(
        g_updateReportId, CallResultReportId::GET_IMS_FEATURE_VALUE_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("value"), false, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetImsFeatureValue_0200
 * @tc.name     call SetImsFeatureValue,and testing GetImsFeatureValue,input imsValues is 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetImsFeatureValue_0200, Function | MediumTest | Level3)
{
    int imsValues = 0;
    EXPECT_EQ(
        g_clientPtr->GetPtr()->SetImsFeatureValue(SLOT_ID, FeatureType::TYPE_VIDEO_OVER_LTE, imsValues), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(
        g_updateReportId, CallResultReportId::SET_IMS_FEATURE_VALUE_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);

    EXPECT_EQ(g_clientPtr->GetPtr()->GetImsFeatureValue(SLOT_ID, FeatureType::TYPE_VIDEO_OVER_LTE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(
        g_updateReportId, CallResultReportId::GET_IMS_FEATURE_VALUE_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("value"), false, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetImsFeatureValue_0300
 * @tc.name     input slotId is -1,testing GetImsFeatureValue, input TYPE_VOICE_OVER_LTE, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetImsFeatureValue_0300, Function | MediumTest | Level3)
{
    EXPECT_NE(g_clientPtr->GetPtr()->GetImsFeatureValue(INVALID_NEGATIVE_SLOT_ID, FeatureType::TYPE_VOICE_OVER_LTE),
        SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetImsFeatureValue_0400
 * @tc.name     input slotId is 2,testing GetImsFeatureValue, input TYPE_VOICE_OVER_LTE, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetImsFeatureValue_0400, Function | MediumTest | Level3)
{
    EXPECT_NE(g_clientPtr->GetPtr()->GetImsFeatureValue(INVALID_SLOT_ID, FeatureType::TYPE_VOICE_OVER_LTE), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetImsFeatureValue_0500
 * @tc.name     input slotId is 1,testing GetImsFeatureValue, input TYPE_VOICE_OVER_LTE, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetImsFeatureValue_0500, Function | MediumTest | Level3)
{
    EXPECT_NE(g_clientPtr->GetPtr()->GetImsFeatureValue(SLOT_ID_3, FeatureType::TYPE_VOICE_OVER_LTE), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetImsFeatureValue_0800
 * @tc.name     call SetImsFeatureValue,and testing GetImsFeatureValue,input imsValues is 1
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetImsFeatureValue_0800, Function | MediumTest | Level3)
{
    int imsValues = 1;
    EXPECT_EQ(
        g_clientPtr->GetPtr()->SetImsFeatureValue(SLOT_ID, FeatureType::TYPE_VOICE_OVER_LTE, imsValues), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(
        g_updateReportId, CallResultReportId::SET_IMS_FEATURE_VALUE_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);

    EXPECT_EQ(g_clientPtr->GetPtr()->GetImsFeatureValue(SLOT_ID, FeatureType::TYPE_VOICE_OVER_LTE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(
        g_updateReportId, CallResultReportId::GET_IMS_FEATURE_VALUE_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("value"), true, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetImsFeatureValue_0900
 * @tc.name     call SetImsFeatureValue,and testing GetImsFeatureValue,input imsValues is 1
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetImsFeatureValue_0900, Function | MediumTest | Level3)
{
    int imsValues = 1;
    EXPECT_EQ(
        g_clientPtr->GetPtr()->SetImsFeatureValue(SLOT_ID, FeatureType::TYPE_VIDEO_OVER_LTE, imsValues), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(
        g_updateReportId, CallResultReportId::SET_IMS_FEATURE_VALUE_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);

    EXPECT_EQ(g_clientPtr->GetPtr()->GetImsFeatureValue(SLOT_ID, FeatureType::TYPE_VIDEO_OVER_LTE), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(
        g_updateReportId, CallResultReportId::GET_IMS_FEATURE_VALUE_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("value"), true, SLEEP_50_MS, SLEEP_1000_MS);
}

/****************************************** Test SetImsFeatureValue() ***************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SetImsFeatureValue_0100
 * @tc.name     testing SetImsFeatureValue,input TYPE_VOICE_OVER_LTE and imsValues
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetImsFeatureValue_0100, Function | MediumTest | Level3)
{
    int imsValues = 0;
    EXPECT_EQ(
        g_clientPtr->GetPtr()->SetImsFeatureValue(SLOT_ID, FeatureType::TYPE_VOICE_OVER_LTE, imsValues), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(
        g_updateReportId, CallResultReportId::SET_IMS_FEATURE_VALUE_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetImsFeatureValue_0200
 * @tc.name     testing SetImsFeatureValue,input TYPE_VOICE_OVER_LTE and imsValues
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetImsFeatureValue_0200, Function | MediumTest | Level3)
{
    int imsValues = 1;
    EXPECT_EQ(
        g_clientPtr->GetPtr()->SetImsFeatureValue(SLOT_ID, FeatureType::TYPE_VOICE_OVER_LTE, imsValues), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(
        g_updateReportId, CallResultReportId::SET_IMS_FEATURE_VALUE_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetImsFeatureValue_0300
 * @tc.name     testing SetImsFeatureValue,input TYPE_VIDEO_OVER_LTE and imsValues
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetImsFeatureValue_0300, Function | MediumTest | Level3)
{
    int imsValues = 0;
    EXPECT_EQ(
        g_clientPtr->GetPtr()->SetImsFeatureValue(SLOT_ID, FeatureType::TYPE_VIDEO_OVER_LTE, imsValues), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(
        g_updateReportId, CallResultReportId::SET_IMS_FEATURE_VALUE_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetImsFeatureValue_0400
 * @tc.name     testing SetImsFeatureValue,input TYPE_VIDEO_OVER_LTE and imsValues
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetImsFeatureValue_0400, Function | MediumTest | Level3)
{
    int imsValues = 1;
    EXPECT_EQ(
        g_clientPtr->GetPtr()->SetImsFeatureValue(SLOT_ID, FeatureType::TYPE_VIDEO_OVER_LTE, imsValues), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(
        g_updateReportId, CallResultReportId::SET_IMS_FEATURE_VALUE_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetImsFeatureValue_0500
 * @tc.name     input slotId is -1,testing SetImsFeatureValue, input imsValues, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetImsFeatureValue_0500, Function | MediumTest | Level3)
{
    int imsValues = 0;
    EXPECT_NE(g_clientPtr->GetPtr()->SetImsFeatureValue(
                  INVALID_NEGATIVE_SLOT_ID, FeatureType::TYPE_VOICE_OVER_LTE, imsValues),
        SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetImsFeatureValue_0600
 * @tc.name     input slotId is 2,testing SetImsFeatureValue, input imsValues, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetImsFeatureValue_0600, Function | MediumTest | Level3)
{
    int imsValues = 0;
    EXPECT_NE(g_clientPtr->GetPtr()->SetImsFeatureValue(INVALID_SLOT_ID, FeatureType::TYPE_VOICE_OVER_LTE, imsValues),
        SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetImsFeatureValue_0700
 * @tc.name     input slotId is 1,testing SetImsFeatureValue, input imsValues, return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetImsFeatureValue_0700, Function | MediumTest | Level3)
{
    int imsValues = 0;
    EXPECT_NE(
        g_clientPtr->GetPtr()->SetImsFeatureValue(SLOT_ID_3, FeatureType::TYPE_VOICE_OVER_LTE, imsValues), SUCCESSFUL);
}

/****************************************** Test UpdateImsCallMode() ***************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_UpdateImsCallMode_0100
 * @tc.name     testing UpdateImsCallMode,add a active call,input CALL_MODE_SEND_RECEIVE
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_UpdateImsCallMode_0100, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(UNICOM_OPERATOR_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    if (CallManagerFunctionTest::HasActiveStatus()) {
        EXPECT_EQ(
            g_clientPtr->GetPtr()->UpdateImsCallMode(g_newCallId, ImsCallMode::CALL_MODE_SEND_RECEIVE), SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            g_updateReportId, CallResultReportId::UPDATE_MEDIA_MODE_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
        LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
        sleep(SLEEP_2_SEC);
        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        EXPECT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
    }
}

/**
 * @tc.number   Telephony_CallManager_IMS_UpdateImsCallMode_0200
 * @tc.name     testing UpdateImsCallMode,add a active call,and call UpdateImsCallMode input CALL_MODE_SEND_RECEIVE
 *              call UpdateImsCallMode input CALL_MODE_AUDIO_ONLY again
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_UpdateImsCallMode_0200, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(UNICOM_OPERATOR_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    if (CallManagerFunctionTest::HasActiveStatus()) {
        EXPECT_EQ(
            g_clientPtr->GetPtr()->UpdateImsCallMode(g_newCallId, ImsCallMode::CALL_MODE_SEND_RECEIVE), SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            g_updateReportId, CallResultReportId::UPDATE_MEDIA_MODE_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
        LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
        EXPECT_EQ(g_clientPtr->GetPtr()->UpdateImsCallMode(g_newCallId, ImsCallMode::CALL_MODE_AUDIO_ONLY), SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            g_updateReportId, CallResultReportId::UPDATE_MEDIA_MODE_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
        LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);

        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        EXPECT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
    }
}

/**
 * @tc.number   Telephony_CallManager_IMS_UpdateImsCallMode_0700
 * @tc.name     testing UpdateImsCallMode,input CALL_MODE_SEND_RECEIVE and callId 999
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_UpdateImsCallMode_0700, Function | MediumTest | Level3)
{
    EXPECT_NE(
        g_clientPtr->GetPtr()->UpdateImsCallMode(FALSE_CALLID_999, ImsCallMode::CALL_MODE_SEND_RECEIVE), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_UpdateImsCallMode_1000
 * @tc.name     testing UpdateImsCallMode,add a active call,input CALL_MODE_SEND_ONLY
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_UpdateImsCallMode_1000, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(UNICOM_OPERATOR_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    if (CallManagerFunctionTest::HasActiveStatus()) {
        EXPECT_EQ(g_clientPtr->GetPtr()->UpdateImsCallMode(g_newCallId, ImsCallMode::CALL_MODE_SEND_ONLY), SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            g_updateReportId, CallResultReportId::UPDATE_MEDIA_MODE_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
        LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);

        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        EXPECT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
    }
}

/**
 * @tc.number   Telephony_CallManager_IMS_UpdateImsCallMode_1100
 * @tc.name     testing UpdateImsCallMode,add a active call,input CALL_MODE_RECEIVE_ONLY
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_UpdateImsCallMode_1100, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(UNICOM_OPERATOR_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    if (CallManagerFunctionTest::HasActiveStatus()) {
        EXPECT_EQ(
            g_clientPtr->GetPtr()->UpdateImsCallMode(g_newCallId, ImsCallMode::CALL_MODE_RECEIVE_ONLY), SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            g_updateReportId, CallResultReportId::UPDATE_MEDIA_MODE_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
        LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);

        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        EXPECT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
    }
}

/**
 * @tc.number   Telephony_CallManager_IMS_UpdateImsCallMode_1200
 * @tc.name     testing UpdateImsCallMode,add a active call,and call UpdateImsCallMode input CALL_MODE_SEND_RECEIVE
 *              and call UpdateImsCallMode input CALL_MODE_VIDEO_PAUSED again
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_UpdateImsCallMode_1200, Function | MediumTest | Level3)
{
    int ret = Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);
    sleep(SLEEP_8_SEC);
    if (CallManagerFunctionTest::HasActiveStatus()) {
        EXPECT_EQ(
            g_clientPtr->GetPtr()->UpdateImsCallMode(g_newCallId, ImsCallMode::CALL_MODE_SEND_RECEIVE), SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            g_updateReportId, CallResultReportId::UPDATE_MEDIA_MODE_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
        LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
        EXPECT_EQ(
            g_clientPtr->GetPtr()->UpdateImsCallMode(g_newCallId, ImsCallMode::CALL_MODE_VIDEO_PAUSED), SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            g_updateReportId, CallResultReportId::UPDATE_MEDIA_MODE_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
        LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);

        int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
        EXPECT_EQ(hangUpRet, SUCCESSFUL);
        LOCK_NUM_WHILE_NE(
            HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
    }
}

/****************************************** Test RegisterCallBack() ***************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_RegisterCallBack_0700
 * @tc.name     testing RegisterCallBack,input invalidPhonyNumber
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_RegisterCallBack_0700, Function | MediumTest | Level3)
{
    std::string invalidPhonyNumber = "012345678901234567890";
    int ret = Dial(Str8ToStr16(invalidPhonyNumber));
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);

    int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
    EXPECT_EQ(hangUpRet, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateCause, static_cast<DisconnectedDetails>(SUCCESSFUL), SLEEP_50_MS, SLEEP_30000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_RegisterCallBack_0800
 * @tc.name     testing RegisterCallBack,input TARGET_PHONY_NUMBER and DIAL_OTT_TYPE
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_RegisterCallBack_0800, Function | MediumTest | Level3)
{
    AppExecFwk::PacMap dialInfo;
    dialInfo.PutIntValue("accountId", SLOT_ID);
    dialInfo.PutIntValue("videoState", (int)VideoStateType::TYPE_VOICE);
    dialInfo.PutIntValue("dialScene", (int)DialScene::CALL_NORMAL);
    dialInfo.PutIntValue("dialType", (int)DialType::DIAL_OTT_TYPE);
    int ret = g_clientPtr->GetPtr()->DialCall(Str8ToStr16(TARGET_PHONY_NUMBER), dialInfo);
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateEventId, CallAbilityEventId::EVENT_OTT_FUNCTION_UNSUPPORTED, SLEEP_50_MS, SLEEP_1000_MS);
}

/****************************************** Test SetPreviewWindow() ***************************************/

/**
 * @tc.number   Telephony_CallManager_SetPreviewWindow_0700
 * @tc.name     Import coordinateX Y Z height,and invalid width, dial call test SetPreviewWindow(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetPreviewWindow_0700, Function | MediumTest | Level3)
{
    VideoWindow window;
    window.x = 700;
    window.y = 10;
    window.z = 1;
    window.width = -300;
    window.height = 600;

    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_3_SEC);
    ret = g_clientPtr->GetPtr()->SetPreviewWindow(window);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetPreviewWindow_0800
 * @tc.name     Import coordinateX Y Z width,and invalid height, dial call test SetPreviewWindow(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetPreviewWindow_0800, Function | MediumTest | Level3)
{
    VideoWindow window;
    window.x = 700;
    window.y = 10;
    window.z = 0;
    window.width = 300;
    window.height = -600;

    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_3_SEC);
    ret = g_clientPtr->GetPtr()->SetPreviewWindow(window);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetPreviewWindow_0900
 * @tc.name     Import coordinateX Y Z width,and invalid height, dial call test SetPreviewWindow(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetPreviewWindow_0900, Function | MediumTest | Level3)
{
    VideoWindow window;
    window.x = 700;
    window.y = 10;
    window.z = 0;
    window.width = -300;
    window.height = -600;

    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_3_SEC);
    ret = g_clientPtr->GetPtr()->SetPreviewWindow(window);
    EXPECT_NE(ret, SUCCESSFUL);
}

/****************************************** Test SetDisplayWindow() ***************************************/

/**
 * @tc.number   Telephony_CallManager_SetDisplayWindow_0700
 * @tc.name     Import coordinateX Y Z height,and invalid width, dial call test SetDisplayWindow(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetDisplayWindow_0700, Function | MediumTest | Level3)
{
    VideoWindow window;
    window.x = 700;
    window.y = 10;
    window.z = 1;
    window.width = -300;
    window.height = 600;

    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_3_SEC);
    ret = g_clientPtr->GetPtr()->SetDisplayWindow(window);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetDisplayWindow_0800
 * @tc.name     Import coordinateX Y Z width,and invalid height, dial call test SetDisplayWindow(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetDisplayWindow_0800, Function | MediumTest | Level3)
{
    VideoWindow window;
    window.x = 700;
    window.y = 10;
    window.z = 0;
    window.width = 300;
    window.height = -600;

    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_3_SEC);
    ret = g_clientPtr->GetPtr()->SetDisplayWindow(window);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_SetDisplayWindow_0900
 * @tc.name     Import coordinateX Y Z width,and invalid height, dial call test SetDisplayWindow(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerIMSTest, Telephony_CallManager_SetDisplayWindow_0900, Function | MediumTest | Level3)
{
    VideoWindow window;
    window.x = 700;
    window.y = 10;
    window.z = 0;
    window.width = -300;
    window.height = -600;

    int ret = Dial(Str8ToStr16(TARGET_PHONY_NUMBER));
    ASSERT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    sleep(SLEEP_3_SEC);
    ret = g_clientPtr->GetPtr()->SetDisplayWindow(window);
    EXPECT_NE(ret, SUCCESSFUL);
}
