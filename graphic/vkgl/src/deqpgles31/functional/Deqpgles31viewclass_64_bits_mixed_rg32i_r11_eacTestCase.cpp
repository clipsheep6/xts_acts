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

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037603, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037603 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
        "64_bits_mixed.rg32i_r11_eac.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037603 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037603 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037604, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037604 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass"
        "_64_bits_mixed.rg32i_r11_eac.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037604 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037604 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037605, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037605 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
        "64_bits_mixed.rg32i_r11_eac.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037605 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037605 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037606, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037606 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass"
        "_64_bits_mixed.rg32i_r11_eac.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037606 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037606 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037607, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037607 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass"
        "_64_bits_mixed.rg32i_r11_eac.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037607 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037607 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037608, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037608 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclas"
        "s_64_bits_mixed.rg32i_r11_eac.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037608 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037608 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037609, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037609 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
        "bits_mixed.rg32i_r11_eac.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037609 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037609 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037610, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037610 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_64"
        "_bits_mixed.rg32i_r11_eac.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037610 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037610 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037611, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037611 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_6"
        "4_bits_mixed.rg32i_r11_eac.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037611 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037611 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037612, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037612 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
        "64_bits_mixed.rg32i_r11_eac.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037612 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037612 end";
}
