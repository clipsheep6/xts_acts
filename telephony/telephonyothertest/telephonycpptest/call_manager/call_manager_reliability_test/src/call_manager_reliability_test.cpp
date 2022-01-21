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

/********************************************* Test HoldCall() ******************************************/
/**
 * @tc.number   Telephony_CallManager_IMS_HoldCall_0800
 * @tc.name     test HoldCall() 5 times, add 3 seconds to prevent blocking by the carrier when dialing too fast
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IMS_HoldCall_0800, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_5; i++) {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);

        if (HasActiveStatus()) {
            ret = g_clientPtr->GetPtr()->HoldCall(g_newCallId);
            EXPECT_EQ(ret, SUCCESSFUL);
            LOCK_NUM_WHILE_NE(
                HasState(g_newCallId, TelCallState::CALL_STATUS_HOLDING), true, SLEEP_50_MS, SLEEP_12000_MS);
            int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
            ASSERT_EQ(hangUpRet, SUCCESSFUL);
            LOCK_NUM_WHILE_NE(
                HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
        } else {
            break;
        }
    }
}

/********************************************* Test UnHoldCall() ************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_UnHoldCall_0800
 * @tc.name     test UnHoldCall() 5 times, add 3 seconds to prevent blocking by the carrier when dialing too fast
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IMS_UnHoldCall_0800, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_5; i++) {
        g_newCallId = FALSE_DEFAULT;
        sleep(SLEEP_3_SEC);
        int ret = Dial(Str8ToStr16(OPERATOR_PHONY_NUMBER));
        ASSERT_EQ(ret, SUCCESSFUL);

        if (HasActiveStatus()) {
            ret = g_clientPtr->GetPtr()->HoldCall(g_newCallId);
            EXPECT_EQ(ret, SUCCESSFUL);
            LOCK_NUM_WHILE_NE(
                HasState(g_newCallId, TelCallState::CALL_STATUS_HOLDING), true, SLEEP_50_MS, SLEEP_12000_MS);
            EXPECT_EQ(g_clientPtr->GetPtr()->UnHoldCall(g_newCallId), 0);
            LOCK_NUM_WHILE_NE(
                HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE), true, SLEEP_50_MS, SLEEP_12000_MS);
            int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
            ASSERT_EQ(hangUpRet, SUCCESSFUL);
            LOCK_NUM_WHILE_NE(
                HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
        } else {
            break;
        }
    }
}

/********************************************* Test SwitchCall() **************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SwitchCall_1100
 * @tc.name     test SwitchCall() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IMS_SwitchCall_1100, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_NE(g_clientPtr->GetPtr()->SwitchCall(FALSE_NEGATIVE_CALLID_100), 0);
    }
}

/************************************ Test SetCallWaiting() *************************************/

/**
 * @tc.number   Telephony_CallManager_SetCallWaiting_0900
 * @tc.name     test SetCallWaiting() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_SetCallWaiting_0900, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_EQ(g_clientPtr->GetPtr()->SetCallWaiting(SLOT_ID, true), 0);
    }
}

/************************************ Test GetCallWaiting() *****************************************/

/**
 * @tc.number   Telephony_CallManager_GetCallWaiting_0700
 * @tc.name     test GetCallWaiting() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_GetCallWaiting_0700, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_EQ(g_clientPtr->GetPtr()->GetCallWaiting(SLOT_ID), 0);
    }
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
}

/************************************ Test SetCallRestriction() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_3200
 * @tc.name     test SetCallRestriction() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(
    CallManagerReliabilityTest, Telephony_CallManager_IMS_SetCallRestriction_3200, Reliability | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ROAMING_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;

    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    }
}

/************************************ Test GetCallRestriction() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallRestriction_1900
 * @tc.name     test GetCallRestriction() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(
    CallManagerReliabilityTest, Telephony_CallManager_IMS_GetCallRestriction_1900, Reliability | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ROAMING_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);

    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    }
}

/************************************ Test SetCallTransferInfo() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_2900
 * @tc.name     test SetCallTransferInfo() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(
    CallManagerReliabilityTest, Telephony_CallManager_IMS_SetCallTransferInfo_2900, Reliability | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    }
}

/************************************ Test GetCallTransferInfo() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallTransferInfo_1500
 * @tc.name     test GetCallTransferInfo() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(
    CallManagerReliabilityTest, Telephony_CallManager_IMS_GetCallTransferInfo_1500, Reliability | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);

    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        ASSERT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    }
}

/************************************ Test EnableImsSwitch() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_EnableImsSwitch_0600
 * @tc.name     test EnableImsSwitch() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IMS_EnableImsSwitch_0600, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        int ret = g_clientPtr->GetPtr()->EnableImsSwitch(SLOT_ID);
        ASSERT_EQ(ret, SUCCESSFUL);
    }
}

/************************************ Test DisableImsSwitch() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_DisableImsSwitch_0800
 * @tc.name     test DisableImsSwitch() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(CallManagerReliabilityTest, Telephony_CallManager_IMS_DisableImsSwitch_0800, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        int ret = g_clientPtr->GetPtr()->DisableImsSwitch(SLOT_ID);
        ASSERT_EQ(ret, SUCCESSFUL);
    }
}

/************************************ Test IsImsSwitchEnabled() *****************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_IsImsSwitchEnabled_0700
 * @tc.name     test IsImsSwitchEnabled() 1000 times
 * @tc.desc     Reliability test
 */
HWTEST_F(
    CallManagerReliabilityTest, Telephony_CallManager_IMS_IsImsSwitchEnabled_0700, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        int ret = g_clientPtr->GetPtr()->IsImsSwitchEnabled(SLOT_ID);
        ASSERT_EQ(ret, SUCCESSFUL);
    }
}