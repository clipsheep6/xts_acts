/**
 * Copyright (c) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "hctest.h"
#include "pms_test.h"

/*
 * @tc.register: register a security suit named "PmsCheckTest"
 * @param: security subsystem name
 * @param: permission_lite module name
 * @param: PmsCheckTest test suit name
 */
LITE_TEST_SUIT(security, permission_lite, PmsCheckTest);

/**
 * @tc.setup: define a setup for test suit, format:"PmsCheckTest + SetUp"
 * @return: true——setup success
 */
static BOOL PmsCheckTestSetUp()
{
    LiteTestPrint("setup\n");
    CreateAppDir();
    return TRUE;
}

/**
 * @tc.teardown: define a setup for test suit, format:"PmsCheckTest + TearDown"
 * @return: true——teardown success
 */
static BOOL PmsCheckTestTearDown()
{
    LiteTestPrint("tearDown\n");
    DeletePermissions(TEST_APP_ID);
    DeletePermissions(TEST_APP_ID2);
    UnLoadPermissions(TEST_TASKID);
    UnLoadPermissions(TEST_TASKID2);
    return TRUE;
}

/**
 * @tc.name: PmsCheckTest.PmsCheckTest001
 * @tc.desc: Check permissions to large and small PIDs
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsCheckTest, PmsCheckTest001, Level1)
{
    LiteTestPrint("PmsCheckTest001 begin\n");
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);
  
    // large PID
    ret = LoadPermissions(TEST_APP_ID, MAX_PID);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);
    ret = GrantRuntimePermission(MAX_PID, g_systemPers[0].name);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);
    ret = CheckPermissionStat(MAX_PID, g_systemPers[0].name);
    TEST_ASSERT_EQUAL_INT(GRANTED, ret);

    UnLoadPermissions(MAX_PID);
    LoadPermissions(TEST_APP_ID, MIN_PID);

    // small pid
    ret = LoadPermissions(TEST_APP_ID, MIN_PID);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);
    ret = GrantRuntimePermission(MIN_PID, g_systemPers[0].name);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);
    ret = CheckPermissionStat(MIN_PID, g_systemPers[0].name);
    TEST_ASSERT_EQUAL_INT(GRANTED, ret);

    UnLoadPermissions(MIN_PID);
    DeletePermissions(TEST_APP_ID);

    LiteTestPrint("PmsCheckTest001 End!\n");
}

/**
 * @tc.name: PmsCheckTest.PmsCheckTest002
 * @tc.desc: check system_grant permissions
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsCheckTest, PmsCheckTest002, Level1)
{
    LiteTestPrint("PmsCheckTest002 begin\n");
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);
  
    ret = LoadPermissions(TEST_APP_ID, TEST_TASKID);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = CheckPermissionStat(TEST_TASKID, g_systemPers[SYS_PERM_NUM - 1].name);
    TEST_ASSERT_EQUAL_INT(GRANTED, ret);

    UnLoadPermissions(TEST_TASKID);
    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("PmsCheckTest002 End!\n");
}

/**
 * @tc.name: PmsCheckTest.PmsCheckTest003
 * @tc.desc: check user_grant permissions
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsCheckTest, PmsCheckTest003, Level1)
{
    LiteTestPrint("PmsCheckTest003 begin\n");
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);
  
    ret = LoadPermissions(TEST_APP_ID, TEST_TASKID);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = CheckPermissionStat(TEST_TASKID, g_systemPers[0].name);
    TEST_ASSERT_EQUAL_INT(NOT_GRANTED, ret);

    UnLoadPermissions(TEST_TASKID);
    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("PmsCheckTest003 End!\n");
}

/**
 * @tc.name: PmsCheckTest.PmsCheckTest004
 * @tc.desc: check grant system_grant permissions
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsCheckTest, PmsCheckTest004, Level1)
{
    LiteTestPrint("PmsCheckTest004 begin\n");
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);
  
    ret = LoadPermissions(TEST_APP_ID, TEST_TASKID);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = GrantRuntimePermission(TEST_TASKID, g_systemPers[SYS_PERM_NUM - 1].name);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = CheckPermissionStat(TEST_TASKID, g_systemPers[SYS_PERM_NUM - 1].name);
    TEST_ASSERT_EQUAL_INT(GRANTED, ret);

    UnLoadPermissions(TEST_TASKID);
    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("PmsCheckTest004 End!\n");
}

/**
 * @tc.name: PmsCheckTest.PmsCheckTest005
 * @tc.desc: check grant user_grant permissions
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsCheckTest, PmsCheckTest005, Level1)
{
    LiteTestPrint("PmsCheckTest005 begin\n");
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);
  
    ret = LoadPermissions(TEST_APP_ID, TEST_TASKID);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = GrantRuntimePermission(TEST_TASKID, g_systemPers[0].name);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = CheckPermissionStat(TEST_TASKID, g_systemPers[0].name);
    TEST_ASSERT_EQUAL_INT(GRANTED, ret);

    UnLoadPermissions(TEST_TASKID);
    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("PmsCheckTest005 End!\n");
}

RUN_TEST_SUITE(PmsCheckTest);
