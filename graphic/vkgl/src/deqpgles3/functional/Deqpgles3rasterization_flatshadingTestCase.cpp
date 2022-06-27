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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30040TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039807, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039807 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.raster"
        "ization.flatshading.triangles",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039807 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039807 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039808, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039808 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.rasteriza"
        "tion.flatshading.triangle_strip",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039808 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039808 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039809, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039809 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.rasteriz"
        "ation.flatshading.triangle_fan",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039809 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039809 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039810, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039810 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.rast"
        "erization.flatshading.lines",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039810 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039810 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039811, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039811 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.rasteri"
        "zation.flatshading.line_strip",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039811 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039811 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039812, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039812 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.raster"
        "ization.flatshading.line_loop",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039812 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039812 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039813, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039813 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.rasteri"
        "zation.flatshading.lines_wide",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039813 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039813 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039814, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039814 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.rasteriza"
        "tion.flatshading.line_strip_wide",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039814 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039814 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039815, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039815 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.rasteriza"
        "tion.flatshading.line_loop_wide",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039815 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039815 end";
}
