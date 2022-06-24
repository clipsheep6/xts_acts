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
#include "../ActsDeqpgles30002TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001226, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001226 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.i"
        "nvalid_expressions.invalid_unary_expr_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001226 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001226 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001227, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001227 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.in"
        "valid_expressions.invalid_unary_expr_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001227 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001227 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001228, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001228 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.i"
        "nvalid_expressions.invalid_binary_expr_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001228 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001228 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001229, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001229 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.in"
        "valid_expressions.invalid_binary_expr_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001229 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001229 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001230, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001230 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocesso"
        "r.invalid_expressions.missing_expr_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001230 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001230 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001231, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001231 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor"
        ".invalid_expressions.missing_expr_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001231 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001231 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001232, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001232 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor"
        ".invalid_expressions.invalid_expr_1_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001232 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001232 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001233, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001233 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor."
        "invalid_expressions.invalid_expr_1_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001233 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001233 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001234, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001234 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor"
        ".invalid_expressions.invalid_expr_2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001234 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001234 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001235, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001235 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor."
        "invalid_expressions.invalid_expr_2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001235 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001235 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001236, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001236 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor"
        ".invalid_expressions.invalid_expr_3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001236 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001236 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001237, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001237 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor."
        "invalid_expressions.invalid_expr_3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001237 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001237 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001238, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001238 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.in"
        "valid_expressions.unopened_parenthesis_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001238 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001238 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001239, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001239 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.inv"
        "alid_expressions.unopened_parenthesis_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001239 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001239 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001240, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001240 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.in"
        "valid_expressions.unclosed_parenthesis_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001240 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001240 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001241, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001241 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.inv"
        "alid_expressions.unclosed_parenthesis_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001241 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001241 end";
}
