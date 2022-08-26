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
 * @tc.register: register a security suit named "PmsUnloadTest"
 * @param: security subsystem name
 * @param: permission_liet module name
 * @param: PmsUnloadTest test suit name
 */
LITE_TEST_SUIT(security, permission_liet, PmsUnloadTest);

/**
 * @tc.setup: define a setup for test suit, format:"PmsUnloadTest + SetUp"
 * @return: true——setup success
 */
static BOOL PmsUnloadTestSetUp()
{
    LiteTestPrint("setup\n");
    CreateAppDir();
    return TRUE;
}

/**
 * @tc.teardown: define a setup for test suit, format:"PmsUnloadTest + TearDown"
 * @return: true——teardown success
 */
static BOOL PmsUnloadTestTearDown()
{
    LiteTestPrint("tearDown\n");
    DeletePermissions(TEST_APP_ID);
    DeletePermissions(TEST_APP_ID2);
    UnLoadPermissions(TEST_TASKID);
    UnLoadPermissions(TEST_TASKID2);
    return TRUE;
}

/**
 * @tc.name: PmsUnloadTest.PmsUnloadTest001
 * @tc.desc: Unload with invalid uid
 * @tc.type: FUNC
 * @tc.required: 
 */
LITE_TEST_CASE(PmsUnloadTest, PmsUnloadTest001, Level1)
{
    LiteTestPrint("PmsUnloadTest001 begin\n");
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = LoadPermissions(TEST_APP_ID, TEST_TASKID);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = GrantRuntimePermission(TEST_TASKID, g_systemPers[0].name);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = UnLoadPermissions(ABNORMAL_TASKID);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = CheckPermissionStat(TEST_TASKID, g_systemPers[0].name);
    TEST_ASSERT_EQUAL_INT(GRANTED, ret);

    UnLoadPermissions(TEST_TASKID);
    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("PmsUnloadTest001 End!\n");
}

/**
 * @tc.name: PmsUnloadTest.PmsUnloadTest002
 * @tc.desc: Unload with valid uid
 * @tc.type: FUNC
 * @tc.required: 
 */
LITE_TEST_CASE(PmsUnloadTest, PmsUnloadTest002, Level1)
{
    LiteTestPrint("PmsUnloadTest002 begin\n");
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = LoadPermissions(TEST_APP_ID, TEST_TASKID);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = GrantRuntimePermission(TEST_TASKID, g_systemPers[0].name);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = UnLoadPermissions(TEST_TASKID);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = CheckPermissionStat(TEST_TASKID, g_systemPers[0].name);
    TEST_ASSERT_EQUAL_INT(RET_NOK, ret);

    UnLoadPermissions(TEST_TASKID);
    DeletePermissions(TEST_APP_ID);
    LiteTestPrint("PmsUnloadTest002 End!\n");
}

RUN_TEST_SUITE(PmsUnloadTest);
