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
 * @tc.register: register a security suit named "PmsDeleteTest"
 * @param: security subsystem name
 * @param: permission_lite module name
 * @param: PmsDeleteTest test suit name
 */
LITE_TEST_SUIT(security, permission_lite, PmsDeleteTest);

/**
 * @tc.setup: define a setup for test suit, format:"PmsDeleteTest + SetUp"
 * @return: true——setup success
 */
static BOOL PmsDeleteTestSetUp()
{
    LiteTestPrint("setup\n");
    CreateAppDir();
    return TRUE;
}

/**
 * @tc.teardown: define a setup for test suit, format:"PmsDeleteTest + TearDown"
 * @return: true——teardown success
 */
static BOOL PmsDeleteTestTearDown()
{
    LiteTestPrint("tearDown\n");
    DeletePermissions(TEST_APP_ID);
    DeletePermissions(TEST_APP_ID2);
    UnLoadPermissions(TEST_TASKID);
    UnLoadPermissions(TEST_TASKID2);
    return TRUE;
}

/**
 * @tc.name: PmsDeleteTest.PmsDeleteTest001
 * @tc.desc: Calling with invalid parameter
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsDeleteTest, PmsDeleteTest001, Level1)
{
    LiteTestPrint("PmsDeleteTest001 begin\n");
    int ret = DeletePermissions(NULL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_INVALID_PARAMS, ret);

    LiteTestPrint("PmsDeleteTest001 End!\n");
}

/**
 * @tc.name: PmsDeleteTest.PmsDeleteTest002
 * @tc.desc: check system_grant permissions
 * @tc.type: FUNC
 * @tc.required: issueI5VMVC
 */
LITE_TEST_CASE(PmsDeleteTest, PmsDeleteTest002, Level1)
{
    LiteTestPrint("PmsDeleteTest002 begin\n");
    int ret = SaveOrUpdatePermissions(TEST_APP_ID, g_systemPers, SYS_PERM_NUM, FIRST_INSTALL);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    ret = DeletePermissions(TEST_APP_ID);
    TEST_ASSERT_EQUAL_INT(PERM_ERRORCODE_SUCCESS, ret);

    CheckAppPermission(TEST_APP_ID, PERM_ERRORCODE_FILE_NOT_EXIST, 0);
    LiteTestPrint("PmsDeleteTest002 End!\n");
}

RUN_TEST_SUITE(PmsDeleteTest);
