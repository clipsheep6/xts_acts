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
 * @tc.register: register a security suit named "PmsTest"
 * @param: security subsystem name
 * @param: permission_lite module name
 * @param: PmsTest test suit name
 */
LITE_TEST_SUIT(security, permission_lite, PmsTest);

static unsigned int g_maxPermSize = 0;
static char* g_appPath = NULL;
static PermissionTrans g_systemPers[SYS_PERM_NUM];
static PermissionTrans g_abnormalPers[] = {
    {
        PERMISSION_UNSUPPORTED,
        "permission is not supported",
        INUSE,
    }
};

static PermissionTrans g_unDefPers = {
    PERMISSION_UNDEFINED,
    "permission is undefined",
    INUSE,
};

static void CreateAppDir(void)
{
    int ret = mkdir(g_appPath, DIR_MODE);
    if (ret != RET_OK) {
        LiteTestPrint("create dir %s error(%d)\n", PERMISSION_PREFIX, ret);
    }
}

static void Init()
{
    unsigned int permSize = 0;
    PermissionDef *permList = HalGetPermissionList(&permSize);
    for (int i = 0; i < permNum; i++) {
        if (permissions[i].type == USER_GRANT) {
            g_systemPers[0] = permissions[i];
        } else if (permissions[i].type == SYSTEM_GRANT) {
            g_systemPers[SYS_PERM_NUM - 1] = permissions[i];
        }
    }
    g_maxPermSize = permSize;
    g_appPath = HalGetPermissionPath();
    CreateAppDir();
    LiteTestPrint("Max permission size: %d\n", g_maxPermSize);
}

/**
 * @tc.setup: define a setup for test suit, format:"PmsTest + SetUp"
 * @return: true——setup success
 */
static BOOL PmsTestSetUp()
{
    LiteTestPrint("setup\n");
    Init();
    return TRUE;
}

/**
 * @tc.teardown: define a setup for test suit, format:"PmsTest + TearDown"
 * @return: true——teardown success
 */
static BOOL PmsTestTearDown()
{
    LiteTestPrint("tearDown\n");
    DeletePermissions(TEST_APP_ID);
    UnLoadPermissions(TEST_TASKID);
    return TRUE;
}

/**
 * @tc.name: PmsTest.SaveOrUpdatePermissions001
 * @tc.desc: Save with invalid abnormal branch
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsTest, SaveOrUpdatePermissions001, Level1)
{
    LiteTestPrint("SaveOrUpdatePermissions001 begin\n");
    TEST_ASSERT_EQUAL_INT(
        PERM_ERRORCODE_INVALID_PARAMS, SaveOrUpdatePermissions(NULL, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL));
    TEST_ASSERT_EQUAL_INT(
        PERM_ERRORCODE_INVALID_PARAMS, SaveOrUpdatePermissions(TEST_APP_ID, nullptr, SYS_PERM_NUM, FIRST_INSTALL));
    TEST_ASSERT_EQUAL_INT(
        PERM_ERRORCODE_TOO_MUCH_PERM, SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, g_maxPermSize, FIRST_INSTALL));
    LiteTestPrint("SaveOrUpdatePermissions001 End!\n");
}

/**
 * @tc.name: PmsTest.SaveOrUpdatePermissions002
 * @tc.desc: Save with invalid normal branch
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsTest, SaveOrUpdatePermissions002, Level1)
{
    LiteTestPrint("SaveOrUpdatePermissions002 begin\n");
    PermissionSaved* permissions = NULL;
    int permNum = 0;
    // save zero permission
    TEST_ASSERT_EQUAL_INT(
        PERM_ERRORCODE_SUCCESS, SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, 0, FIRST_INSTALL));
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_FILE_NOT_EXIST, QueryPermission(TEST_APP_ID, &permissions, &permNum));
    TEST_ASSERT_EQUAL_INT(0, permNum);

    // save more permission
    TEST_ASSERT_EQUAL_INT(
        PERM_ERRORCODE_SUCCESS, SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL));
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, QueryPermission(TEST_APP_ID, &permissions, &permNum));
    TEST_ASSERT_EQUAL_INT(SYS_PERM_NUM, permNum);

    // save less permission
    TEST_ASSERT_EQUAL_INT(
        PERM_ERRORCODE_SUCCESS, SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, 0, FIRST_INSTALL));
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, QueryPermission(TEST_APP_ID, &permissions, &permNum));
    TEST_ASSERT_EQUAL_INT(0, permNum);

    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("SaveOrUpdatePermissions002 End!\n");
}

RUN_TEST_SUITE(PmsTest);
