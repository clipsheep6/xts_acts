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
#include "../ActsDeqpgles30004TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003494, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003494 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_o"
        "perations.vector_add.mediump_vec2_x_x_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003494 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003494 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003495, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003495 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_add.mediump_vec2_x_x_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003495 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003495 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003496, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003496 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_add.mediump_vec2_xx_xx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003496 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003496 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003497, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003497 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_vec2_xx_xx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003497 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003497 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003498, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003498 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_add.mediump_vec2_xy_yx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003498 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003498 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003499, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003499 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_vec2_xy_yx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003499 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003499 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003500, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003500 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_add.mediump_vec2_yx_xy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003500 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003500 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003501, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003501 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_vec2_yx_xy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003501 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003501 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003502, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003502 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_vec2_yxy_xyy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003502 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003502 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003503, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003503 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_vec2_yxy_xyy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003503 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003503 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003504, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003504 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_vec2_xyxx_yxxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003504 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003504 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003505, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003505 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_add.mediump_vec2_xyxx_yxxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003505 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003505 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003506, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003506 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_vec2_yxyx_xyxy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003506 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003506 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003507, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003507 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_add.mediump_vec2_yxyx_xyxy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003507 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003507 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003508, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003508 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_o"
        "perations.vector_add.mediump_vec3_x_x_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003508 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003508 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003509, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003509 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_add.mediump_vec3_x_x_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003509 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003509 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003510, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003510 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_o"
        "perations.vector_add.mediump_vec3_z_z_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003510 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003510 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003511, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003511 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_add.mediump_vec3_z_z_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003511 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003511 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003512, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003512 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_add.mediump_vec3_xz_zx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003512 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003512 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003513, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003513 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_vec3_xz_zx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003513 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003513 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003514, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003514 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_add.mediump_vec3_zz_zz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003514 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003514 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003515, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003515 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_vec3_zz_zz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003515 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003515 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003516, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003516 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_vec3_xyz_yzx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003516 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003516 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003517, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003517 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_vec3_xyz_yzx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003517 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003517 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003518, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003518 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_vec3_zyx_yxz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003518 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003518 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003519, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003519 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_vec3_zyx_yxz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003519 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003519 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003520, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003520 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_vec3_xxx_xxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003520 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003520 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003521, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003521 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_vec3_xxx_xxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003521 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003521 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003522, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003522 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_vec3_zzz_zzz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003522 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003522 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003523, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003523 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_vec3_zzz_zzz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003523 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003523 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003524, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003524 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_vec3_zzy_zyz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003524 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003524 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003525, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003525 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_vec3_zzy_zyz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003525 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003525 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003526, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003526 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_vec3_yxy_xyy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003526 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003526 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003527, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003527 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_vec3_yxy_xyy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003527 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003527 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003528, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003528 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_vec3_xzx_zxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003528 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003528 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003529, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003529 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_vec3_xzx_zxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003529 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003529 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003530, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003530 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_vec3_xyyx_yyxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003530 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003530 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003531, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003531 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_add.mediump_vec3_xyyx_yyxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003531 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003531 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003532, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003532 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_vec3_zxyz_xyzz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003532 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003532 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003533, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003533 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_add.mediump_vec3_zxyz_xyzz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003533 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003533 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003534, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003534 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_o"
        "perations.vector_add.mediump_vec4_x_x_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003534 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003534 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003535, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003535 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_add.mediump_vec4_x_x_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003535 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003535 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003536, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003536 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_o"
        "perations.vector_add.mediump_vec4_w_w_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003536 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003536 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003537, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003537 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_add.mediump_vec4_w_w_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003537 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003537 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003538, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003538 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_add.mediump_vec4_wx_xw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003538 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003538 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003539, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003539 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_vec4_wx_xw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003539 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003539 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003540, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003540 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_add.mediump_vec4_wz_zw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003540 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003540 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003541, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003541 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_vec4_wz_zw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003541 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003541 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003542, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003542 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_vec4_www_www_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003542 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003542 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003543, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003543 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_vec4_www_www_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003543 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003543 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003544, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003544 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_vec4_yyw_ywy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003544 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003544 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003545, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003545 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_vec4_yyw_ywy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003545 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003545 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003546, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003546 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_vec4_wzy_zyw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003546 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003546 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003547, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003547 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_vec4_wzy_zyw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003547 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003547 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003548, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003548 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_vec4_xyzw_yzwx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003548 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003548 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003549, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003549 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_add.mediump_vec4_xyzw_yzwx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003549 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003549 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003550, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003550 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_vec4_wzyx_zyxw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003550 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003550 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003551, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003551 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_add.mediump_vec4_wzyx_zyxw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003551 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003551 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003552, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003552 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_vec4_xyxy_yxyx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003552 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003552 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003553, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003553 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_add.mediump_vec4_xyxy_yxyx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003553 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003553 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003554, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003554 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_vec4_yzzy_zzyy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003554 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003554 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003555, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003555 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_add.mediump_vec4_yzzy_zzyy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003555 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003555 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003556, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003556 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_vec4_wxww_xwww_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003556 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003556 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003557, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003557 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_add.mediump_vec4_wxww_xwww_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003557 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003557 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003558, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003558 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_vec4_xyxx_yxxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003558 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003558 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003559, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003559 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_add.mediump_vec4_xyxx_yxxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003559 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003559 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003560, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003560 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_vec4_zzzz_zzzz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003560 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003560 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003561, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003561 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_add.mediump_vec4_zzzz_zzzz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003561 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003561 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003562, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003562 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_o"
        "perations.vector_add.mediump_ivec2_x_x_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003562 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003562 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003563, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003563 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_add.mediump_ivec2_x_x_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003563 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003563 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003564, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003564 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_add.mediump_ivec2_xx_xx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003564 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003564 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003565, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003565 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_ivec2_xx_xx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003565 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003565 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003566, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003566 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_add.mediump_ivec2_xy_yx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003566 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003566 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003567, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003567 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_ivec2_xy_yx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003567 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003567 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003568, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003568 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_add.mediump_ivec2_yx_xy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003568 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003568 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003569, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003569 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_ivec2_yx_xy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003569 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003569 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003570, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003570 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_ivec2_yxy_xyy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003570 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003570 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003571, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003571 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_ivec2_yxy_xyy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003571 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003571 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003572, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003572 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_ivec2_xyxx_yxxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003572 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003572 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003573, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003573 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_add.mediump_ivec2_xyxx_yxxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003573 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003573 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003574, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003574 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_ivec2_yxyx_xyxy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003574 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003574 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003575, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003575 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_add.mediump_ivec2_yxyx_xyxy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003575 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003575 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003576, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003576 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_o"
        "perations.vector_add.mediump_ivec3_x_x_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003576 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003576 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003577, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003577 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_add.mediump_ivec3_x_x_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003577 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003577 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003578, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003578 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_o"
        "perations.vector_add.mediump_ivec3_z_z_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003578 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003578 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003579, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003579 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_add.mediump_ivec3_z_z_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003579 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003579 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003580, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003580 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_add.mediump_ivec3_xz_zx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003580 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003580 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003581, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003581 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_ivec3_xz_zx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003581 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003581 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003582, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003582 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_add.mediump_ivec3_zz_zz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003582 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003582 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003583, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003583 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_ivec3_zz_zz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003583 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003583 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003584, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003584 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_ivec3_xyz_yzx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003584 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003584 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003585, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003585 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_ivec3_xyz_yzx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003585 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003585 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003586, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003586 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_ivec3_zyx_yxz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003586 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003586 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003587, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003587 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_ivec3_zyx_yxz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003587 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003587 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003588, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003588 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_ivec3_xxx_xxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003588 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003588 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003589, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003589 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_ivec3_xxx_xxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003589 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003589 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003590, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003590 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_ivec3_zzz_zzz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003590 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003590 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003591, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003591 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_ivec3_zzz_zzz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003591 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003591 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003592, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003592 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_ivec3_zzy_zyz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003592 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003592 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003593, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003593 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_ivec3_zzy_zyz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003593 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003593 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003594, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003594 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_ivec3_yxy_xyy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003594 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003594 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003595, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003595 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_ivec3_yxy_xyy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003595 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003595 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003596, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003596 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_ivec3_xzx_zxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003596 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003596 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003597, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003597 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_ivec3_xzx_zxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003597 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003597 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003598, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003598 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_ivec3_xyyx_yyxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003598 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003598 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003599, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003599 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_add.mediump_ivec3_xyyx_yyxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003599 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003599 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003600, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003600 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_ivec3_zxyz_xyzz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003600 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003600 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003601, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003601 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_add.mediump_ivec3_zxyz_xyzz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003601 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003601 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003602, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003602 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_o"
        "perations.vector_add.mediump_ivec4_x_x_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003602 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003602 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003603, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003603 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_add.mediump_ivec4_x_x_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003603 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003603 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003604, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003604 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_o"
        "perations.vector_add.mediump_ivec4_w_w_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003604 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003604 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003605, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003605 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_add.mediump_ivec4_w_w_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003605 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003605 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003606, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003606 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_add.mediump_ivec4_wx_xw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003606 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003606 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003607, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003607 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_ivec4_wx_xw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003607 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003607 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003608, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003608 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_add.mediump_ivec4_wz_zw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003608 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003608 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003609, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003609 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_ivec4_wz_zw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003609 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003609 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003610, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003610 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_ivec4_www_www_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003610 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003610 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003611, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003611 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_ivec4_www_www_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003611 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003611 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003612, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003612 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_ivec4_yyw_ywy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003612 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003612 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003613, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003613 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_ivec4_yyw_ywy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003613 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003613 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003614, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003614 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_add.mediump_ivec4_wzy_zyw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003614 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003614 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003615, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003615 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_ivec4_wzy_zyw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003615 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003615 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003616, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003616 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_ivec4_xyzw_yzwx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003616 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003616 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003617, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003617 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_add.mediump_ivec4_xyzw_yzwx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003617 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003617 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003618, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003618 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_ivec4_wzyx_zyxw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003618 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003618 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003619, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003619 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_add.mediump_ivec4_wzyx_zyxw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003619 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003619 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003620, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003620 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_ivec4_xyxy_yxyx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003620 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003620 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003621, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003621 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_add.mediump_ivec4_xyxy_yxyx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003621 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003621 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003622, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003622 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_ivec4_yzzy_zzyy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003622 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003622 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003623, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003623 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_add.mediump_ivec4_yzzy_zzyy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003623 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003623 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003624, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003624 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_ivec4_wxww_xwww_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003624 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003624 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003625, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003625 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_add.mediump_ivec4_wxww_xwww_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003625 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003625 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003626, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003626 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_ivec4_xyxx_yxxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003626 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003626 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003627, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003627 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_add.mediump_ivec4_xyxx_yxxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003627 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003627 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003628, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003628 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_add.mediump_ivec4_zzzz_zzzz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003628 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003628 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003629, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003629 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_add.mediump_ivec4_zzzz_zzzz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003629 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003629 end";
}
