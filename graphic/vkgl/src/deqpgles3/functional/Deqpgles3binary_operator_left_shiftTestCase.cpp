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

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009224, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009224 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.left_shift.lowp_int_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009224 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009224 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009225, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009225 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.lowp_int_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009225 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009225 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009226, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009226 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.mediump_int_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009226 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009226 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009227, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009227 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.mediump_int_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009227 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009227 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009228, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009228 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.lowp_ivec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009228 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009228 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009229, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009229 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.lowp_ivec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009229 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009229 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009230, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009230 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.left_shift.mediump_ivec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009230 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009230 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009231, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009231 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.left_shift.mediump_ivec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009231 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009231 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009232, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009232 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.lowp_ivec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009232 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009232 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009233, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009233 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.lowp_ivec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009233 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009233 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009234, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009234 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.left_shift.mediump_ivec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009234 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009234 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009235, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009235 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.left_shift.mediump_ivec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009235 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009235 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009236, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009236 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.lowp_ivec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009236 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009236 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009237, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009237 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.lowp_ivec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009237 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009237 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009238, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009238 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.left_shift.mediump_ivec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009238 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009238 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009239, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009239 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.left_shift.mediump_ivec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009239 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009239 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009240, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009240 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.left_shift.highp_int_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009240 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009240 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009241, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009241 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.highp_int_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009241 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009241 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009242, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009242 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.highp_ivec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009242 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009242 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009243, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009243 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.left_shift.highp_ivec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009243 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009243 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009244, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009244 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.highp_ivec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009244 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009244 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009245, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009245 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.left_shift.highp_ivec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009245 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009245 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009246, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009246 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.highp_ivec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009246 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009246 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009247, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009247 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.left_shift.highp_ivec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009247 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009247 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009248, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009248 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.left_shift.lowp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009248 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009248 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009249, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009249 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.left_shift.lowp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009249 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009249 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009250, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009250 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.left_shift.mediump_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009250 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009250 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009251, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009251 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.left_shift.mediump_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009251 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009251 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009252, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009252 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.left_shift.lowp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009252 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009252 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009253, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009253 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.left_shift.lowp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009253 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009253 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009254, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009254 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.left_shift.mediump_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009254 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009254 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009255, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009255 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.mediump_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009255 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009255 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009256, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009256 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.left_shift.lowp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009256 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009256 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009257, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009257 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.left_shift.lowp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009257 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009257 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009258, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009258 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.left_shift.mediump_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009258 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009258 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009259, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009259 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.mediump_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009259 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009259 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009260, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009260 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.left_shift.lowp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009260 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009260 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009261, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009261 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.left_shift.lowp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009261 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009261 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009262, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009262 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.left_shift.mediump_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009262 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009262 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009263, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009263 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.mediump_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009263 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009263 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009264, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009264 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.left_shift.highp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009264 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009264 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009265, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009265 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.left_shift.highp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009265 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009265 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009266, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009266 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.left_shift.highp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009266 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009266 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009267, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009267 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.left_shift.highp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009267 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009267 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009268, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009268 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.left_shift.highp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009268 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009268 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009269, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009269 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.left_shift.highp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009269 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009269 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009270, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009270 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.left_shift.highp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009270 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009270 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009271, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009271 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.left_shift.highp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009271 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009271 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009272, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009272 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.lowp_ivec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009272 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009272 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009273, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009273 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.lowp_ivec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009273 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009273 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009274, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009274 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.mediump_ivec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009274 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009274 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009275, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009275 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.left_shift.mediump_ivec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009275 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009275 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009276, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009276 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.lowp_ivec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009276 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009276 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009277, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009277 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.lowp_ivec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009277 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009277 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009278, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009278 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.mediump_ivec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009278 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009278 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009279, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009279 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.left_shift.mediump_ivec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009279 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009279 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009280, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009280 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.lowp_ivec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009280 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009280 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009281, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009281 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.lowp_ivec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009281 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009281 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009282, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009282 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.mediump_ivec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009282 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009282 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009283, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009283 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.left_shift.mediump_ivec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009283 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009283 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009284, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009284 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.highp_ivec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009284 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009284 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009285, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009285 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.highp_ivec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009285 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009285 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009286, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009286 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.highp_ivec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009286 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009286 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009287, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009287 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.highp_ivec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009287 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009287 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009288, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009288 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.highp_ivec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009288 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009288 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009289, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009289 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.highp_ivec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009289 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009289 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009290, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009290 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.lowp_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009290 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009290 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009291, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009291 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.lowp_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009291 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009291 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009292, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009292 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.mediump_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009292 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009292 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009293, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009293 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.left_shift.mediump_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009293 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009293 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009294, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009294 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.lowp_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009294 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009294 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009295, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009295 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.lowp_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009295 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009295 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009296, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009296 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.mediump_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009296 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009296 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009297, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009297 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.left_shift.mediump_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009297 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009297 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009298, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009298 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.lowp_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009298 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009298 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009299, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009299 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.lowp_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009299 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009299 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009300, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009300 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.mediump_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009300 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009300 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009301, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009301 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.left_shift.mediump_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009301 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009301 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009302, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009302 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.highp_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009302 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009302 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009303, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009303 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.highp_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009303 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009303 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009304, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009304 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.highp_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009304 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009304 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009305, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009305 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.highp_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009305 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009305 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009306, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009306 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.highp_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009306 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009306 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009307, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009307 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.highp_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009307 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009307 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009308, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009308 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.left_shift.lowp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009308 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009308 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009309, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009309 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.left_shift.lowp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009309 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009309 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009310, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009310 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.left_shift.mediump_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009310 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009310 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009311, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009311 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.left_shift.mediump_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009311 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009311 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009312, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009312 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.left_shift.lowp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009312 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009312 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009313, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009313 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.left_shift.lowp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009313 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009313 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009314, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009314 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.left_shift.mediump_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009314 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009314 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009315, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009315 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.mediump_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009315 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009315 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009316, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009316 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.left_shift.lowp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009316 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009316 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009317, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009317 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.left_shift.lowp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009317 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009317 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009318, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009318 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.left_shift.mediump_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009318 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009318 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009319, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009319 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.mediump_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009319 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009319 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009320, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009320 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.left_shift.lowp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009320 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009320 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009321, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009321 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.left_shift.lowp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009321 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009321 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009322, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009322 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.left_shift.mediump_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009322 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009322 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009323, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009323 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.mediump_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009323 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009323 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009324, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009324 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.left_shift.highp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009324 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009324 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009325, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009325 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.left_shift.highp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009325 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009325 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009326, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009326 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.left_shift.highp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009326 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009326 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009327, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009327 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.left_shift.highp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009327 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009327 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009328, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009328 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.left_shift.highp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009328 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009328 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009329, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009329 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.left_shift.highp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009329 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009329 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009330, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009330 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.left_shift.highp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009330 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009330 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009331, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009331 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.left_shift.highp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009331 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009331 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009332, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009332 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.left_shift.lowp_uint_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009332 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009332 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009333, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009333 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.lowp_uint_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009333 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009333 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009334, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009334 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.mediump_uint_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009334 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009334 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009335, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009335 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.mediump_uint_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009335 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009335 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009336, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009336 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.lowp_uvec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009336 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009336 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009337, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009337 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.lowp_uvec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009337 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009337 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009338, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009338 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.left_shift.mediump_uvec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009338 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009338 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009339, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009339 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.left_shift.mediump_uvec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009339 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009339 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009340, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009340 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.lowp_uvec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009340 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009340 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009341, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009341 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.lowp_uvec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009341 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009341 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009342, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009342 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.left_shift.mediump_uvec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009342 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009342 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009343, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009343 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.left_shift.mediump_uvec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009343 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009343 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009344, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009344 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.lowp_uvec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009344 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009344 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009345, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009345 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.lowp_uvec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009345 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009345 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009346, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009346 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.left_shift.mediump_uvec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009346 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009346 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009347, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009347 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.left_shift.mediump_uvec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009347 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009347 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009348, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009348 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.left_shift.highp_uint_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009348 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009348 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009349, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009349 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.highp_uint_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009349 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009349 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009350, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009350 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.highp_uvec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009350 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009350 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009351, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009351 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.left_shift.highp_uvec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009351 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009351 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009352, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009352 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.highp_uvec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009352 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009352 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009353, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009353 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.left_shift.highp_uvec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009353 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009353 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009354, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009354 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.highp_uvec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009354 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009354 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009355, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009355 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.left_shift.highp_uvec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009355 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009355 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009356, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009356 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.left_shift.lowp_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009356 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009356 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009357, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009357 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.lowp_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009357 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009357 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009358, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009358 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.mediump_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009358 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009358 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009359, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009359 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.left_shift.mediump_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009359 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009359 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009360, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009360 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.left_shift.lowp_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009360 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009360 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009361, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009361 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.lowp_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009361 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009361 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009362, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009362 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.mediump_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009362 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009362 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009363, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009363 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.left_shift.mediump_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009363 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009363 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009364, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009364 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.left_shift.lowp_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009364 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009364 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009365, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009365 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.lowp_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009365 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009365 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009366, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009366 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.mediump_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009366 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009366 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009367, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009367 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.left_shift.mediump_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009367 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009367 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009368, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009368 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.highp_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009368 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009368 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009369, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009369 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.highp_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009369 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009369 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009370, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009370 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.highp_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009370 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009370 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009371, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009371 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.highp_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009371 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009371 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009372, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009372 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.highp_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009372 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009372 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009373, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009373 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.highp_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009373 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009373 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009374, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009374 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.left_shift.lowp_uvec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009374 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009374 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009375, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009375 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.lowp_uvec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009375 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009375 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009376, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009376 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.mediump_uvec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009376 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009376 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009377, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009377 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.left_shift.mediump_uvec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009377 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009377 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009378, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009378 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.left_shift.lowp_uvec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009378 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009378 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009379, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009379 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.lowp_uvec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009379 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009379 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009380, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009380 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.mediump_uvec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009380 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009380 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009381, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009381 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.left_shift.mediump_uvec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009381 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009381 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009382, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009382 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.left_shift.lowp_uvec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009382 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009382 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009383, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009383 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.lowp_uvec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009383 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009383 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009384, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009384 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.mediump_uvec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009384 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009384 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009385, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009385 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.left_shift.mediump_uvec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009385 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009385 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009386, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009386 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.highp_uvec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009386 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009386 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009387, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009387 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.highp_uvec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009387 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009387 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009388, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009388 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.highp_uvec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009388 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009388 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009389, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009389 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.highp_uvec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009389 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009389 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009390, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009390 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.left_shift.highp_uvec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009390 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009390 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009391, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009391 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.left_shift.highp_uvec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009391 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009391 end";
}
