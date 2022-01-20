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

/********************************************* Test HoldCall() **************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_HoldCall_0900
 * @tc.name     test HoldCall() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_HoldCall_0900, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int ret = Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    EXPECT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_12000_MS);

    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++) {
        g_clientPtr->GetPtr()->HoldCall(g_newCallId);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
    int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
    ASSERT_EQ(hangUpRet, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
}

/********************************************* Test UnHoldCall() **************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_UnHoldCall_0900
 * @tc.name     test UnHoldCall() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_UnHoldCall_0900, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int ret = Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    EXPECT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_12000_MS);
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++) {
        g_clientPtr->GetPtr()->UnHoldCall(g_newCallId);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
    int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
    ASSERT_EQ(hangUpRet, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
}

/********************************************* Test SwitchCall() **************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SwitchCall_1200
 * @tc.name     test SwitchCall() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_SwitchCall_1200, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    int ret = Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
    EXPECT_EQ(ret, SUCCESSFUL);

    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_12000_MS);
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++) {
        g_clientPtr->GetPtr()->SwitchCall(g_newCallId);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/************************************ Test SetCallWaiting() *************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallWaiting_1000
 * @tc.name     test SetCallWaiting() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_SetCallWaiting_1000, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++) {
        g_clientPtr->GetPtr()->SetCallWaiting(SLOT_ID, true);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/************************************ Test GetCallWaiting() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallWaiting_0800
 * @tc.name     test GetCallWaiting() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_GetCallWaiting_0800, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++) {
        g_clientPtr->GetPtr()->GetCallWaiting(SLOT_ID);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/************************************ Test SetCallRestriction() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_3300
 * @tc.name     test SetCallRestriction() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(
    CallManagerPerformanceTest, Telephony_CallManager_IMS_SetCallRestriction_3300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ROAMING_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;

    for (int i = 0; i < TEST_RUN_TIME_20; i++) {
        g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/************************************ Test GetCallRestriction() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallRestriction_2000
 * @tc.name     test GetCallRestriction() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(
    CallManagerPerformanceTest, Telephony_CallManager_IMS_GetCallRestriction_2000, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ROAMING_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction);

    for (int i = 0; i < TEST_RUN_TIME_20; i++) {
        g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/************************************ Test SetCallTransferInfo() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_3000
 * @tc.name     test SetCallTransferInfo() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(
    CallManagerPerformanceTest, Telephony_CallManager_IMS_SetCallTransferInfo_3000, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    for (int i = 0; i < TEST_RUN_TIME_20; i++) {
        g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/************************************ Test GetCallTransferInfo() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallTransferInfo_1600
 * @tc.name     test GetCallTransferInfo() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(
    CallManagerPerformanceTest, Telephony_CallManager_IMS_GetCallTransferInfo_1600, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);

    for (int i = 0; i < TEST_RUN_TIME_20; i++) {
        g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/************************************ Test EnableImsSwitch() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_EnableVoLte_0700
 * @tc.name     test EnableImsSwitch() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_EnableVoLte_0700, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++) {
        g_clientPtr->GetPtr()->EnableImsSwitch(SLOT_ID);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/************************************ Test DisableImsSwitch() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_DisableVoLte_0900
 * @tc.name     test DisableImsSwitch() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_DisableVoLte_0900, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++) {
        g_clientPtr->GetPtr()->DisableImsSwitch(SLOT_ID);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}

/************************************ Test IsImsSwitchEnabled() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_IsVoLteEnabled_0800
 * @tc.name     test IsImsSwitchEnabled() 20 times
 * @tc.desc     Performance test
 */
HWTEST_F(CallManagerPerformanceTest, Telephony_CallManager_IMS_IsVoLteEnabled_0800, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int i = 0; i < TEST_RUN_TIME_20; i++) {
        g_clientPtr->GetPtr()->IsImsSwitchEnabled(SLOT_ID);
    }
    int useTimeUs = timeHelper.GetUseTimeUs() / TEST_RUN_TIME_20;
    LOG("useTimeUs = %d\n", useTimeUs);
    EXPECT_LE(useTimeUs, USEC_1000);
}