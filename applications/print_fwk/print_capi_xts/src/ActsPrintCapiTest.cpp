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
#include "ohprint.h"

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
    Print_ErrorCode result = OH_Print_Init();
    result = OH_Print_Release();
    EXPECT_EQ(PRINT_ERROR_NONE, result);
}

/* *
 * @tc.number   ACTS_PRINT_CAPI_TEST_0010
 * @tc.name     test discovery
 */
HWTEST_F(ActsPrintCapiTest, ActsPrintCapiTest_0010, Function | MediumTest | Level1)
{
    Print_ErrorCode result = OH_Print_Init();
    result = OH_Print_StartPrinterDiscovery(PrinterDiscoveryCallback);
    result = OH_Print_StopPrinterDiscovery();
    result = OH_Print_Release();
    EXPECT_EQ(PRINT_ERROR_NONE, result);
}

/* *
 * @tc.number   ACTS_PRINT_CAPI_TEST_0011
 * @tc.name     test print connecting
 */
HWTEST_F(ActsPrintCapiTest, ActsPrintCapiTest_0011, Function | MediumTest | Level1)
{
    Print_ErrorCode result = OH_Print_Init();
    result = OH_Print_RegisterPrinterChangeListener(PrinterChangeCallback);
    result = OH_Print_ConnectPrinter(nullptr);
    OH_Print_UnregisterPrinterChangeListener();
    result = OH_Print_Release();
    EXPECT_EQ(PRINT_ERROR_NONE, result);
}

/* *
 * @tc.number   ACTS_PRINT_CAPI_TEST_0012
 * @tc.name     test print job
 */
HWTEST_F(ActsPrintCapiTest, ActsPrintCapiTest_0012, Function | MediumTest | Level1)
{
    Print_ErrorCode result = OH_Print_Init();
    result = OH_Print_StartPrintJob(nullptr);
    result = OH_Print_Release();
    EXPECT_EQ(PRINT_ERROR_NONE, result);
}

/* *
 * @tc.number   ACTS_PRINT_CAPI_TEST_0013
 * @tc.name     test print list
 */
HWTEST_F(ActsPrintCapiTest, ActsPrintCapiTest_0013, Function | MediumTest | Level1)
{
    Print_ErrorCode result = OH_Print_Init();
    Print_StringList list = {0};
    result = OH_Print_QueryPrinterList(&list);
    result = OH_Print_LaunchPrinterManager();
    OH_Print_ReleasePrinterList(&list);
    result = OH_Print_Release();
    EXPECT_EQ(PRINT_ERROR_NONE, result);
}

/* *
 * @tc.number   ACTS_PRINT_CAPI_TEST_0014
 * @tc.name     test print info
 */
HWTEST_F(ActsPrintCapiTest, ActsPrintCapiTest_0014, Function | MediumTest | Level1)
{
    Print_ErrorCode result = OH_Print_Init();
    Print_PrinterInfo *info = nullptr;
    result = OH_Print_QueryPrinterInfo("test print", &info);
    OH_Print_ReleasePrinterInfo(info);
    info = nullptr;
    result = OH_Print_Release();
    EXPECT_EQ(PRINT_ERROR_NONE, result);
}

/* *
 * @tc.number   ACTS_PRINT_CAPI_TEST_0015
 * @tc.name     test print info
 */
HWTEST_F(ActsPrintCapiTest, ActsPrintCapiTest_0015, Function | MediumTest | Level1)
{
    Print_ErrorCode result = OH_Print_Init();
    Print_StringList key = {0};
    Print_PropertyList value = {0};
    result = OH_Print_QueryPrinterProperties("test print", &key, &value);
    result = OH_Print_UpdatePrinterProperties("test print", &value);
    result = OH_Print_RestorePrinterProperties("test print", &key);
    OH_Print_ReleasePrinterProperties(&value);
    result = OH_Print_Release();
    EXPECT_EQ(PRINT_ERROR_NONE, result);
}
} // namespace OHOS
