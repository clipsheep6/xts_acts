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
#include "../ActsDeqpgles30011TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010988, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010988 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_result.lowp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010988 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010988 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010989, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010989 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.lowp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010989 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010989 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010990, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010990 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.mediump_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010990 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010990 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010991, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010991 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_result.mediump_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010991 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010991 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010992, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010992 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_result.highp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010992 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010992 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010993, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010993 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.highp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010993 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010993 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010994, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010994 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.mul_assign_result.lowp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010994 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010994 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010995, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010995 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_result.lowp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010995 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010995 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010996, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010996 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.mediump_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010996 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010996 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010997, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010997 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_result.mediump_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010997 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010997 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010998, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010998 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_result.highp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010998 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010998 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010999, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010999 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.highp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010999 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010999 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011000, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011000 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.mul_assign_result.lowp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011000 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011000 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011001, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011001 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_result.lowp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011001 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011001 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011002, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011002 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.mediump_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011002 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011002 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011003, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011003 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_result.mediump_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011003 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011003 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011004, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011004 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_result.highp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011004 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011004 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011005, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011005 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.highp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011005 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011005 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011006, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011006 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.mul_assign_result.lowp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011006 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011006 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011007, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011007 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_result.lowp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011007 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011007 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011008, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011008 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.mediump_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011008 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011008 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011009, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011009 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_result.mediump_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011009 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011009 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011010, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011010 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_result.highp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011010 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011010 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011011, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011011 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.highp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011011 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011011 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011012, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011012 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.mul_assign_result.lowp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011012 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011012 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011013, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011013 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_result.lowp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011013 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011013 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011014, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011014 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_result.mediump_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011014 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011014 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011015, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011015 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.mediump_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011015 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011015 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011016, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011016 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_result.lowp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011016 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011016 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011017, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011017 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.lowp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011017 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011017 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011018, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011018 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.mediump_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011018 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011018 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011019, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011019 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_result.mediump_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011019 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011019 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011020, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011020 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_result.lowp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011020 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011020 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011021, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011021 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.lowp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011021 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011021 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011022, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011022 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.mediump_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011022 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011022 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011023, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011023 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_result.mediump_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011023 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011023 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011024, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011024 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_result.lowp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011024 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011024 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011025, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011025 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.lowp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011025 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011025 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011026, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011026 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.mediump_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011026 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011026 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011027, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011027 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_result.mediump_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011027 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011027 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011028, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011028 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.mul_assign_result.highp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011028 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011028 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011029, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011029 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_result.highp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011029 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011029 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011030, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011030 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_result.highp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011030 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011030 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011031, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011031 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.highp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011031 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011031 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011032, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011032 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_result.highp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011032 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011032 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011033, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011033 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.highp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011033 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011033 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011034, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011034 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_result.highp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011034 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011034 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011035, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011035 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.highp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011035 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011035 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011036, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011036 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.mul_assign_result.lowp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011036 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011036 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011037, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011037 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_result.lowp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011037 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011037 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011038, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011038 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.mediump_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011038 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011038 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011039, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011039 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_result.mediump_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011039 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011039 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011040, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011040 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_result.lowp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011040 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011040 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011041, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011041 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.lowp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011041 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011041 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011042, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011042 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.mediump_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011042 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011042 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011043, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011043 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_result.mediump_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011043 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011043 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011044, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011044 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_result.lowp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011044 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011044 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011045, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011045 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.lowp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011045 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011045 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011046, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011046 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.mediump_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011046 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011046 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011047, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011047 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_result.mediump_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011047 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011047 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011048, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011048 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_result.lowp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011048 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011048 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011049, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011049 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.lowp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011049 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011049 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011050, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011050 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.mediump_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011050 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011050 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011051, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011051 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_result.mediump_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011051 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011051 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011052, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011052 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_result.highp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011052 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011052 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011053, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011053 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.highp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011053 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011053 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011054, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011054 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_result.highp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011054 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011054 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011055, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011055 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.highp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011055 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011055 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011056, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011056 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_result.highp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011056 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011056 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011057, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011057 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.highp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011057 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011057 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011058, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011058 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.mul_assign_result.highp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011058 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011058 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011059, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011059 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.mul_assign_result.highp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011059 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011059 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011060, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011060 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_result.lowp_vec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011060 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011060 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011061, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011061 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_result.lowp_vec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011061 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011061 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011062, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011062 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_result.mediump_vec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011062 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011062 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011063, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011063 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.mul_assign_result.mediump_vec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011063 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011063 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011064, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011064 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_result.highp_vec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011064 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011064 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011065, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011065 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_result.highp_vec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011065 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011065 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011066, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011066 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_result.lowp_vec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011066 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011066 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011067, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011067 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_result.lowp_vec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011067 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011067 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011068, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011068 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_result.mediump_vec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011068 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011068 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011069, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011069 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.mul_assign_result.mediump_vec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011069 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011069 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011070, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011070 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_result.highp_vec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011070 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011070 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011071, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011071 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_result.highp_vec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011071 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011071 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011072, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011072 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_result.lowp_vec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011072 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011072 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011073, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011073 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_result.lowp_vec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011073 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011073 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011074, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011074 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_result.mediump_vec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011074 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011074 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011075, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011075 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.mul_assign_result.mediump_vec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011075 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011075 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011076, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011076 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_result.highp_vec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011076 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011076 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011077, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011077 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_result.highp_vec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011077 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011077 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011078, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011078 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_result.lowp_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011078 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011078 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011079, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011079 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_result.lowp_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011079 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011079 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011080, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011080 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_result.mediump_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011080 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011080 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011081, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011081 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_result.mediump_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011081 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011081 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011082, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011082 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_result.lowp_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011082 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011082 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011083, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011083 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_result.lowp_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011083 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011083 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011084, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011084 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_result.mediump_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011084 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011084 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011085, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011085 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_result.mediump_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011085 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011085 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011086, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011086 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_result.lowp_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011086 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011086 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011087, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011087 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_result.lowp_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011087 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011087 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011088, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011088 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_result.mediump_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011088 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011088 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011089, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011089 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_result.mediump_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011089 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011089 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011090, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011090 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_result.highp_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011090 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011090 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011091, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011091 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_result.highp_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011091 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011091 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011092, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011092 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_result.highp_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011092 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011092 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011093, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011093 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_result.highp_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011093 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011093 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011094, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011094 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_result.highp_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011094 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011094 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011095, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011095 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_result.highp_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011095 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011095 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011096, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011096 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_result.lowp_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011096 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011096 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011097, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011097 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_result.lowp_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011097 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011097 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011098, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011098 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_result.mediump_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011098 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011098 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011099, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011099 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.mul_assign_result.mediump_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011099 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011099 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011100, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011100 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_result.lowp_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011100 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011100 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011101, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011101 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_result.lowp_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011101 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011101 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011102, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011102 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_result.mediump_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011102 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011102 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011103, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011103 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.mul_assign_result.mediump_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011103 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011103 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011104, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011104 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.mul_assign_result.lowp_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011104 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011104 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011105, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011105 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_result.lowp_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011105 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011105 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011106, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011106 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_result.mediump_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011106 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011106 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011107, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011107 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.mul_assign_result.mediump_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011107 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011107 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011108, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011108 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_result.highp_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011108 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011108 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011109, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011109 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_result.highp_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011109 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011109 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011110, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011110 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_result.highp_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011110 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011110 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011111, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011111 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_result.highp_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011111 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011111 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011112, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011112 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.mul_assign_result.highp_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011112 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011112 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011113, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011113 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.mul_assign_result.highp_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011113 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011113 end";
}
