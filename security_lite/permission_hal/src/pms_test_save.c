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
 * @tc.register: register a security suit named "PmsSaveTest"
 * @param: security subsystem name
 * @param: permission_liet module name
 * @param: PmsSaveTest test suit name
 */
LITE_TEST_SUIT(security, permission_liet, PmsSaveTest);

/**
 * @tc.setup: define a setup for test suit, format:"PmsSaveTest + SetUp"
 * @return: true——setup success
 */
static BOOL PmsSaveTestSetUp()
{
    LiteTestPrint("setup\n");
    CreateAppDir();
    return TRUE;
}

/**
 * @tc.teardown: define a setup for test suit, format:"PmsSaveTest + TearDown"
 * @return: true——teardown success
 */
static BOOL PmsSaveTestTearDown()
{
    LiteTestPrint("tearDown\n");
    DeletePermissions(TEST_APP_ID);
    DeletePermissions(TEST_APP_ID2);
    UnLoadPermissions(TEST_TASKID);
    UnLoadPermissions(TEST_TASKID2);
    return TRUE;
}

/**
 * @tc.name: PmsSaveTest.PmsSaveTest001
 * @tc.desc: Calling SaveOrUpdatePermissions with invalid parameter
 * @tc.type: FUNC
 * @tc.required: 
 */
LITE_TEST_CASE(PmsSaveTest, PmsSaveTest001, Level1)
{
    LiteTestPrint("PmsSaveTest001 begin\n");
    int ret = SaveOrUpdatePermissions(NULL, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_INVALID_PARAMS, ret);

    LiteTestPrint("PmsSaveTest001 End!\n");
}

/**
 * @tc.name: PmsSaveTest.PmsSaveTest002
 * @tc.desc: Calling SaveOrUpdatePermissions with no permission
 * @tc.type: FUNC
 * @tc.required: 
 */
LITE_TEST_CASE(PmsSaveTest, PmsSaveTest002, Level1)
{
    LiteTestPrint("PmsSaveTest002 begin\n");
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, 0, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    CheckAppPermission(TEST_APP_ID, PERM_ERRORCODE_FILE_NOT_EXIST, 0);

    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("PmsSaveTest002 End!\n");
}

/**
 * @tc.name: PmsSaveTest.PmsSaveTest003
 * @tc.desc: Calling SaveOrUpdatePermissions with some permission
 * @tc.type: FUNC
 * @tc.required: 
 */
LITE_TEST_CASE(PmsSaveTest, PmsSaveTest003, Level1)
{
    LiteTestPrint("PmsSaveTest003 begin\n");
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    CheckAppPermission(TEST_APP_ID, PERM_ERRORCODE_SUCCESS, SYS_PERM_NUM);

    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("PmsSaveTest003 End!\n");
}

/**
 * @tc.name: PmsSaveTest.PmsSaveTest004
 * @tc.desc: Calling install the permission of exception permission name for the first time
 * @tc.type: FUNC
 * @tc.required: 
 */
LITE_TEST_CASE(PmsSaveTest, PmsSaveTest004, Level1)
{
    LiteTestPrint("PmsSaveTest004 begin\n");
    PermissionTrans pt[1];
    int ret = PERM_ERRORCODE_INVALID_PARAMS;
    for (int i = 0; i < ABNORMAL_PERM_NUM; i++) {
        pt[0] = g_abnormalPers[i];
        ret = SaveOrUpdatePermissions(TEST_APP_ID, pt, 1, FIRST_INSTALL);
        TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

        CheckAppPermission(TEST_APP_ID, PERM_ERRORCODE_SUCCESS, 1);
        DeletePermissions(TEST_APP_ID);
    }
    LiteTestPrint("PmsSaveTest004 End!\n");
}

/**
 * @tc.name: PmsSaveTest.PmsSaveTest005
 * @tc.desc: The number of saved application permissions exceeds the upper limit
 * @tc.type: FUNC
 * @tc.required: 
 */
LITE_TEST_CASE(PmsSaveTest, PmsSaveTest005, Level1)
{
    LiteTestPrint("PmsSaveTest005 begin\n");
    PermissionTrans pt[MAX_PERM_NUM + 1];
    int i;
    for (i = 0; i < MAX_PERM_NUM + 1; i++) {
        pt[i] = g_systemPers[0];
    }
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, pt, MAX_PERM_NUM + 1, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_TOO_MUCH_PERM, ret);

    CheckAppPermission(TEST_APP_ID, PERM_ERRORCODE_FILE_NOT_EXIST, 0);

    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("PmsSaveTest005 End!\n");
}

/**
 * @tc.name: PmsSaveTest.PmsSaveTest006
 * @tc.desc: Save duplicate application permission
 * @tc.type: FUNC
 * @tc.required: 
 */
