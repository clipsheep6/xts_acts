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

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002723, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002723 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.precision.matrixcompmult.lowp_compute.mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002723 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002723 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002724, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002724 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.precision.matrixcompmult.lowp_compute.mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002724 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002724 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002725, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002725 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.precision.matrixcompmult.lowp_compute.mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002725 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002725 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002726, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002726 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.precision.matrixcompmult.lowp_compute.mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002726 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002726 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002727, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002727 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.precision.matrixcompmult.lowp_compute.mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002727 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002727 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002728, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002728 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.precision.matrixcompmult.lowp_compute.mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002728 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002728 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002729, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002729 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.precision.matrixcompmult.lowp_compute.mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002729 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002729 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002730, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002730 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.precision.matrixcompmult.lowp_compute.mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002730 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002730 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002731, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002731 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.precision.matrixcompmult.lowp_compute.mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002731 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002731 end";
}
