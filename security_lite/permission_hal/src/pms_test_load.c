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
 * @tc.register: register a security suit named "PmsLoadTest"
 * @param: security subsystem name
 * @param: permission_lite module name
 * @param: PmsLoadTest test suit name
 */
LITE_TEST_SUIT(security, permission_lite, PmsLoadTest);

/**
 * @tc.setup: define a setup for test suit, format:"PmsLoadTest + SetUp"
 * @return: true——setup success
 */
static BOOL PmsLoadTestSetUp()
{
    LiteTestPrint("setup\n");
    CreateAppDir();
    return TRUE;
}

/**
 * @tc.teardown: define a setup for test suit, format:"PmsLoadTest + TearDown"
 * @return: true——teardown success
 */
static BOOL PmsLoadTestTearDown()
{
    LiteTestPrint("tearDown\n");
    DeletePermissions(TEST_APP_ID);
    DeletePermissions(TEST_APP_ID2);
    UnLoadPermissions(TEST_TASKID);
    UnLoadPermissions(TEST_TASKID2);
    return TRUE;
}

/**
 * @tc.name: PmsLoadTest.PmsLoadTest001
 * @tc.desc: Load with invalid parameter
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsLoadTest, PmsLoadTest001, Level1)
{
    LiteTestPrint("PmsLoadTest001 begin\n");
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = LoadPermissions(NULL, TEST_TASKID);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_INVALID_PARAMS, ret);

    ret = LoadPermissions(TEST_APP_ID, ABNORMAL_TASKID);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_INVALID_PARAMS, ret);

    UnLoadPermissions(TEST_TASKID);
    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("PmsLoadTest001 End!\n");
}

/**
 * @tc.name: PmsLoadTest.PmsLoadTest002
 * @tc.desc: Load with no permission
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsLoadTest, PmsLoadTest002, Level1)
{
    LiteTestPrint("PmsLoadTest002 begin\n");
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, 0, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = LoadPermissions(TEST_APP_ID, TEST_TASKID);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    UnLoadPermissions(TEST_TASKID);
    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("PmsLoadTest002 End!\n");
}

/**
 * @tc.name: PmsLoadTest.PmsLoadTest003
 * @tc.desc: Load nonexistent application permissions
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsLoadTest, PmsLoadTest003, Level1)
{
    LiteTestPrint("PmsLoadTest003 begin\n");
    int ret = LoadPermissions(TEST_APP_ID, MAX_PID);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);
    LiteTestPrint("PmsLoadTest003 End!\n");
}

/**
 * @tc.name: PmsLoadTest.PmsLoadTest004
 * @tc.desc: Load application permissions
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsLoadTest, PmsLoadTest004, Level1)
{
    LiteTestPrint("PmsLoadTest004 begin\n");
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = LoadPermissions(TEST_APP_ID, TEST_TASKID);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = GrantRuntimePermission(TEST_TASKID, g_systemPers[0].name);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = CheckPermissionStat(TEST_TASKID, g_systemPers[0].name);
    TEST_ASSERT_EQUAL_INT(GRANTED, ret);

    LiteTestPrint("PmsLoadTest004 End!\n");
}

RUN_TEST_SUITE(PmsLoadTest);
