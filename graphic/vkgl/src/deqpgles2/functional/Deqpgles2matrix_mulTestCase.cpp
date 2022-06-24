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
#include "../ActsDeqpgles20008TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007097, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007097 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matr"
        "ix.mul.const_lowp_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007097 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007097 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007098, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007098 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_lowp_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007098 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007098 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007099, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007099 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matr"
        "ix.mul.const_lowp_mat2_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007099 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007099 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007100, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007100 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_lowp_mat2_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007100 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007100 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007101, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007101 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matr"
        "ix.mul.const_lowp_vec2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007101 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007101 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007102, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007102 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_lowp_vec2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007102 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007102 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007103, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007103 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matr"
        "ix.mul.const_lowp_mat2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007103 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007103 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007104, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007104 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_lowp_mat2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007104 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007104 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007105, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007105 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.const_mediump_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007105 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007105 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007106, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007106 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.const_mediump_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007106 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007106 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007107, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007107 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_mediump_mat2_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007107 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007107 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007108, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007108 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.const_mediump_mat2_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007108 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007108 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007109, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007109 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_mediump_vec2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007109 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007109 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007110, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007110 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.const_mediump_vec2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007110 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007110 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007111, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007111 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_mediump_mat2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007111 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007111 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007112, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007112 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.const_mediump_mat2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007112 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007112 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007113, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007113 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_highp_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007113 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007113 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007114, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007114 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.const_highp_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007114 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007114 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007115, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007115 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matr"
        "ix.mul.const_highp_mat2_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007115 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007115 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007116, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007116 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_highp_mat2_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007116 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007116 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007117, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007117 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matr"
        "ix.mul.const_highp_vec2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007117 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007117 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007118, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007118 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_highp_vec2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007118 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007118 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007119, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007119 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matr"
        "ix.mul.const_highp_mat2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007119 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007119 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007120, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007120 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_highp_mat2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007120 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007120 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007121, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007121 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matr"
        "ix.mul.const_lowp_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007121 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007121 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007122, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007122 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_lowp_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007122 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007122 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007123, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007123 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matr"
        "ix.mul.const_lowp_mat3_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007123 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007123 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007124, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007124 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_lowp_mat3_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007124 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007124 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007125, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007125 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matr"
        "ix.mul.const_lowp_vec3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007125 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007125 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007126, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007126 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_lowp_vec3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007126 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007126 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007127, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007127 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matr"
        "ix.mul.const_lowp_mat3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007127 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007127 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007128, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007128 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_lowp_mat3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007128 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007128 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007129, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007129 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.const_mediump_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007129 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007129 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007130, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007130 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.const_mediump_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007130 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007130 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007131, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007131 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_mediump_mat3_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007131 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007131 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007132, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007132 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.const_mediump_mat3_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007132 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007132 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007133, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007133 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_mediump_vec3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007133 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007133 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007134, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007134 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.const_mediump_vec3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007134 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007134 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007135, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007135 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_mediump_mat3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007135 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007135 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007136, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007136 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.const_mediump_mat3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007136 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007136 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007137, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007137 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_highp_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007137 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007137 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007138, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007138 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.const_highp_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007138 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007138 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007139, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007139 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matr"
        "ix.mul.const_highp_mat3_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007139 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007139 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007140, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007140 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_highp_mat3_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007140 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007140 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007141, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007141 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matr"
        "ix.mul.const_highp_vec3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007141 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007141 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007142, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007142 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_highp_vec3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007142 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007142 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007143, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007143 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matr"
        "ix.mul.const_highp_mat3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007143 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007143 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007144, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007144 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_highp_mat3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007144 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007144 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007145, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007145 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matr"
        "ix.mul.const_lowp_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007145 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007145 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007146, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007146 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_lowp_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007146 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007146 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007147, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007147 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matr"
        "ix.mul.const_lowp_mat4_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007147 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007147 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007148, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007148 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_lowp_mat4_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007148 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007148 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007149, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007149 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matr"
        "ix.mul.const_lowp_vec4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007149 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007149 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007150, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007150 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_lowp_vec4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007150 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007150 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007151, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007151 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matr"
        "ix.mul.const_lowp_mat4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007151 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007151 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007152, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007152 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_lowp_mat4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007152 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007152 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007153, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007153 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.const_mediump_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007153 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007153 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007154, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007154 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.const_mediump_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007154 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007154 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007155, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007155 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_mediump_mat4_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007155 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007155 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007156, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007156 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.const_mediump_mat4_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007156 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007156 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007157, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007157 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_mediump_vec4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007157 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007157 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007158, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007158 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.const_mediump_vec4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007158 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007158 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007159, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007159 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_mediump_mat4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007159 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007159 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007160, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007160 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.const_mediump_mat4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007160 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007160 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007161, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007161 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_highp_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007161 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007161 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007162, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007162 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.const_highp_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007162 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007162 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007163, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007163 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matr"
        "ix.mul.const_highp_mat4_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007163 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007163 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007164, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007164 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_highp_mat4_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007164 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007164 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007165, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007165 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matr"
        "ix.mul.const_highp_vec4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007165 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007165 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007166, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007166 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_highp_vec4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007166 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007166 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007167, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007167 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matr"
        "ix.mul.const_highp_mat4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007167 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007167 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007168, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007168 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.const_highp_mat4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007168 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007168 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007169, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007169 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.uniform_lowp_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007169 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007169 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007170, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007170 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_lowp_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007170 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007170 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007171, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007171 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.uniform_lowp_mat2_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007171 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007171 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007172, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007172 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_lowp_mat2_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007172 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007172 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007173, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007173 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.uniform_lowp_vec2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007173 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007173 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007174, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007174 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_lowp_vec2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007174 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007174 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007175, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007175 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.uniform_lowp_mat2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007175 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007175 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007176, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007176 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_lowp_mat2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007176 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007176 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007177, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007177 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.uniform_mediump_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007177 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007177 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007178, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007178 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix.m"
        "ul.uniform_mediump_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007178 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007178 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007179, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007179 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_mediump_mat2_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007179 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007179 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007180, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007180 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.uniform_mediump_mat2_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007180 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007180 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007181, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007181 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_mediump_vec2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007181 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007181 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007182, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007182 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.uniform_mediump_vec2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007182 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007182 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007183, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007183 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_mediump_mat2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007183 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007183 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007184, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007184 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.uniform_mediump_mat2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007184 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007184 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007185, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007185 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_highp_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007185 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007185 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007186, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007186 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.uniform_highp_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007186 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007186 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007187, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007187 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.uniform_highp_mat2_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007187 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007187 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007188, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007188 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_highp_mat2_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007188 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007188 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007189, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007189 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.uniform_highp_vec2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007189 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007189 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007190, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007190 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_highp_vec2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007190 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007190 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007191, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007191 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.uniform_highp_mat2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007191 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007191 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007192, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007192 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_highp_mat2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007192 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007192 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007193, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007193 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.uniform_lowp_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007193 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007193 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007194, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007194 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_lowp_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007194 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007194 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007195, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007195 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.uniform_lowp_mat3_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007195 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007195 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007196, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007196 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_lowp_mat3_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007196 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007196 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007197, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007197 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.uniform_lowp_vec3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007197 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007197 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007198, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007198 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_lowp_vec3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007198 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007198 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007199, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007199 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.uniform_lowp_mat3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007199 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007199 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007200, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007200 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_lowp_mat3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007200 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007200 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007201, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007201 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.uniform_mediump_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007201 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007201 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007202, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007202 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix.m"
        "ul.uniform_mediump_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007202 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007202 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007203, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007203 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_mediump_mat3_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007203 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007203 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007204, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007204 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.uniform_mediump_mat3_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007204 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007204 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007205, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007205 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_mediump_vec3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007205 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007205 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007206, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007206 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.uniform_mediump_vec3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007206 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007206 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007207, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007207 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_mediump_mat3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007207 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007207 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007208, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007208 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.uniform_mediump_mat3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007208 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007208 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007209, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007209 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_highp_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007209 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007209 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007210, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007210 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.uniform_highp_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007210 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007210 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007211, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007211 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.uniform_highp_mat3_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007211 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007211 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007212, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007212 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_highp_mat3_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007212 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007212 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007213, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007213 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.uniform_highp_vec3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007213 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007213 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007214, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007214 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_highp_vec3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007214 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007214 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007215, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007215 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.uniform_highp_mat3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007215 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007215 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007216, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007216 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_highp_mat3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007216 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007216 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007217, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007217 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.uniform_lowp_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007217 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007217 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007218, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007218 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_lowp_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007218 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007218 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007219, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007219 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.uniform_lowp_mat4_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007219 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007219 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007220, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007220 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_lowp_mat4_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007220 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007220 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007221, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007221 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.uniform_lowp_vec4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007221 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007221 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007222, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007222 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_lowp_vec4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007222 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007222 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007223, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007223 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.uniform_lowp_mat4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007223 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007223 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007224, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007224 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_lowp_mat4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007224 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007224 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007225, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007225 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.uniform_mediump_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007225 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007225 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007226, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007226 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix.m"
        "ul.uniform_mediump_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007226 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007226 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007227, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007227 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_mediump_mat4_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007227 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007227 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007228, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007228 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.uniform_mediump_mat4_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007228 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007228 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007229, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007229 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_mediump_vec4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007229 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007229 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007230, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007230 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.uniform_mediump_vec4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007230 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007230 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007231, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007231 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_mediump_mat4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007231 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007231 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007232, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007232 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.uniform_mediump_mat4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007232 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007232 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007233, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007233 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_highp_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007233 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007233 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007234, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007234 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.uniform_highp_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007234 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007234 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007235, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007235 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.uniform_highp_mat4_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007235 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007235 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007236, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007236 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_highp_mat4_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007236 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007236 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007237, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007237 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.uniform_highp_vec4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007237 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007237 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007238, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007238 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_highp_vec4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007238 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007238 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007239, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007239 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.uniform_highp_mat4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007239 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007239 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007240, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007240 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.uniform_highp_mat4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007240 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007240 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007241, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007241 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.dynamic_lowp_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007241 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007241 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007242, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007242 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_lowp_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007242 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007242 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007243, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007243 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.dynamic_lowp_mat2_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007243 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007243 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007244, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007244 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_lowp_mat2_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007244 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007244 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007245, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007245 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.dynamic_lowp_vec2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007245 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007245 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007246, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007246 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_lowp_vec2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007246 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007246 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007247, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007247 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.dynamic_lowp_mat2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007247 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007247 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007248, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007248 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_lowp_mat2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007248 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007248 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007249, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007249 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.dynamic_mediump_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007249 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007249 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007250, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007250 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix.m"
        "ul.dynamic_mediump_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007250 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007250 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007251, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007251 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_mediump_mat2_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007251 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007251 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007252, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007252 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.dynamic_mediump_mat2_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007252 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007252 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007253, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007253 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_mediump_vec2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007253 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007253 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007254, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007254 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.dynamic_mediump_vec2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007254 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007254 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007255, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007255 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_mediump_mat2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007255 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007255 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007256, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007256 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.dynamic_mediump_mat2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007256 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007256 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007257, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007257 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_highp_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007257 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007257 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007258, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007258 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.dynamic_highp_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007258 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007258 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007259, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007259 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.dynamic_highp_mat2_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007259 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007259 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007260, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007260 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_highp_mat2_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007260 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007260 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007261, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007261 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.dynamic_highp_vec2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007261 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007261 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007262, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007262 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_highp_vec2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007262 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007262 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007263, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007263 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.dynamic_highp_mat2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007263 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007263 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007264, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007264 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_highp_mat2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007264 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007264 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007265, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007265 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.dynamic_lowp_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007265 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007265 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007266, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007266 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_lowp_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007266 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007266 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007267, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007267 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.dynamic_lowp_mat3_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007267 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007267 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007268, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007268 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_lowp_mat3_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007268 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007268 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007269, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007269 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.dynamic_lowp_vec3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007269 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007269 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007270, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007270 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_lowp_vec3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007270 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007270 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007271, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007271 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.dynamic_lowp_mat3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007271 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007271 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007272, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007272 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_lowp_mat3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007272 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007272 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007273, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007273 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.dynamic_mediump_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007273 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007273 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007274, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007274 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix.m"
        "ul.dynamic_mediump_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007274 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007274 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007275, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007275 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_mediump_mat3_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007275 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007275 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007276, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007276 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.dynamic_mediump_mat3_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007276 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007276 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007277, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007277 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_mediump_vec3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007277 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007277 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007278, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007278 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.dynamic_mediump_vec3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007278 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007278 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007279, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007279 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_mediump_mat3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007279 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007279 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007280, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007280 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.dynamic_mediump_mat3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007280 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007280 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007281, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007281 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_highp_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007281 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007281 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007282, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007282 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.dynamic_highp_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007282 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007282 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007283, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007283 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.dynamic_highp_mat3_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007283 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007283 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007284, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007284 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_highp_mat3_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007284 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007284 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007285, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007285 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.dynamic_highp_vec3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007285 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007285 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007286, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007286 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_highp_vec3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007286 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007286 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007287, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007287 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.dynamic_highp_mat3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007287 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007287 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007288, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007288 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_highp_mat3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007288 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007288 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007289, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007289 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.dynamic_lowp_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007289 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007289 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007290, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007290 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_lowp_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007290 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007290 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007291, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007291 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.dynamic_lowp_mat4_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007291 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007291 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007292, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007292 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_lowp_mat4_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007292 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007292 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007293, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007293 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.dynamic_lowp_vec4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007293 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007293 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007294, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007294 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_lowp_vec4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007294 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007294 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007295, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007295 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.dynamic_lowp_mat4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007295 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007295 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007296, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007296 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_lowp_mat4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007296 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007296 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007297, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007297 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.dynamic_mediump_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007297 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007297 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007298, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007298 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix.m"
        "ul.dynamic_mediump_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007298 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007298 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007299, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007299 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_mediump_mat4_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007299 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007299 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007300, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007300 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.dynamic_mediump_mat4_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007300 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007300 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007301, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007301 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_mediump_vec4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007301 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007301 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007302, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007302 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.dynamic_mediump_vec4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007302 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007302 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007303, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007303 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_mediump_mat4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007303 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007303 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007304, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007304 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.dynamic_mediump_mat4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007304 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007304 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007305, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007305 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_highp_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007305 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007305 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007306, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007306 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix."
        "mul.dynamic_highp_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007306 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007306 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007307, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007307 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.dynamic_highp_mat4_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007307 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007307 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007308, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007308 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_highp_mat4_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007308 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007308 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007309, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007309 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.dynamic_highp_vec4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007309 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007309 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007310, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007310 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_highp_vec4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007310 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007310 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007311, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007311 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matri"
        "x.mul.dynamic_highp_mat4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007311 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007311 end";
}

static HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007312, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007312 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.matrix"
        ".mul.dynamic_highp_mat4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007312 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007312 end";
}
