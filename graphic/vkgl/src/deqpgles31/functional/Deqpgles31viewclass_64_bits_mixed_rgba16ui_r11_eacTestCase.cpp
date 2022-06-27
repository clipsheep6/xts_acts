/*
 * Copyright (c) 2022 Shenzhen Kaihong Digital Industry Development Co., Ltd.
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

#include <climits>
#include <gtest/gtest.h>
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310038TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037451, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037451 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_6"
        "4_bits_mixed.rgba16ui_r11_eac.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037451 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037451 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037452, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037452 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
        "64_bits_mixed.rgba16ui_r11_eac.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037452 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037452 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037453, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037453 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_6"
        "4_bits_mixed.rgba16ui_r11_eac.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037453 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037453 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037454, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037454 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
        "64_bits_mixed.rgba16ui_r11_eac.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037454 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037454 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037455, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037455 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
        "64_bits_mixed.rgba16ui_r11_eac.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037455 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037455 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037456, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037456 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass"
        "_64_bits_mixed.rgba16ui_r11_eac.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037456 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037456 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037457, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037457 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_b"
        "its_mixed.rgba16ui_r11_eac.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037457 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037457 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037458, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037458 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
        "bits_mixed.rgba16ui_r11_eac.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037458 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037458 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037459, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037459 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
        "bits_mixed.rgba16ui_r11_eac.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037459 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037459 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037460, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037460 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_64"
        "_bits_mixed.rgba16ui_r11_eac.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037460 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037460 end";
}
