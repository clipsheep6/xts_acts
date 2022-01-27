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

#define CALLMANAGER_MODEM_TEST
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

/******************************************* Test SetCallWaiting() *********************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallWaiting_0100
 * @tc.name     Import slotId 0,set callwaiting to be open,test SetCallWaiting()
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallWaiting_0100, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->SetCallWaiting(SLOT_ID, true);
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_WAITING_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallWaiting_0200
 * @tc.name     Import slotId 0,set callwaiting to be off,test SetCallWaiting()
 *              Restore the default setting to on
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallWaiting_0200, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->SetCallWaiting(SLOT_ID, false);
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_WAITING_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    ret = g_clientPtr->GetPtr()->SetCallWaiting(SLOT_ID, true);
    ASSERT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallWaiting_0300
 * @tc.name     Import slotId 0,set callwaiting to be open,and open callwaiting again,test SetCallWaiting()
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallWaiting_0300, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->SetCallWaiting(SLOT_ID, true);
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_WAITING_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    ret = g_clientPtr->GetPtr()->SetCallWaiting(SLOT_ID, true);
    ASSERT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallWaiting_0400
 * @tc.name     Import slotId 0,set callwaiting to be off,and off callwaiting again,test SetCallWaiting()
 *              Restore the default setting to on
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallWaiting_0400, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->SetCallWaiting(SLOT_ID, false);
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_WAITING_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    ret = g_clientPtr->GetPtr()->SetCallWaiting(SLOT_ID, false);
    ASSERT_EQ(ret, SUCCESSFUL);
    ret = g_clientPtr->GetPtr()->SetCallWaiting(SLOT_ID, true);
    ASSERT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallWaiting_0500
 * @tc.name     Import slotId 0,set callwaiting to be open,and off callwaiting again,test SetCallWaiting()
 *              Restore the default setting to on
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallWaiting_0500, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->SetCallWaiting(SLOT_ID, true);
    ASSERT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_WAITING_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    ret = g_clientPtr->GetPtr()->SetCallWaiting(SLOT_ID, false);
    ASSERT_EQ(ret, SUCCESSFUL);
    ret = g_clientPtr->GetPtr()->SetCallWaiting(SLOT_ID, true);
    ASSERT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallWaiting_0600
 * @tc.name     Import slotId 1,set callwaiting to be open,test SetCallWaiting(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallWaiting_0600, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->SetCallWaiting(SLOT_ID_3, true);
    ASSERT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallWaiting_0700
 * @tc.name     Import slotId -1,set callwaiting to be open,test SetCallWaiting(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallWaiting_0700, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->SetCallWaiting(INVALID_NEGATIVE_SLOT_ID, true);
    ASSERT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallWaiting_0800
 * @tc.name     Import slotId 2,set callwaiting to be open,test SetCallWaiting(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallWaiting_0800, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->SetCallWaiting(INVALID_SLOT_ID, false);
    ASSERT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallWaiting_1100
 * @tc.name     Import slotId 1,set callwaiting to be open,test SetCallWaiting(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallWaiting_1100, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->SetCallWaiting(SLOT_ID_3, false);
    ASSERT_NE(ret, SUCCESSFUL);
}

/******************************************* Test GetCallWaiting() *********************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallWaiting_0100
 * @tc.name     Import slotId 0, test GetCallWaiting()
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallWaiting_0100, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->GetCallWaiting(SLOT_ID);
    EXPECT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::GET_CALL_WAITING_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("status"), OPEN, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallWaiting_0200
 * @tc.name     Import slotId 1,test GetCallWaiting()
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallWaiting_0200, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->GetCallWaiting(SLOT_ID_3);
    EXPECT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallWaiting_0300
 * @tc.name     Import slotId 0,set callwaiting to be OPEN,test GetCallWaiting()
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallWaiting_0300, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->SetCallWaiting(SLOT_ID, true);
    ASSERT_EQ(ret, SUCCESSFUL);
    ret = g_clientPtr->GetPtr()->GetCallWaiting(SLOT_ID);
    EXPECT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::GET_CALL_WAITING_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("status"), OPEN, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallWaiting_0400
 * @tc.name     Import slotId 0,set callwaiting to be off,test GetCallWaiting()
 *              Restore the default setting to on
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallWaiting_0400, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->SetCallWaiting(SLOT_ID, false);
    ASSERT_EQ(ret, SUCCESSFUL);
    ret = g_clientPtr->GetPtr()->GetCallWaiting(SLOT_ID);
    EXPECT_EQ(ret, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::GET_CALL_WAITING_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("status"), OFF, SLEEP_50_MS, SLEEP_1000_MS);
    ret = g_clientPtr->GetPtr()->SetCallWaiting(SLOT_ID, true);
    EXPECT_EQ(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallWaiting_0500
 * @tc.name     Import slotId 1,test GetCallWaiting(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallWaiting_0500, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->GetCallWaiting(INVALID_NEGATIVE_SLOT_ID);
    ASSERT_NE(ret, SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallWaiting_0600
 * @tc.name     Import slotId 2,test GetCallWaiting(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallWaiting_0600, Function | MediumTest | Level3)
{
    int ret = g_clientPtr->GetPtr()->GetCallWaiting(INVALID_SLOT_ID);
    ASSERT_NE(ret, SUCCESSFUL);
}

/****************************************** Test SetCallRestriction() ***************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_0100
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_INCOMING, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_DEACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallRestriction_0100, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_0200
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_INCOMING, mode RESTRICTION_MODE_DEACTIVATION,
 *              test SetCallRestriction(), return 0,
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallRestriction_0200, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_0300
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_OUTGOING, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_DEACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallRestriction_0300, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_OUTGOING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_0400
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_OUTGOING, mode RESTRICTION_MODE_DEACTIVATION,
 *              test SetCallRestriction(), return 0,
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallRestriction_0400, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_OUTGOING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_0500
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_DEACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallRestriction_0500, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_INTERNATIONAL;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_0600
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL, mode RESTRICTION_MODE_DEACTIVATION,
 *              test SetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallRestriction_0600, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_INTERNATIONAL;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_0700
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_DEACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallRestriction_0700, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_0800
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME, mode RESTRICTION_MODE_DEACTIVATION,
 *              test SetCallRestriction(), return 0,
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallRestriction_0800, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_0900
 * @tc.name     enable fac RESTRICTION_TYPE_ROAMING_INCOMING, mode RESTRICTION_MODE_ACTIVATION,
 *              test SetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_DEACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallRestriction_0900, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ROAMING_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_1000
 * @tc.name     enable fac RESTRICTION_TYPE_ROAMING_INCOMING, mode RESTRICTION_MODE_DEACTIVATION,
 *              test SetCallRestriction(), return 0,
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallRestriction_1000, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ROAMING_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_1100
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_INCOMING, mode RESTRICTION_MODE_ACTIVATION,
 *              INVALID_CALL_PASSWORD 0001, test SetCallRestriction(),Failed to register callback result Procedure
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallRestriction_1100, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, INVALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), ERROR_VALUES, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_1200
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_INCOMING, mode RESTRICTION_MODE_ACTIVATION,
 *              INVALID_NEGATIVE_SLOT_ID -1, test SetCallRestriction(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallRestriction_1200, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallRestriction(INVALID_NEGATIVE_SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_1300
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_INCOMING, mode RESTRICTION_MODE_ACTIVATION,INVALID_SLOT_ID of 2
 *              test SetCallRestriction(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallRestriction_1300, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_INCOMING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallRestriction(INVALID_SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_1400
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_OUTGOING, mode RESTRICTION_MODE_ACTIVATION,SLOT_ID_3 of 1
 *              test SetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_DEACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallRestriction_1400, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_OUTGOING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID_3, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OFF);

    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_1500
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_OUTGOING, mode INVALID_NEGATIVE_MODE of -1,SLOT_ID of 0
 *              test SetCallRestriction(), return 0, result ACTIVE error
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallRestriction_1500, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_OUTGOING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode(INVALID_NEGATIVE_MODE);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_1600
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_OUTGOING, mode INVALID_MODE of 2,SLOT_ID of 0
 *              test SetCallRestriction(), return 0, result ACTIVE error
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallRestriction_1600, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_OUTGOING;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode(INVALID_MODE);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_1700
 * @tc.name     enable fac INVALID_NEGATIVE_CALL_TYPE of -1, mode RESTRICTION_MODE_DEACTIVATION,SLOT_ID of 0
 *              test SetCallRestriction(), return 0, result ACTIVE error
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallRestriction_1700, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType(INVALID_NEGATIVE_CALL_TYPE);
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_1800
 * @tc.name     enable fac INVALID_RESTRICTION_TYPE of 8, mode RESTRICTION_MODE_DEACTIVATION,SLOT_ID of 0
 *              test SetCallRestriction(), return 0, result ACTIVE error
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallRestriction_1800, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType(INVALID_RESTRICTION_TYPE);
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_1900
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_CALLS, mode RESTRICTION_MODE_ACTIVATION,SLOT_ID of 0
 *              test SetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_DEACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallRestriction_1900, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_CALLS;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_2000
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_CALLS, mode RESTRICTION_MODE_DEACTIVATION,SLOT_ID of 0
 *              test SetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallRestriction_2000, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_CALLS;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_2100
 * @tc.name     enable fac RESTRICTION_TYPE_OUTGOING_SERVICES, mode RESTRICTION_MODE_ACTIVATION,SLOT_ID of 0
 *              test SetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_DEACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallRestriction_2100, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_OUTGOING_SERVICES;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_2200
 * @tc.name     enable fac RESTRICTION_TYPE_OUTGOING_SERVICES, mode RESTRICTION_MODE_DEACTIVATION,SLOT_ID of 0
 *              test SetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallRestriction_2200, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_OUTGOING_SERVICES;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_2300
 * @tc.name     enable fac RESTRICTION_TYPE_INCOMING_SERVICES, mode RESTRICTION_MODE_ACTIVATION,SLOT_ID of 0
 *              test SetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_DEACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallRestriction_2300, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_INCOMING_SERVICES;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallRestriction_2400
 * @tc.name     enable fac RESTRICTION_TYPE_INCOMING_SERVICES, mode RESTRICTION_MODE_DEACTIVATION,SLOT_ID of 0
 *              test SetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallRestriction_2400, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_INCOMING_SERVICES;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/************************************* Test GetCallRestriction() ***************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallRestriction_0100
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_INCOMING, mode RESTRICTION_MODE_ACTIVATION,
 *              test GetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_DEACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallRestriction_0100, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_INCOMING;
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OPEN);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallRestriction_0200
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_INCOMING, mode RESTRICTION_MODE_DEACTIVATION,
 *              test GetCallRestriction(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallRestriction_0200, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_INCOMING;
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OFF);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallRestriction_0300
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_OUTGOING, mode RESTRICTION_MODE_ACTIVATION,
 *              test GetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_DEACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallRestriction_0300, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_OUTGOING;
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OPEN);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallRestriction_0400
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_OUTGOING, mode RESTRICTION_MODE_DEACTIVATION,
 *              test GetCallRestriction(), return 0,
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallRestriction_0400, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_OUTGOING;
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OFF);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallRestriction_0500
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL, mode RESTRICTION_MODE_ACTIVATION,
 *              test GetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_DEACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallRestriction_0500, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_INTERNATIONAL;
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OPEN);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallRestriction_0600
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL, mode RESTRICTION_MODE_DEACTIVATION,
 *              test GetCallRestriction(), return 0,
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallRestriction_0600, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_INTERNATIONAL;
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OFF);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallRestriction_0700
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME, mode RESTRICTION_MODE_ACTIVATION,
 *              test GetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_DEACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallRestriction_0700, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME;
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OPEN);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallRestriction_0800
 * @tc.name     enable fac RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME, mode RESTRICTION_MODE_DEACTIVATION,
 *              test GetCallRestriction(), return 0,
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallRestriction_0800, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME;
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OFF);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallRestriction_0900
 * @tc.name     enable fac RESTRICTION_TYPE_ROAMING_INCOMING, mode RESTRICTION_MODE_ACTIVATION,
 *              test GetCallRestriction(), return 0,Restoring the Initial Environment of RESTRICTION_MODE_DEACTIVATION
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallRestriction_0900, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ROAMING_INCOMING;
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_ACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OPEN);
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallRestriction_1000
 * @tc.name     enable fac RESTRICTION_TYPE_ROAMING_INCOMING, mode RESTRICTION_MODE_DEACTIVATION,
 *              test GetCallRestriction(), return 0,
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallRestriction_1000, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ROAMING_INCOMING;
    setCallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    int ret = strcpy_s(setCallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);

    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, setCallRestriction), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    TestRestrictionCallBack(OFF);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallRestriction_1100
 * @tc.name     enable fac RESTRICTION_TYPE_ROAMING_INCOMING, INVALID_NEGATIVE_SLOT_ID -1
 *              test GetCallRestriction(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallRestriction_1100, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ROAMING_INCOMING;

    EXPECT_NE(g_clientPtr->GetPtr()->GetCallRestriction(INVALID_NEGATIVE_SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallRestriction_1200
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_CALLS
 *              test GetCallRestriction(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallRestriction_1200, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_CALLS;

    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::GET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallRestriction_1300
 * @tc.name     enable fac RESTRICTION_TYPE_OUTGOING_SERVICES
 *              test GetCallRestriction(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallRestriction_1300, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_OUTGOING_SERVICES;

    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::GET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallRestriction_1400
 * @tc.name     enable fac RESTRICTION_TYPE_INCOMING_SERVICES
 *              test GetCallRestriction(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallRestriction_1400, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_INCOMING_SERVICES;

    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::GET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallRestriction_1500
 * @tc.name     enable fac RESTRICTION_TYPE_ROAMING_INCOMING, INVALID_SLOT_ID 2
 *              test GetCallRestriction(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallRestriction_1500, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ROAMING_INCOMING;

    EXPECT_NE(g_clientPtr->GetPtr()->GetCallRestriction(INVALID_SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallRestriction_1600
 * @tc.name     enable fac RESTRICTION_TYPE_ALL_INCOMING, test GetCallRestriction(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallRestriction_1600, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ALL_INCOMING;
    EXPECT_NE(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID_3, setCallRestriction.fac), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallRestriction_1700
 * @tc.name     enable fac INVALID_NEGATIVE_CALL_TYPE -1,
 *              test GetCallRestriction(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallRestriction_1700, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType(INVALID_NEGATIVE_CALL_TYPE);

    EXPECT_NE(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID, setCallRestriction.fac), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallRestriction_1800
 * @tc.name     enable fac INVALID_RESTRICTION_TYPE 8,
 *              test GetCallRestriction(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallRestriction_1800, Function | MediumTest | Level3)
{
    CallRestrictionInfo setCallRestriction;
    setCallRestriction.fac = CallRestrictionType(INVALID_RESTRICTION_TYPE);

    EXPECT_NE(g_clientPtr->GetPtr()->GetCallRestriction(SLOT_ID_3, setCallRestriction.fac), SUCCESSFUL);
}

/************************************** Test SetCallTransferInfo() ***********************************/

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_0100
 * @tc.name     enable type TRANSFER_TYPE_BUSY, settingType ENABLE, test SetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallTransferInfo_0100, Function | MediumTest | Level3)
{
    char invalidPhoneNumber[BUFSIZ] =
        "12345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901";
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_BUSY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, invalidPhoneNumber);
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_0200
 * @tc.name     enable type TRANSFER_TYPE_BUSY, settingType ENABLE, test SetCallTransferInfo(), return 0
 *              Restoring the Initial Environment of DISABLE
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallTransferInfo_0200, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_BUSY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_0300
 * @tc.name     enable type TRANSFER_TYPE_BUSY, settingType DISABLE, test SetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallTransferInfo_0300, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_BUSY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_0400
 * @tc.name     enable type TRANSFER_TYPE_NO_REPLY, settingType ENABLE, test SetCallTransferInfo(), return 0
 *              Restoring the Initial Environment of DISABLE
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallTransferInfo_0400, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_NO_REPLY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_0500
 * @tc.name     enable type TRANSFER_TYPE_NO_REPLY, settingType DISABLE, test SetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallTransferInfo_0500, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_NO_REPLY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_0600
 * @tc.name     enable type TRANSFER_TYPE_NOT_REACHABLE, settingType ENABLE, test SetCallTransferInfo(), return 0
 *              Restoring the Initial Environment of DISABLE
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallTransferInfo_0600, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_NOT_REACHABLE;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_0700
 * @tc.name     enable type TRANSFER_TYPE_NOT_REACHABLE, settingType DISABLE, test SetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallTransferInfo_0700, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_NOT_REACHABLE;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_0800
 * @tc.name     enable type TRANSFER_TYPE_UNCONDITIONAL, settingType ENABLE, test SetCallTransferInfo(), return 0
 *              Restoring the Initial Environment of DISABLE
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallTransferInfo_0800, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_0900
 * @tc.name     enable type TRANSFER_TYPE_UNCONDITIONAL, settingType DISABLE, test SetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallTransferInfo_0900, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_1000
 * @tc.name     enable type TRANSFER_TYPE_BUSY, settingType ENABLE, test SetCallTransferInfo(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallTransferInfo_1000, Function | MediumTest | Level3)
{
    char emptyPhoneNumber[BUFSIZ] = "";
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_BUSY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, emptyPhoneNumber);
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_1100
 * @tc.name     enable type TRANSFER_TYPE_NO_REPLY, settingType DISABLE, test SetCallTransferInfo(), return non-zero
 *              INVALID_NEGATIVE_SLOT_ID -1
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallTransferInfo_1100, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_NO_REPLY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(INVALID_NEGATIVE_SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_1200
 * @tc.name     enable type TRANSFER_TYPE_NO_REPLY, settingType DISABLE, test SetCallTransferInfo(), return non-zero
 *              INVALID_SLOT_ID 2
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallTransferInfo_12000, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_NO_REPLY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(INVALID_SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_1300
 * @tc.name     enable type TRANSFER_TYPE_UNCONDITIONAL, settingType ENABLE,test SetCallTransferInfo(),return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallTransferInfo_1300, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    ASSERT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID_3, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    TestTransferCallBack(OFF);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_1400
 * @tc.name     enable type TRANSFER_TYPE_UNCONDITIONAL, settingType INVALID_NEGATIVE_CALL_TYPE,
 *              test SetCallTransferInfo(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallTransferInfo_1400, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType(INVALID_NEGATIVE_CALL_TYPE);
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_1500
 * @tc.name     enable type TRANSFER_TYPE_UNCONDITIONAL, settingType INVALID_SETTING_TYPE of 5,
 *              test SetCallTransferInfo(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallTransferInfo_1500, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType(INVALID_SETTING_TYPE);
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_1600
 * @tc.name     enable type TRANSFER_TYPE_UNCONDITIONAL, settingType INVALID_MODE of 2,
 *              test SetCallTransferInfo(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallTransferInfo_1600, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType(INVALID_MODE);
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_1700
 * @tc.name     enable type INVALID_NEGATIVE_MODE, settingType REGISTRATION,
 *              test SetCallTransferInfo(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallTransferInfo_1700, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType(INVALID_NEGATIVE_MODE);
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_1800
 * @tc.name     enable type INVALID_TRANSFER_TYPE of 4, settingType REGISTRATION,
 *              test SetCallTransferInfo(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallTransferInfo_1800, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType(INVALID_TRANSFER_TYPE);
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_1900
 * @tc.name     enable type TRANSFER_TYPE_UNCONDITIONAL, settingType ENABLE, test SetCallTransferInfo(),
 *              settingType DISABLE, test SetCallTransferInfo() again,Whether the transferNumber is incorrect return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallTransferInfo_1900, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);

    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, TARGET_PHONY_NUMBER);
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_2000
 * @tc.name     enable type TRANSFER_TYPE_UNCONDITIONAL, settingType DISABLE, test SetCallTransferInfo(),settingType
 *              ENABLE, test SetCallTransferInfo() again,Whether the transferNumber is incorrect return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallTransferInfo_2000, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);

    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, TARGET_PHONY_NUMBER);
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::SET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_2100
 * @tc.name     REGISTER type TRANSFER_TYPE_UNCONDITIONAL, settingType CALL_TRANSFER_REGISTRATION,
 *              test SetCallTransferInfo(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallTransferInfo_2100, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType(CallTransferSettingType::CALL_TRANSFER_REGISTRATION);
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, OBJECT_PHONY_NUMBER);
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_SetCallTransferInfo_2200
 * @tc.name     enable type TRANSFER_TYPE_UNCONDITIONAL, settingType CALL_TRANSFER_ERASURE,
 *              test SetCallTransferInfo(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_SetCallTransferInfo_2200, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ERASURE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, OBJECT_PHONY_NUMBER);
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/************************************ Test GetCallTransferInfo() ***************************************/

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallTransferInfo_0100
 * @tc.name     enable type TRANSFER_TYPE_BUSY, settingType REGISTRATION, test GetCallTransferInfo(), return 0
 *              Restoring the Initial Environment of ERASURE
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallTransferInfo_0100, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_BUSY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    TestTransferCallBack(OPEN);
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallTransferInfo_0200
 * @tc.name     enable type TRANSFER_TYPE_BUSY, settingType ERASURE, test GetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallTransferInfo_0200, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_BUSY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    TestTransferCallBack(OFF);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallTransferInfo_0300
 * @tc.name     enable type TRANSFER_TYPE_NO_REPLY, settingType REGISTRATION, test GetCallTransferInfo(), return 0
 *              Restoring the Initial Environment of ERASURE
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallTransferInfo_0300, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_NO_REPLY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    TestTransferCallBack(OPEN);
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallTransferInfo_0400
 * @tc.name     enable type TRANSFER_TYPE_NO_REPLY, settingType ERASURE, test GetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallTransferInfo_0400, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_NO_REPLY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    TestTransferCallBack(OFF);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallTransferInfo_0500
 * @tc.name     enable type TRANSFER_TYPE_NOT_REACHABLE, settingType REGISTRATION, test GetCallTransferInfo(), return 0
 *              Restoring the Initial Environment of ERASURE
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallTransferInfo_0500, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_NOT_REACHABLE;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    TestTransferCallBack(OPEN);
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallTransferInfo_0600
 * @tc.name     enable type TRANSFER_TYPE_NOT_REACHABLE, settingType ERASURE, test GetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallTransferInfo_0600, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_NOT_REACHABLE;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    TestTransferCallBack(OFF);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallTransferInfo_0700
 * @tc.name     enable type TRANSFER_TYPE_UNCONDITIONAL, settingType REGISTRATION, test GetCallTransferInfo(), return 0
 *              Restoring the Initial Environment of ERASURE
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallTransferInfo_0700, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    TestTransferCallBack(OPEN);
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallTransferInfo_0800
 * @tc.name     enable type TRANSFER_TYPE_UNCONDITIONAL, test GetCallTransferInfo(), return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallTransferInfo_0800, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_DISABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    TestTransferCallBack(OFF);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallTransferInfo_0900
 * @tc.name     enable type TRANSFER_TYPE_BUSY, settingType REGISTRATION, empty phonenumber, return 0
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallTransferInfo_0900, Function | MediumTest | Level3)
{
    char phoneNumber[3] = "";
    CallTransferInfo setCallTransfer;
    setCallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ENABLE;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_BUSY;
    int ret = strcpy_s(setCallTransfer.transferNum, BUFSIZ, phoneNumber);
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_NE(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, setCallTransfer), SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
    TestTransferCallBack(OFF);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallTransferInfo_1000
 * @tc.name     enable type TRANSFER_TYPE_UNCONDITIONAL, test GetCallTransferInfo(), return non-zero
 *              INVALID_NEGATIVE_SLOT_ID -2
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallTransferInfo_1000, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    EXPECT_NE(g_clientPtr->GetPtr()->GetCallTransferInfo(INVALID_NEGATIVE_SLOT_ID, setCallTransfer.type), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallTransferInfo_1100
 * @tc.name     enable type TRANSFER_TYPE_UNCONDITIONAL, test GetCallTransferInfo(), return non-zero
 *              INVALID_SLOT_ID 2
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallTransferInfo_1100, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    EXPECT_NE(g_clientPtr->GetPtr()->GetCallTransferInfo(INVALID_SLOT_ID, setCallTransfer.type), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallTransferInfo_1200
 * @tc.name     enable type TRANSFER_TYPE_UNCONDITIONAL, test GetCallTransferInfo(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallTransferInfo_1200, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    EXPECT_NE(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID_3, setCallTransfer.type), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallTransferInfo_1300
 * @tc.name     enable type INVALID_NEGATIVE_CALL_TYPE, test GetCallTransferInfo(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallTransferInfo_1300, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.type = CallTransferType(INVALID_NEGATIVE_CALL_TYPE);
    EXPECT_NE(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
}

/**
 * @tc.number   Telephony_CallManager_IMS_GetCallTransferInfo_1400
 * @tc.name     enable type INVALID_TRANSFER_TYPE of 4, test GetCallTransferInfo(), return non-zero
 * @tc.desc     Function test
 */
HWTEST_F(CallManagerFunctionTest, Telephony_CallManager_IMS_GetCallTransferInfo_1400, Function | MediumTest | Level3)
{
    CallTransferInfo setCallTransfer;
    setCallTransfer.type = CallTransferType(INVALID_TRANSFER_TYPE);
    EXPECT_NE(g_clientPtr->GetPtr()->GetCallTransferInfo(SLOT_ID, setCallTransfer.type), SUCCESSFUL);
}