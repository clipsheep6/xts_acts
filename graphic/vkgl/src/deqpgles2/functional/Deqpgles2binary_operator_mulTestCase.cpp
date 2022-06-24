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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20005TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004654, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004654 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator"
        ".binary_operator.mul.lowp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004654 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004654 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004655, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004655 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator."
        "binary_operator.mul.lowp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004655 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004655 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004656, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004656 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator."
        "binary_operator.mul.mediump_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004656 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004656 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004657, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004657 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.b"
        "inary_operator.mul.mediump_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004657 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004657 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004658, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004658 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator"
        ".binary_operator.mul.highp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004658 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004658 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004659, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004659 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator."
        "binary_operator.mul.highp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004659 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004659 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004660, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004660 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operato"
        "r.binary_operator.mul.lowp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004660 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004660 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004661, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004661 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator"
        ".binary_operator.mul.lowp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004661 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004661 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004662, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004662 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator."
        "binary_operator.mul.mediump_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004662 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004662 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004663, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004663 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.b"
        "inary_operator.mul.mediump_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004663 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004663 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004664, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004664 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator"
        ".binary_operator.mul.highp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004664 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004664 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004665, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004665 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator."
        "binary_operator.mul.highp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004665 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004665 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004666, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004666 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operato"
        "r.binary_operator.mul.lowp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004666 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004666 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004667, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004667 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator"
        ".binary_operator.mul.lowp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004667 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004667 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004668, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004668 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator."
        "binary_operator.mul.mediump_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004668 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004668 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004669, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004669 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.b"
        "inary_operator.mul.mediump_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004669 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004669 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004670, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004670 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator"
        ".binary_operator.mul.highp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004670 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004670 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004671, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004671 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator."
        "binary_operator.mul.highp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004671 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004671 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004672, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004672 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operato"
        "r.binary_operator.mul.lowp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004672 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004672 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004673, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004673 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator"
        ".binary_operator.mul.lowp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004673 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004673 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004674, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004674 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator."
        "binary_operator.mul.mediump_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004674 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004674 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004675, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004675 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.b"
        "inary_operator.mul.mediump_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004675 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004675 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004676, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004676 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator"
        ".binary_operator.mul.highp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004676 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004676 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004677, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004677 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator."
        "binary_operator.mul.highp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004677 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004677 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004678, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004678 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operato"
        "r.binary_operator.mul.lowp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004678 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004678 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004679, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004679 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator"
        ".binary_operator.mul.lowp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004679 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004679 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004680, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004680 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator"
        ".binary_operator.mul.mediump_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004680 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004680 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004681, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004681 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator."
        "binary_operator.mul.mediump_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004681 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004681 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004682, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004682 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operato"
        "r.binary_operator.mul.highp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004682 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004682 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004683, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004683 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator"
        ".binary_operator.mul.highp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004683 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004683 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004684, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004684 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator"
        ".binary_operator.mul.lowp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004684 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004684 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004685, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004685 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator."
        "binary_operator.mul.lowp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004685 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004685 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004686, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004686 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator."
        "binary_operator.mul.mediump_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004686 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004686 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004687, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004687 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.b"
        "inary_operator.mul.mediump_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004687 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004687 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004688, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004688 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator"
        ".binary_operator.mul.highp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004688 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004688 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004689, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004689 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator."
        "binary_operator.mul.highp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004689 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004689 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004690, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004690 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator"
        ".binary_operator.mul.lowp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004690 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004690 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004691, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004691 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator."
        "binary_operator.mul.lowp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004691 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004691 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004692, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004692 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator."
        "binary_operator.mul.mediump_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004692 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004692 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004693, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004693 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.b"
        "inary_operator.mul.mediump_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004693 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004693 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004694, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004694 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator"
        ".binary_operator.mul.highp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004694 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004694 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004695, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004695 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator."
        "binary_operator.mul.highp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004695 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004695 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004696, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004696 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator"
        ".binary_operator.mul.lowp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004696 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004696 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004697, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004697 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator."
        "binary_operator.mul.lowp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004697 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004697 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004698, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004698 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator."
        "binary_operator.mul.mediump_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004698 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004698 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004699, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004699 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.b"
        "inary_operator.mul.mediump_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004699 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004699 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004700, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004700 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator"
        ".binary_operator.mul.highp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004700 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004700 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004701, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004701 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator."
        "binary_operator.mul.highp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004701 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004701 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004702, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004702 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.b"
        "inary_operator.mul.lowp_vec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004702 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004702 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004703, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004703 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_vec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004703 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004703 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004704, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004704 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_vec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004704 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004704 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004705, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004705 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bina"
        "ry_operator.mul.mediump_vec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004705 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004705 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004706, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004706 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.highp_vec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004706 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004706 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004707, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004707 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bin"
        "ary_operator.mul.highp_vec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004707 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004707 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004708, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004708 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.b"
        "inary_operator.mul.lowp_vec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004708 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004708 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004709, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004709 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_vec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004709 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004709 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004710, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004710 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_vec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004710 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004710 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004711, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004711 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bina"
        "ry_operator.mul.mediump_vec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004711 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004711 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004712, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004712 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.highp_vec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004712 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004712 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004713, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004713 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bin"
        "ary_operator.mul.highp_vec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004713 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004713 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004714, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004714 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.b"
        "inary_operator.mul.lowp_vec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004714 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004714 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004715, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004715 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_vec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004715 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004715 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004716, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004716 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_vec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004716 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004716 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004717, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004717 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bina"
        "ry_operator.mul.mediump_vec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004717 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004717 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004718, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004718 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.highp_vec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004718 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004718 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004719, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004719 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bin"
        "ary_operator.mul.highp_vec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004719 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004719 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004720, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004720 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.b"
        "inary_operator.mul.lowp_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004720 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004720 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004721, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004721 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004721 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004721 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004722, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004722 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.mediump_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004722 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004722 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004723, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004723 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004723 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004723 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004724, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004724 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.b"
        "inary_operator.mul.highp_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004724 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004724 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004725, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004725 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.highp_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004725 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004725 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004726, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004726 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.b"
        "inary_operator.mul.lowp_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004726 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004726 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004727, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004727 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004727 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004727 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004728, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004728 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.mediump_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004728 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004728 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004729, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004729 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004729 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004729 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004730, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004730 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.b"
        "inary_operator.mul.highp_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004730 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004730 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004731, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004731 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.highp_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004731 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004731 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004732, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004732 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.b"
        "inary_operator.mul.lowp_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004732 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004732 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004733, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004733 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004733 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004733 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004734, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004734 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.mediump_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004734 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004734 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004735, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004735 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004735 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004735 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004736, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004736 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.b"
        "inary_operator.mul.highp_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004736 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004736 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004737, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004737 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.highp_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004737 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004737 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004738, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004738 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.b"
        "inary_operator.mul.lowp_float_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004738 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004738 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004739, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004739 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_float_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004739 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004739 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004740, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004740 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_float_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004740 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004740 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004741, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004741 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bina"
        "ry_operator.mul.mediump_float_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004741 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004741 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004742, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004742 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.highp_float_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004742 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004742 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004743, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004743 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bin"
        "ary_operator.mul.highp_float_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004743 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004743 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004744, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004744 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.b"
        "inary_operator.mul.lowp_float_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004744 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004744 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004745, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004745 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_float_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004745 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004745 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004746, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004746 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_float_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004746 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004746 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004747, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004747 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bina"
        "ry_operator.mul.mediump_float_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004747 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004747 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004748, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004748 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.highp_float_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004748 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004748 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004749, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004749 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bin"
        "ary_operator.mul.highp_float_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004749 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004749 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004750, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004750 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.b"
        "inary_operator.mul.lowp_float_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004750 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004750 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004751, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004751 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_float_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004751 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004751 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004752, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004752 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_float_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004752 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004752 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004753, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004753 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bina"
        "ry_operator.mul.mediump_float_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004753 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004753 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004754, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004754 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.highp_float_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004754 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004754 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004755, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004755 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bin"
        "ary_operator.mul.highp_float_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004755 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004755 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004756, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004756 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.b"
        "inary_operator.mul.lowp_int_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004756 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004756 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004757, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004757 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_int_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004757 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004757 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004758, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004758 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.mediump_int_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004758 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004758 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004759, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004759 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_int_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004759 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004759 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004760, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004760 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.b"
        "inary_operator.mul.highp_int_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004760 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004760 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004761, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004761 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.highp_int_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004761 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004761 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004762, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004762 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.b"
        "inary_operator.mul.lowp_int_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004762 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004762 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004763, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004763 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_int_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004763 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004763 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004764, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004764 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.mediump_int_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004764 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004764 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004765, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004765 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_int_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004765 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004765 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004766, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004766 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.b"
        "inary_operator.mul.highp_int_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004766 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004766 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004767, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004767 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.highp_int_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004767 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004767 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004768, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004768 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.b"
        "inary_operator.mul.lowp_int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004768 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004768 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004769, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004769 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004769 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004769 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004770, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004770 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.mediump_int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004770 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004770 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004771, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004771 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004771 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004771 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004772, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004772 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.b"
        "inary_operator.mul.highp_int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004772 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004772 end";
}

static HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004773, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004773 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.operator.bi"
        "nary_operator.mul.highp_int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004773 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004773 end";
}
