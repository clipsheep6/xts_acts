/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#include "hctest.h"
#include "devattest_interface.h"

#define ATTEST_SOFTWARE_RESULT_SIZE 5

/**
 * @tc.desc      : register a test suite, this suite is used to test basic flow and interface dependency
 * @param        : subsystem name is dfx
 * @param        : module name is dfxlite
 * @param        : test suit name is DfxFuncTestSuite
 */
LITE_TEST_SUIT(device_attest, device_attest_lite, DeviceAttestFuncTestSuite);

/**
 * @tc.setup     : setup for all testcases
 * @return       : setup result, TRUE is success, FALSE is fail
 */
static BOOL DeviceAttestFuncTestSuiteSetUp(void)
{
    return TRUE;
}

/**
 * @tc.teardown  : teardown for all testcases
 * @return       : teardown result, TRUE is success, FALSE is fail
 */
static BOOL DeviceAttestFuncTestSuiteTearDown(void)
{
    printf("+-------------------------------------------+\n");
    return TRUE;
}

/**
 * @tc.number    : SUB_Device_Attest_0600
 * @tc.name      : StartDevAttestTask test
 * @tc.desc      : [C- SOFTWARE -0200]
 * @tc.size      : MEDIUM
 * @tc.type      : RELI
 * @tc.level     : Level 0
 */
LITE_TEST_CASE(DeviceAttestFuncTestSuite, subDeviceAttest0100, LEVEL0)
{
    int32_t ret = DEVATTEST_SUCCESS;
    ret = StartDevAttestTask();
    printf("[CLIENT MAIN] StartDevAttestTask ret:%d.\n", ret);
    TEST_ASSERT_EQUAL_INT(ret, DEVATTEST_SUCCESS);
};

/**
 * @tc.number    : SUB_Device_Attest_0200
 * @tc.name      : GetAttestStatus test
 * @tc.desc      : [C- SOFTWARE -0200]
 * @tc.size      : MEDIUM
 * @tc.type      : RELI
 * @tc.level     : Level 0
 */
LITE_TEST_CASE(DeviceAttestFuncTestSuite, subDeviceAttest0200, LEVEL0)
{
    int32_t ret = DEVATTEST_SUCCESS;
    AttestResultInfo attestResultInfo = { 0 };
    attestResultInfo.ticket = NULL;
    printf("[CLIENT MAIN] query.\n");
    sleep(2);
    ret = GetAttestStatus(&attestResultInfo);
    if (ret != DEVATTEST_SUCCESS) {
        printf("[CLIENT MAIN] wrong. ret:%d\n", ret);
        TEST_ASSERT_FALSE(ret != DEVATTEST_SUCCESS);
    }
    else {
        printf("[CLIENT MAIN] auth:%d, software:%d\n",
            attestResultInfo.authResult, attestResultInfo.softwareResult);
        for (int32_t i = 0; i < ATTEST_SOFTWARE_RESULT_SIZE; i++) {
            printf("[CLIENT MAIN] softwareResultDetail[%d]:%d\n", i, attestResultInfo.softwareResultDetail[i]);
        }

        printf("[CLIENT MAIN] ticketLength:%d, ticket:%s\n",
            attestResultInfo.ticketLength, attestResultInfo.ticket);
        if (attestResultInfo.ticketLength != 0) {
            free(attestResultInfo.ticket);
            attestResultInfo.ticket = NULL;
        }
        TEST_ASSERT_EQUAL_INT(ret, DEVATTEST_SUCCESS);
    }
};

RUN_TEST_SUITE(DeviceAttestFuncTestSuite);
