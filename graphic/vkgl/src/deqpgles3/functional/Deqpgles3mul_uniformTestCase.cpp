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
#include "../ActsDeqpgles30015TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014736, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014736 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.uniform.lowp_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014736 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014736 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014737, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014737 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014737 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014737 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014738, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014738 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.uniform.lowp_mat2_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014738 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014738 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014739, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014739 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat2_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014739 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014739 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014740, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014740 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.uniform.lowp_vec2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014740 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014740 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014741, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014741 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_vec2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014741 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014741 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014742, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014742 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.uniform.lowp_mat2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014742 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014742 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014743, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014743 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014743 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014743 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014744, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014744 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat2_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014744 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014744 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014745, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014745 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat2_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014745 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014745 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014746, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014746 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat2_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014746 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014746 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014747, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014747 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat2_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014747 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014747 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014748, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014748 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014748 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014748 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014749, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014749 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014749 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014749 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014750, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014750 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.mediump_mat2_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014750 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014750 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014751, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014751 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_mat2_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014751 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014751 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014752, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014752 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.mediump_vec2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014752 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014752 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014753, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014753 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_vec2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014753 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014753 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014754, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014754 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.mediump_mat2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014754 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014754 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014755, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014755 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_mat2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014755 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014755 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014756, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014756 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_mat2_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014756 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014756 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014757, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014757 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat2_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014757 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014757 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014758, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014758 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_mat2_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014758 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014758 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014759, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014759 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat2_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014759 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014759 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014760, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014760 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014760 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014760 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014761, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014761 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014761 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014761 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014762, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014762 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.uniform.highp_mat2_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014762 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014762 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014763, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014763 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_mat2_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014763 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014763 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014764, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014764 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.uniform.highp_vec2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014764 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014764 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014765, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014765 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_vec2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014765 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014765 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014766, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014766 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.uniform.highp_mat2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014766 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014766 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014767, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014767 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_mat2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014767 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014767 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014768, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014768 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_mat2_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014768 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014768 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014769, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014769 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat2_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014769 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014769 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014770, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014770 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_mat2_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014770 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014770 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014771, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014771 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat2_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014771 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014771 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014772, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014772 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat2x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014772 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014772 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014773, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014773 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat2x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014773 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014773 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014774, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014774 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat2x3_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014774 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014774 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014775, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014775 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat2x3_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014775 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014775 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014776, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014776 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_vec3_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014776 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014776 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014777, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014777 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_vec3_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014777 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014777 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014778, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014778 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat2x3_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014778 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014778 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014779, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014779 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat2x3_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014779 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014779 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014780, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014780 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat2x3_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014780 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014780 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014781, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014781 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.lowp_mat2x3_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014781 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014781 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014782, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014782 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat2x3_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014782 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014782 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014783, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014783 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.lowp_mat2x3_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014783 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014783 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014784, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014784 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat2x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014784 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014784 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014785, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014785 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.mu"
        "l.uniform.mediump_mat2x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014785 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014785 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014786, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014786 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_mat2x3_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014786 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014786 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014787, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014787 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat2x3_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014787 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014787 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014788, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014788 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_vec3_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014788 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014788 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014789, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014789 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_vec3_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014789 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014789 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014790, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014790 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_mat2x3_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014790 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014790 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014791, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014791 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat2x3_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014791 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014791 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014792, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014792 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat2x3_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014792 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014792 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014793, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014793 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.mu"
        "l.uniform.mediump_mat2x3_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014793 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014793 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014794, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014794 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat2x3_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014794 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014794 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014795, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014795 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.mu"
        "l.uniform.mediump_mat2x3_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014795 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014795 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014796, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014796 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat2x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014796 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014796 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014797, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014797 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.highp_mat2x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014797 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014797 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014798, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014798 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_mat2x3_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014798 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014798 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014799, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014799 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat2x3_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014799 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014799 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014800, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014800 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_vec3_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014800 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014800 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014801, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014801 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_vec3_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014801 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014801 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014802, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014802 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_mat2x3_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014802 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014802 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014803, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014803 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat2x3_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014803 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014803 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014804, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014804 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat2x3_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014804 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014804 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014805, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014805 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.highp_mat2x3_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014805 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014805 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014806, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014806 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat2x3_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014806 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014806 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014807, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014807 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.highp_mat2x3_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014807 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014807 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014808, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014808 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat2x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014808 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014808 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014809, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014809 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat2x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014809 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014809 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014810, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014810 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat2x4_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014810 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014810 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014811, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014811 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat2x4_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014811 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014811 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014812, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014812 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_vec4_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014812 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014812 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014813, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014813 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_vec4_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014813 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014813 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014814, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014814 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat2x4_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014814 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014814 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014815, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014815 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat2x4_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014815 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014815 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014816, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014816 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat2x4_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014816 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014816 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014817, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014817 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.lowp_mat2x4_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014817 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014817 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014818, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014818 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat2x4_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014818 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014818 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014819, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014819 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.lowp_mat2x4_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014819 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014819 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014820, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014820 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat2x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014820 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014820 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014821, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014821 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.mu"
        "l.uniform.mediump_mat2x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014821 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014821 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014822, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014822 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_mat2x4_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014822 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014822 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014823, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014823 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat2x4_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014823 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014823 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014824, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014824 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_vec4_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014824 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014824 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014825, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014825 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_vec4_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014825 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014825 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014826, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014826 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_mat2x4_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014826 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014826 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014827, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014827 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat2x4_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014827 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014827 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014828, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014828 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat2x4_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014828 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014828 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014829, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014829 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.mu"
        "l.uniform.mediump_mat2x4_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014829 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014829 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014830, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014830 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat2x4_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014830 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014830 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014831, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014831 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.mu"
        "l.uniform.mediump_mat2x4_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014831 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014831 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014832, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014832 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat2x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014832 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014832 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014833, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014833 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.highp_mat2x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014833 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014833 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014834, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014834 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_mat2x4_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014834 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014834 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014835, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014835 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat2x4_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014835 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014835 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014836, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014836 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_vec4_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014836 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014836 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014837, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014837 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_vec4_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014837 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014837 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014838, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014838 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_mat2x4_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014838 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014838 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014839, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014839 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat2x4_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014839 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014839 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014840, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014840 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat2x4_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014840 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014840 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014841, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014841 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.highp_mat2x4_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014841 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014841 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014842, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014842 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat2x4_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014842 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014842 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014843, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014843 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.highp_mat2x4_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014843 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014843 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014844, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014844 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat3x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014844 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014844 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014845, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014845 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat3x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014845 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014845 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014846, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014846 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat3x2_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014846 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014846 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014847, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014847 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat3x2_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014847 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014847 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014848, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014848 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_vec2_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014848 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014848 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014849, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014849 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_vec2_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014849 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014849 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014850, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014850 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat3x2_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014850 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014850 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014851, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014851 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.lowp_mat3x2_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014851 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014851 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014852, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014852 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat3x2_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014852 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014852 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014853, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014853 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat3x2_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014853 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014853 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014854, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014854 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat3x2_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014854 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014854 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014855, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014855 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.lowp_mat3x2_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014855 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014855 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014856, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014856 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat3x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014856 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014856 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014857, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014857 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.mu"
        "l.uniform.mediump_mat3x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014857 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014857 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014858, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014858 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_mat3x2_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014858 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014858 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014859, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014859 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat3x2_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014859 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014859 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014860, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014860 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_vec2_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014860 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014860 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014861, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014861 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_vec2_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014861 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014861 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014862, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014862 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat3x2_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014862 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014862 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014863, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014863 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.mu"
        "l.uniform.mediump_mat3x2_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014863 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014863 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014864, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014864 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_mat3x2_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014864 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014864 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014865, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014865 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat3x2_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014865 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014865 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014866, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014866 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat3x2_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014866 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014866 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014867, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014867 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.mu"
        "l.uniform.mediump_mat3x2_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014867 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014867 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014868, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014868 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat3x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014868 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014868 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014869, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014869 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.highp_mat3x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014869 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014869 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014870, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014870 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_mat3x2_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014870 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014870 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014871, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014871 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat3x2_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014871 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014871 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014872, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014872 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_vec2_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014872 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014872 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014873, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014873 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_vec2_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014873 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014873 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014874, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014874 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat3x2_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014874 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014874 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014875, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014875 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.highp_mat3x2_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014875 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014875 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014876, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014876 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_mat3x2_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014876 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014876 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014877, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014877 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat3x2_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014877 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014877 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014878, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014878 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat3x2_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014878 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014878 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014879, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014879 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.highp_mat3x2_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014879 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014879 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014880, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014880 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.uniform.lowp_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014880 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014880 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014881, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014881 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014881 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014881 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014882, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014882 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.uniform.lowp_mat3_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014882 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014882 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014883, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014883 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat3_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014883 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014883 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014884, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014884 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.uniform.lowp_vec3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014884 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014884 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014885, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014885 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_vec3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014885 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014885 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014886, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014886 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat3_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014886 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014886 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014887, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014887 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat3_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014887 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014887 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014888, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014888 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.uniform.lowp_mat3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014888 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014888 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014889, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014889 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014889 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014889 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014890, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014890 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat3_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014890 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014890 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014891, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014891 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat3_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014891 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014891 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014892, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014892 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014892 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014892 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014893, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014893 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014893 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014893 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014894, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014894 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.mediump_mat3_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014894 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014894 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014895, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014895 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_mat3_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014895 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014895 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014896, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014896 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.mediump_vec3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014896 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014896 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014897, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014897 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_vec3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014897 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014897 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014898, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014898 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_mat3_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014898 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014898 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014899, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014899 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat3_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014899 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014899 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014900, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014900 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.mediump_mat3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014900 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014900 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014901, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014901 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_mat3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014901 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014901 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014902, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014902 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_mat3_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014902 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014902 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014903, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014903 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat3_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014903 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014903 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014904, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014904 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014904 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014904 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014905, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014905 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014905 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014905 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014906, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014906 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.uniform.highp_mat3_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014906 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014906 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014907, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014907 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_mat3_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014907 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014907 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014908, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014908 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.uniform.highp_vec3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014908 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014908 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014909, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014909 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_vec3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014909 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014909 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014910, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014910 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_mat3_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014910 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014910 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014911, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014911 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat3_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014911 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014911 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014912, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014912 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.uniform.highp_mat3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014912 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014912 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014913, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014913 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_mat3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014913 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014913 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014914, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014914 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_mat3_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014914 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014914 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014915, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014915 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat3_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014915 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014915 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014916, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014916 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat3x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014916 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014916 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014917, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014917 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat3x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014917 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014917 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014918, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014918 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat3x4_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014918 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014918 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014919, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014919 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat3x4_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014919 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014919 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014920, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014920 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_vec4_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014920 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014920 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014921, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014921 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_vec4_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014921 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014921 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014922, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014922 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat3x4_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014922 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014922 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014923, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014923 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.lowp_mat3x4_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014923 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014923 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014924, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014924 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat3x4_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014924 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014924 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014925, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014925 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat3x4_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014925 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014925 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014926, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014926 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat3x4_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014926 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014926 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014927, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014927 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.lowp_mat3x4_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014927 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014927 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014928, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014928 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat3x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014928 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014928 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014929, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014929 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.mu"
        "l.uniform.mediump_mat3x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014929 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014929 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014930, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014930 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_mat3x4_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014930 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014930 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014931, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014931 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat3x4_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014931 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014931 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014932, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014932 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_vec4_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014932 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014932 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014933, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014933 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_vec4_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014933 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014933 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014934, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014934 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat3x4_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014934 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014934 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014935, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014935 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.mu"
        "l.uniform.mediump_mat3x4_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014935 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014935 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014936, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014936 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_mat3x4_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014936 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014936 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014937, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014937 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat3x4_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014937 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014937 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014938, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014938 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat3x4_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014938 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014938 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014939, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014939 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.mu"
        "l.uniform.mediump_mat3x4_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014939 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014939 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014940, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014940 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat3x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014940 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014940 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014941, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014941 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.highp_mat3x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014941 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014941 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014942, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014942 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_mat3x4_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014942 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014942 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014943, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014943 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat3x4_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014943 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014943 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014944, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014944 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_vec4_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014944 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014944 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014945, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014945 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_vec4_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014945 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014945 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014946, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014946 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat3x4_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014946 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014946 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014947, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014947 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.highp_mat3x4_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014947 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014947 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014948, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014948 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_mat3x4_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014948 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014948 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014949, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014949 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat3x4_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014949 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014949 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014950, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014950 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat3x4_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014950 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014950 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014951, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014951 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.highp_mat3x4_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014951 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014951 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014952, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014952 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat4x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014952 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014952 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014953, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014953 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat4x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014953 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014953 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014954, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014954 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat4x2_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014954 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014954 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014955, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014955 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat4x2_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014955 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014955 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014956, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014956 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_vec2_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014956 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014956 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014957, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014957 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_vec2_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014957 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014957 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014958, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014958 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat4x2_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014958 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014958 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014959, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014959 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.lowp_mat4x2_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014959 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014959 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014960, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014960 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat4x2_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014960 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014960 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014961, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014961 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.lowp_mat4x2_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014961 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014961 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014962, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014962 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat4x2_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014962 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014962 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014963, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014963 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat4x2_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014963 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014963 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014964, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014964 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat4x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014964 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014964 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014965, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014965 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.mu"
        "l.uniform.mediump_mat4x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014965 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014965 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014966, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014966 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_mat4x2_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014966 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014966 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014967, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014967 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat4x2_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014967 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014967 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014968, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014968 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_vec2_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014968 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014968 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014969, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014969 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_vec2_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014969 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014969 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014970, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014970 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat4x2_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014970 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014970 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014971, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014971 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.mu"
        "l.uniform.mediump_mat4x2_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014971 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014971 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014972, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014972 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat4x2_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014972 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014972 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014973, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014973 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.mu"
        "l.uniform.mediump_mat4x2_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014973 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014973 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014974, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014974 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_mat4x2_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014974 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014974 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014975, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014975 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat4x2_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014975 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014975 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014976, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014976 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat4x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014976 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014976 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014977, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014977 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.highp_mat4x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014977 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014977 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014978, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014978 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_mat4x2_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014978 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014978 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014979, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014979 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat4x2_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014979 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014979 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014980, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014980 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_vec2_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014980 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014980 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014981, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014981 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_vec2_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014981 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014981 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014982, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014982 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat4x2_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014982 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014982 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014983, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014983 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.highp_mat4x2_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014983 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014983 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014984, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014984 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat4x2_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014984 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014984 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014985, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014985 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.highp_mat4x2_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014985 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014985 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014986, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014986 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_mat4x2_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014986 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014986 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014987, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014987 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat4x2_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014987 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014987 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014988, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014988 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat4x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014988 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014988 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014989, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014989 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat4x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014989 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014989 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014990, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014990 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat4x3_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014990 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014990 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014991, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014991 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat4x3_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014991 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014991 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014992, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014992 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_vec3_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014992 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014992 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014993, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014993 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_vec3_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014993 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014993 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014994, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014994 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat4x3_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014994 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014994 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014995, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014995 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.lowp_mat4x3_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014995 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014995 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014996, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014996 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat4x3_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014996 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014996 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014997, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014997 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.lowp_mat4x3_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014997 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014997 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014998, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014998 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat4x3_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014998 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014998 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014999, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014999 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat4x3_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014999 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014999 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015000, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015000 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat4x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015000 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015000 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015001, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015001 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.mu"
        "l.uniform.mediump_mat4x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015001 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015001 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015002, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015002 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_mat4x3_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015002 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015002 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015003, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015003 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat4x3_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015003 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015003 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015004, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015004 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_vec3_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015004 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015004 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015005, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015005 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_vec3_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015005 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015005 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015006, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015006 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat4x3_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015006 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015006 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015007, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015007 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.mu"
        "l.uniform.mediump_mat4x3_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015007 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015007 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015008, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015008 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat4x3_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015008 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015008 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015009, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015009 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.mu"
        "l.uniform.mediump_mat4x3_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015009 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015009 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015010, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015010 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_mat4x3_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015010 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015010 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015011, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015011 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat4x3_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015011 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015011 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015012, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015012 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat4x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015012 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015012 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015013, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015013 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.highp_mat4x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015013 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015013 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015014, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015014 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_mat4x3_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015014 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015014 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015015, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015015 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat4x3_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015015 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015015 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015016, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015016 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_vec3_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015016 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015016 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015017, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015017 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_vec3_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015017 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015017 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015018, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015018 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat4x3_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015018 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015018 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015019, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015019 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.highp_mat4x3_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015019 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015019 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015020, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015020 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat4x3_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015020 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015020 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015021, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015021 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.highp_mat4x3_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015021 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015021 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015022, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015022 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_mat4x3_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015022 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015022 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015023, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015023 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat4x3_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015023 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015023 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015024, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015024 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.uniform.lowp_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015024 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015024 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015025, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015025 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015025 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015025 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015026, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015026 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.uniform.lowp_mat4_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015026 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015026 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015027, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015027 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat4_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015027 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015027 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015028, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015028 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.uniform.lowp_vec4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015028 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015028 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015029, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015029 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_vec4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015029 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015029 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015030, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015030 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat4_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015030 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015030 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015031, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015031 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat4_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015031 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015031 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015032, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015032 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat4_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015032 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015032 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015033, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015033 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.lowp_mat4_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015033 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015033 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015034, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015034 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.uniform.lowp_mat4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015034 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015034 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015035, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015035 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.lowp_mat4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015035 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015035 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015036, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015036 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015036 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015036 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015037, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015037 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015037 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015037 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015038, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015038 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.mediump_mat4_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015038 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015038 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015039, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015039 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_mat4_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015039 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015039 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015040, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015040 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.mediump_vec4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015040 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015040 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015041, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015041 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_vec4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015041 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015041 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015042, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015042 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_mat4_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015042 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015042 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015043, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015043 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat4_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015043 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015043 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015044, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015044 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_mat4_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015044 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015044 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015045, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015045 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.uniform.mediump_mat4_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015045 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015045 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015046, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015046 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.mediump_mat4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015046 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015046 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015047, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015047 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.mediump_mat4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015047 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015047 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015048, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015048 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015048 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015048 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015049, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015049 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015049 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015049 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015050, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015050 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.uniform.highp_mat4_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015050 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015050 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015051, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015051 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_mat4_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015051 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015051 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015052, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015052 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.uniform.highp_vec4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015052 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015052 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015053, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015053 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_vec4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015053 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015053 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015054, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015054 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_mat4_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015054 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015054 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015055, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015055 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat4_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015055 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015055 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015056, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015056 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_mat4_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015056 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015056 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015057, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015057 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.uniform.highp_mat4_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015057 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015057 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015058, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015058 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.uniform.highp_mat4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015058 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015058 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015059, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015059 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.uniform.highp_mat4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015059 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015059 end";
}
