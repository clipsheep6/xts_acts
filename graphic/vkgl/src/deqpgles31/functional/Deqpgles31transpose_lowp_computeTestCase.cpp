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
#include "../ActsDeqpgles310003TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002777, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002777 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.precision.transpose.lowp_compute.mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002777 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002777 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002778, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002778 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.precision.transpose.lowp_compute.mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002778 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002778 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002779, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002779 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.precision.transpose.lowp_compute.mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002779 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002779 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002780, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002780 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.precision.transpose.lowp_compute.mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002780 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002780 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002781, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002781 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.precision.transpose.lowp_compute.mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002781 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002781 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002782, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002782 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.precision.transpose.lowp_compute.mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002782 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002782 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002783, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002783 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.precision.transpose.lowp_compute.mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002783 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002783 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002784, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002784 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.precision.transpose.lowp_compute.mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002784 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002784 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002785, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002785 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.precision.transpose.lowp_compute.mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002785 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002785 end";
}
