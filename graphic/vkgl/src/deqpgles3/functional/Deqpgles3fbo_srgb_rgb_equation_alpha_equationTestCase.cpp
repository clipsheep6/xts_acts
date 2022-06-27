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
#include "../ActsDeqpgles30031TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030593, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030593 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.f"
        "bo_srgb.rgb_equation_alpha_equation.add_add",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030593 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030593 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030594, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030594 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_"
        "srgb.rgb_equation_alpha_equation.add_subtract",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030594 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030594 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030595, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030595 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_equation_alpha_equation.add_reverse_subtract",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030595 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030595 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030596, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030596 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.f"
        "bo_srgb.rgb_equation_alpha_equation.add_min",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030596 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030596 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030597, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030597 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.f"
        "bo_srgb.rgb_equation_alpha_equation.add_max",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030597 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030597 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030598, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030598 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_"
        "srgb.rgb_equation_alpha_equation.subtract_add",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030598 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030598 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030599, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030599 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
        "gb.rgb_equation_alpha_equation.subtract_subtract",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030599 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030599 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030600, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030600 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_equation_alpha_equation.subtract_reverse_subtract",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030600 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030600 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030601, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030601 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_"
        "srgb.rgb_equation_alpha_equation.subtract_min",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030601 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030601 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030602, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030602 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_"
        "srgb.rgb_equation_alpha_equation.subtract_max",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030602 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030602 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030603, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030603 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_equation_alpha_equation.reverse_subtract_add",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030603 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030603 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030604, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030604 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_equation_alpha_equation.reverse_subtract_subtract",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030604 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030604 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030605, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030605 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_e"
        "quation_alpha_equation.reverse_subtract_reverse_subtract",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030605 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030605 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030606, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030606 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_equation_alpha_equation.reverse_subtract_min",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030606 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030606 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030607, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030607 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_equation_alpha_equation.reverse_subtract_max",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030607 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030607 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030608, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030608 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.f"
        "bo_srgb.rgb_equation_alpha_equation.min_add",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030608 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030608 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030609, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030609 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_"
        "srgb.rgb_equation_alpha_equation.min_subtract",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030609 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030609 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030610, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030610 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_equation_alpha_equation.min_reverse_subtract",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030610 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030610 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030611, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030611 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.f"
        "bo_srgb.rgb_equation_alpha_equation.min_min",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030611 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030611 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030612, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030612 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.f"
        "bo_srgb.rgb_equation_alpha_equation.min_max",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030612 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030612 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030613, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030613 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.f"
        "bo_srgb.rgb_equation_alpha_equation.max_add",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030613 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030613 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030614, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030614 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_"
        "srgb.rgb_equation_alpha_equation.max_subtract",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030614 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030614 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030615, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030615 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_equation_alpha_equation.max_reverse_subtract",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030615 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030615 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030616, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030616 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.f"
        "bo_srgb.rgb_equation_alpha_equation.max_min",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030616 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030616 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030617, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030617 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.f"
        "bo_srgb.rgb_equation_alpha_equation.max_max",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030617 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030617 end";
}
