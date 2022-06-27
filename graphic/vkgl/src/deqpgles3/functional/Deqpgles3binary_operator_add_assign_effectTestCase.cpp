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

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009560, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009560 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.add_assign_effect.lowp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009560 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009560 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009561, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009561 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.lowp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009561 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009561 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009562, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009562 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.mediump_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009562 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009562 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009563, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009563 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.add_assign_effect.mediump_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009563 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009563 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009564, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009564 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.add_assign_effect.highp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009564 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009564 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009565, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009565 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.highp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009565 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009565 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009566, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009566 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.add_assign_effect.lowp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009566 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009566 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009567, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009567 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.add_assign_effect.lowp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009567 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009567 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009568, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009568 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.mediump_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009568 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009568 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009569, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009569 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.add_assign_effect.mediump_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009569 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009569 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009570, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009570 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.add_assign_effect.highp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009570 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009570 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009571, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009571 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.highp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009571 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009571 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009572, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009572 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.add_assign_effect.lowp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009572 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009572 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009573, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009573 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.add_assign_effect.lowp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009573 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009573 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009574, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009574 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.mediump_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009574 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009574 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009575, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009575 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.add_assign_effect.mediump_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009575 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009575 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009576, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009576 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.add_assign_effect.highp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009576 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009576 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009577, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009577 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.highp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009577 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009577 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009578, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009578 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.add_assign_effect.lowp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009578 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009578 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009579, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009579 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.add_assign_effect.lowp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009579 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009579 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009580, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009580 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.mediump_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009580 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009580 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009581, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009581 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.add_assign_effect.mediump_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009581 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009581 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009582, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009582 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.add_assign_effect.highp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009582 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009582 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009583, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009583 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.highp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009583 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009583 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009584, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009584 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.add_assign_effect.lowp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009584 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009584 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009585, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009585 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.add_assign_effect.lowp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009585 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009585 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009586, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009586 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.add_assign_effect.mediump_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009586 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009586 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009587, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009587 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.mediump_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009587 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009587 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009588, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009588 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.add_assign_effect.lowp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009588 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009588 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009589, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009589 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.lowp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009589 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009589 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009590, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009590 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.mediump_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009590 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009590 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009591, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009591 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.add_assign_effect.mediump_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009591 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009591 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009592, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009592 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.add_assign_effect.lowp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009592 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009592 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009593, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009593 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.lowp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009593 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009593 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009594, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009594 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.mediump_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009594 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009594 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009595, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009595 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.add_assign_effect.mediump_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009595 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009595 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009596, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009596 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.add_assign_effect.lowp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009596 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009596 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009597, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009597 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.lowp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009597 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009597 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009598, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009598 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.mediump_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009598 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009598 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009599, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009599 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.add_assign_effect.mediump_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009599 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009599 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009600, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009600 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.add_assign_effect.highp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009600 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009600 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009601, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009601 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.add_assign_effect.highp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009601 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009601 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009602, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009602 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.add_assign_effect.highp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009602 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009602 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009603, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009603 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.highp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009603 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009603 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009604, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009604 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.add_assign_effect.highp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009604 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009604 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009605, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009605 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.highp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009605 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009605 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009606, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009606 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.add_assign_effect.highp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009606 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009606 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009607, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009607 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.highp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009607 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009607 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009608, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009608 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.add_assign_effect.lowp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009608 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009608 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009609, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009609 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.add_assign_effect.lowp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009609 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009609 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009610, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009610 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.mediump_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009610 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009610 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009611, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009611 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.add_assign_effect.mediump_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009611 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009611 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009612, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009612 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.add_assign_effect.lowp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009612 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009612 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009613, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009613 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.lowp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009613 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009613 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009614, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009614 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.mediump_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009614 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009614 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009615, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009615 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.add_assign_effect.mediump_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009615 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009615 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009616, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009616 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.add_assign_effect.lowp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009616 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009616 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009617, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009617 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.lowp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009617 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009617 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009618, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009618 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.mediump_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009618 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009618 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009619, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009619 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.add_assign_effect.mediump_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009619 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009619 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009620, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009620 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.add_assign_effect.lowp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009620 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009620 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009621, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009621 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.lowp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009621 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009621 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009622, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009622 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.mediump_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009622 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009622 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009623, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009623 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.add_assign_effect.mediump_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009623 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009623 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009624, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009624 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.add_assign_effect.highp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009624 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009624 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009625, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009625 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.highp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009625 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009625 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009626, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009626 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.add_assign_effect.highp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009626 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009626 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009627, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009627 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.highp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009627 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009627 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009628, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009628 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.add_assign_effect.highp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009628 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009628 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009629, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009629 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.highp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009629 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009629 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009630, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009630 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.add_assign_effect.highp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009630 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009630 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009631, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009631 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.add_assign_effect.highp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009631 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009631 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009632, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009632 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.add_assign_effect.lowp_vec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009632 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009632 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009633, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009633 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.add_assign_effect.lowp_vec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009633 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009633 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009634, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009634 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.add_assign_effect.mediump_vec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009634 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009634 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009635, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009635 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.add_assign_effect.mediump_vec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009635 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009635 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009636, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009636 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.add_assign_effect.highp_vec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009636 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009636 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009637, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009637 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.add_assign_effect.highp_vec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009637 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009637 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009638, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009638 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.add_assign_effect.lowp_vec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009638 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009638 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009639, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009639 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.add_assign_effect.lowp_vec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009639 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009639 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009640, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009640 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.add_assign_effect.mediump_vec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009640 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009640 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009641, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009641 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.add_assign_effect.mediump_vec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009641 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009641 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009642, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009642 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.add_assign_effect.highp_vec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009642 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009642 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009643, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009643 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.add_assign_effect.highp_vec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009643 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009643 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009644, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009644 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.add_assign_effect.lowp_vec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009644 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009644 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009645, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009645 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.add_assign_effect.lowp_vec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009645 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009645 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009646, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009646 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.add_assign_effect.mediump_vec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009646 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009646 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009647, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009647 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.add_assign_effect.mediump_vec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009647 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009647 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009648, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009648 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.add_assign_effect.highp_vec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009648 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009648 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009649, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009649 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.add_assign_effect.highp_vec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009649 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009649 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009650, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009650 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.add_assign_effect.lowp_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009650 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009650 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009651, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009651 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.add_assign_effect.lowp_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009651 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009651 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009652, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009652 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.add_assign_effect.mediump_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009652 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009652 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009653, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009653 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.add_assign_effect.mediump_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009653 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009653 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009654, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009654 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.add_assign_effect.lowp_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009654 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009654 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009655, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009655 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.add_assign_effect.lowp_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009655 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009655 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009656, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009656 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.add_assign_effect.mediump_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009656 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009656 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009657, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009657 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.add_assign_effect.mediump_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009657 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009657 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009658, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009658 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.add_assign_effect.lowp_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009658 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009658 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009659, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009659 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.add_assign_effect.lowp_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009659 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009659 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009660, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009660 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.add_assign_effect.mediump_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009660 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009660 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009661, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009661 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.add_assign_effect.mediump_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009661 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009661 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009662, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009662 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.add_assign_effect.highp_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009662 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009662 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009663, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009663 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.add_assign_effect.highp_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009663 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009663 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009664, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009664 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.add_assign_effect.highp_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009664 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009664 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009665, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009665 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.add_assign_effect.highp_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009665 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009665 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009666, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009666 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.add_assign_effect.highp_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009666 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009666 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009667, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009667 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.add_assign_effect.highp_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009667 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009667 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009668, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009668 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.add_assign_effect.lowp_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009668 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009668 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009669, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009669 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.add_assign_effect.lowp_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009669 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009669 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009670, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009670 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.add_assign_effect.mediump_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009670 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009670 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009671, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009671 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.add_assign_effect.mediump_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009671 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009671 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009672, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009672 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.add_assign_effect.lowp_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009672 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009672 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009673, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009673 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.add_assign_effect.lowp_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009673 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009673 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009674, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009674 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.add_assign_effect.mediump_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009674 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009674 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009675, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009675 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.add_assign_effect.mediump_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009675 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009675 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009676, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009676 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.add_assign_effect.lowp_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009676 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009676 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009677, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009677 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.add_assign_effect.lowp_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009677 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009677 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009678, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009678 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.add_assign_effect.mediump_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009678 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009678 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009679, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009679 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.add_assign_effect.mediump_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009679 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009679 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009680, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009680 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.add_assign_effect.highp_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009680 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009680 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009681, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009681 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.add_assign_effect.highp_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009681 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009681 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009682, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009682 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.add_assign_effect.highp_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009682 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009682 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009683, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009683 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.add_assign_effect.highp_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009683 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009683 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009684, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009684 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.add_assign_effect.highp_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009684 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009684 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009685, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009685 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.add_assign_effect.highp_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009685 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009685 end";
}
