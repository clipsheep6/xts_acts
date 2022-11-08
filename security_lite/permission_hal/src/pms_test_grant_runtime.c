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
 * @tc.register: register a security suit named "PmsGrantRuntimeTest"
 * @param: security subsystem name
 * @param: permission_lite module name
 * @param: PmsGrantRuntimeTest test suit name
 */
LITE_TEST_SUIT(security, permission_lite, PmsGrantRuntimeTest);

/**
 * @tc.setup: define a setup for test suit, format:"PmsGrantRuntimeTest + SetUp"
 * @return: true——setup success
 */
static BOOL PmsGrantRuntimeTestSetUp()
{
    LiteTestPrint("setup\n");
    CreateAppDir();
    return TRUE;
}

/**
 * @tc.teardown: define a setup for test suit, format:"PmsGrantRuntimeTest + TearDown"
 * @return: true——teardown success
 */
static BOOL PmsGrantRuntimeTestTearDown()
{
    LiteTestPrint("tearDown\n");
    DeletePermissions(TEST_APP_ID);
    DeletePermissions(TEST_APP_ID2);
    UnLoadPermissions(TEST_TASKID);
    UnLoadPermissions(TEST_TASKID2);
    return TRUE;
}

/**
 * @tc.name: PmsGrantRuntimeTest.PmsGrantRuntimeTest001
 * @tc.desc: grant permission with invalid parameter
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsGrantRuntimeTest, PmsGrantRuntimeTest001, Level1)
{
    LiteTestPrint("PmsGrantRuntimeTest001 begin\n");
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = GrantRuntimePermission(ABNORMAL_TASKID, g_systemPers[0].name);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_TASKID_NOT_EXIST, ret);

    ret = GrantRuntimePermission(TEST_TASKID, NULL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_INVALID_PARAMS, ret);

    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("PmsGrantRuntimeTest001 End!\n");
}

/**
 * @tc.name: PmsGrantRuntimeTest.PmsGrantRuntimeTest002
 * @tc.desc: grant one permission while not load permission
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsGrantRuntimeTest, PmsGrantRuntimeTest002, Level1)
{
    LiteTestPrint("PmsGrantRuntimeTest002 begin\n");
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = GrantRuntimePermission(TEST_TASKID, g_systemPers[0].name);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_TASKID_NOT_EXIST, ret);

    ret = CheckPermissionStat(TEST_TASKID, g_systemPers[0].name);
    TEST_ASSERT_EQUAL_INT(RET_NOK, ret);

    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("PmsGrantRuntimeTest002 End!\n");
}

/**
 * @tc.name: PmsGrantRuntimeTest.PmsGrantRuntimeTest003
 * @tc.desc: grant runtime app permissions
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsGrantRuntimeTest, PmsGrantRuntimeTest003, Level1)
{
    LiteTestPrint("PmsGrantRuntimeTest003 begin\n");
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
    LiteTestPrint("PmsGrantRuntimeTest003 End!\n");
}

/**
 * @tc.name: PmsGrantRuntimeTest.PmsGrantRuntimeTest004
 * @tc.desc: grant permissions without request
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsGrantRuntimeTest, PmsGrantRuntimeTest004, Level1)
{
    LiteTestPrint("PmsGrantRuntimeTest004 begin\n");
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, 1, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = LoadPermissions(TEST_APP_ID, TEST_TASKID);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = GrantRuntimePermission(TEST_TASKID, g_systemPers[1].name);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_PERM_NOT_EXIST, ret);

    UnLoadPermissions(TEST_TASKID);
    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("PmsGrantRuntimeTest004 End!\n");
}

/**
 * @tc.name: PmsGrantRuntimeTest.PmsGrantRuntimeTest005
 * @tc.desc: grant unknown permissions
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsGrantRuntimeTest, PmsGrantRuntimeTest005, Level1)
{
    LiteTestPrint("PmsGrantRuntimeTest005 begin\n");
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = LoadPermissions(TEST_APP_ID, TEST_TASKID);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = GrantRuntimePermission(TEST_TASKID, PERMISSION_UNDEFINED);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_PERM_NOT_EXIST, ret);

    ret = GrantRuntimePermission(TEST_TASKID, PERMISSION_UNSUPPORTED);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_PERM_NOT_EXIST, ret);

    UnLoadPermissions(TEST_TASKID);
    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("PmsGrantRuntimeTest005 End!\n");
}


/**
 * @tc.name: PmsGrantRuntimeTest.PmsGrantRuntimeTest006
 * @tc.desc: grant permissions of abnormal taskid
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsGrantRuntimeTest, PmsGrantRuntimeTest006, Level1)
{
    LiteTestPrint("PmsGrantRuntimeTest006 begin\n");
    int ret = GrantRuntimePermission(ABNORMAL_TASKID, g_systemPers[0].name);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_TASKID_NOT_EXIST, ret);
    LiteTestPrint("PmsGrantRuntimeTest006 End!\n");
}

RUN_TEST_SUITE(PmsGrantRuntimeTest);
