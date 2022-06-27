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

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028991, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028991 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.defaul"
        "t_framebuffer.rgb_func_alpha_func.src.zero_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028991 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028991 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028992, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028992 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.defau"
        "lt_framebuffer.rgb_func_alpha_func.src.zero_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028992 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028992 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028993, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028993 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_"
        "framebuffer.rgb_func_alpha_func.src.zero_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028993 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028993 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028994, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028994 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.zero_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028994 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028994 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028995, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028995 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_"
        "framebuffer.rgb_func_alpha_func.src.zero_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028995 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028995 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028996, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028996 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.zero_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028996 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028996 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028997, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028997 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_"
        "framebuffer.rgb_func_alpha_func.src.zero_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028997 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028997 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028998, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028998 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.zero_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028998 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028998 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028999, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028999 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_"
        "framebuffer.rgb_func_alpha_func.src.zero_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028999 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028999 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029000, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029000 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.zero_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029000 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029000 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029001, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029001 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.rgb_func_alpha_func.src.zero_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029001 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029001 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029002, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029002 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.zero_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029002 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029002 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029003, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029003 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.rgb_func_alpha_func.src.zero_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029003 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029003 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029004, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029004 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.zero_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029004 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029004 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029005, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029005 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.zero_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029005 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029005 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029006, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029006 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.defau"
        "lt_framebuffer.rgb_func_alpha_func.src.one_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029006 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029006 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029007, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029007 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.defau"
        "lt_framebuffer.rgb_func_alpha_func.src.one_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029007 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029007 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029008, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029008 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_"
        "framebuffer.rgb_func_alpha_func.src.one_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029008 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029008 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029009, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029009 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.one_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029009 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029009 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029010, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029010 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_"
        "framebuffer.rgb_func_alpha_func.src.one_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029010 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029010 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029011, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029011 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.one_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029011 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029011 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029012, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029012 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_"
        "framebuffer.rgb_func_alpha_func.src.one_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029012 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029012 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029013, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029013 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.one_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029013 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029013 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029014, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029014 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_"
        "framebuffer.rgb_func_alpha_func.src.one_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029014 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029014 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029015, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029015 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.one_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029015 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029015 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029016, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029016 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fr"
        "amebuffer.rgb_func_alpha_func.src.one_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029016 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029016 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029017, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029017 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
        "ffer.rgb_func_alpha_func.src.one_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029017 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029017 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029018, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029018 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fr"
        "amebuffer.rgb_func_alpha_func.src.one_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029018 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029018 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029019, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029019 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
        "ffer.rgb_func_alpha_func.src.one_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029019 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029019 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029020, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029020 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
        "ebuffer.rgb_func_alpha_func.src.one_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029020 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029020 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029021, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029021 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_"
        "framebuffer.rgb_func_alpha_func.src.src_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029021 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029021 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029022, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029022 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_"
        "framebuffer.rgb_func_alpha_func.src.src_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029022 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029022 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029023, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029023 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.rgb_func_alpha_func.src.src_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029023 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029023 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029024, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029024 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.src_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029024 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029024 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029025, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029025 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.rgb_func_alpha_func.src.src_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029025 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029025 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029026, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029026 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.src_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029026 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029026 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029027, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029027 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.rgb_func_alpha_func.src.src_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029027 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029027 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029028, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029028 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.src_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029028 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029028 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029029, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029029 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.rgb_func_alpha_func.src.src_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029029 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029029 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029030, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029030 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.src_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029030 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029030 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029031, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029031 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.src_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029031 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029031 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029032, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029032 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.src_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029032 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029032 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029033, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029033 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.src_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029033 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029033 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029034, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029034 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.src_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029034 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029034 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029035, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029035 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
        "ffer.rgb_func_alpha_func.src.src_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029035 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029035 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029036, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029036 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.one_minus_src_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029036 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029036 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029037, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029037 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.one_minus_src_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029037 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029037 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029038, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029038 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.one_minus_src_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029038 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029038 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029039, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029039 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
        "gb_func_alpha_func.src.one_minus_src_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029039 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029039 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029040, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029040 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.one_minus_src_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029040 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029040 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029041, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029041 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
        "gb_func_alpha_func.src.one_minus_src_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029041 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029041 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029042, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029042 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.one_minus_src_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029042 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029042 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029043, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029043 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
        "gb_func_alpha_func.src.one_minus_src_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029043 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029043 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029044, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029044 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.one_minus_src_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029044 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029044 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029045, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029045 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
        "gb_func_alpha_func.src.one_minus_src_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029045 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029045 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029046, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029046 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.one_minus_src_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029046 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029046 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029047, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029047 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
        "_func_alpha_func.src.one_minus_src_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029047 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029047 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029048, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029048 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.one_minus_src_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029048 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029048 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029049, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029049 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
        "_func_alpha_func.src.one_minus_src_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029049 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029049 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029050, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029050 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
        "rgb_func_alpha_func.src.one_minus_src_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029050 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029050 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029051, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029051 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_"
        "framebuffer.rgb_func_alpha_func.src.dst_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029051 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029051 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029052, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029052 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_"
        "framebuffer.rgb_func_alpha_func.src.dst_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029052 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029052 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029053, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029053 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.rgb_func_alpha_func.src.dst_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029053 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029053 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029054, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029054 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.dst_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029054 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029054 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029055, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029055 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.rgb_func_alpha_func.src.dst_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029055 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029055 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029056, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029056 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.dst_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029056 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029056 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029057, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029057 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.rgb_func_alpha_func.src.dst_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029057 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029057 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029058, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029058 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.dst_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029058 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029058 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029059, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029059 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.rgb_func_alpha_func.src.dst_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029059 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029059 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029060, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029060 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.dst_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029060 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029060 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029061, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029061 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.dst_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029061 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029061 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029062, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029062 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.dst_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029062 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029062 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029063, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029063 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.dst_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029063 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029063 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029064, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029064 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.dst_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029064 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029064 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029065, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029065 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
        "ffer.rgb_func_alpha_func.src.dst_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029065 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029065 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029066, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029066 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.one_minus_dst_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029066 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029066 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029067, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029067 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.one_minus_dst_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029067 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029067 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029068, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029068 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.one_minus_dst_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029068 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029068 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029069, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029069 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
        "gb_func_alpha_func.src.one_minus_dst_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029069 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029069 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029070, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029070 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.one_minus_dst_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029070 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029070 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029071, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029071 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
        "gb_func_alpha_func.src.one_minus_dst_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029071 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029071 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029072, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029072 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.one_minus_dst_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029072 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029072 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029073, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029073 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
        "gb_func_alpha_func.src.one_minus_dst_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029073 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029073 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029074, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029074 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.one_minus_dst_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029074 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029074 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029075, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029075 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
        "gb_func_alpha_func.src.one_minus_dst_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029075 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029075 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029076, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029076 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.one_minus_dst_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029076 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029076 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029077, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029077 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
        "_func_alpha_func.src.one_minus_dst_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029077 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029077 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029078, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029078 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.one_minus_dst_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029078 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029078 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029079, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029079 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
        "_func_alpha_func.src.one_minus_dst_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029079 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029079 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029080, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029080 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
        "rgb_func_alpha_func.src.one_minus_dst_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029080 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029080 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029081, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029081 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_"
        "framebuffer.rgb_func_alpha_func.src.src_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029081 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029081 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029082, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029082 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_"
        "framebuffer.rgb_func_alpha_func.src.src_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029082 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029082 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029083, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029083 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.rgb_func_alpha_func.src.src_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029083 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029083 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029084, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029084 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.src_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029084 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029084 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029085, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029085 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.rgb_func_alpha_func.src.src_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029085 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029085 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029086, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029086 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.src_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029086 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029086 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029087, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029087 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.rgb_func_alpha_func.src.src_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029087 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029087 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029088, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029088 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.src_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029088 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029088 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029089, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029089 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.rgb_func_alpha_func.src.src_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029089 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029089 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029090, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029090 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.src_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029090 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029090 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029091, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029091 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.src_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029091 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029091 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029092, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029092 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.src_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029092 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029092 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029093, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029093 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.src_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029093 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029093 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029094, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029094 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.src_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029094 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029094 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029095, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029095 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
        "ffer.rgb_func_alpha_func.src.src_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029095 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029095 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029096, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029096 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.one_minus_src_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029096 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029096 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029097, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029097 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.one_minus_src_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029097 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029097 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029098, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029098 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.one_minus_src_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029098 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029098 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029099, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029099 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
        "gb_func_alpha_func.src.one_minus_src_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029099 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029099 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029100, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029100 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.one_minus_src_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029100 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029100 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029101, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029101 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
        "gb_func_alpha_func.src.one_minus_src_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029101 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029101 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029102, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029102 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.one_minus_src_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029102 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029102 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029103, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029103 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
        "gb_func_alpha_func.src.one_minus_src_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029103 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029103 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029104, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029104 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.one_minus_src_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029104 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029104 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029105, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029105 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
        "gb_func_alpha_func.src.one_minus_src_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029105 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029105 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029106, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029106 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.one_minus_src_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029106 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029106 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029107, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029107 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
        "_func_alpha_func.src.one_minus_src_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029107 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029107 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029108, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029108 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.one_minus_src_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029108 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029108 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029109, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029109 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
        "_func_alpha_func.src.one_minus_src_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029109 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029109 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029110, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029110 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
        "rgb_func_alpha_func.src.one_minus_src_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029110 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029110 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029111, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029111 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_"
        "framebuffer.rgb_func_alpha_func.src.dst_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029111 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029111 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029112, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029112 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_"
        "framebuffer.rgb_func_alpha_func.src.dst_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029112 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029112 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029113, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029113 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.rgb_func_alpha_func.src.dst_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029113 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029113 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029114, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029114 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.dst_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029114 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029114 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029115, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029115 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.rgb_func_alpha_func.src.dst_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029115 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029115 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029116, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029116 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.dst_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029116 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029116 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029117, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029117 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.rgb_func_alpha_func.src.dst_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029117 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029117 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029118, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029118 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.dst_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029118 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029118 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029119, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029119 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.rgb_func_alpha_func.src.dst_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029119 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029119 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029120, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029120 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.dst_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029120 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029120 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029121, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029121 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.dst_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029121 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029121 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029122, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029122 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.dst_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029122 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029122 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029123, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029123 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.dst_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029123 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029123 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029124, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029124 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.dst_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029124 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029124 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029125, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029125 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
        "ffer.rgb_func_alpha_func.src.dst_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029125 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029125 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029126, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029126 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.one_minus_dst_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029126 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029126 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029127, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029127 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.one_minus_dst_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029127 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029127 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029128, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029128 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.one_minus_dst_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029128 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029128 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029129, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029129 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
        "gb_func_alpha_func.src.one_minus_dst_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029129 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029129 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029130, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029130 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.one_minus_dst_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029130 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029130 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029131, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029131 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
        "gb_func_alpha_func.src.one_minus_dst_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029131 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029131 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029132, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029132 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.one_minus_dst_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029132 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029132 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029133, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029133 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
        "gb_func_alpha_func.src.one_minus_dst_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029133 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029133 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029134, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029134 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.one_minus_dst_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029134 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029134 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029135, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029135 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
        "gb_func_alpha_func.src.one_minus_dst_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029135 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029135 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029136, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029136 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.one_minus_dst_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029136 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029136 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029137, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029137 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
        "_func_alpha_func.src.one_minus_dst_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029137 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029137 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029138, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029138 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.one_minus_dst_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029138 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029138 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029139, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029139 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
        "_func_alpha_func.src.one_minus_dst_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029139 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029139 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029140, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029140 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
        "rgb_func_alpha_func.src.one_minus_dst_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029140 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029140 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029141, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029141 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.rgb_func_alpha_func.src.constant_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029141 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029141 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029142, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029142 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fr"
        "amebuffer.rgb_func_alpha_func.src.constant_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029142 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029142 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029143, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029143 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.constant_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029143 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029143 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029144, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029144 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.constant_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029144 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029144 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029145, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029145 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.constant_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029145 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029145 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029146, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029146 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.constant_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029146 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029146 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029147, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029147 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.constant_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029147 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029147 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029148, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029148 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.constant_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029148 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029148 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029149, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029149 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.constant_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029149 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029149 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029150, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029150 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.constant_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029150 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029150 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029151, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029151 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.constant_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029151 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029151 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029152, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029152 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
        "gb_func_alpha_func.src.constant_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029152 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029152 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029153, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029153 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.constant_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029153 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029153 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029154, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029154 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
        "gb_func_alpha_func.src.constant_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029154 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029154 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029155, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029155 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.constant_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029155 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029155 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029156, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029156 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.one_minus_constant_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029156 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029156 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029157, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029157 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
        "ffer.rgb_func_alpha_func.src.one_minus_constant_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029157 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029157 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029158, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029158 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.one_minus_constant_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029158 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029158 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029159, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029159 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
        "_func_alpha_func.src.one_minus_constant_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029159 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029159 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029160, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029160 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.one_minus_constant_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029160 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029160 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029161, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029161 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
        "_func_alpha_func.src.one_minus_constant_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029161 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029161 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029162, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029162 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.one_minus_constant_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029162 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029162 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029163, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029163 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
        "_func_alpha_func.src.one_minus_constant_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029163 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029163 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029164, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029164 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.one_minus_constant_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029164 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029164 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029165, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029165 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
        "_func_alpha_func.src.one_minus_constant_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029165 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029165 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029166, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029166 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
        "gb_func_alpha_func.src.one_minus_constant_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029166 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029166 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029167, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029167 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb_fu"
        "nc_alpha_func.src.one_minus_constant_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029167 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029167 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029168, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029168 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
        "gb_func_alpha_func.src.one_minus_constant_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029168 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029168 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029169, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029169 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb_fu"
        "nc_alpha_func.src.one_minus_constant_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029169 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029169 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029170, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029170 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
        "_func_alpha_func.src.one_minus_constant_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029170 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029170 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029171, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029171 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.rgb_func_alpha_func.src.constant_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029171 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029171 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029172, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029172 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fr"
        "amebuffer.rgb_func_alpha_func.src.constant_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029172 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029172 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029173, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029173 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.constant_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029173 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029173 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029174, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029174 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.constant_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029174 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029174 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029175, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029175 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.constant_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029175 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029175 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029176, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029176 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.constant_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029176 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029176 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029177, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029177 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.constant_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029177 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029177 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029178, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029178 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.constant_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029178 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029178 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029179, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029179 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.constant_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029179 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029179 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029180, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029180 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.constant_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029180 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029180 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029181, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029181 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.constant_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029181 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029181 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029182, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029182 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
        "gb_func_alpha_func.src.constant_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029182 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029182 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029183, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029183 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.constant_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029183 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029183 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029184, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029184 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
        "gb_func_alpha_func.src.constant_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029184 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029184 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029185, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029185 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.constant_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029185 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029185 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029186, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029186 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.rgb_func_alpha_func.src.one_minus_constant_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029186 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029186 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029187, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029187 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
        "ffer.rgb_func_alpha_func.src.one_minus_constant_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029187 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029187 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029188, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029188 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.one_minus_constant_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029188 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029188 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029189, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029189 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
        "_func_alpha_func.src.one_minus_constant_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029189 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029189 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029190, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029190 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.one_minus_constant_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029190 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029190 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029191, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029191 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
        "_func_alpha_func.src.one_minus_constant_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029191 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029191 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029192, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029192 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.one_minus_constant_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029192 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029192 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029193, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029193 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
        "_func_alpha_func.src.one_minus_constant_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029193 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029193 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029194, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029194 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.one_minus_constant_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029194 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029194 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029195, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029195 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
        "_func_alpha_func.src.one_minus_constant_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029195 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029195 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029196, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029196 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
        "gb_func_alpha_func.src.one_minus_constant_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029196 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029196 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029197, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029197 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb_fu"
        "nc_alpha_func.src.one_minus_constant_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029197 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029197 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029198, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029198 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
        "gb_func_alpha_func.src.one_minus_constant_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029198 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029198 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029199, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029199 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb_fu"
        "nc_alpha_func.src.one_minus_constant_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029199 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029199 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029200, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029200 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
        "_func_alpha_func.src.one_minus_constant_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029200 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029200 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029201, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029201 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
        "buffer.rgb_func_alpha_func.src.src_alpha_saturate_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029201 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029201 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029202, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029202 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
        "ebuffer.rgb_func_alpha_func.src.src_alpha_saturate_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029202 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029202 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029203, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029203 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
        "ffer.rgb_func_alpha_func.src.src_alpha_saturate_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029203 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029203 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029204, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029204 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
        "rgb_func_alpha_func.src.src_alpha_saturate_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029204 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029204 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029205, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029205 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
        "ffer.rgb_func_alpha_func.src.src_alpha_saturate_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029205 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029205 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029206, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029206 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
        "rgb_func_alpha_func.src.src_alpha_saturate_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029206 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029206 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029207, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029207 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
        "ffer.rgb_func_alpha_func.src.src_alpha_saturate_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029207 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029207 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029208, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029208 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
        "rgb_func_alpha_func.src.src_alpha_saturate_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029208 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029208 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029209, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029209 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
        "ffer.rgb_func_alpha_func.src.src_alpha_saturate_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029209 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029209 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029210, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029210 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
        "rgb_func_alpha_func.src.src_alpha_saturate_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029210 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029210 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029211, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029211 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.src_alpha_saturate_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029211 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029211 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029212, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029212 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
        "_func_alpha_func.src.src_alpha_saturate_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029212 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029212 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029213, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029213 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
        "r.rgb_func_alpha_func.src.src_alpha_saturate_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029213 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029213 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029214, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029214 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
        "_func_alpha_func.src.src_alpha_saturate_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029214 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029214 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029215, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029215 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
        "rgb_func_alpha_func.src.src_alpha_saturate_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029215 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029215 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030143, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030143 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend."
        "fbo_srgb.rgb_func_alpha_func.src.zero_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030143 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030143 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030144, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030144 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend."
        "fbo_srgb.rgb_func_alpha_func.src.zero_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030144 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030144 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030145, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030145 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo"
        "_srgb.rgb_func_alpha_func.src.zero_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030145 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030145 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030146, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030146 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_func_alpha_func.src.zero_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030146 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030146 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030147, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030147 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo"
        "_srgb.rgb_func_alpha_func.src.zero_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030147 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030147 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030148, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030148 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_func_alpha_func.src.zero_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030148 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030148 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030149, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030149 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo"
        "_srgb.rgb_func_alpha_func.src.zero_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030149 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030149 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030150, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030150 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_func_alpha_func.src.zero_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030150 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030150 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030151, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030151 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo"
        "_srgb.rgb_func_alpha_func.src.zero_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030151 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030151 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030152, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030152 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_func_alpha_func.src.zero_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030152 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030152 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030153, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030153 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
        "rgb.rgb_func_alpha_func.src.zero_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030153 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030153 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030154, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030154 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.zero_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030154 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030154 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030155, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030155 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
        "rgb.rgb_func_alpha_func.src.zero_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030155 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030155 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030156, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030156 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.zero_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030156 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030156 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030157, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030157 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
        "b.rgb_func_alpha_func.src.zero_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030157 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030157 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030158, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030158 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend."
        "fbo_srgb.rgb_func_alpha_func.src.one_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030158 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030158 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030159, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030159 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend"
        ".fbo_srgb.rgb_func_alpha_func.src.one_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030159 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030159 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030160, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030160 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fb"
        "o_srgb.rgb_func_alpha_func.src.one_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030160 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030160 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030161, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030161 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
        "b.rgb_func_alpha_func.src.one_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030161 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030161 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030162, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030162 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fb"
        "o_srgb.rgb_func_alpha_func.src.one_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030162 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030162 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030163, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030163 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
        "b.rgb_func_alpha_func.src.one_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030163 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030163 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030164, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030164 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fb"
        "o_srgb.rgb_func_alpha_func.src.one_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030164 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030164 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030165, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030165 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
        "b.rgb_func_alpha_func.src.one_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030165 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030165 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030166, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030166 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fb"
        "o_srgb.rgb_func_alpha_func.src.one_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030166 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030166 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030167, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030167 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
        "b.rgb_func_alpha_func.src.one_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030167 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030167 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030168, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030168 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
        "rgb.rgb_func_alpha_func.src.one_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030168 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030168 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030169, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030169 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.one_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030169 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030169 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030170, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030170 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
        "rgb.rgb_func_alpha_func.src.one_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030170 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030170 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030171, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030171 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.one_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030171 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030171 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030172, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030172 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
        "b.rgb_func_alpha_func.src.one_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030172 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030172 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030173, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030173 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo"
        "_srgb.rgb_func_alpha_func.src.src_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030173 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030173 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030174, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030174 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fb"
        "o_srgb.rgb_func_alpha_func.src.src_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030174 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030174 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030175, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030175 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
        "rgb.rgb_func_alpha_func.src.src_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030175 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030175 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030176, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030176 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.src_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030176 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030176 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030177, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030177 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
        "rgb.rgb_func_alpha_func.src.src_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030177 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030177 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030178, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030178 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.src_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030178 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030178 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030179, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030179 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
        "rgb.rgb_func_alpha_func.src.src_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030179 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030179 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030180, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030180 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.src_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030180 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030180 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030181, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030181 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
        "rgb.rgb_func_alpha_func.src.src_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030181 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030181 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030182, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030182 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.src_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030182 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030182 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030183, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030183 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_func_alpha_func.src.src_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030183 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030183 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030184, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030184 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.src_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030184 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030184 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030185, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030185 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_func_alpha_func.src.src_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030185 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030185 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030186, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030186 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.src_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030186 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030186 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030187, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030187 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.src_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030187 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030187 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030188, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030188 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_func_alpha_func.src.one_minus_src_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030188 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030188 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030189, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030189 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
        "b.rgb_func_alpha_func.src.one_minus_src_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030189 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030189 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030190, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030190 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.one_minus_src_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030190 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030190 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030191, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030191 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.one_minus_src_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030191 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030191 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030192, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030192 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.one_minus_src_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030192 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030192 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030193, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030193 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.one_minus_src_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030193 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030193 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030194, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030194 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.one_minus_src_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030194 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030194 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030195, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030195 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.one_minus_src_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030195 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030195 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030196, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030196 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.one_minus_src_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030196 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030196 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030197, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030197 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.one_minus_src_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030197 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030197 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030198, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030198 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.one_minus_src_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030198 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030198 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030199, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030199 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
        "alpha_func.src.one_minus_src_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030199 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030199 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030200, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030200 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.one_minus_src_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030200 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030200 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030201, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030201 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
        "alpha_func.src.one_minus_src_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030201 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030201 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030202, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030202 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.one_minus_src_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030202 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030202 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030203, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030203 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo"
        "_srgb.rgb_func_alpha_func.src.dst_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030203 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030203 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030204, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030204 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fb"
        "o_srgb.rgb_func_alpha_func.src.dst_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030204 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030204 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030205, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030205 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
        "rgb.rgb_func_alpha_func.src.dst_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030205 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030205 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030206, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030206 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.dst_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030206 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030206 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030207, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030207 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
        "rgb.rgb_func_alpha_func.src.dst_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030207 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030207 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030208, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030208 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.dst_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030208 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030208 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030209, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030209 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
        "rgb.rgb_func_alpha_func.src.dst_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030209 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030209 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030210, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030210 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.dst_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030210 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030210 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030211, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030211 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
        "rgb.rgb_func_alpha_func.src.dst_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030211 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030211 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030212, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030212 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.dst_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030212 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030212 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030213, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030213 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_func_alpha_func.src.dst_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030213 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030213 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030214, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030214 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.dst_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030214 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030214 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030215, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030215 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_func_alpha_func.src.dst_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030215 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030215 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030216, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030216 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.dst_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030216 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030216 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030217, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030217 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.dst_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030217 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030217 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030218, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030218 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_func_alpha_func.src.one_minus_dst_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030218 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030218 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030219, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030219 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
        "b.rgb_func_alpha_func.src.one_minus_dst_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030219 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030219 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030220, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030220 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.one_minus_dst_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030220 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030220 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030221, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030221 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.one_minus_dst_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030221 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030221 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030222, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030222 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.one_minus_dst_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030222 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030222 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030223, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030223 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.one_minus_dst_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030223 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030223 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030224, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030224 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.one_minus_dst_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030224 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030224 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030225, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030225 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.one_minus_dst_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030225 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030225 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030226, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030226 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.one_minus_dst_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030226 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030226 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030227, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030227 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.one_minus_dst_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030227 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030227 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030228, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030228 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.one_minus_dst_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030228 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030228 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030229, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030229 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
        "alpha_func.src.one_minus_dst_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030229 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030229 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030230, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030230 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.one_minus_dst_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030230 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030230 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030231, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030231 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
        "alpha_func.src.one_minus_dst_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030231 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030231 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030232, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030232 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.one_minus_dst_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030232 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030232 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030233, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030233 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo"
        "_srgb.rgb_func_alpha_func.src.src_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030233 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030233 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030234, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030234 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fb"
        "o_srgb.rgb_func_alpha_func.src.src_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030234 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030234 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030235, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030235 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
        "rgb.rgb_func_alpha_func.src.src_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030235 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030235 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030236, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030236 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.src_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030236 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030236 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030237, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030237 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
        "rgb.rgb_func_alpha_func.src.src_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030237 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030237 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030238, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030238 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.src_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030238 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030238 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030239, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030239 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
        "rgb.rgb_func_alpha_func.src.src_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030239 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030239 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030240, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030240 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.src_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030240 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030240 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030241, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030241 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
        "rgb.rgb_func_alpha_func.src.src_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030241 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030241 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030242, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030242 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.src_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030242 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030242 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030243, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030243 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_func_alpha_func.src.src_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030243 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030243 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030244, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030244 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.src_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030244 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030244 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030245, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030245 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_func_alpha_func.src.src_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030245 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030245 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030246, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030246 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.src_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030246 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030246 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030247, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030247 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.src_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030247 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030247 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030248, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030248 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_func_alpha_func.src.one_minus_src_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030248 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030248 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030249, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030249 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
        "b.rgb_func_alpha_func.src.one_minus_src_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030249 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030249 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030250, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030250 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.one_minus_src_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030250 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030250 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030251, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030251 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.one_minus_src_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030251 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030251 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030252, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030252 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.one_minus_src_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030252 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030252 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030253, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030253 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.one_minus_src_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030253 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030253 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030254, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030254 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.one_minus_src_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030254 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030254 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030255, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030255 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.one_minus_src_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030255 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030255 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030256, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030256 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.one_minus_src_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030256 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030256 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030257, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030257 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.one_minus_src_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030257 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030257 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030258, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030258 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.one_minus_src_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030258 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030258 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030259, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030259 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
        "alpha_func.src.one_minus_src_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030259 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030259 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030260, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030260 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.one_minus_src_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030260 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030260 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030261, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030261 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
        "alpha_func.src.one_minus_src_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030261 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030261 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030262, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030262 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.one_minus_src_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030262 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030262 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030263, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030263 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo"
        "_srgb.rgb_func_alpha_func.src.dst_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030263 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030263 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030264, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030264 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fb"
        "o_srgb.rgb_func_alpha_func.src.dst_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030264 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030264 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030265, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030265 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
        "rgb.rgb_func_alpha_func.src.dst_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030265 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030265 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030266, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030266 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.dst_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030266 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030266 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030267, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030267 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
        "rgb.rgb_func_alpha_func.src.dst_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030267 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030267 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030268, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030268 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.dst_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030268 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030268 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030269, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030269 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
        "rgb.rgb_func_alpha_func.src.dst_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030269 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030269 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030270, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030270 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.dst_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030270 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030270 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030271, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030271 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
        "rgb.rgb_func_alpha_func.src.dst_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030271 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030271 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030272, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030272 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.dst_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030272 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030272 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030273, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030273 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_func_alpha_func.src.dst_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030273 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030273 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030274, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030274 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.dst_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030274 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030274 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030275, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030275 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_func_alpha_func.src.dst_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030275 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030275 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030276, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030276 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.dst_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030276 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030276 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030277, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030277 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.dst_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030277 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030277 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030278, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030278 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_func_alpha_func.src.one_minus_dst_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030278 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030278 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030279, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030279 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
        "b.rgb_func_alpha_func.src.one_minus_dst_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030279 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030279 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030280, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030280 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.one_minus_dst_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030280 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030280 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030281, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030281 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.one_minus_dst_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030281 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030281 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030282, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030282 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.one_minus_dst_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030282 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030282 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030283, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030283 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.one_minus_dst_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030283 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030283 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030284, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030284 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.one_minus_dst_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030284 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030284 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030285, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030285 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.one_minus_dst_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030285 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030285 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030286, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030286 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.one_minus_dst_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030286 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030286 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030287, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030287 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.one_minus_dst_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030287 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030287 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030288, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030288 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.one_minus_dst_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030288 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030288 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030289, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030289 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
        "alpha_func.src.one_minus_dst_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030289 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030289 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030290, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030290 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.one_minus_dst_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030290 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030290 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030291, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030291 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
        "alpha_func.src.one_minus_dst_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030291 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030291 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030292, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030292 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.one_minus_dst_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030292 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030292 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030293, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030293 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
        "rgb.rgb_func_alpha_func.src.constant_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030293 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030293 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030294, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030294 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
        "rgb.rgb_func_alpha_func.src.constant_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030294 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030294 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030295, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030295 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_func_alpha_func.src.constant_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030295 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030295 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030296, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030296 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.constant_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030296 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030296 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030297, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030297 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_func_alpha_func.src.constant_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030297 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030297 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030298, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030298 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.constant_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030298 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030298 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030299, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030299 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_func_alpha_func.src.constant_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030299 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030299 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030300, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030300 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.constant_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030300 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030300 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030301, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030301 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_func_alpha_func.src.constant_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030301 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030301 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030302, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030302 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.constant_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030302 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030302 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030303, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030303 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.constant_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030303 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030303 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030304, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030304 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.constant_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030304 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030304 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030305, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030305 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.constant_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030305 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030305 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030306, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030306 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.constant_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030306 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030306 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030307, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030307 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb"
        "_func_alpha_func.src.constant_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030307 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030307 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030308, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030308 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.one_minus_constant_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030308 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030308 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030309, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030309 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.one_minus_constant_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030309 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030309 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030310, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030310 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.one_minus_constant_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030310 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030310 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030311, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030311 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
        "alpha_func.src.one_minus_constant_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030311 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030311 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030312, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030312 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.one_minus_constant_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030312 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030312 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030313, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030313 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
        "alpha_func.src.one_minus_constant_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030313 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030313 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030314, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030314 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.one_minus_constant_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030314 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030314 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030315, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030315 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
        "alpha_func.src.one_minus_constant_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030315 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030315 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030316, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030316 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.one_minus_constant_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030316 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030316 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030317, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030317 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
        "alpha_func.src.one_minus_constant_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030317 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030317 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030318, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030318 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.one_minus_constant_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030318 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030318 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030319, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030319 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_al"
        "pha_func.src.one_minus_constant_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030319 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030319 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030320, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030320 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.one_minus_constant_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030320 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030320 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030321, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030321 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_al"
        "pha_func.src.one_minus_constant_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030321 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030321 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030322, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030322 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func"
        "_alpha_func.src.one_minus_constant_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030322 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030322 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030323, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030323 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
        "rgb.rgb_func_alpha_func.src.constant_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030323 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030323 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030324, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030324 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
        "rgb.rgb_func_alpha_func.src.constant_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030324 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030324 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030325, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030325 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_func_alpha_func.src.constant_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030325 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030325 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030326, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030326 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.constant_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030326 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030326 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030327, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030327 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_func_alpha_func.src.constant_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030327 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030327 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030328, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030328 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.constant_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030328 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030328 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030329, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030329 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_func_alpha_func.src.constant_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030329 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030329 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030330, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030330 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.constant_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030330 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030330 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030331, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030331 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".rgb_func_alpha_func.src.constant_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030331 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030331 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030332, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030332 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.constant_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030332 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030332 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030333, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030333 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.constant_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030333 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030333 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030334, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030334 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.constant_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030334 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030334 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030335, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030335 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.constant_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030335 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030335 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030336, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030336 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.constant_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030336 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030336 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030337, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030337 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb"
        "_func_alpha_func.src.constant_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030337 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030337 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030338, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030338 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.one_minus_constant_alpha_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030338 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030338 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030339, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030339 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.one_minus_constant_alpha_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030339 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030339 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030340, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030340 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.one_minus_constant_alpha_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030340 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030340 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030341, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030341 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
        "alpha_func.src.one_minus_constant_alpha_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030341 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030341 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030342, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030342 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.one_minus_constant_alpha_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030342 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030342 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030343, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030343 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
        "alpha_func.src.one_minus_constant_alpha_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030343 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030343 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030344, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030344 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.one_minus_constant_alpha_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030344 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030344 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030345, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030345 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
        "alpha_func.src.one_minus_constant_alpha_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030345 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030345 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030346, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030346 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
        "func_alpha_func.src.one_minus_constant_alpha_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030346 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030346 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030347, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030347 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
        "alpha_func.src.one_minus_constant_alpha_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030347 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030347 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030348, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030348 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.one_minus_constant_alpha_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030348 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030348 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030349, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030349 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_al"
        "pha_func.src.one_minus_constant_alpha_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030349 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030349 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030350, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030350 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.one_minus_constant_alpha_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030350 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030350 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030351, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030351 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_al"
        "pha_func.src.one_minus_constant_alpha_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030351 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030351 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030352, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030352 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func"
        "_alpha_func.src.one_minus_constant_alpha_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030352 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030352 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030353, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030353 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
        "b.rgb_func_alpha_func.src.src_alpha_saturate_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030353 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030353 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030354, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030354 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
        "b.rgb_func_alpha_func.src.src_alpha_saturate_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030354 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030354 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030355, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030355 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.src_alpha_saturate_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030355 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030355 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030356, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030356 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.src_alpha_saturate_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030356 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030356 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030357, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030357 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.src_alpha_saturate_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030357 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030357 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030358, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030358 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.src_alpha_saturate_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030358 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030358 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030359, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030359 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.src_alpha_saturate_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030359 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030359 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030360, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030360 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.src_alpha_saturate_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030360 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030360 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030361, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030361 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
        "gb_func_alpha_func.src.src_alpha_saturate_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030361 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030361 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030362, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030362 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
        "nc_alpha_func.src.src_alpha_saturate_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030362 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030362 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030363, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030363 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb"
        "_func_alpha_func.src.src_alpha_saturate_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030363 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030363 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030364, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030364 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func"
        "_alpha_func.src.src_alpha_saturate_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030364 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030364 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030365, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030365 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb"
        "_func_alpha_func.src.src_alpha_saturate_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030365 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030365 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030366, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030366 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func"
        "_alpha_func.src.src_alpha_saturate_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030366 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030366 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030367, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030367 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_f"
        "unc_alpha_func.src.src_alpha_saturate_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030367 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030367 end";
}