LITE_TEST_CASE(PmsSaveTest, PmsSaveTest006, Level1)
{
    LiteTestPrint("PmsSaveTest006 begin\n");
    PermissionTrans pt[MAX_PERM_NUM];
    int i;
    for (i = 0; i < SYS_PERM_NUM; i++) {
        pt[i] = g_systemPers[i];
    }
    for (i = SYS_PERM_NUM; i < MAX_PERM_NUM; i++) {
        pt[i] = g_systemPers[0];
    }
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, pt, MAX_PERM_NUM, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    CheckAppPermission(TEST_APP_ID, PERM_ERRORCODE_SUCCESS, SYS_PERM_NUM);

    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("PmsSaveTest006 End!\n");
}

/**
 * @tc.name: PmsSaveTest.PmsSaveTest007
 * @tc.desc: Save multiple application permissions
 * @tc.type: FUNC
 * @tc.required: 
 */
LITE_TEST_CASE(PmsSaveTest, PmsSaveTest007, Level1)
{
    LiteTestPrint("PmsSaveTest007 begin\n");
    PermissionTrans pt[] = {g_systemPers[0]};
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, pt, 0, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = SaveOrUpdatePermissions(TEST_APP_ID2, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    CheckAppPermission(TEST_APP_ID, PERM_ERRORCODE_FILE_NOT_EXIST, 0);
    CheckAppPermission(TEST_APP_ID2, PERM_ERRORCODE_SUCCESS, SYS_PERM_NUM);

    DeletePermissions(TEST_APP_ID);
    DeletePermissions(TEST_APP_ID2);
    LiteTestPrint("PmsSaveTest007 End!\n");
}

/**
 * @tc.name: PmsSaveTest.PmsSaveTest008
 * @tc.desc: Update application, save less permissions
 * @tc.type: FUNC
 * @tc.required: 
 */
LITE_TEST_CASE(PmsSaveTest, PmsSaveTest008, Level1)
{
    LiteTestPrint("PmsSaveTest008 begin\n");
    PermissionTrans pt[] = {g_systemPers[0]};
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = SaveOrUpdatePermissions(TEST_APP_ID, pt, 0, UPDATE);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    CheckAppPermission(TEST_APP_ID, PERM_ERRORCODE_FILE_NOT_EXIST, 0);

    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("PmsSaveTest008 End!\n");
}

/**
 * @tc.name: PmsSaveTest.PmsSaveTest009
 * @tc.desc: Update application, save more permissions
 * @tc.type: FUNC
 * @tc.required: 
 */
LITE_TEST_CASE(PmsSaveTest, PmsSaveTest009, Level1)
{
    LiteTestPrint("PmsSaveTest009 begin\n");
    PermissionTrans pt[] = {g_systemPers[0]};
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, pt, 0, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    CheckAppPermission(TEST_APP_ID, PERM_ERRORCODE_FILE_NOT_EXIST, 0);

    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("PmsSaveTest009 End!\n");
}

/**
 * @tc.name: PmsSaveTest.PmsSaveTest010
 * @tc.desc: Update application, save same permissions
 * @tc.type: FUNC
 * @tc.required: 
 */
LITE_TEST_CASE(PmsSaveTest, PmsSaveTest010, Level1)
{
    LiteTestPrint("PmsSaveTest010 begin\n");
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);
    for (int i = 0; i < SYS_PERM_NUM; i++) {
        GrantPermission(TEST_APP_ID, g_systemPers[i].name);
    }

    ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, UPDATE);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    CheckAppPermission(TEST_APP_ID, PERM_ERRORCODE_SUCCESS, SYS_PERM_NUM);

    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("PmsSaveTest010 End!\n");
}

/**
 * @tc.name: PmsSaveTest.PmsSaveTest011
 * @tc.desc: Update application, save different permissions
 * @tc.type: FUNC
 * @tc.required: 
 */
LITE_TEST_CASE(PmsSaveTest, PmsSaveTest011, Level1)
{
    LiteTestPrint("PmsSaveTest011 begin\n");
    PermissionTrans pt1[] = {g_systemPers[0], g_systemPers[1], g_systemPers[2],
                g_systemPers[3], g_systemPers[5], g_systemPers[6], g_systemPers[7]};
    PermissionTrans pt2[] = {g_systemPers[0], g_systemPers[1], g_systemPers[2], g_systemPers[3], g_systemPers[4],
                g_systemPers[5], g_systemPers[6], g_systemPers[7]};
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, pt1, 7, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    for (int i = 0; i < SYS_PERM_NUM; i++) {
        ret = GrantPermission(TEST_APP_ID, g_systemPers[i].name);
    }

    ret = SaveOrUpdatePermissions(TEST_APP_ID, pt2, 8, UPDATE);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);
    CheckAppPermission(TEST_APP_ID, PERM_ERRORCODE_SUCCESS, 8);

    PermissionSaved* permissions = NULL;
    int permNum = 0;
    ret = QueryPermission(TEST_APP_ID, &permissions, &permNum);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);
    TEST_ASSERT_EQUAL_INT(7, permNum);
    for (int i = 0; i < SYS_PERM_NUM; i++) {
        TEST_ASSERT_EQUAL_INT(GRANTED, permissions[i].granted);
    }

    ClearPermissions(&permissions);
    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("PmsSaveTest011 End!\n");
}

RUN_TEST_SUITE(PmsSaveTest);
