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
#include "securec.h"

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
    for (int i = 0; i < permSize; i++) {
        if (permList[i].type == USER_GRANT) {
            memcpy_s(g_systemPers[0].name, PERM_NAME_LEN, permList[i].name, PERM_NAME_LEN);
            g_systemPers[0].when = INUSE;
        } else if (permList[i].type == SYSTEM_GRANT) {
            memcpy_s(g_systemPers[SYS_PERM_NUM - 1].name, PERM_NAME_LEN, permList[i].name, PERM_NAME_LEN);
            g_systemPers[SYS_PERM_NUM - 1].when = INUSE;
        }
    }
    g_maxPermSize = permSize;
    g_appPath = (char*)HalGetPermissionPath();
    CreateAppDir();
    LiteTestPrint("Max permission size: %d\n", g_maxPermSize);
}

void ClearPermissions(PermissionSaved** permissions)
{
    if (permissions != NULL && *permissions != NULL) {
        HalFree((void*)*permissions);
        *permissions = NULL;
    }
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
 * @tc.name: PmsTest.SaveAndDeletePermissions001
 * @tc.desc: Save/Delete with abnormal branch
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsTest, SaveAndDeletePermissions001, Level1)
{
    LiteTestPrint("SaveAndDeletePermissions001 begin\n");
    TEST_ASSERT_EQUAL_INT(
        PERM_ERRORCODE_INVALID_PARAMS, SaveOrUpdatePermissions(NULL, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL));
    TEST_ASSERT_EQUAL_INT(
        PERM_ERRORCODE_INVALID_PARAMS, SaveOrUpdatePermissions(TEST_APP_ID, NULL, SYS_PERM_NUM, FIRST_INSTALL));
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_TOO_MUCH_PERM,
        SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, g_maxPermSize + 1, FIRST_INSTALL));

    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_INVALID_PARAMS, DeletePermissions(NULL));
    LiteTestPrint("SaveAndDeletePermissions001 End!\n");
}

