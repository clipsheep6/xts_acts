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

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003902, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003902 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_divide.mediump_vec2_x_x_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003902 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003902 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003903, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003903 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_divide.mediump_vec2_x_x_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003903 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003903 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003904, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003904 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_divide.mediump_vec2_xx_xx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003904 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003904 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003905, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003905 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_vec2_xx_xx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003905 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003905 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003906, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003906 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_divide.mediump_vec2_xy_yx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003906 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003906 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003907, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003907 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_vec2_xy_yx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003907 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003907 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003908, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003908 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_divide.mediump_vec2_yx_xy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003908 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003908 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003909, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003909 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_vec2_yx_xy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003909 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003909 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003910, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003910 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_vec2_yxy_xyy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003910 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003910 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003911, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003911 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_vec2_yxy_xyy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003911 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003911 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003912, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003912 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_vec2_xyxx_yxxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003912 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003912 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003913, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003913 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_vec2_xyxx_yxxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003913 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003913 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003914, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003914 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_vec2_yxyx_xyxy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003914 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003914 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003915, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003915 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_vec2_yxyx_xyxy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003915 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003915 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003916, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003916 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_divide.mediump_vec3_x_x_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003916 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003916 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003917, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003917 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_divide.mediump_vec3_x_x_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003917 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003917 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003918, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003918 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_divide.mediump_vec3_z_z_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003918 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003918 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003919, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003919 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_divide.mediump_vec3_z_z_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003919 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003919 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003920, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003920 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_divide.mediump_vec3_xz_zx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003920 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003920 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003921, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003921 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_vec3_xz_zx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003921 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003921 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003922, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003922 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_divide.mediump_vec3_zz_zz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003922 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003922 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003923, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003923 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_vec3_zz_zz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003923 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003923 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003924, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003924 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_vec3_xyz_yzx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003924 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003924 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003925, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003925 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_vec3_xyz_yzx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003925 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003925 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003926, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003926 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_vec3_zyx_yxz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003926 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003926 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003927, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003927 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_vec3_zyx_yxz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003927 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003927 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003928, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003928 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_vec3_xxx_xxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003928 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003928 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003929, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003929 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_vec3_xxx_xxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003929 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003929 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003930, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003930 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_vec3_zzz_zzz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003930 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003930 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003931, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003931 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_vec3_zzz_zzz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003931 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003931 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003932, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003932 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_vec3_zzy_zyz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003932 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003932 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003933, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003933 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_vec3_zzy_zyz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003933 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003933 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003934, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003934 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_vec3_yxy_xyy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003934 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003934 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003935, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003935 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_vec3_yxy_xyy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003935 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003935 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003936, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003936 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_vec3_xzx_zxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003936 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003936 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003937, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003937 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_vec3_xzx_zxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003937 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003937 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003938, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003938 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_vec3_xyyx_yyxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003938 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003938 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003939, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003939 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_vec3_xyyx_yyxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003939 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003939 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003940, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003940 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_vec3_zxyz_xyzz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003940 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003940 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003941, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003941 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_vec3_zxyz_xyzz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003941 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003941 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003942, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003942 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_divide.mediump_vec4_x_x_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003942 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003942 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003943, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003943 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_divide.mediump_vec4_x_x_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003943 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003943 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003944, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003944 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_op"
        "erations.vector_divide.mediump_vec4_w_w_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003944 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003944 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003945, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003945 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_divide.mediump_vec4_w_w_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003945 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003945 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003946, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003946 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_divide.mediump_vec4_wx_xw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003946 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003946 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003947, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003947 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_vec4_wx_xw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003947 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003947 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003948, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003948 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_divide.mediump_vec4_wz_zw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003948 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003948 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003949, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003949 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_vec4_wz_zw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003949 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003949 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003950, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003950 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_vec4_www_www_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003950 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003950 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003951, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003951 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_vec4_www_www_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003951 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003951 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003952, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003952 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_vec4_yyw_ywy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003952 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003952 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003953, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003953 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_vec4_yyw_ywy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003953 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003953 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003954, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003954 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_vec4_wzy_zyw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003954 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003954 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003955, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003955 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_vec4_wzy_zyw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003955 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003955 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003956, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003956 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_vec4_xyzw_yzwx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003956 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003956 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003957, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003957 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_vec4_xyzw_yzwx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003957 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003957 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003958, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003958 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_vec4_wzyx_zyxw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003958 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003958 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003959, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003959 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_vec4_wzyx_zyxw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003959 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003959 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003960, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003960 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_vec4_xyxy_yxyx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003960 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003960 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003961, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003961 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_vec4_xyxy_yxyx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003961 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003961 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003962, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003962 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_vec4_yzzy_zzyy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003962 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003962 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003963, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003963 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_vec4_yzzy_zzyy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003963 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003963 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003964, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003964 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_vec4_wxww_xwww_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003964 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003964 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003965, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003965 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_vec4_wxww_xwww_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003965 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003965 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003966, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003966 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_vec4_xyxx_yxxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003966 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003966 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003967, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003967 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_vec4_xyxx_yxxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003967 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003967 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003968, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003968 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_vec4_zzzz_zzzz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003968 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003968 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003969, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003969 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_vec4_zzzz_zzzz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003969 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003969 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003970, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003970 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_divide.mediump_ivec2_x_x_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003970 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003970 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003971, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003971 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_ivec2_x_x_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003971 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003971 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003972, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003972 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_ivec2_xx_xx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003972 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003972 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003973, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003973 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_ivec2_xx_xx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003973 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003973 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003974, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003974 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_ivec2_xy_yx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003974 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003974 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003975, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003975 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_ivec2_xy_yx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003975 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003975 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003976, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003976 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_ivec2_yx_xy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003976 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003976 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003977, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003977 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_ivec2_yx_xy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003977 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003977 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003978, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003978 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_ivec2_yxy_xyy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003978 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003978 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003979, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003979 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_ivec2_yxy_xyy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003979 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003979 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003980, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003980 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_ivec2_xyxx_yxxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003980 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003980 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003981, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003981 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_divide.mediump_ivec2_xyxx_yxxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003981 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003981 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003982, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003982 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_ivec2_yxyx_xyxy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003982 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003982 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003983, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003983 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_divide.mediump_ivec2_yxyx_xyxy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003983 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003983 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003984, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003984 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_divide.mediump_ivec3_x_x_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003984 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003984 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003985, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003985 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_ivec3_x_x_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003985 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003985 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003986, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003986 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_divide.mediump_ivec3_z_z_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003986 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003986 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003987, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003987 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_ivec3_z_z_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003987 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003987 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003988, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003988 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_ivec3_xz_zx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003988 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003988 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003989, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003989 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_ivec3_xz_zx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003989 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003989 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003990, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003990 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_ivec3_zz_zz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003990 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003990 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003991, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003991 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_ivec3_zz_zz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003991 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003991 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003992, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003992 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_ivec3_xyz_yzx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003992 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003992 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003993, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003993 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_ivec3_xyz_yzx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003993 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003993 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003994, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003994 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_ivec3_zyx_yxz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003994 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003994 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003995, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003995 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_ivec3_zyx_yxz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003995 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003995 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003996, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003996 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_ivec3_xxx_xxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003996 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003996 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003997, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003997 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_ivec3_xxx_xxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003997 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003997 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003998, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003998 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_ivec3_zzz_zzz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003998 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003998 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003999, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003999 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_ivec3_zzz_zzz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003999 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003999 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004000, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004000 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_ivec3_zzy_zyz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004000 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004000 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004001, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004001 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_ivec3_zzy_zyz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004001 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004001 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004002, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004002 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_ivec3_yxy_xyy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004002 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004002 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004003, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004003 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_ivec3_yxy_xyy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004003 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004003 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004004, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004004 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_ivec3_xzx_zxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004004 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004004 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004005, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004005 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_ivec3_xzx_zxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004005 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004005 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004006, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004006 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_ivec3_xyyx_yyxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004006 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004006 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004007, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004007 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_divide.mediump_ivec3_xyyx_yyxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004007 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004007 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004008, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004008 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_ivec3_zxyz_xyzz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004008 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004008 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004009, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004009 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_divide.mediump_ivec3_zxyz_xyzz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004009 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004009 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004010, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004010 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_divide.mediump_ivec4_x_x_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004010 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004010 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004011, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004011 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_ivec4_x_x_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004011 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004011 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004012, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004012 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_ope"
        "rations.vector_divide.mediump_ivec4_w_w_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004012 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004012 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004013, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004013 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_ivec4_w_w_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004013 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004013 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004014, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004014 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_ivec4_wx_xw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004014 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004014 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004015, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004015 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_ivec4_wx_xw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004015 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004015 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004016, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004016 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_oper"
        "ations.vector_divide.mediump_ivec4_wz_zw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004016 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004016 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004017, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004017 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_ivec4_wz_zw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004017 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004017 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004018, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004018 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_ivec4_www_www_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004018 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004018 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004019, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004019 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_ivec4_www_www_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004019 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004019 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004020, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004020 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_ivec4_yyw_ywy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004020 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004020 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004021, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004021 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_ivec4_yyw_ywy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004021 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004021 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004022, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004022 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_opera"
        "tions.vector_divide.mediump_ivec4_wzy_zyw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004022 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004022 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004023, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004023 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_ivec4_wzy_zyw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004023 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004023 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004024, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004024 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_ivec4_xyzw_yzwx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004024 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004024 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004025, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004025 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_divide.mediump_ivec4_xyzw_yzwx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004025 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004025 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004026, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004026 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_ivec4_wzyx_zyxw_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004026 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004026 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004027, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004027 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_divide.mediump_ivec4_wzyx_zyxw_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004027 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004027 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004028, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004028 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_ivec4_xyxy_yxyx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004028 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004028 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004029, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004029 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_divide.mediump_ivec4_xyxy_yxyx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004029 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004029 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004030, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004030 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_ivec4_yzzy_zzyy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004030 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004030 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004031, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004031 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_divide.mediump_ivec4_yzzy_zzyy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004031 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004031 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004032, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004032 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_ivec4_wxww_xwww_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004032 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004032 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004033, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004033 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_divide.mediump_ivec4_wxww_xwww_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004033 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004033 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004034, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004034 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_ivec4_xyxx_yxxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004034 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004034 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004035, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004035 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_divide.mediump_ivec4_xyxx_yxxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004035 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004035 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004036, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004036 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operat"
        "ions.vector_divide.mediump_ivec4_zzzz_zzzz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004036 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004036 end";
}

static HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004037, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004037 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzle_math_operati"
        "ons.vector_divide.mediump_ivec4_zzzz_zzzz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004037 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004037 end";
}
