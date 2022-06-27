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

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003766, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003766 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_multiply.mediump_vec2_x_x_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003766 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003766 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003767, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003767 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_multiply.mediump_vec2_x_x_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003767 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003767 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003768, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003768 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_multiply.mediump_vec2_xx_xx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003768 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003768 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003769, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003769 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_vec2_xx_xx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003769 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003769 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003770, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003770 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_multiply.mediump_vec2_xy_yx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003770 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003770 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003771, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003771 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_vec2_xy_yx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003771 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003771 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003772, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003772 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_multiply.mediump_vec2_yx_xy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003772 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003772 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003773, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003773 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_vec2_yx_xy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003773 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003773 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003774, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003774 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_vec2_yxy_xyy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003774 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003774 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003775, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003775 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_vec2_yxy_xyy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003775 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003775 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003776, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003776 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_vec2_xyxx_yxxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003776 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003776 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003777, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003777 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_vec2_xyxx_yxxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003777 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003777 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003778, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003778 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_vec2_yxyx_xyxy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003778 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003778 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003779, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003779 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_vec2_yxyx_xyxy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003779 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003779 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003780, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003780 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_multiply.mediump_vec3_x_x_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003780 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003780 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003781, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003781 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_multiply.mediump_vec3_x_x_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003781 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003781 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003782, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003782 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_multiply.mediump_vec3_z_z_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003782 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003782 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003783, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003783 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_multiply.mediump_vec3_z_z_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003783 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003783 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003784, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003784 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_multiply.mediump_vec3_xz_zx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003784 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003784 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003785, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003785 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_vec3_xz_zx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003785 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003785 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003786, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003786 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_multiply.mediump_vec3_zz_zz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003786 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003786 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003787, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003787 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_vec3_zz_zz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003787 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003787 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003788, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003788 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_vec3_xyz_yzx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003788 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003788 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003789, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003789 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_vec3_xyz_yzx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003789 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003789 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003790, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003790 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_vec3_zyx_yxz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003790 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003790 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003791, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003791 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_vec3_zyx_yxz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003791 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003791 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003792, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003792 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_vec3_xxx_xxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003792 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003792 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003793, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003793 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_vec3_xxx_xxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003793 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003793 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003794, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003794 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_vec3_zzz_zzz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003794 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003794 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003795, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003795 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_vec3_zzz_zzz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003795 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003795 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003796, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003796 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_vec3_zzy_zyz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003796 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003796 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003797, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003797 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_vec3_zzy_zyz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003797 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003797 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003798, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003798 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_vec3_yxy_xyy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003798 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003798 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003799, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003799 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_vec3_yxy_xyy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003799 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003799 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003800, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003800 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_vec3_xzx_zxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003800 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003800 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003801, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003801 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_vec3_xzx_zxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003801 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003801 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003802, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003802 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_vec3_xyyx_yyxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003802 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003802 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003803, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003803 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_vec3_xyyx_yyxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003803 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003803 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003804, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003804 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_vec3_zxyz_xyzz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003804 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003804 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003805, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003805 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_vec3_zxyz_xyzz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003805 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003805 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003806, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003806 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_multiply.mediump_vec4_x_x_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003806 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003806 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003807, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003807 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_multiply.mediump_vec4_x_x_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003807 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003807 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003808, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003808 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_multiply.mediump_vec4_w_w_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003808 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003808 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003809, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003809 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_multiply.mediump_vec4_w_w_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003809 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003809 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003810, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003810 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_multiply.mediump_vec4_wx_xw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003810 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003810 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003811, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003811 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_vec4_wx_xw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003811 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003811 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003812, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003812 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_multiply.mediump_vec4_wz_zw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003812 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003812 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003813, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003813 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_vec4_wz_zw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003813 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003813 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003814, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003814 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_vec4_www_www_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003814 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003814 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003815, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003815 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_vec4_www_www_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003815 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003815 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003816, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003816 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_vec4_yyw_ywy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003816 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003816 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003817, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003817 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_vec4_yyw_ywy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003817 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003817 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003818, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003818 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_vec4_wzy_zyw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003818 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003818 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003819, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003819 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_vec4_wzy_zyw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003819 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003819 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003820, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003820 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_vec4_xyzw_yzwx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003820 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003820 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003821, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003821 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_vec4_xyzw_yzwx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003821 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003821 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003822, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003822 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_vec4_wzyx_zyxw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003822 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003822 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003823, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003823 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_vec4_wzyx_zyxw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003823 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003823 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003824, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003824 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_vec4_xyxy_yxyx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003824 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003824 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003825, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003825 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_vec4_xyxy_yxyx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003825 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003825 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003826, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003826 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_vec4_yzzy_zzyy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003826 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003826 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003827, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003827 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_vec4_yzzy_zzyy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003827 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003827 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003828, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003828 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_vec4_wxww_xwww_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003828 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003828 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003829, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003829 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_vec4_wxww_xwww_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003829 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003829 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003830, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003830 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_vec4_xyxx_yxxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003830 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003830 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003831, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003831 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_vec4_xyxx_yxxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003831 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003831 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003832, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003832 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_vec4_zzzz_zzzz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003832 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003832 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003833, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003833 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_vec4_zzzz_zzzz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003833 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003833 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003834, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003834 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_multiply.mediump_ivec2_x_x_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003834 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003834 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003835, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003835 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_ivec2_x_x_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003835 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003835 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003836, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003836 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_ivec2_xx_xx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003836 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003836 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003837, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003837 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_ivec2_xx_xx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003837 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003837 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003838, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003838 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_ivec2_xy_yx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003838 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003838 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003839, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003839 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_ivec2_xy_yx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003839 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003839 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003840, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003840 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_ivec2_yx_xy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003840 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003840 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003841, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003841 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_ivec2_yx_xy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003841 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003841 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003842, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003842 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_ivec2_yxy_xyy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003842 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003842 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003843, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003843 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_ivec2_yxy_xyy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003843 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003843 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003844, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003844 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_ivec2_xyxx_yxxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003844 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003844 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003845, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003845 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
        "ns.vector_multiply.mediump_ivec2_xyxx_yxxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003845 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003845 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003846, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003846 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_ivec2_yxyx_xyxy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003846 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003846 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003847, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003847 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
        "ns.vector_multiply.mediump_ivec2_yxyx_xyxy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003847 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003847 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003848, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003848 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_multiply.mediump_ivec3_x_x_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003848 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003848 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003849, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003849 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_ivec3_x_x_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003849 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003849 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003850, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003850 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_multiply.mediump_ivec3_z_z_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003850 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003850 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003851, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003851 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_ivec3_z_z_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003851 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003851 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003852, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003852 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_ivec3_xz_zx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003852 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003852 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003853, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003853 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_ivec3_xz_zx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003853 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003853 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003854, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003854 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_ivec3_zz_zz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003854 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003854 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003855, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003855 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_ivec3_zz_zz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003855 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003855 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003856, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003856 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_ivec3_xyz_yzx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003856 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003856 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003857, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003857 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_ivec3_xyz_yzx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003857 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003857 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003858, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003858 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_ivec3_zyx_yxz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003858 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003858 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003859, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003859 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_ivec3_zyx_yxz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003859 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003859 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003860, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003860 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_ivec3_xxx_xxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003860 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003860 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003861, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003861 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_ivec3_xxx_xxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003861 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003861 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003862, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003862 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_ivec3_zzz_zzz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003862 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003862 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003863, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003863 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_ivec3_zzz_zzz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003863 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003863 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003864, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003864 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_ivec3_zzy_zyz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003864 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003864 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003865, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003865 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_ivec3_zzy_zyz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003865 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003865 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003866, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003866 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_ivec3_yxy_xyy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003866 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003866 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003867, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003867 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_ivec3_yxy_xyy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003867 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003867 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003868, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003868 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_ivec3_xzx_zxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003868 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003868 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003869, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003869 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_ivec3_xzx_zxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003869 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003869 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003870, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003870 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_ivec3_xyyx_yyxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003870 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003870 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003871, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003871 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
        "ns.vector_multiply.mediump_ivec3_xyyx_yyxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003871 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003871 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003872, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003872 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_ivec3_zxyz_xyzz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003872 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003872 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003873, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003873 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
        "ns.vector_multiply.mediump_ivec3_zxyz_xyzz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003873 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003873 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003874, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003874 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_multiply.mediump_ivec4_x_x_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003874 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003874 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003875, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003875 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_ivec4_x_x_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003875 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003875 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003876, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003876 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_multiply.mediump_ivec4_w_w_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003876 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003876 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003877, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003877 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_ivec4_w_w_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003877 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003877 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003878, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003878 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_ivec4_wx_xw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003878 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003878 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003879, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003879 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_ivec4_wx_xw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003879 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003879 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003880, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003880 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_multiply.mediump_ivec4_wz_zw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003880 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003880 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003881, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003881 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_ivec4_wz_zw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003881 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003881 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003882, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003882 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_ivec4_www_www_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003882 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003882 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003883, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003883 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_ivec4_www_www_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003883 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003883 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003884, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003884 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_ivec4_yyw_ywy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003884 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003884 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003885, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003885 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_ivec4_yyw_ywy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003885 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003885 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003886, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003886 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_multiply.mediump_ivec4_wzy_zyw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003886 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003886 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003887, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003887 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_ivec4_wzy_zyw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003887 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003887 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003888, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003888 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_ivec4_xyzw_yzwx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003888 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003888 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003889, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003889 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
        "ns.vector_multiply.mediump_ivec4_xyzw_yzwx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003889 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003889 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003890, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003890 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_ivec4_wzyx_zyxw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003890 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003890 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003891, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003891 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
        "ns.vector_multiply.mediump_ivec4_wzyx_zyxw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003891 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003891 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003892, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003892 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_ivec4_xyxy_yxyx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003892 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003892 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003893, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003893 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
        "ns.vector_multiply.mediump_ivec4_xyxy_yxyx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003893 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003893 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003894, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003894 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_ivec4_yzzy_zzyy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003894 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003894 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003895, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003895 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
        "ns.vector_multiply.mediump_ivec4_yzzy_zzyy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003895 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003895 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003896, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003896 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_ivec4_wxww_xwww_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003896 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003896 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003897, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003897 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
        "ns.vector_multiply.mediump_ivec4_wxww_xwww_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003897 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003897 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003898, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003898 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_ivec4_xyxx_yxxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003898 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003898 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003899, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003899 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
        "ns.vector_multiply.mediump_ivec4_xyxx_yxxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003899 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003899 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003900, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003900 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_multiply.mediump_ivec4_zzzz_zzzz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003900 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003900 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003901, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003901 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
        "ns.vector_multiply.mediump_ivec4_zzzz_zzzz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003901 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003901 end";
}
