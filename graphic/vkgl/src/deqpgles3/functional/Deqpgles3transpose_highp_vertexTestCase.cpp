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

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019576, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019576 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_func"
        "tions.precision.transpose.highp_vertex.mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019576 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019576 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019577, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019577 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_funct"
        "ions.precision.transpose.highp_vertex.mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019577 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019577 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019578, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019578 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_funct"
        "ions.precision.transpose.highp_vertex.mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019578 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019578 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019579, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019579 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_funct"
        "ions.precision.transpose.highp_vertex.mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019579 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019579 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019580, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019580 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_func"
        "tions.precision.transpose.highp_vertex.mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019580 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019580 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019581, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019581 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_funct"
        "ions.precision.transpose.highp_vertex.mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019581 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019581 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019582, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019582 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_funct"
        "ions.precision.transpose.highp_vertex.mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019582 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019582 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019583, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019583 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_funct"
        "ions.precision.transpose.highp_vertex.mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019583 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019583 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019584, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019584 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_func"
        "tions.precision.transpose.highp_vertex.mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019584 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019584 end";
}
