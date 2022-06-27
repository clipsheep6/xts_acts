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
#include "../ActsDeqpgles30005TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004475, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004475 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.arrays.com"
        "plex_expression.and_short_circuits_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004475 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004475 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004476, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004476 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.arrays.comp"
        "lex_expression.and_short_circuits_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004476 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004476 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004477, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004477 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.arrays.com"
        "plex_expression.or_short_circuits_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004477 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004477 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004478, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004478 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.arrays.comp"
        "lex_expression.or_short_circuits_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004478 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004478 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004479, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004479 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.arrays.complex_exp"
        "ression.ternary_only_evaluates_one_operand_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004479 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004479 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004480, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004480 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.arrays.complex_expr"
        "ession.ternary_only_evaluates_one_operand_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004480 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004480 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004481, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004481 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.arrays.complex_expression.se"
        "quence_side_effects_affecting_compared_array_content_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004481 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004481 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004482, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004482 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.arrays.complex_expression.seq"
        "uence_side_effects_affecting_compared_array_content_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004482 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004482 end";
}
