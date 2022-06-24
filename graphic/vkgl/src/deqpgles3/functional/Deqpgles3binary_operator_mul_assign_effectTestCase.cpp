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
#include "../ActsDeqpgles30010TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009812, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009812 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_effect.lowp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009812 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009812 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009813, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009813 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.lowp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009813 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009813 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009814, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009814 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.mediump_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009814 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009814 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009815, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009815 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_effect.mediump_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009815 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009815 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009816, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009816 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_effect.highp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009816 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009816 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009817, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009817 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.highp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009817 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009817 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009818, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009818 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.mul_assign_effect.lowp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009818 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009818 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009819, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009819 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_effect.lowp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009819 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009819 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009820, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009820 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.mediump_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009820 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009820 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009821, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009821 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_effect.mediump_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009821 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009821 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009822, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009822 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_effect.highp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009822 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009822 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009823, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009823 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.highp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009823 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009823 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009824, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009824 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.mul_assign_effect.lowp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009824 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009824 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009825, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009825 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_effect.lowp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009825 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009825 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009826, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009826 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.mediump_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009826 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009826 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009827, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009827 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_effect.mediump_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009827 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009827 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009828, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009828 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_effect.highp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009828 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009828 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009829, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009829 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.highp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009829 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009829 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009830, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009830 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.mul_assign_effect.lowp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009830 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009830 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009831, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009831 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_effect.lowp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009831 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009831 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009832, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009832 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.mediump_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009832 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009832 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009833, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009833 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_effect.mediump_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009833 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009833 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009834, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009834 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_effect.highp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009834 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009834 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009835, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009835 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.highp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009835 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009835 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009836, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009836 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.mul_assign_effect.lowp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009836 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009836 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009837, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009837 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_effect.lowp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009837 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009837 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009838, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009838 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_effect.mediump_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009838 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009838 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009839, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009839 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.mediump_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009839 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009839 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009840, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009840 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_effect.lowp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009840 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009840 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009841, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009841 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.lowp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009841 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009841 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009842, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009842 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.mediump_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009842 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009842 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009843, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009843 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_effect.mediump_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009843 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009843 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009844, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009844 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_effect.lowp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009844 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009844 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009845, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009845 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.lowp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009845 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009845 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009846, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009846 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.mediump_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009846 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009846 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009847, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009847 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_effect.mediump_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009847 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009847 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009848, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009848 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_effect.lowp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009848 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009848 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009849, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009849 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.lowp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009849 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009849 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009850, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009850 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.mediump_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009850 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009850 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009851, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009851 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_effect.mediump_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009851 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009851 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009852, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009852 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.mul_assign_effect.highp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009852 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009852 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009853, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009853 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_effect.highp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009853 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009853 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009854, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009854 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_effect.highp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009854 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009854 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009855, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009855 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.highp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009855 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009855 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009856, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009856 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_effect.highp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009856 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009856 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009857, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009857 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.highp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009857 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009857 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009858, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009858 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_effect.highp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009858 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009858 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009859, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009859 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.highp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009859 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009859 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009860, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009860 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.mul_assign_effect.lowp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009860 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009860 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009861, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009861 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_effect.lowp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009861 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009861 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009862, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009862 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.mediump_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009862 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009862 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009863, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009863 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_effect.mediump_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009863 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009863 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009864, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009864 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_effect.lowp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009864 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009864 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009865, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009865 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.lowp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009865 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009865 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009866, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009866 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.mediump_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009866 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009866 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009867, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009867 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_effect.mediump_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009867 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009867 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009868, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009868 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_effect.lowp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009868 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009868 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009869, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009869 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.lowp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009869 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009869 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009870, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009870 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.mediump_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009870 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009870 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009871, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009871 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_effect.mediump_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009871 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009871 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009872, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009872 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_effect.lowp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009872 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009872 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009873, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009873 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.lowp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009873 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009873 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009874, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009874 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.mediump_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009874 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009874 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009875, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009875 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_effect.mediump_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009875 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009875 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009876, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009876 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_effect.highp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009876 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009876 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009877, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009877 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.highp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009877 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009877 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009878, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009878 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_effect.highp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009878 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009878 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009879, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009879 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.highp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009879 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009879 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009880, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009880 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_effect.highp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009880 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009880 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009881, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009881 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.highp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009881 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009881 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009882, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009882 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_effect.highp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009882 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009882 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009883, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009883 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_effect.highp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009883 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009883 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009884, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009884 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_effect.lowp_vec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009884 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009884 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009885, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009885 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_effect.lowp_vec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009885 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009885 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009886, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009886 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_effect.mediump_vec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009886 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009886 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009887, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009887 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.mul_assign_effect.mediump_vec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009887 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009887 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009888, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009888 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_effect.highp_vec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009888 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009888 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009889, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009889 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_effect.highp_vec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009889 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009889 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009890, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009890 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_effect.lowp_vec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009890 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009890 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009891, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009891 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_effect.lowp_vec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009891 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009891 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009892, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009892 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_effect.mediump_vec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009892 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009892 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009893, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009893 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.mul_assign_effect.mediump_vec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009893 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009893 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009894, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009894 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_effect.highp_vec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009894 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009894 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009895, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009895 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_effect.highp_vec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009895 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009895 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009896, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009896 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_effect.lowp_vec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009896 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009896 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009897, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009897 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_effect.lowp_vec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009897 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009897 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009898, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009898 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_effect.mediump_vec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009898 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009898 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009899, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009899 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.mul_assign_effect.mediump_vec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009899 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009899 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009900, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009900 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_effect.highp_vec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009900 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009900 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009901, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009901 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_effect.highp_vec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009901 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009901 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009902, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009902 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_effect.lowp_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009902 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009902 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009903, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009903 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_effect.lowp_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009903 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009903 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009904, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009904 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_effect.mediump_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009904 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009904 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009905, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009905 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_effect.mediump_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009905 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009905 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009906, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009906 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_effect.lowp_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009906 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009906 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009907, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009907 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_effect.lowp_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009907 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009907 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009908, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009908 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_effect.mediump_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009908 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009908 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009909, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009909 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_effect.mediump_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009909 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009909 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009910, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009910 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_effect.lowp_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009910 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009910 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009911, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009911 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_effect.lowp_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009911 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009911 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009912, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009912 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_effect.mediump_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009912 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009912 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009913, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009913 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_effect.mediump_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009913 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009913 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009914, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009914 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_effect.highp_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009914 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009914 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009915, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009915 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_effect.highp_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009915 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009915 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009916, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009916 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_effect.highp_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009916 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009916 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009917, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009917 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_effect.highp_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009917 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009917 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009918, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009918 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_effect.highp_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009918 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009918 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009919, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009919 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_effect.highp_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009919 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009919 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009920, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009920 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_effect.lowp_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009920 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009920 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009921, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009921 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_effect.lowp_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009921 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009921 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009922, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009922 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_effect.mediump_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009922 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009922 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009923, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009923 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.mul_assign_effect.mediump_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009923 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009923 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009924, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009924 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_effect.lowp_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009924 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009924 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009925, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009925 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_effect.lowp_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009925 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009925 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009926, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009926 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_effect.mediump_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009926 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009926 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009927, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009927 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.mul_assign_effect.mediump_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009927 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009927 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009928, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009928 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_effect.lowp_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009928 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009928 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009929, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009929 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_effect.lowp_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009929 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009929 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009930, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009930 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_effect.mediump_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009930 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009930 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009931, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009931 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.mul_assign_effect.mediump_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009931 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009931 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009932, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009932 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_effect.highp_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009932 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009932 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009933, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009933 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_effect.highp_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009933 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009933 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009934, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009934 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_effect.highp_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009934 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009934 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009935, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009935 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_effect.highp_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009935 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009935 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009936, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009936 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_effect.highp_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009936 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009936 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009937, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009937 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_effect.highp_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009937 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009937 end";
}
