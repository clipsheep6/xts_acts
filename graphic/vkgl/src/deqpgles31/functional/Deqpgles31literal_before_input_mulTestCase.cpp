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
#include "../ActsDeqpgles310006TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005339, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005339 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".arithmetic.literal_before_input.mul.int_to_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005339 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005339 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005340, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005340 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
        "arithmetic.literal_before_input.mul.int_to_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005340 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005340 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005341, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005341 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "1.arithmetic.literal_before_input.mul.int_to_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005341 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005341 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005342, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005342 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".arithmetic.literal_before_input.mul.int_to_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005342 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005342 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005343, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005343 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "1.arithmetic.literal_before_input.mul.int_to_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005343 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005343 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005344, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005344 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".arithmetic.literal_before_input.mul.int_to_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005344 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005344 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005345, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005345 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "1.arithmetic.literal_before_input.mul.int_to_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005345 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005345 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005346, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005346 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".arithmetic.literal_before_input.mul.int_to_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005346 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005346 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005347, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005347 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "1.arithmetic.literal_before_input.mul.int_to_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005347 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005347 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005348, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005348 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".arithmetic.literal_before_input.mul.int_to_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005348 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005348 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005349, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005349 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".arithmetic.literal_before_input.mul.int_to_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005349 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005349 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005350, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005350 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
        "arithmetic.literal_before_input.mul.int_to_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005350 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005350 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005351, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005351 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".arithmetic.literal_before_input.mul.int_to_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005351 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005351 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005352, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005352 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
        "arithmetic.literal_before_input.mul.int_to_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005352 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005352 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005353, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005353 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".arithmetic.literal_before_input.mul.int_to_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005353 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005353 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005354, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005354 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
        "arithmetic.literal_before_input.mul.int_to_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005354 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005354 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005355, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005355 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".arithmetic.literal_before_input.mul.uint_to_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005355 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005355 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005356, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005356 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
        "arithmetic.literal_before_input.mul.uint_to_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005356 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005356 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005357, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005357 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".arithmetic.literal_before_input.mul.uint_to_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005357 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005357 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005358, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005358 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
        "arithmetic.literal_before_input.mul.uint_to_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005358 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005358 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005359, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005359 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".arithmetic.literal_before_input.mul.uint_to_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005359 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005359 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005360, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005360 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
        "arithmetic.literal_before_input.mul.uint_to_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005360 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005360 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005361, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005361 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".arithmetic.literal_before_input.mul.uint_to_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005361 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005361 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005362, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005362 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
        "arithmetic.literal_before_input.mul.uint_to_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005362 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005362 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005363, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005363 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
        "arithmetic.literal_before_input.mul.ivec2_to_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005363 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005363 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005364, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005364 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
        "rithmetic.literal_before_input.mul.ivec2_to_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005364 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005364 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005365, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005365 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".arithmetic.literal_before_input.mul.ivec2_to_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005365 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005365 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005366, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005366 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
        "arithmetic.literal_before_input.mul.ivec2_to_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005366 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005366 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005367, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005367 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".arithmetic.literal_before_input.mul.uvec2_to_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005367 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005367 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005368, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005368 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
        "arithmetic.literal_before_input.mul.uvec2_to_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005368 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005368 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005369, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005369 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
        "arithmetic.literal_before_input.mul.ivec3_to_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005369 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005369 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005370, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005370 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
        "rithmetic.literal_before_input.mul.ivec3_to_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005370 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005370 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005371, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005371 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".arithmetic.literal_before_input.mul.ivec3_to_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005371 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005371 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005372, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005372 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
        "arithmetic.literal_before_input.mul.ivec3_to_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005372 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005372 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005373, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005373 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".arithmetic.literal_before_input.mul.uvec3_to_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005373 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005373 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005374, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005374 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
        "arithmetic.literal_before_input.mul.uvec3_to_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005374 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005374 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005375, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005375 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
        "arithmetic.literal_before_input.mul.ivec4_to_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005375 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005375 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005376, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005376 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
        "rithmetic.literal_before_input.mul.ivec4_to_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005376 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005376 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005377, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005377 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".arithmetic.literal_before_input.mul.ivec4_to_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005377 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005377 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005378, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005378 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
        "arithmetic.literal_before_input.mul.ivec4_to_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005378 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005378 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005379, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005379 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".arithmetic.literal_before_input.mul.uvec4_to_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005379 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005379 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005380, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005380 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
        "arithmetic.literal_before_input.mul.uvec4_to_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005380 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005380 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006373, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006373 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".arithmetic.literal_before_input.mul.int_to_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006373 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006373 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006374, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006374 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
        "arithmetic.literal_before_input.mul.int_to_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006374 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006374 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006375, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006375 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "2.arithmetic.literal_before_input.mul.int_to_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006375 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006375 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006376, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006376 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".arithmetic.literal_before_input.mul.int_to_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006376 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006376 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006377, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006377 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "2.arithmetic.literal_before_input.mul.int_to_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006377 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006377 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006378, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006378 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".arithmetic.literal_before_input.mul.int_to_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006378 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006378 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006379, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006379 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "2.arithmetic.literal_before_input.mul.int_to_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006379 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006379 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006380, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006380 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".arithmetic.literal_before_input.mul.int_to_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006380 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006380 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006381, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006381 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
        "2.arithmetic.literal_before_input.mul.int_to_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006381 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006381 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006382, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006382 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".arithmetic.literal_before_input.mul.int_to_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006382 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006382 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006383, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006383 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".arithmetic.literal_before_input.mul.int_to_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006383 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006383 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006384, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006384 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
        "arithmetic.literal_before_input.mul.int_to_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006384 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006384 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006385, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006385 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".arithmetic.literal_before_input.mul.int_to_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006385 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006385 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006386, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006386 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
        "arithmetic.literal_before_input.mul.int_to_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006386 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006386 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006387, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006387 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".arithmetic.literal_before_input.mul.int_to_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006387 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006387 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006388, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006388 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
        "arithmetic.literal_before_input.mul.int_to_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006388 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006388 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006389, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006389 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".arithmetic.literal_before_input.mul.uint_to_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006389 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006389 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006390, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006390 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
        "arithmetic.literal_before_input.mul.uint_to_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006390 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006390 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006391, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006391 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".arithmetic.literal_before_input.mul.uint_to_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006391 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006391 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006392, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006392 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
        "arithmetic.literal_before_input.mul.uint_to_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006392 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006392 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006393, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006393 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".arithmetic.literal_before_input.mul.uint_to_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006393 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006393 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006394, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006394 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
        "arithmetic.literal_before_input.mul.uint_to_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006394 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006394 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006395, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006395 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".arithmetic.literal_before_input.mul.uint_to_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006395 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006395 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006396, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006396 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
        "arithmetic.literal_before_input.mul.uint_to_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006396 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006396 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006397, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006397 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
        "arithmetic.literal_before_input.mul.ivec2_to_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006397 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006397 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006398, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006398 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
        "rithmetic.literal_before_input.mul.ivec2_to_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006398 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006398 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006399, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006399 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".arithmetic.literal_before_input.mul.ivec2_to_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006399 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006399 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006400, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006400 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
        "arithmetic.literal_before_input.mul.ivec2_to_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006400 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006400 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006401, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006401 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".arithmetic.literal_before_input.mul.uvec2_to_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006401 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006401 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006402, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006402 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
        "arithmetic.literal_before_input.mul.uvec2_to_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006402 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006402 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006403, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006403 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
        "arithmetic.literal_before_input.mul.ivec3_to_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006403 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006403 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006404, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006404 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
        "rithmetic.literal_before_input.mul.ivec3_to_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006404 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006404 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006405, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006405 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".arithmetic.literal_before_input.mul.ivec3_to_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006405 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006405 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006406, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006406 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
        "arithmetic.literal_before_input.mul.ivec3_to_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006406 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006406 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006407, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006407 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".arithmetic.literal_before_input.mul.uvec3_to_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006407 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006407 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006408, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006408 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
        "arithmetic.literal_before_input.mul.uvec3_to_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006408 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006408 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006409, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006409 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
        "arithmetic.literal_before_input.mul.ivec4_to_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006409 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006409 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006410, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006410 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
        "rithmetic.literal_before_input.mul.ivec4_to_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006410 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006410 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006411, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006411 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".arithmetic.literal_before_input.mul.ivec4_to_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006411 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006411 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006412, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006412 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
        "arithmetic.literal_before_input.mul.ivec4_to_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006412 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006412 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006413, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006413 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".arithmetic.literal_before_input.mul.uvec4_to_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006413 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006413 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006414, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006414 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
        "arithmetic.literal_before_input.mul.uvec4_to_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006414 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006414 end";
}