/**
 * @tc.name: PmsTest.SaveAndDeletePermissions002
 * @tc.desc: Save/Delete with normal branch
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsTest, SaveAndDeletePermissions002, Level1)
{
    LiteTestPrint("SaveAndDeletePermissions002 begin\n");
    PermissionSaved* permissions = NULL;
    int permNum = 0;
    // save zero permission
    TEST_ASSERT_EQUAL_INT(
        PERM_ERRORCODE_SUCCESS, SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, 0, FIRST_INSTALL));
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_FILE_NOT_EXIST, QueryPermission(TEST_APP_ID, &permissions, &permNum));
    TEST_ASSERT_EQUAL_INT(0, permNum);

    // save more permission
    TEST_ASSERT_EQUAL_INT(
        PERM_ERRORCODE_SUCCESS, SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, UPDATE));
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, QueryPermission(TEST_APP_ID, &permissions, &permNum));
    TEST_ASSERT_EQUAL_INT(SYS_PERM_NUM, permNum);
    ClearPermissions(&permissions);

    // save less permission
    permNum = 0;
    TEST_ASSERT_EQUAL_INT(
        PERM_ERRORCODE_SUCCESS, SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, 0, UPDATE));
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_FILE_NOT_EXIST, QueryPermission(TEST_APP_ID, &permissions, &permNum));
    TEST_ASSERT_EQUAL_INT(0, permNum);

    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, DeletePermissions(TEST_APP_ID));
    LiteTestPrint("SaveAndDeletePermissions002 End!\n");
}

/**
 * @tc.name: PmsTest.LoadAndUnloadPermissions001
 * @tc.desc: Load/Unload with abnormal branch
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsTest, LoadAndUnloadPermissions001, Level1)
{
    LiteTestPrint("LoadAndUnloadPermissions001 begin\n");
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_INVALID_PARAMS, LoadPermissions(NULL, TEST_TASKID));
    LiteTestPrint("LoadAndUnloadPermissions001 End!\n");
}

/**
 * @tc.name: PmsTest.LoadAndUnloadPermissions002
 * @tc.desc: Load/Unload with normal branch
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsTest, LoadAndUnloadPermissions002, Level1)
{
    LiteTestPrint("LoadAndUnloadPermissions002 begin\n");
    // save zero permission
    TEST_ASSERT_EQUAL_INT(
        PERM_ERRORCODE_SUCCESS, SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, 0, FIRST_INSTALL));
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, LoadPermissions(TEST_APP_ID, TEST_TASKID));
    TEST_ASSERT_EQUAL_INT(RET_NOK, CheckPermissionStat(TEST_TASKID, g_systemPers[0].name)); // permission is not exist

    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, UnLoadPermissions(TEST_TASKID));

    TEST_ASSERT_EQUAL_INT(
        PERM_ERRORCODE_SUCCESS, SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, UPDATE));
    TEST_ASSERT_EQUAL_INT(RET_NOK, CheckPermissionStat(TEST_TASKID, g_systemPers[0].name)); // app is not loaded

    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, LoadPermissions(TEST_APP_ID, TEST_TASKID));
    TEST_ASSERT_EQUAL_INT(NOT_GRANTED, CheckPermissionStat(TEST_TASKID, g_systemPers[0].name)); // user grant
    TEST_ASSERT_EQUAL_INT(GRANTED, CheckPermissionStat(TEST_TASKID, g_systemPers[SYS_PERM_NUM - 1].name)); // system grant

    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, UnLoadPermissions(TEST_TASKID));
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, DeletePermissions(TEST_APP_ID));
    LiteTestPrint("LoadAndUnloadPermissions002 End!\n");
}

/**
 * @tc.name: PmsTest.GrantAndRevokePermissions001
 * @tc.desc: Grant/Revoke with abnormal branch
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsTest, GrantAndRevokePermissions001, Level1)
{
    LiteTestPrint("GrantAndRevokePermissions001 begin\n");
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_INVALID_PARAMS, GrantPermission(NULL, g_systemPers[0].name));
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_INVALID_PARAMS, GrantPermission(TEST_APP_ID, NULL));

    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_INVALID_PARAMS, RevokePermission(NULL, g_systemPers[0].name));
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_INVALID_PARAMS, RevokePermission(TEST_APP_ID, NULL));
    LiteTestPrint("GrantAndRevokePermissions001 End!\n");
}

/**
 * @tc.name: PmsTest.GrantAndRevokePermissions002
 * @tc.desc: Grant/Revoke with normal branch
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsTest, GrantAndRevokePermissions002, Level1)
{
    LiteTestPrint("GrantAndRevokePermissions002 begin\n");
    TEST_ASSERT_EQUAL_INT(
        PERM_ERRORCODE_SUCCESS, SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, 0, FIRST_INSTALL));

    // permission file is not exist
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_FILE_NOT_EXIST, GrantPermission(TEST_APP_ID, g_systemPers[0].name));
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_FILE_NOT_EXIST, RevokePermission(TEST_APP_ID, g_systemPers[0].name));

    TEST_ASSERT_EQUAL_INT(
        PERM_ERRORCODE_SUCCESS, SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, UPDATE));

    // permission is not exist, permission not load into memory
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, GrantPermission(TEST_APP_ID, "ohos.permission.test"));

    // permission is exist
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, GrantPermission(TEST_APP_ID, g_systemPers[0].name));
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, RevokePermission(TEST_APP_ID, g_systemPers[SYS_PERM_NUM - 1].name));

    PermissionSaved* permissions = NULL;
    int permNum = 0;
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, QueryPermission(TEST_APP_ID, &permissions, &permNum));
    TEST_ASSERT_EQUAL_INT(SYS_PERM_NUM, permNum);
    TEST_ASSERT_NOT_NULL(permissions);
    TEST_ASSERT_EQUAL_INT(GRANTED, permissions[0].granted);
    TEST_ASSERT_EQUAL_INT(NOT_GRANTED, permissions[SYS_PERM_NUM - 1].granted);

    ClearPermissions(&permissions);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, UnLoadPermissions(TEST_TASKID));
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, DeletePermissions(TEST_APP_ID));
    LiteTestPrint("GrantAndRevokePermissions002 End!\n");
}

/**
 * @tc.name: PmsTest.GrantAndRevokeRuntimePermissions001
 * @tc.desc: GrantRuntime/RevokeRuntime with abnormal branch
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsTest, GrantAndRevokeRuntimePermissions001, Level1)
{
    LiteTestPrint("GrantAndRevokeRuntimePermissions001 begin\n");
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_INVALID_PARAMS, GrantRuntimePermission(TEST_TASKID, NULL));
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_INVALID_PARAMS, RevokeRuntimePermission(TEST_TASKID, NULL));
    LiteTestPrint("GrantAndRevokeRuntimePermissions001 End!\n");
}

/**
 * @tc.name: PmsTest.GrantAndRevokeRuntimePermissions002
 * @tc.desc: GrantRuntime/RevokeRuntime with normal branch
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsTest, GrantAndRevokeRuntimePermissions002, Level1)
{
    LiteTestPrint("GrantAndRevokeRuntimePermissions002 begin\n");
    TEST_ASSERT_EQUAL_INT(
        PERM_ERRORCODE_SUCCESS, SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL));

    // taskid is not exist
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_TASKID_NOT_EXIST, GrantRuntimePermission(TEST_TASKID, g_systemPers[0].name));
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_TASKID_NOT_EXIST, RevokeRuntimePermission(TEST_TASKID, g_systemPers[0].name));

    // load permission into memory
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, LoadPermissions(TEST_APP_ID, TEST_TASKID));

    // permission is not exist
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_PERM_NOT_EXIST, GrantRuntimePermission(TEST_TASKID, "ohos.permission.test"));
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_PERM_NOT_EXIST, RevokeRuntimePermission(TEST_TASKID, "ohos.permission.test"));

    // permission is exist
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, GrantRuntimePermission(TEST_TASKID, g_systemPers[0].name));
    TEST_ASSERT_EQUAL_INT(GRANTED, CheckPermissionStat(TEST_TASKID, g_systemPers[0].name)); // user grant
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, RevokeRuntimePermission(TEST_TASKID, g_systemPers[0].name));
    TEST_ASSERT_EQUAL_INT(NOT_GRANTED, CheckPermissionStat(TEST_TASKID, g_systemPers[0].name)); // system grant

    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, UnLoadPermissions(TEST_TASKID));
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, DeletePermissions(TEST_APP_ID));
    LiteTestPrint("GrantAndRevokeRuntimePermissions002 End!\n");
}

/**
 * @tc.name: PmsTest.CheckPermissions001
 * @tc.desc: Check permission with abnormal branch
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsTest, CheckPermissions001, Level1)
{
    LiteTestPrint("CheckPermissions001 begin\n");
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_INVALID_PARAMS, CheckPermissionStat(TEST_TASKID, NULL));
    LiteTestPrint("CheckPermissions001 End!\n");
}

/**
 * @tc.name: PmsTest.CheckPermissions002
 * @tc.desc: Check permission with normal branch
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsTest, CheckPermissions002, Level1)
{
    LiteTestPrint("CheckPermissions002 begin\n");
    TEST_ASSERT_EQUAL_INT(
        PERM_ERRORCODE_SUCCESS, SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL));

    // load permission into memory
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, LoadPermissions(TEST_APP_ID, TEST_TASKID));

    // check permission default status
    TEST_ASSERT_EQUAL_INT(NOT_GRANTED, CheckPermissionStat(TEST_TASKID, g_systemPers[0].name)); // user grant
    TEST_ASSERT_EQUAL_INT(GRANTED, CheckPermissionStat(TEST_TASKID, g_systemPers[SYS_PERM_NUM - 1].name)); // system grant

    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, GrantRuntimePermission(TEST_TASKID, g_systemPers[0].name));
    TEST_ASSERT_EQUAL_INT(GRANTED, CheckPermissionStat(TEST_TASKID, g_systemPers[0].name)); // user grant

    // Unload permission from memory
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, UnLoadPermissions(TEST_TASKID));

    TEST_ASSERT_EQUAL_INT(RET_NOK, CheckPermissionStat(TEST_TASKID, g_systemPers[0].name));

    // load permission into memory again
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, LoadPermissions(TEST_APP_ID, TEST_TASKID));
    TEST_ASSERT_EQUAL_INT(GRANTED, CheckPermissionStat(TEST_TASKID, g_systemPers[0].name)); // user grant

    // uninstall app
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, UnLoadPermissions(TEST_TASKID));
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, DeletePermissions(TEST_APP_ID));

    // install app again
    TEST_ASSERT_EQUAL_INT(
        PERM_ERRORCODE_SUCCESS, SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL));
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, LoadPermissions(TEST_APP_ID, TEST_TASKID));
    TEST_ASSERT_EQUAL_INT(NOT_GRANTED, CheckPermissionStat(TEST_TASKID, g_systemPers[0].name)); // user grant

    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, UnLoadPermissions(TEST_TASKID));
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, DeletePermissions(TEST_APP_ID));
    LiteTestPrint("CheckPermissions002 End!\n");
}
RUN_TEST_SUITE(PmsTest);
