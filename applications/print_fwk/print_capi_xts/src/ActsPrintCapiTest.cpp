/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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

#include <gtest/gtest.h>
#include "BasicServicesKit/ohprint.h"

using namespace std;
using namespace testing::ext;
namespace OHOS {
using namespace testing;

static void PrinterDiscoveryCallback(Print_DiscoveryEvent event, const Print_PrinterInfo *printerInfo)
{
}

static void PrinterChangeCallback(Print_PrinterEvent event, const Print_PrinterInfo *printerInfo)
{
}
class ActsPrintCapiTest : public testing::Test {
protected:
    // Preset action of the test suite, which is executed before the first test case
    static void SetUpTestCase(void) {
    }
    // Test suite cleanup action, which is executed after the last test case
    static void TearDownTestCase(void) {
    }
    // Preset action of the test case
    virtual void SetUp()
    {
    }
    // Cleanup action of the test case
    virtual void TearDown()
    {
    }
};

/* *
 * @tc.number   ACTS_PRINT_CAPI_TEST_0001
 * @tc.name     test init and release
 */
HWTEST_F(ActsPrintCapiTest, ActsPrintCapiTest_0001, Function | MediumTest | Level0)
{
    int32_t initResult = OH_Print_Init();
    EXPECT_EQ(0, initResult);
    int32_t releaseResult = OH_Print_Release();
    EXPECT_EQ(0, releaseResult);
}

/* *
 * @tc.number   ACTS_PRINT_CAPI_TEST_0010
 * @tc.name     test discovery
 */
HWTEST_F(ActsPrintCapiTest, ActsPrintCapiTest_0010, Function | MediumTest | Level1)
{
    int32_t initResult = OH_Print_Init();
    EXPECT_EQ(0, initResult);
    int32_t startResult = OH_Print_StartPrinterDiscovery(PrinterDiscoveryCallback);
    EXPECT_EQ(0, startResult);
    int32_t stopResult = OH_Print_StopPrinterDiscovery();
    EXPECT_EQ(0, stopResult);
    int32_t releaseResult = OH_Print_Release();
    EXPECT_EQ(0, releaseResult);
}

/* *
 * @tc.number   ACTS_PRINT_CAPI_TEST_0011
 * @tc.name     test print connecting
 */
HWTEST_F(ActsPrintCapiTest, ActsPrintCapiTest_0011, Function | MediumTest | Level1)
{
    int32_t initResult = OH_Print_Init();
    EXPECT_EQ(0, initResult);
    int32_t regResult = OH_Print_RegisterPrinterChangeListener(PrinterChangeCallback);
    EXPECT_EQ(0, regResult);
    int32_t connectResult = OH_Print_ConnectPrinter(nullptr);
    EXPECT_EQ(PRINT_ERROR_INVALID_PRINTER, connectResult);
    OH_Print_UnregisterPrinterChangeListener();
    int32_t releaseResult = OH_Print_Release();
    EXPECT_EQ(0, releaseResult);
}

/* *
 * @tc.number   ACTS_PRINT_CAPI_TEST_0012
 * @tc.name     test print job
 */
HWTEST_F(ActsPrintCapiTest, ActsPrintCapiTest_0012, Function | MediumTest | Level1)
{
    int32_t initResult = OH_Print_Init();
    EXPECT_EQ(0, initResult);
    int32_t jobResult = OH_Print_StartPrintJob(nullptr);
    EXPECT_EQ(PRINT_ERROR_INVALID_PRINT_JOB, connectResult);
    int32_t releaseResult = OH_Print_Release();
    EXPECT_EQ(0, releaseResult);
}

/* *
 * @tc.number   ACTS_PRINT_CAPI_TEST_0013
 * @tc.name     test print list
 */
HWTEST_F(ActsPrintCapiTest, ActsPrintCapiTest_0013, Function | MediumTest | Level1)
{
    int32_t initResult = OH_Print_Init();
    EXPECT_EQ(0, initResult);
    Print_StringList list = {0};
    int32_t listResult = OH_Print_QueryPrinterList(list);
    EXPECT_EQ(0, listResult);
    int32_t managerResult = OH_Print_LaunchPrinterManager();
    EXPECT_EQ(0, managerResult);
    OH_Print_ReleasePrinterList(list);
    int32_t releaseResult = OH_Print_Release();
    EXPECT_EQ(0, releaseResult);
}

/* *
 * @tc.number   ACTS_PRINT_CAPI_TEST_0014
 * @tc.name     test print info
 */
HWTEST_F(ActsPrintCapiTest, ActsPrintCapiTest_0014, Function | MediumTest | Level1)
{
    int32_t initResult = OH_Print_Init();
    EXPECT_EQ(0, initResult);
    Print_PrinterInfo *info = nullptr;
    int32_t infoResult = OH_Print_QueryPrinterInfo("test print", &info);
    EXPECT_EQ(0, infoResult);
    OH_Print_ReleasePrinterInfo(info);
    int32_t releaseResult = OH_Print_Release();
    EXPECT_EQ(0, releaseResult);
}

/* *
 * @tc.number   ACTS_PRINT_CAPI_TEST_0015
 * @tc.name     test print info
 */
HWTEST_F(ActsPrintCapiTest, ActsPrintCapiTest_0015, Function | MediumTest | Level1)
{
    int32_t initResult = OH_Print_Init();
    EXPECT_EQ(0, initResult);
    Print_StringList key = {0};
    Print_PropertyList value = {0};
    int32_t queryResult = OH_Print_QueryPrinterProperties("test print", &key, &value);
    EXPECT_EQ(0, queryResult);
    int32_t updateResult = OH_Print_UpdatePrinterProperties("test print", &value);
    EXPECT_EQ(0, updateResult);
    int32_t restoreResult = OH_Print_RestorePrinterProperties("test print", &key);
    EXPECT_EQ(0, restoreResult);
    OH_Print_ReleasePrinterProperties(value);
    int32_t releaseResult = OH_Print_Release();
    EXPECT_EQ(0, releaseResult);
}
} // namespace OHOS