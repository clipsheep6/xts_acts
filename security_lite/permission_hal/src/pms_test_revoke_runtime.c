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
 * @tc.register: register a security suit named "PmsRevokeRuntimeTest"
 * @param: security subsystem name
 * @param: permission_lite module name
 * @param: PmsRevokeRuntimeTest test suit name
 */
LITE_TEST_SUIT(security, permission_lite, PmsRevokeRuntimeTest);

/**
 * @tc.setup: define a setup for test suit, format:"PmsRevokeRuntimeTest + SetUp"
 * @return: true——setup success
 */
static BOOL PmsRevokeRuntimeTestSetUp()
{
    LiteTestPrint("setup\n");
    CreateAppDir();
    return TRUE;
}

/**
 * @tc.teardown: define a setup for test suit, format:"PmsRevokeRuntimeTest + TearDown"
 * @return: true——teardown success
 */
static BOOL PmsRevokeRuntimeTestTearDown()
{
    LiteTestPrint("tearDown\n");
    DeletePermissions(TEST_APP_ID);
    DeletePermissions(TEST_APP_ID2);
    UnLoadPermissions(TEST_TASKID);
    UnLoadPermissions(TEST_TASKID2);
    return TRUE;
}

/**
 * @tc.name: PmsRevokeRuntimeTest.PmsRevokeRuntimeTest001
 * @tc.desc: revoke permission with invalid parameter
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsRevokeRuntimeTest, PmsRevokeRuntimeTest001, Level1)
{
    LiteTestPrint("PmsRevokeRuntimeTest001 begin\n");
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = RevokeRuntimePermission(ABNORMAL_TASKID, g_systemPers[0].name);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_TASKID_NOT_EXIST, ret);

    ret = RevokeRuntimePermission(TEST_TASKID, NULL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_INVALID_PARAMS, ret);

    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("PmsRevokeRuntimeTest001 End!\n");
}

/**
 * @tc.name: PmsRevokeRuntimeTest.PmsRevokeRuntimeTest002
 * @tc.desc: revoke one permission while not load permission
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsRevokeRuntimeTest, PmsRevokeRuntimeTest002, Level1)
{
    LiteTestPrint("PmsRevokeRuntimeTest002 begin\n");
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = RevokeRuntimePermission(TEST_TASKID, g_systemPers[0].name);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_TASKID_NOT_EXIST, ret);

    ret = CheckPermissionStat(TEST_TASKID, g_systemPers[0].name);
    TEST_ASSERT_EQUAL_INT(RET_NOK, ret);

    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("PmsRevokeRuntimeTest002 End!\n");
}

/**
 * @tc.name: PmsRevokeRuntimeTest.PmsRevokeRuntimeTest003
 * @tc.desc: revoke runtime app permissions
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsRevokeRuntimeTest, PmsRevokeRuntimeTest003, Level1)
{
    LiteTestPrint("PmsRevokeRuntimeTest003 begin\n");
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = LoadPermissions(TEST_APP_ID, TEST_TASKID);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = GrantRuntimePermission(TEST_TASKID, g_systemPers[0].name);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = RevokeRuntimePermission(TEST_TASKID, g_systemPers[0].name);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = CheckPermissionStat(TEST_TASKID, g_systemPers[0].name);
    TEST_ASSERT_EQUAL_INT(RET_OK, ret);

    UnLoadPermissions(TEST_TASKID);
    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("PmsRevokeRuntimeTest003 End!\n");
}

/**
 * @tc.name: PmsRevokeRuntimeTest.PmsRevokeRuntimeTest004
 * @tc.desc: revoke permissions without request
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsRevokeRuntimeTest, PmsRevokeRuntimeTest004, Level1)
{
    LiteTestPrint("PmsRevokeRuntimeTest004 begin\n");
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, 1, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = LoadPermissions(TEST_APP_ID, TEST_TASKID);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = RevokeRuntimePermission(TEST_TASKID, g_systemPers[1].name);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_PERM_NOT_EXIST, ret);

    UnLoadPermissions(TEST_TASKID);
    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("PmsRevokeRuntimeTest004 End!\n");
}

/**
 * @tc.name: PmsRevokeRuntimeTest.PmsRevokeRuntimeTest005
 * @tc.desc: revoke unknown permissions
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsRevokeRuntimeTest, PmsRevokeRuntimeTest005, Level1)
{
    LiteTestPrint("PmsRevokeRuntimeTest005 begin\n");
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = LoadPermissions(TEST_APP_ID, TEST_TASKID);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = RevokeRuntimePermission(TEST_TASKID, PERMISSION_UNDEFINED);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_PERM_NOT_EXIST, ret);

    ret = RevokeRuntimePermission(TEST_TASKID, PERMISSION_UNSUPPORTED);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_PERM_NOT_EXIST, ret);

    UnLoadPermissions(TEST_TASKID);
    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("PmsRevokeRuntimeTest005 End!\n");
}

/**
 * @tc.name: PmsRevokeRuntimeTest.PmsRevokeRuntimeTest006
 * @tc.desc: revoke permissions of abnormal taskid
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsRevokeRuntimeTest, PmsRevokeRuntimeTest006, Level1)
{
    LiteTestPrint("PmsRevokeRuntimeTest006 begin\n");
    int ret = RevokeRuntimePermission(ABNORMAL_TASKID, g_systemPers[0].name);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_TASKID_NOT_EXIST, ret);
    LiteTestPrint("PmsRevokeRuntimeTest006 End!\n");
}

RUN_TEST_SUITE(PmsRevokeRuntimeTest);
