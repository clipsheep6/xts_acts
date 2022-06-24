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

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003630, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003630 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_subtract.mediump_vec2_x_x_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003630 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003630 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003631, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003631 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_subtract.mediump_vec2_x_x_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003631 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003631 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003632, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003632 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_subtract.mediump_vec2_xx_xx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003632 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003632 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003633, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003633 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_vec2_xx_xx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003633 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003633 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003634, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003634 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_subtract.mediump_vec2_xy_yx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003634 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003634 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003635, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003635 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_vec2_xy_yx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003635 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003635 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003636, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003636 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_subtract.mediump_vec2_yx_xy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003636 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003636 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003637, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003637 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_vec2_yx_xy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003637 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003637 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003638, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003638 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_vec2_yxy_xyy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003638 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003638 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003639, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003639 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_vec2_yxy_xyy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003639 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003639 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003640, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003640 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_vec2_xyxx_yxxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003640 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003640 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003641, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003641 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_vec2_xyxx_yxxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003641 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003641 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003642, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003642 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_vec2_yxyx_xyxy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003642 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003642 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003643, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003643 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_vec2_yxyx_xyxy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003643 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003643 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003644, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003644 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_subtract.mediump_vec3_x_x_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003644 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003644 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003645, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003645 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_subtract.mediump_vec3_x_x_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003645 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003645 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003646, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003646 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_subtract.mediump_vec3_z_z_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003646 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003646 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003647, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003647 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_subtract.mediump_vec3_z_z_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003647 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003647 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003648, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003648 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_subtract.mediump_vec3_xz_zx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003648 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003648 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003649, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003649 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_vec3_xz_zx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003649 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003649 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003650, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003650 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_subtract.mediump_vec3_zz_zz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003650 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003650 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003651, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003651 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_vec3_zz_zz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003651 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003651 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003652, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003652 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_vec3_xyz_yzx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003652 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003652 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003653, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003653 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_vec3_xyz_yzx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003653 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003653 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003654, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003654 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_vec3_zyx_yxz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003654 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003654 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003655, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003655 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_vec3_zyx_yxz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003655 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003655 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003656, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003656 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_vec3_xxx_xxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003656 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003656 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003657, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003657 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_vec3_xxx_xxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003657 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003657 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003658, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003658 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_vec3_zzz_zzz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003658 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003658 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003659, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003659 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_vec3_zzz_zzz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003659 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003659 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003660, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003660 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_vec3_zzy_zyz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003660 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003660 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003661, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003661 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_vec3_zzy_zyz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003661 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003661 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003662, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003662 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_vec3_yxy_xyy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003662 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003662 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003663, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003663 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_vec3_yxy_xyy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003663 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003663 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003664, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003664 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_vec3_xzx_zxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003664 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003664 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003665, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003665 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_vec3_xzx_zxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003665 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003665 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003666, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003666 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_vec3_xyyx_yyxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003666 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003666 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003667, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003667 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_vec3_xyyx_yyxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003667 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003667 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003668, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003668 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_vec3_zxyz_xyzz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003668 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003668 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003669, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003669 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_vec3_zxyz_xyzz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003669 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003669 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003670, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003670 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_subtract.mediump_vec4_x_x_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003670 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003670 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003671, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003671 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_subtract.mediump_vec4_x_x_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003671 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003671 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003672, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003672 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_subtract.mediump_vec4_w_w_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003672 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003672 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003673, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003673 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_subtract.mediump_vec4_w_w_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003673 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003673 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003674, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003674 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_subtract.mediump_vec4_wx_xw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003674 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003674 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003675, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003675 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_vec4_wx_xw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003675 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003675 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003676, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003676 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_subtract.mediump_vec4_wz_zw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003676 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003676 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003677, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003677 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_vec4_wz_zw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003677 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003677 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003678, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003678 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_vec4_www_www_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003678 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003678 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003679, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003679 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_vec4_www_www_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003679 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003679 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003680, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003680 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_vec4_yyw_ywy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003680 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003680 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003681, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003681 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_vec4_yyw_ywy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003681 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003681 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003682, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003682 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_vec4_wzy_zyw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003682 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003682 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003683, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003683 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_vec4_wzy_zyw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003683 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003683 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003684, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003684 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_vec4_xyzw_yzwx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003684 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003684 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003685, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003685 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_vec4_xyzw_yzwx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003685 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003685 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003686, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003686 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_vec4_wzyx_zyxw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003686 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003686 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003687, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003687 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_vec4_wzyx_zyxw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003687 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003687 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003688, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003688 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_vec4_xyxy_yxyx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003688 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003688 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003689, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003689 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_vec4_xyxy_yxyx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003689 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003689 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003690, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003690 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_vec4_yzzy_zzyy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003690 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003690 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003691, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003691 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_vec4_yzzy_zzyy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003691 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003691 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003692, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003692 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_vec4_wxww_xwww_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003692 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003692 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003693, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003693 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_vec4_wxww_xwww_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003693 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003693 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003694, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003694 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_vec4_xyxx_yxxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003694 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003694 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003695, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003695 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_vec4_xyxx_yxxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003695 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003695 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003696, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003696 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_vec4_zzzz_zzzz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003696 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003696 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003697, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003697 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_vec4_zzzz_zzzz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003697 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003697 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003698, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003698 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_subtract.mediump_ivec2_x_x_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003698 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003698 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003699, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003699 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_ivec2_x_x_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003699 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003699 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003700, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003700 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_ivec2_xx_xx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003700 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003700 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003701, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003701 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_ivec2_xx_xx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003701 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003701 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003702, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003702 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_ivec2_xy_yx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003702 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003702 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003703, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003703 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_ivec2_xy_yx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003703 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003703 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003704, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003704 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_ivec2_yx_xy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003704 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003704 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003705, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003705 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_ivec2_yx_xy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003705 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003705 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003706, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003706 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_ivec2_yxy_xyy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003706 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003706 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003707, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003707 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_ivec2_yxy_xyy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003707 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003707 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003708, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003708 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_ivec2_xyxx_yxxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003708 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003708 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003709, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003709 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
        "ns.vector_subtract.mediump_ivec2_xyxx_yxxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003709 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003709 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003710, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003710 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_ivec2_yxyx_xyxy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003710 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003710 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003711, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003711 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
        "ns.vector_subtract.mediump_ivec2_yxyx_xyxy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003711 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003711 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003712, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003712 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_subtract.mediump_ivec3_x_x_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003712 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003712 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003713, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003713 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_ivec3_x_x_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003713 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003713 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003714, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003714 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_subtract.mediump_ivec3_z_z_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003714 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003714 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003715, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003715 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_ivec3_z_z_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003715 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003715 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003716, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003716 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_ivec3_xz_zx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003716 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003716 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003717, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003717 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_ivec3_xz_zx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003717 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003717 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003718, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003718 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_ivec3_zz_zz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003718 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003718 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003719, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003719 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_ivec3_zz_zz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003719 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003719 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003720, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003720 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_ivec3_xyz_yzx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003720 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003720 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003721, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003721 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_ivec3_xyz_yzx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003721 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003721 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003722, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003722 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_ivec3_zyx_yxz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003722 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003722 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003723, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003723 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_ivec3_zyx_yxz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003723 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003723 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003724, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003724 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_ivec3_xxx_xxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003724 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003724 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003725, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003725 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_ivec3_xxx_xxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003725 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003725 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003726, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003726 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_ivec3_zzz_zzz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003726 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003726 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003727, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003727 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_ivec3_zzz_zzz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003727 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003727 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003728, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003728 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_ivec3_zzy_zyz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003728 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003728 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003729, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003729 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_ivec3_zzy_zyz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003729 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003729 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003730, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003730 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_ivec3_yxy_xyy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003730 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003730 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003731, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003731 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_ivec3_yxy_xyy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003731 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003731 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003732, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003732 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_ivec3_xzx_zxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003732 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003732 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003733, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003733 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_ivec3_xzx_zxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003733 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003733 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003734, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003734 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_ivec3_xyyx_yyxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003734 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003734 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003735, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003735 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
        "ns.vector_subtract.mediump_ivec3_xyyx_yyxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003735 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003735 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003736, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003736 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_ivec3_zxyz_xyzz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003736 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003736 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003737, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003737 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
        "ns.vector_subtract.mediump_ivec3_zxyz_xyzz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003737 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003737 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003738, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003738 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_subtract.mediump_ivec4_x_x_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003738 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003738 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003739, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003739 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_ivec4_x_x_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003739 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003739 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003740, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003740 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_subtract.mediump_ivec4_w_w_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003740 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003740 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003741, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003741 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_ivec4_w_w_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003741 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003741 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003742, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003742 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_ivec4_wx_xw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003742 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003742 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003743, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003743 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_ivec4_wx_xw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003743 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003743 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003744, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003744 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_subtract.mediump_ivec4_wz_zw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003744 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003744 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003745, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003745 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_ivec4_wz_zw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003745 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003745 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003746, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003746 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_ivec4_www_www_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003746 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003746 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003747, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003747 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_ivec4_www_www_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003747 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003747 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003748, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003748 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_ivec4_yyw_ywy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003748 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003748 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003749, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003749 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_ivec4_yyw_ywy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003749 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003749 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003750, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003750 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_subtract.mediump_ivec4_wzy_zyw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003750 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003750 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003751, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003751 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_ivec4_wzy_zyw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003751 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003751 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003752, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003752 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_ivec4_xyzw_yzwx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003752 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003752 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003753, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003753 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
        "ns.vector_subtract.mediump_ivec4_xyzw_yzwx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003753 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003753 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003754, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003754 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_ivec4_wzyx_zyxw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003754 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003754 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003755, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003755 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
        "ns.vector_subtract.mediump_ivec4_wzyx_zyxw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003755 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003755 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003756, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003756 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_ivec4_xyxy_yxyx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003756 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003756 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003757, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003757 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
        "ns.vector_subtract.mediump_ivec4_xyxy_yxyx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003757 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003757 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003758, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003758 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_ivec4_yzzy_zzyy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003758 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003758 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003759, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003759 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
        "ns.vector_subtract.mediump_ivec4_yzzy_zzyy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003759 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003759 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003760, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003760 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_ivec4_wxww_xwww_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003760 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003760 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003761, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003761 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
        "ns.vector_subtract.mediump_ivec4_wxww_xwww_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003761 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003761 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003762, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003762 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_ivec4_xyxx_yxxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003762 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003762 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003763, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003763 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
        "ns.vector_subtract.mediump_ivec4_xyxx_yxxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003763 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003763 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003764, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003764 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_subtract.mediump_ivec4_zzzz_zzzz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003764 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003764 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003765, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003765 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
        "ns.vector_subtract.mediump_ivec4_zzzz_zzzz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003765 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003765 end";
}
