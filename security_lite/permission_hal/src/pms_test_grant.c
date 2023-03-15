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
 * @tc.register: register a security suit named "PmsGrantTest"
 * @param: security subsystem name
 * @param: permission_lite module name
 * @param: PmsGrantTest test suit name
 */
LITE_TEST_SUIT(security, permission_lite, PmsGrantTest);

/**
 * @tc.setup: define a setup for test suit, format:"PmsGrantTest + SetUp"
 * @return: true——setup success
 */
static BOOL PmsGrantTestSetUp()
{
    LiteTestPrint("setup\n");
    CreateAppDir();
    return TRUE;
}

/**
 * @tc.teardown: define a setup for test suit, format:"PmsGrantTest + TearDown"
 * @return: true——teardown success
 */
static BOOL PmsGrantTestTearDown()
{
    LiteTestPrint("tearDown\n");
    DeletePermissions(TEST_APP_ID);
    DeletePermissions(TEST_APP_ID2);
    UnLoadPermissions(TEST_TASKID);
    UnLoadPermissions(TEST_TASKID2);
    return TRUE;
}

/**
 * @tc.name: PmsGrantTest.PmsGrantTest001
 * @tc.desc: grant permission with invalid parameter
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsGrantTest, PmsGrantTest001, Level1)
{
    LiteTestPrint("PmsGrantTest001 begin\n");
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, 1, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = GrantPermission(NULL, g_systemPers[0].name);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_INVALID_PARAMS, ret);

    ret = GrantPermission(TEST_APP_ID, NULL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_INVALID_PARAMS, ret);

    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("PmsGrantTest001 End!\n");
}

/**
 * @tc.name: PmsGrantTest.PmsGrantTest002
 * @tc.desc: grant undefined permissions and abnormal permission
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsGrantTest, PmsGrantTest002, Level1)
{
    LiteTestPrint("PmsGrantTest002 begin\n");
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = GrantPermission(TEST_APP_ID, g_unDefPers.name);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = GrantPermission(TEST_APP_ID, PERMISSION_UNSUPPORTED);
    TEST_ASSERT_EQUAL_INT(RET_OK, ret);

    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("PmsGrantTest002 End!\n");
}

/**
 * @tc.name: PmsGrantTest.PmsGrantTest003
 * @tc.desc: grant permissions with valid parameter
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsGrantTest, PmsGrantTest003, Level1)
{
    LiteTestPrint("PmsGrantTest003 begin\n");
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = GrantPermission(TEST_APP_ID, g_systemPers[0].name);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    PermissionSaved* permissions = NULL;
    int permNum = 0;
    ret = QueryPermission(TEST_APP_ID, &permissions, &permNum);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);
    TEST_ASSERT_EQUAL_INT(SYS_PERM_NUM, permNum); 

    ClearPermissions(&permissions);

    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("PmsGrantTest003 End!\n");
}
RUN_TEST_SUITE(PmsGrantTest);
