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
#include "../ActsDeqpgles30029TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028314, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028314 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_f"
        "ramebuffer.equation_src_func_dst_func.add_zero_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028314 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028314 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028315, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028315 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_f"
        "ramebuffer.equation_src_func_dst_func.add_zero_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028315 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028315 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028316, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028316 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
        "ebuffer.equation_src_func_dst_func.add_zero_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028316 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028316 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028317, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028317 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_zero_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028317 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028317 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028318, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028318 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
        "ebuffer.equation_src_func_dst_func.add_zero_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028318 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028318 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028319, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028319 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_zero_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028319 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028319 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028320, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028320 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
        "ebuffer.equation_src_func_dst_func.add_zero_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028320 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028320 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028321, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028321 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_zero_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028321 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028321 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028322, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028322 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
        "ebuffer.equation_src_func_dst_func.add_zero_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028322 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028322 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028323, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028323 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_zero_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028323 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028323 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028324, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028324 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_zero_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028324 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028324 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028325, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028325 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_zero_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028325 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028325 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028326, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028326 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_zero_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028326 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028326 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028327, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028327 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_zero_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028327 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028327 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028328, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028328 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.equation_src_func_dst_func.add_zero_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028328 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028328 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028329, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028329 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_f"
        "ramebuffer.equation_src_func_dst_func.add_one_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028329 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028329 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028330, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028330 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_"
        "framebuffer.equation_src_func_dst_func.add_one_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028330 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028330 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028331, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028331 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.equation_src_func_dst_func.add_one_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028331 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028331 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028332, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028332 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.equation_src_func_dst_func.add_one_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028332 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028332 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028333, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028333 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.equation_src_func_dst_func.add_one_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028333 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028333 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028334, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028334 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.equation_src_func_dst_func.add_one_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028334 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028334 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028335, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028335 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.equation_src_func_dst_func.add_one_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028335 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028335 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028336, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028336 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.equation_src_func_dst_func.add_one_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028336 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028336 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028337, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028337 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.equation_src_func_dst_func.add_one_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028337 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028337 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028338, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028338 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.equation_src_func_dst_func.add_one_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028338 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028338 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028339, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028339 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_one_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028339 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028339 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028340, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028340 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_one_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028340 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028340 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028341, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028341 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_one_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028341 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028341 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028342, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028342 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_one_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028342 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028342 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028343, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028343 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.equation_src_func_dst_func.add_one_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028343 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028343 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028344, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028344 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
        "ebuffer.equation_src_func_dst_func.add_src_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028344 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028344 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028345, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028345 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.equation_src_func_dst_func.add_src_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028345 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028345 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028346, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028346 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_src_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028346 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028346 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028347, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028347 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_src_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028347 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028347 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028348, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028348 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_src_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028348 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028348 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028349, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028349 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_src_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028349 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028349 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028350, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028350 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_src_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028350 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028350 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028351, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028351 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_src_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028351 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028351 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028352, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028352 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_src_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028352 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028352 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028353, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028353 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_src_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028353 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028353 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028354, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028354 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_src_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028354 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028354 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028355, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028355 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_src_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028355 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028355 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028356, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028356 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_src_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028356 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028356 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028357, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028357 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_src_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028357 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028357 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028358, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028358 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_src_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028358 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028358 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028359, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028359 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_one_minus_src_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028359 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028359 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028360, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028360 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.equation_src_func_dst_func.add_one_minus_src_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028360 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028360 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028361, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028361 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_one_minus_src_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028361 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028361 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028362, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028362 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_src_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028362 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028362 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028363, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028363 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_one_minus_src_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028363 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028363 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028364, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028364 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_src_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028364 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028364 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028365, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028365 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_one_minus_src_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028365 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028365 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028366, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028366 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_src_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028366 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028366 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028367, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028367 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_one_minus_src_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028367 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028367 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028368, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028368 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_src_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028368 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028368 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028369, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028369 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_one_minus_src_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028369 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028369 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028370, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028370 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.add_one_minus_src_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028370 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028370 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028371, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028371 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_one_minus_src_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028371 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028371 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028372, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028372 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.add_one_minus_src_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028372 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028372 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028373, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028373 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_src_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028373 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028373 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028374, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028374 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
        "ebuffer.equation_src_func_dst_func.add_dst_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028374 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028374 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028375, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028375 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.equation_src_func_dst_func.add_dst_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028375 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028375 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028376, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028376 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_dst_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028376 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028376 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028377, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028377 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_dst_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028377 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028377 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028378, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028378 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_dst_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028378 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028378 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028379, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028379 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_dst_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028379 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028379 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028380, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028380 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_dst_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028380 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028380 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028381, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028381 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_dst_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028381 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028381 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028382, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028382 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_dst_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028382 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028382 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028383, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028383 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_dst_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028383 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028383 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028384, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028384 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_dst_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028384 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028384 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028385, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028385 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_dst_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028385 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028385 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028386, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028386 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_dst_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028386 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028386 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028387, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028387 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_dst_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028387 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028387 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028388, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028388 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_dst_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028388 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028388 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028389, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028389 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_one_minus_dst_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028389 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028389 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028390, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028390 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.equation_src_func_dst_func.add_one_minus_dst_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028390 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028390 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028391, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028391 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_one_minus_dst_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028391 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028391 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028392, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028392 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_dst_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028392 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028392 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028393, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028393 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_one_minus_dst_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028393 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028393 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028394, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028394 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_dst_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028394 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028394 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028395, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028395 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_one_minus_dst_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028395 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028395 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028396, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028396 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_dst_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028396 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028396 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028397, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028397 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_one_minus_dst_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028397 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028397 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028398, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028398 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_dst_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028398 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028398 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028399, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028399 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_one_minus_dst_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028399 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028399 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028400, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028400 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.add_one_minus_dst_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028400 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028400 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028401, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028401 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_one_minus_dst_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028401 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028401 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028402, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028402 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.add_one_minus_dst_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028402 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028402 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028403, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028403 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_dst_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028403 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028403 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028404, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028404 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
        "ebuffer.equation_src_func_dst_func.add_src_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028404 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028404 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028405, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028405 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.equation_src_func_dst_func.add_src_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028405 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028405 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028406, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028406 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_src_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028406 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028406 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028407, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028407 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_src_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028407 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028407 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028408, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028408 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_src_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028408 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028408 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028409, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028409 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_src_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028409 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028409 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028410, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028410 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_src_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028410 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028410 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028411, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028411 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_src_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028411 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028411 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028412, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028412 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_src_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028412 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028412 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028413, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028413 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_src_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028413 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028413 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028414, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028414 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_src_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028414 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028414 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028415, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028415 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_src_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028415 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028415 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028416, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028416 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_src_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028416 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028416 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028417, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028417 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_src_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028417 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028417 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028418, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028418 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_src_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028418 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028418 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028419, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028419 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_one_minus_src_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028419 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028419 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028420, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028420 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.equation_src_func_dst_func.add_one_minus_src_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028420 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028420 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028421, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028421 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_one_minus_src_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028421 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028421 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028422, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028422 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_src_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028422 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028422 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028423, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028423 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_one_minus_src_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028423 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028423 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028424, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028424 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_src_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028424 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028424 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028425, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028425 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_one_minus_src_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028425 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028425 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028426, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028426 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_src_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028426 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028426 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028427, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028427 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_one_minus_src_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028427 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028427 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028428, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028428 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_src_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028428 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028428 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028429, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028429 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_one_minus_src_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028429 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028429 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028430, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028430 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.add_one_minus_src_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028430 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028430 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028431, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028431 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_one_minus_src_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028431 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028431 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028432, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028432 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.add_one_minus_src_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028432 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028432 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028433, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028433 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_src_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028433 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028433 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028434, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028434 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
        "ebuffer.equation_src_func_dst_func.add_dst_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028434 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028434 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028435, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028435 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.equation_src_func_dst_func.add_dst_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028435 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028435 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028436, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028436 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_dst_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028436 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028436 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028437, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028437 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_dst_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028437 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028437 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028438, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028438 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_dst_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028438 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028438 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028439, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028439 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_dst_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028439 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028439 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028440, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028440 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_dst_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028440 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028440 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028441, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028441 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_dst_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028441 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028441 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028442, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028442 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_dst_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028442 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028442 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028443, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028443 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_dst_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028443 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028443 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028444, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028444 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_dst_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028444 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028444 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028445, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028445 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_dst_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028445 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028445 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028446, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028446 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_dst_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028446 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028446 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028447, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028447 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_dst_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028447 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028447 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028448, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028448 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_dst_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028448 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028448 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028449, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028449 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_one_minus_dst_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028449 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028449 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028450, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028450 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.equation_src_func_dst_func.add_one_minus_dst_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028450 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028450 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028451, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028451 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_one_minus_dst_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028451 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028451 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028452, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028452 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_dst_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028452 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028452 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028453, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028453 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_one_minus_dst_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028453 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028453 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028454, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028454 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_dst_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028454 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028454 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028455, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028455 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_one_minus_dst_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028455 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028455 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028456, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028456 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_dst_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028456 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028456 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028457, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028457 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_one_minus_dst_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028457 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028457 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028458, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028458 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_dst_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028458 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028458 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028459, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028459 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_one_minus_dst_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028459 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028459 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028460, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028460 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.add_one_minus_dst_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028460 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028460 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028461, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028461 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_one_minus_dst_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028461 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028461 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028462, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028462 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.add_one_minus_dst_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028462 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028462 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028463, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028463 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_dst_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028463 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028463 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028464, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028464 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_constant_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028464 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028464 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028465, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028465 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_constant_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028465 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028465 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028466, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028466 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_constant_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028466 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028466 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028467, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028467 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_constant_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028467 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028467 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028468, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028468 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_constant_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028468 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028468 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028469, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028469 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_constant_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028469 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028469 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028470, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028470 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_constant_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028470 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028470 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028471, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028471 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_constant_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028471 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028471 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028472, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028472 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_constant_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028472 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028472 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028473, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028473 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_constant_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028473 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028473 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028474, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028474 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_constant_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028474 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028474 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028475, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028475 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_constant_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028475 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028475 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028476, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028476 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_constant_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028476 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028476 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028477, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028477 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_constant_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028477 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028477 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028478, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028478 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.add_constant_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028478 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028478 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028479, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028479 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_one_minus_constant_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028479 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028479 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028480, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028480 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_one_minus_constant_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028480 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028480 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028481, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028481 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_one_minus_constant_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028481 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028481 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028482, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028482 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.add_one_minus_constant_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028482 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028482 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028483, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028483 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_one_minus_constant_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028483 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028483 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028484, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028484 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.add_one_minus_constant_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028484 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028484 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028485, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028485 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_one_minus_constant_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028485 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028485 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028486, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028486 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.add_one_minus_constant_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028486 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028486 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028487, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028487 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_one_minus_constant_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028487 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028487 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028488, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028488 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.add_one_minus_constant_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028488 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028488 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028489, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028489 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_constant_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028489 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028489 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028490, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028490 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
        "src_func_dst_func.add_one_minus_constant_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028490 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028490 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028491, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028491 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_constant_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028491 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028491 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028492, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028492 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
        "src_func_dst_func.add_one_minus_constant_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028492 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028492 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028493, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028493 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.add_one_minus_constant_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028493 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028493 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028494, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028494 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_constant_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028494 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028494 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028495, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028495 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_constant_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028495 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028495 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028496, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028496 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_constant_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028496 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028496 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028497, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028497 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_constant_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028497 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028497 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028498, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028498 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_constant_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028498 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028498 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028499, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028499 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_constant_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028499 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028499 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028500, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028500 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_constant_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028500 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028500 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028501, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028501 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_constant_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028501 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028501 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028502, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028502 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_constant_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028502 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028502 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028503, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028503 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_constant_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028503 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028503 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028504, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028504 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_constant_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028504 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028504 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028505, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028505 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_constant_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028505 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028505 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028506, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028506 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_constant_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028506 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028506 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028507, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028507 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_constant_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028507 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028507 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028508, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028508 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.add_constant_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028508 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028508 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028509, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028509 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_one_minus_constant_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028509 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028509 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028510, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028510 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_one_minus_constant_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028510 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028510 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028511, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028511 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_one_minus_constant_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028511 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028511 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028512, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028512 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.add_one_minus_constant_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028512 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028512 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028513, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028513 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_one_minus_constant_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028513 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028513 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028514, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028514 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.add_one_minus_constant_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028514 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028514 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028515, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028515 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_one_minus_constant_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028515 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028515 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028516, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028516 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.add_one_minus_constant_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028516 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028516 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028517, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028517 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_one_minus_constant_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028517 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028517 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028518, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028518 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.add_one_minus_constant_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028518 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028518 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028519, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028519 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_constant_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028519 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028519 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028520, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028520 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
        "src_func_dst_func.add_one_minus_constant_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028520 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028520 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028521, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028521 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_constant_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028521 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028521 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028522, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028522 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
        "src_func_dst_func.add_one_minus_constant_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028522 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028522 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028523, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028523 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.add_one_minus_constant_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028523 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028523 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028524, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028524 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.equation_src_func_dst_func.add_src_alpha_saturate_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028524 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028524 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028525, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028525 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.equation_src_func_dst_func.add_src_alpha_saturate_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028525 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028525 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028526, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028526 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_src_alpha_saturate_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028526 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028526 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028527, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028527 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_src_alpha_saturate_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028527 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028527 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028528, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028528 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_src_alpha_saturate_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028528 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028528 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028529, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028529 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_src_alpha_saturate_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028529 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028529 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028530, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028530 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_src_alpha_saturate_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028530 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028530 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028531, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028531 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_src_alpha_saturate_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028531 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028531 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028532, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028532 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_src_alpha_saturate_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028532 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028532 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028533, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028533 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_src_alpha_saturate_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028533 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028533 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028534, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028534 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.add_src_alpha_saturate_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028534 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028534 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028535, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028535 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.add_src_alpha_saturate_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028535 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028535 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028536, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028536 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.add_src_alpha_saturate_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028536 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028536 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028537, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028537 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.add_src_alpha_saturate_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028537 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028537 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028538, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028538 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.add_src_alpha_saturate_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028538 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028538 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028539, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028539 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
        "ebuffer.equation_src_func_dst_func.subtract_zero_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028539 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028539 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028540, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028540 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.equation_src_func_dst_func.subtract_zero_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028540 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028540 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028541, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028541 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.subtract_zero_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028541 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028541 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028542, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028542 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_zero_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028542 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028542 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028543, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028543 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.subtract_zero_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028543 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028543 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028544, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028544 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_zero_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028544 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028544 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028545, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028545 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.subtract_zero_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028545 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028545 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028546, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028546 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_zero_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028546 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028546 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028547, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028547 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.subtract_zero_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028547 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028547 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028548, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028548 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_zero_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028548 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028548 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028549, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028549 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.subtract_zero_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028549 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028549 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028550, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028550 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_zero_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028550 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028550 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028551, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028551 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.subtract_zero_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028551 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028551 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028552, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028552 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_zero_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028552 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028552 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028553, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028553 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_zero_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028553 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028553 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028554, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028554 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.equation_src_func_dst_func.subtract_one_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028554 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028554 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028555, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028555 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.equation_src_func_dst_func.subtract_one_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028555 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028555 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028556, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028556 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.subtract_one_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028556 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028556 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028557, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028557 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_one_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028557 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028557 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028558, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028558 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.subtract_one_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028558 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028558 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028559, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028559 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_one_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028559 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028559 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028560, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028560 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.subtract_one_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028560 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028560 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028561, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028561 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_one_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028561 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028561 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028562, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028562 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.subtract_one_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028562 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028562 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028563, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028563 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_one_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028563 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028563 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028564, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028564 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.equation_src_func_dst_func.subtract_one_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028564 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028564 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028565, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028565 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.subtract_one_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028565 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028565 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028566, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028566 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.equation_src_func_dst_func.subtract_one_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028566 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028566 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028567, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028567 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.subtract_one_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028567 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028567 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028568, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028568 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.equation_src_func_dst_func.subtract_one_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028568 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028568 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028569, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028569 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.subtract_src_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028569 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028569 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028570, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028570 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.subtract_src_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028570 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028570 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028571, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028571 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.subtract_src_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028571 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028571 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028572, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028572 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_src_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028572 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028572 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028573, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028573 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.subtract_src_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028573 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028573 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028574, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028574 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_src_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028574 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028574 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028575, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028575 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.subtract_src_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028575 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028575 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028576, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028576 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_src_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028576 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028576 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028577, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028577 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.subtract_src_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028577 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028577 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028578, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028578 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_src_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028578 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028578 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028579, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028579 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_src_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028579 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028579 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028580, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028580 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_src_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028580 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028580 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028581, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028581 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_src_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028581 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028581 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028582, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028582 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_src_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028582 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028582 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028583, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028583 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.subtract_src_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028583 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028583 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028584, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028584 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_one_minus_src_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028584 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028584 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028585, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028585 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_one_minus_src_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028585 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028585 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028586, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028586 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_one_minus_src_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028586 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028586 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028587, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028587 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.subtract_one_minus_src_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028587 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028587 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028588, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028588 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_one_minus_src_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028588 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028588 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028589, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028589 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.subtract_one_minus_src_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028589 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028589 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028590, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028590 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_one_minus_src_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028590 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028590 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028591, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028591 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.subtract_one_minus_src_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028591 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028591 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028592, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028592 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_one_minus_src_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028592 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028592 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028593, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028593 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.subtract_one_minus_src_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028593 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028593 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028594, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028594 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_one_minus_src_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028594 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028594 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028595, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028595 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
        "src_func_dst_func.subtract_one_minus_src_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028595 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028595 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028596, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028596 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_one_minus_src_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028596 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028596 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028597, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028597 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
        "src_func_dst_func.subtract_one_minus_src_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028597 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028597 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028598, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028598 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.subtract_one_minus_src_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028598 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028598 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028599, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028599 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.subtract_dst_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028599 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028599 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028600, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028600 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.subtract_dst_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028600 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028600 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028601, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028601 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.subtract_dst_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028601 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028601 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028602, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028602 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_dst_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028602 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028602 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028603, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028603 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.subtract_dst_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028603 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028603 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028604, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028604 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_dst_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028604 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028604 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028605, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028605 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.subtract_dst_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028605 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028605 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028606, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028606 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_dst_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028606 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028606 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028607, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028607 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.subtract_dst_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028607 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028607 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028608, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028608 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_dst_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028608 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028608 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028609, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028609 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_dst_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028609 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028609 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028610, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028610 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_dst_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028610 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028610 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028611, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028611 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_dst_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028611 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028611 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028612, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028612 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_dst_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028612 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028612 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028613, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028613 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.subtract_dst_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028613 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028613 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028614, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028614 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_one_minus_dst_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028614 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028614 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028615, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028615 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_one_minus_dst_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028615 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028615 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028616, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028616 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_one_minus_dst_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028616 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028616 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028617, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028617 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.subtract_one_minus_dst_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028617 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028617 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028618, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028618 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_one_minus_dst_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028618 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028618 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028619, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028619 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.subtract_one_minus_dst_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028619 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028619 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028620, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028620 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_one_minus_dst_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028620 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028620 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028621, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028621 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.subtract_one_minus_dst_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028621 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028621 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028622, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028622 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_one_minus_dst_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028622 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028622 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028623, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028623 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.subtract_one_minus_dst_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028623 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028623 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028624, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028624 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_one_minus_dst_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028624 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028624 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028625, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028625 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
        "src_func_dst_func.subtract_one_minus_dst_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028625 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028625 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028626, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028626 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_one_minus_dst_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028626 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028626 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028627, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028627 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
        "src_func_dst_func.subtract_one_minus_dst_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028627 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028627 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028628, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028628 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.subtract_one_minus_dst_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028628 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028628 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028629, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028629 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.subtract_src_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028629 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028629 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028630, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028630 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.subtract_src_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028630 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028630 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028631, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028631 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.subtract_src_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028631 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028631 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028632, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028632 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_src_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028632 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028632 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028633, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028633 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.subtract_src_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028633 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028633 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028634, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028634 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_src_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028634 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028634 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028635, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028635 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.subtract_src_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028635 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028635 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028636, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028636 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_src_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028636 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028636 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028637, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028637 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.subtract_src_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028637 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028637 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028638, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028638 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_src_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028638 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028638 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028639, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028639 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_src_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028639 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028639 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028640, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028640 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_src_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028640 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028640 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028641, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028641 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_src_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028641 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028641 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028642, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028642 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_src_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028642 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028642 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028643, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028643 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.subtract_src_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028643 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028643 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028644, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028644 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_one_minus_src_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028644 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028644 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028645, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028645 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_one_minus_src_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028645 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028645 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028646, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028646 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_one_minus_src_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028646 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028646 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028647, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028647 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.subtract_one_minus_src_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028647 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028647 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028648, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028648 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_one_minus_src_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028648 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028648 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028649, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028649 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.subtract_one_minus_src_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028649 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028649 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028650, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028650 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_one_minus_src_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028650 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028650 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028651, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028651 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.subtract_one_minus_src_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028651 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028651 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028652, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028652 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_one_minus_src_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028652 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028652 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028653, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028653 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.subtract_one_minus_src_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028653 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028653 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028654, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028654 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_one_minus_src_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028654 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028654 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028655, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028655 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
        "src_func_dst_func.subtract_one_minus_src_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028655 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028655 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028656, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028656 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_one_minus_src_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028656 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028656 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028657, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028657 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
        "src_func_dst_func.subtract_one_minus_src_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028657 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028657 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028658, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028658 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.subtract_one_minus_src_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028658 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028658 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028659, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028659 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.subtract_dst_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028659 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028659 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028660, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028660 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.subtract_dst_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028660 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028660 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028661, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028661 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.subtract_dst_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028661 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028661 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028662, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028662 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_dst_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028662 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028662 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028663, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028663 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.subtract_dst_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028663 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028663 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028664, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028664 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_dst_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028664 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028664 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028665, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028665 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.subtract_dst_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028665 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028665 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028666, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028666 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_dst_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028666 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028666 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028667, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028667 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.subtract_dst_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028667 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028667 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028668, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028668 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_dst_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028668 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028668 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028669, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028669 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_dst_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028669 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028669 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028670, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028670 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_dst_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028670 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028670 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028671, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028671 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_dst_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028671 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028671 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028672, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028672 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_dst_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028672 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028672 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028673, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028673 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.subtract_dst_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028673 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028673 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028674, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028674 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_one_minus_dst_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028674 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028674 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028675, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028675 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_one_minus_dst_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028675 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028675 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028676, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028676 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_one_minus_dst_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028676 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028676 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028677, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028677 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.subtract_one_minus_dst_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028677 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028677 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028678, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028678 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_one_minus_dst_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028678 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028678 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028679, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028679 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.subtract_one_minus_dst_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028679 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028679 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028680, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028680 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_one_minus_dst_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028680 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028680 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028681, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028681 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.subtract_one_minus_dst_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028681 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028681 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028682, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028682 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_one_minus_dst_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028682 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028682 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028683, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028683 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.subtract_one_minus_dst_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028683 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028683 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028684, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028684 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_one_minus_dst_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028684 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028684 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028685, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028685 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
        "src_func_dst_func.subtract_one_minus_dst_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028685 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028685 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028686, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028686 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_one_minus_dst_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028686 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028686 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028687, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028687 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
        "src_func_dst_func.subtract_one_minus_dst_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028687 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028687 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028688, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028688 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.subtract_one_minus_dst_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028688 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028688 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028689, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028689 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.subtract_constant_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028689 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028689 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028690, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028690 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.equation_src_func_dst_func.subtract_constant_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028690 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028690 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028691, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028691 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_constant_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028691 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028691 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028692, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028692 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_constant_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028692 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028692 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028693, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028693 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_constant_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028693 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028693 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028694, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028694 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_constant_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028694 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028694 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028695, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028695 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_constant_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028695 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028695 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028696, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028696 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_constant_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028696 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028696 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028697, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028697 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_constant_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028697 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028697 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028698, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028698 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_constant_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028698 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028698 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028699, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028699 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_constant_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028699 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028699 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028700, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028700 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.subtract_constant_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028700 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028700 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028701, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028701 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_constant_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028701 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028701 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028702, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028702 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.subtract_constant_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028702 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028702 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028703, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028703 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_constant_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028703 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028703 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028704, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028704 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_one_minus_constant_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028704 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028704 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028705, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028705 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.subtract_one_minus_constant_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028705 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028705 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028706, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028706 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_one_minus_constant_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028706 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028706 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028707, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028707 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
        "src_func_dst_func.subtract_one_minus_constant_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028707 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028707 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028708, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028708 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_one_minus_constant_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028708 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028708 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028709, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028709 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
        "src_func_dst_func.subtract_one_minus_constant_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028709 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028709 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028710, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028710 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_one_minus_constant_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028710 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028710 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028711, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028711 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
        "src_func_dst_func.subtract_one_minus_constant_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028711 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028711 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028712, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028712 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_one_minus_constant_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028712 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028712 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028713, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028713 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
        "src_func_dst_func.subtract_one_minus_constant_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028713 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028713 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028714, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028714 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.subtract_one_minus_constant_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028714 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028714 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028715, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028715 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src"
        "_func_dst_func.subtract_one_minus_constant_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028715 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028715 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028716, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028716 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.subtract_one_minus_constant_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028716 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028716 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028717, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028717 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src"
        "_func_dst_func.subtract_one_minus_constant_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028717 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028717 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028718, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028718 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
        "src_func_dst_func.subtract_one_minus_constant_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028718 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028718 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028719, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028719 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.subtract_constant_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028719 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028719 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028720, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028720 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.equation_src_func_dst_func.subtract_constant_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028720 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028720 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028721, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028721 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_constant_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028721 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028721 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028722, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028722 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_constant_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028722 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028722 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028723, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028723 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_constant_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028723 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028723 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028724, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028724 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_constant_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028724 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028724 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028725, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028725 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_constant_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028725 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028725 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028726, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028726 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_constant_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028726 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028726 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028727, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028727 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_constant_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028727 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028727 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028728, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028728 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_constant_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028728 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028728 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028729, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028729 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_constant_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028729 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028729 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028730, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028730 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.subtract_constant_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028730 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028730 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028731, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028731 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_constant_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028731 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028731 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028732, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028732 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.subtract_constant_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028732 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028732 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028733, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028733 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_constant_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028733 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028733 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028734, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028734 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.subtract_one_minus_constant_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028734 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028734 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028735, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028735 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.subtract_one_minus_constant_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028735 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028735 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028736, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028736 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_one_minus_constant_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028736 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028736 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028737, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028737 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
        "src_func_dst_func.subtract_one_minus_constant_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028737 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028737 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028738, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028738 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_one_minus_constant_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028738 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028738 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028739, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028739 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
        "src_func_dst_func.subtract_one_minus_constant_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028739 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028739 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028740, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028740 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_one_minus_constant_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028740 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028740 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028741, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028741 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
        "src_func_dst_func.subtract_one_minus_constant_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028741 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028741 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028742, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028742 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_one_minus_constant_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028742 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028742 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028743, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028743 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
        "src_func_dst_func.subtract_one_minus_constant_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028743 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028743 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028744, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028744 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.subtract_one_minus_constant_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028744 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028744 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028745, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028745 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src"
        "_func_dst_func.subtract_one_minus_constant_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028745 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028745 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028746, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028746 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.subtract_one_minus_constant_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028746 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028746 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028747, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028747 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src"
        "_func_dst_func.subtract_one_minus_constant_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028747 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028747 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028748, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028748 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
        "src_func_dst_func.subtract_one_minus_constant_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028748 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028748 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028749, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028749 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.subtract_src_alpha_saturate_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028749 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028749 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028750, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028750 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.equation_src_func_dst_func.subtract_src_alpha_saturate_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028750 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028750 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028751, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028751 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.subtract_src_alpha_saturate_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028751 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028751 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028752, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028752 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.subtract_src_alpha_saturate_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028752 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028752 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028753, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028753 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.subtract_src_alpha_saturate_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028753 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028753 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028754, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028754 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.subtract_src_alpha_saturate_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028754 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028754 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028755, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028755 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.subtract_src_alpha_saturate_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028755 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028755 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028756, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028756 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.subtract_src_alpha_saturate_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028756 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028756 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028757, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028757 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.subtract_src_alpha_saturate_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028757 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028757 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028758, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028758 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.subtract_src_alpha_saturate_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028758 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028758 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028759, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028759 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_src_alpha_saturate_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028759 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028759 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028760, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028760 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
        "src_func_dst_func.subtract_src_alpha_saturate_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028760 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028760 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028761, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028761 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.subtract_src_alpha_saturate_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028761 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028761 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028762, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028762 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
        "src_func_dst_func.subtract_src_alpha_saturate_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028762 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028762 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028763, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028763 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.subtract_src_alpha_saturate_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028763 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028763 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028764, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028764 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.equation_src_func_dst_func.reverse_subtract_zero_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028764 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028764 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028765, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028765 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
        "ffer.equation_src_func_dst_func.reverse_subtract_zero_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028765 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028765 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028766, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028766 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.equation_src_func_dst_func.reverse_subtract_zero_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028766 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028766 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028767, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028767 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_zero_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028767 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028767 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028768, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028768 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.equation_src_func_dst_func.reverse_subtract_zero_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028768 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028768 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028769, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028769 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_zero_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028769 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028769 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028770, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028770 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.equation_src_func_dst_func.reverse_subtract_zero_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028770 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028770 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028771, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028771 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_zero_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028771 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028771 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028772, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028772 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.equation_src_func_dst_func.reverse_subtract_zero_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028772 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028772 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028773, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028773 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_zero_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028773 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028773 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028774, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028774 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.reverse_subtract_zero_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028774 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028774 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028775, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028775 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_zero_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028775 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028775 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028776, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028776 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.reverse_subtract_zero_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028776 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028776 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028777, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028777 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_zero_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028777 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028777 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028778, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028778 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_zero_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028778 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028778 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028779, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028779 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
        "ffer.equation_src_func_dst_func.reverse_subtract_one_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028779 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028779 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028780, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028780 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
        "ffer.equation_src_func_dst_func.reverse_subtract_one_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028780 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028780 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028781, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028781 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.equation_src_func_dst_func.reverse_subtract_one_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028781 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028781 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028782, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028782 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_one_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028782 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028782 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028783, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028783 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.equation_src_func_dst_func.reverse_subtract_one_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028783 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028783 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028784, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028784 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_one_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028784 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028784 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028785, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028785 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.equation_src_func_dst_func.reverse_subtract_one_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028785 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028785 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028786, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028786 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_one_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028786 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028786 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028787, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028787 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.equation_src_func_dst_func.reverse_subtract_one_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028787 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028787 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028788, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028788 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_one_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028788 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028788 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028789, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028789 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
        "equation_src_func_dst_func.reverse_subtract_one_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028789 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028789 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028790, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028790 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equat"
        "ion_src_func_dst_func.reverse_subtract_one_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028790 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028790 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028791, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028791 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
        "equation_src_func_dst_func.reverse_subtract_one_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028791 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028791 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028792, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028792 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equat"
        "ion_src_func_dst_func.reverse_subtract_one_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028792 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028792 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028793, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028793 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.reverse_subtract_one_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028793 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028793 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028794, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028794 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.equation_src_func_dst_func.reverse_subtract_src_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028794 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028794 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028795, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028795 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.equation_src_func_dst_func.reverse_subtract_src_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028795 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028795 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028796, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028796 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.reverse_subtract_src_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028796 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028796 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028797, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028797 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_src_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028797 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028797 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028798, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028798 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.reverse_subtract_src_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028798 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028798 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028799, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028799 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_src_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028799 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028799 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028800, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028800 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.reverse_subtract_src_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028800 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028800 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028801, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028801 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_src_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028801 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028801 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028802, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028802 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.reverse_subtract_src_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028802 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028802 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028803, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028803 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_src_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028803 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028803 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028804, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028804 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_src_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028804 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028804 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028805, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028805 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_src_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028805 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028805 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028806, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028806 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_src_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028806 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028806 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028807, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028807 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_src_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028807 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028807 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028808, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028808 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equat"
        "ion_src_func_dst_func.reverse_subtract_src_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028808 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028808 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028809, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028809 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_one_minus_src_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028809 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028809 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028810, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028810 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_one_minus_src_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028810 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028810 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028811, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028811 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_one_minus_src_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028811 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028811 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028812, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028812 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
        "c_func_dst_func.reverse_subtract_one_minus_src_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028812 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028812 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028813, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028813 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_one_minus_src_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028813 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028813 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028814, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028814 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
        "c_func_dst_func.reverse_subtract_one_minus_src_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028814 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028814 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028815, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028815 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_one_minus_src_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028815 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028815 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028816, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028816 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
        "c_func_dst_func.reverse_subtract_one_minus_src_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028816 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028816 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028817, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028817 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_one_minus_src_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028817 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028817 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028818, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028818 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
        "c_func_dst_func.reverse_subtract_one_minus_src_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028818 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028818 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028819, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028819 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_one_minus_src_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028819 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028819 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028820, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028820 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
        "func_dst_func.reverse_subtract_one_minus_src_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028820 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028820 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028821, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028821 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_one_minus_src_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028821 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028821 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028822, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028822 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
        "func_dst_func.reverse_subtract_one_minus_src_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028822 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028822 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028823, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028823 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_s"
        "rc_func_dst_func.reverse_subtract_one_minus_src_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028823 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028823 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028824, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028824 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.equation_src_func_dst_func.reverse_subtract_dst_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028824 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028824 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028825, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028825 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.equation_src_func_dst_func.reverse_subtract_dst_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028825 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028825 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028826, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028826 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.reverse_subtract_dst_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028826 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028826 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028827, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028827 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_dst_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028827 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028827 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028828, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028828 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.reverse_subtract_dst_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028828 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028828 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028829, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028829 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_dst_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028829 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028829 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028830, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028830 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.reverse_subtract_dst_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028830 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028830 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028831, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028831 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_dst_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028831 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028831 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028832, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028832 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.reverse_subtract_dst_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028832 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028832 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028833, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028833 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_dst_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028833 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028833 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028834, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028834 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_dst_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028834 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028834 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028835, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028835 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_dst_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028835 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028835 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028836, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028836 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_dst_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028836 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028836 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028837, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028837 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_dst_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028837 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028837 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028838, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028838 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equat"
        "ion_src_func_dst_func.reverse_subtract_dst_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028838 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028838 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028839, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028839 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_one_minus_dst_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028839 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028839 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028840, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028840 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_one_minus_dst_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028840 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028840 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028841, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028841 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_one_minus_dst_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028841 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028841 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028842, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028842 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
        "c_func_dst_func.reverse_subtract_one_minus_dst_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028842 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028842 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028843, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028843 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_one_minus_dst_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028843 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028843 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028844, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028844 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
        "c_func_dst_func.reverse_subtract_one_minus_dst_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028844 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028844 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028845, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028845 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_one_minus_dst_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028845 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028845 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028846, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028846 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
        "c_func_dst_func.reverse_subtract_one_minus_dst_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028846 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028846 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028847, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028847 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_one_minus_dst_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028847 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028847 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028848, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028848 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
        "c_func_dst_func.reverse_subtract_one_minus_dst_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028848 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028848 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028849, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028849 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_one_minus_dst_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028849 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028849 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028850, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028850 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
        "func_dst_func.reverse_subtract_one_minus_dst_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028850 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028850 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028851, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028851 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_one_minus_dst_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028851 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028851 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028852, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028852 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
        "func_dst_func.reverse_subtract_one_minus_dst_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028852 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028852 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028853, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028853 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_s"
        "rc_func_dst_func.reverse_subtract_one_minus_dst_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028853 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028853 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028854, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028854 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.equation_src_func_dst_func.reverse_subtract_src_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028854 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028854 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028855, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028855 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.equation_src_func_dst_func.reverse_subtract_src_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028855 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028855 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028856, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028856 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.reverse_subtract_src_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028856 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028856 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028857, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028857 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_src_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028857 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028857 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028858, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028858 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.reverse_subtract_src_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028858 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028858 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028859, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028859 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_src_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028859 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028859 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028860, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028860 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.reverse_subtract_src_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028860 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028860 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028861, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028861 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_src_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028861 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028861 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028862, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028862 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.reverse_subtract_src_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028862 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028862 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028863, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028863 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_src_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028863 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028863 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028864, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028864 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_src_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028864 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028864 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028865, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028865 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_src_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028865 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028865 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028866, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028866 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_src_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028866 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028866 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028867, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028867 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_src_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028867 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028867 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028868, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028868 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equat"
        "ion_src_func_dst_func.reverse_subtract_src_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028868 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028868 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028869, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028869 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_one_minus_src_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028869 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028869 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028870, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028870 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_one_minus_src_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028870 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028870 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028871, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028871 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_one_minus_src_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028871 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028871 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028872, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028872 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
        "c_func_dst_func.reverse_subtract_one_minus_src_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028872 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028872 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028873, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028873 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_one_minus_src_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028873 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028873 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028874, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028874 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
        "c_func_dst_func.reverse_subtract_one_minus_src_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028874 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028874 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028875, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028875 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_one_minus_src_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028875 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028875 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028876, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028876 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
        "c_func_dst_func.reverse_subtract_one_minus_src_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028876 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028876 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028877, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028877 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_one_minus_src_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028877 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028877 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028878, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028878 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
        "c_func_dst_func.reverse_subtract_one_minus_src_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028878 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028878 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028879, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028879 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_one_minus_src_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028879 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028879 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028880, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028880 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
        "func_dst_func.reverse_subtract_one_minus_src_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028880 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028880 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028881, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028881 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_one_minus_src_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028881 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028881 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028882, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028882 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
        "func_dst_func.reverse_subtract_one_minus_src_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028882 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028882 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028883, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028883 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_s"
        "rc_func_dst_func.reverse_subtract_one_minus_src_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028883 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028883 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028884, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028884 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.equation_src_func_dst_func.reverse_subtract_dst_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028884 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028884 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028885, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028885 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.equation_src_func_dst_func.reverse_subtract_dst_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028885 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028885 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028886, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028886 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.reverse_subtract_dst_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028886 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028886 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028887, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028887 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_dst_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028887 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028887 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028888, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028888 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.reverse_subtract_dst_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028888 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028888 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028889, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028889 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_dst_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028889 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028889 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028890, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028890 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.reverse_subtract_dst_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028890 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028890 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028891, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028891 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_dst_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028891 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028891 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028892, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028892 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.reverse_subtract_dst_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028892 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028892 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028893, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028893 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_dst_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028893 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028893 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028894, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028894 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_dst_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028894 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028894 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028895, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028895 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_dst_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028895 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028895 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028896, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028896 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_dst_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028896 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028896 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028897, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028897 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_dst_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028897 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028897 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028898, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028898 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equat"
        "ion_src_func_dst_func.reverse_subtract_dst_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028898 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028898 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028899, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028899 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_one_minus_dst_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028899 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028899 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028900, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028900 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_one_minus_dst_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028900 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028900 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028901, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028901 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_one_minus_dst_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028901 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028901 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028902, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028902 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
        "c_func_dst_func.reverse_subtract_one_minus_dst_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028902 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028902 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028903, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028903 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_one_minus_dst_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028903 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028903 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028904, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028904 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
        "c_func_dst_func.reverse_subtract_one_minus_dst_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028904 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028904 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028905, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028905 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_one_minus_dst_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028905 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028905 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028906, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028906 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
        "c_func_dst_func.reverse_subtract_one_minus_dst_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028906 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028906 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028907, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028907 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_one_minus_dst_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028907 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028907 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028908, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028908 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
        "c_func_dst_func.reverse_subtract_one_minus_dst_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028908 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028908 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028909, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028909 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_one_minus_dst_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028909 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028909 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028910, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028910 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
        "func_dst_func.reverse_subtract_one_minus_dst_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028910 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028910 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028911, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028911 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_one_minus_dst_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028911 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028911 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028912, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028912 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
        "func_dst_func.reverse_subtract_one_minus_dst_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028912 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028912 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028913, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028913 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_s"
        "rc_func_dst_func.reverse_subtract_one_minus_dst_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028913 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028913 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028914, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028914 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.reverse_subtract_constant_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028914 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028914 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028915, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028915 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
        "equation_src_func_dst_func.reverse_subtract_constant_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028915 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028915 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028916, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028916 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_constant_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028916 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028916 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028917, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028917 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_constant_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028917 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028917 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028918, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028918 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_constant_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028918 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028918 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028919, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028919 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_constant_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028919 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028919 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028920, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028920 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_constant_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028920 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028920 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028921, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028921 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_constant_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028921 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028921 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028922, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028922 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_constant_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028922 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028922 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028923, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028923 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_constant_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028923 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028923 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028924, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028924 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_constant_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028924 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028924 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028925, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028925 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
        "c_func_dst_func.reverse_subtract_constant_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028925 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028925 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028926, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028926 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_constant_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028926 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028926 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028927, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028927 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
        "c_func_dst_func.reverse_subtract_constant_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028927 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028927 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028928, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028928 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_constant_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028928 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028928 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028929, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028929 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_one_minus_constant_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028929 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028929 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028930, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028930 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equat"
        "ion_src_func_dst_func.reverse_subtract_one_minus_constant_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028930 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028930 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028931, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028931 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_one_minus_constant_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028931 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028931 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028932, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028932 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
        "func_dst_func.reverse_subtract_one_minus_constant_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028932 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028932 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028933, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028933 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_one_minus_constant_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028933 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028933 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028934, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028934 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
        "func_dst_func.reverse_subtract_one_minus_constant_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028934 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028934 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028935, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028935 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_one_minus_constant_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028935 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028935 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028936, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028936 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
        "func_dst_func.reverse_subtract_one_minus_constant_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028936 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028936 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028937, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028937 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_one_minus_constant_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028937 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028937 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028938, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028938 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
        "func_dst_func.reverse_subtract_one_minus_constant_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028938 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028938 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028939, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028939 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
        "c_func_dst_func.reverse_subtract_one_minus_constant_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028939 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028939 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028940, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028940 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_fun"
        "c_dst_func.reverse_subtract_one_minus_constant_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028940 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028940 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028941, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028941 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
        "c_func_dst_func.reverse_subtract_one_minus_constant_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028941 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028941 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028942, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028942 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_fun"
        "c_dst_func.reverse_subtract_one_minus_constant_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028942 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028942 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028943, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028943 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
        "func_dst_func.reverse_subtract_one_minus_constant_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028943 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028943 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028944, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028944 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
        "quation_src_func_dst_func.reverse_subtract_constant_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028944 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028944 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028945, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028945 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
        "equation_src_func_dst_func.reverse_subtract_constant_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028945 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028945 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028946, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028946 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_constant_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028946 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028946 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028947, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028947 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_constant_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028947 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028947 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028948, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028948 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_constant_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028948 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028948 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028949, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028949 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_constant_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028949 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028949 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028950, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028950 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_constant_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028950 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028950 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028951, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028951 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_constant_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028951 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028951 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028952, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028952 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_constant_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028952 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028952 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028953, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028953 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_constant_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028953 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028953 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028954, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028954 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_constant_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028954 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028954 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028955, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028955 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
        "c_func_dst_func.reverse_subtract_constant_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028955 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028955 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028956, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028956 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_constant_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028956 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028956 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028957, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028957 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
        "c_func_dst_func.reverse_subtract_constant_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028957 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028957 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028958, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028958 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_constant_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028958 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028958 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028959, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028959 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
        "on_src_func_dst_func.reverse_subtract_one_minus_constant_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028959 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028959 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028960, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028960 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equat"
        "ion_src_func_dst_func.reverse_subtract_one_minus_constant_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028960 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028960 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028961, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028961 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_one_minus_constant_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028961 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028961 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028962, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028962 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
        "func_dst_func.reverse_subtract_one_minus_constant_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028962 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028962 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028963, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028963 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_one_minus_constant_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028963 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028963 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028964, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028964 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
        "func_dst_func.reverse_subtract_one_minus_constant_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028964 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028964 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028965, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028965 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_one_minus_constant_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028965 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028965 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028966, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028966 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
        "func_dst_func.reverse_subtract_one_minus_constant_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028966 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028966 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028967, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028967 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_one_minus_constant_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028967 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028967 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028968, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028968 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
        "func_dst_func.reverse_subtract_one_minus_constant_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028968 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028968 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028969, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028969 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
        "c_func_dst_func.reverse_subtract_one_minus_constant_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028969 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028969 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028970, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028970 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_fun"
        "c_dst_func.reverse_subtract_one_minus_constant_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028970 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028970 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028971, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028971 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
        "c_func_dst_func.reverse_subtract_one_minus_constant_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028971 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028971 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028972, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028972 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_fun"
        "c_dst_func.reverse_subtract_one_minus_constant_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028972 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028972 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028973, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028973 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
        "func_dst_func.reverse_subtract_one_minus_constant_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028973 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028973 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028974, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028974 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
        "ation_src_func_dst_func.reverse_subtract_src_alpha_saturate_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028974 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028974 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028975, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028975 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.reverse_subtract_src_alpha_saturate_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028975 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028975 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028976, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028976 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equat"
        "ion_src_func_dst_func.reverse_subtract_src_alpha_saturate_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028976 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028976 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028977, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028977 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_s"
        "rc_func_dst_func.reverse_subtract_src_alpha_saturate_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028977 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028977 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028978, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028978 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equat"
        "ion_src_func_dst_func.reverse_subtract_src_alpha_saturate_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028978 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028978 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028979, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028979 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_s"
        "rc_func_dst_func.reverse_subtract_src_alpha_saturate_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028979 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028979 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028980, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028980 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equat"
        "ion_src_func_dst_func.reverse_subtract_src_alpha_saturate_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028980 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028980 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028981, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028981 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_s"
        "rc_func_dst_func.reverse_subtract_src_alpha_saturate_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028981 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028981 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028982, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028982 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equat"
        "ion_src_func_dst_func.reverse_subtract_src_alpha_saturate_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028982 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028982 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028983, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028983 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_s"
        "rc_func_dst_func.reverse_subtract_src_alpha_saturate_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028983 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028983 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028984, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028984 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_src_alpha_saturate_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028984 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028984 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028985, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028985 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
        "func_dst_func.reverse_subtract_src_alpha_saturate_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028985 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028985 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028986, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028986 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
        "_src_func_dst_func.reverse_subtract_src_alpha_saturate_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028986 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028986 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028987, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028987 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
        "func_dst_func.reverse_subtract_src_alpha_saturate_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028987 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028987 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028988, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028988 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_s"
        "rc_func_dst_func.reverse_subtract_src_alpha_saturate_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028988 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028988 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028989, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028989 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.defa"
        "ult_framebuffer.equation_src_func_dst_func.min",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028989 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028989 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028990, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028990 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.defa"
        "ult_framebuffer.equation_src_func_dst_func.max",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028990 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028990 end";
}
