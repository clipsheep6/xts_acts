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
#include "../ActsDeqpgles30020TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019486, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019486 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_funct"
        "ions.precision.outerproduct.lowp_vertex.mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019486 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019486 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019487, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019487 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_functi"
        "ons.precision.outerproduct.lowp_vertex.mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019487 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019487 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019488, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019488 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_functi"
        "ons.precision.outerproduct.lowp_vertex.mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019488 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019488 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019489, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019489 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_functi"
        "ons.precision.outerproduct.lowp_vertex.mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019489 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019489 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019490, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019490 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_funct"
        "ions.precision.outerproduct.lowp_vertex.mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019490 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019490 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019491, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019491 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_functi"
        "ons.precision.outerproduct.lowp_vertex.mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019491 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019491 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019492, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019492 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_functi"
        "ons.precision.outerproduct.lowp_vertex.mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019492 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019492 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019493, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019493 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_functi"
        "ons.precision.outerproduct.lowp_vertex.mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019493 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019493 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019494, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019494 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_funct"
        "ions.precision.outerproduct.lowp_vertex.mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019494 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019494 end";
}
