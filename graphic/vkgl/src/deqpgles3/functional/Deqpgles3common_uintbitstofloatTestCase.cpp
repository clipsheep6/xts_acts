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
#include "../ActsDeqpgles30019TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018333, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018333 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_functi"
        "ons.common.uintbitstofloat.uint_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018333 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018333 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018334, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018334 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_functio"
        "ns.common.uintbitstofloat.uint_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018334 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018334 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018335, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018335 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_functi"
        "ons.common.uintbitstofloat.uvec2_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018335 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018335 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018336, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018336 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_functio"
        "ns.common.uintbitstofloat.uvec2_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018336 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018336 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018337, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018337 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_functi"
        "ons.common.uintbitstofloat.uvec3_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018337 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018337 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018338, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018338 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_functio"
        "ns.common.uintbitstofloat.uvec3_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018338 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018338 end";
}
