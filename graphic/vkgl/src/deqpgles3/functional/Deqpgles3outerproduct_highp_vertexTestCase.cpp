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

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019522, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019522 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_functi"
        "ons.precision.outerproduct.highp_vertex.mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019522 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019522 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019523, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019523 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_functio"
        "ns.precision.outerproduct.highp_vertex.mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019523 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019523 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019524, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019524 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_functio"
        "ns.precision.outerproduct.highp_vertex.mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019524 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019524 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019525, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019525 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_functio"
        "ns.precision.outerproduct.highp_vertex.mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019525 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019525 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019526, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019526 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_functi"
        "ons.precision.outerproduct.highp_vertex.mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019526 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019526 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019527, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019527 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_functio"
        "ns.precision.outerproduct.highp_vertex.mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019527 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019527 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019528, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019528 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_functio"
        "ns.precision.outerproduct.highp_vertex.mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019528 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019528 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019529, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019529 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_functio"
        "ns.precision.outerproduct.highp_vertex.mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019529 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019529 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019530, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019530 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_functi"
        "ons.precision.outerproduct.highp_vertex.mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019530 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019530 end";
}
