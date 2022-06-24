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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310016TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015365, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015365 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture."
        "texture_2d_array.depth_stencil_mode_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015365 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015365 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015366, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015366 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture"
        ".texture_2d_array.depth_stencil_mode_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015366 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015366 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015367, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015367 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture."
        "texture_2d_array.depth_stencil_mode_pure_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015367 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015367 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015368, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015368 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture.t"
        "exture_2d_array.depth_stencil_mode_pure_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015368 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015368 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015369, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015369 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture."
        "texture_2d_array.texture_srgb_decode_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015369 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015369 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015370, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015370 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture"
        ".texture_2d_array.texture_srgb_decode_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015370 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015370 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015371, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015371 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture.t"
        "exture_2d_array.texture_srgb_decode_pure_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015371 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015371 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015372, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015372 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture.t"
        "exture_2d_array.texture_srgb_decode_pure_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015372 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015372 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015373, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015373 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture.t"
        "exture_2d_array.texture_border_color_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015373 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015373 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015374, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015374 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture."
        "texture_2d_array.texture_border_color_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015374 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015374 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015375, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015375 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture.t"
        "exture_2d_array.texture_border_color_pure_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015375 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015375 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015376, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015376 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture.te"
        "xture_2d_array.texture_border_color_pure_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015376 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015376 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015377, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015377 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture.textur"
        "e_2d_array.texture_wrap_s_clamp_to_border_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015377 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015377 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015378, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015378 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture.textu"
        "re_2d_array.texture_wrap_s_clamp_to_border_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015378 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015378 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015379, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015379 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture.textur"
        "e_2d_array.texture_wrap_t_clamp_to_border_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015379 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015379 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015380, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015380 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture.textu"
        "re_2d_array.texture_wrap_t_clamp_to_border_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015380 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015380 end";
}
