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

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015381, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015381 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture."
        "texture_cube_map.depth_stencil_mode_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015381 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015381 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015382, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015382 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture"
        ".texture_cube_map.depth_stencil_mode_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015382 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015382 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015383, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015383 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture."
        "texture_cube_map.depth_stencil_mode_pure_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015383 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015383 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015384, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015384 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture.t"
        "exture_cube_map.depth_stencil_mode_pure_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015384 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015384 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015385, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015385 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture."
        "texture_cube_map.texture_srgb_decode_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015385 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015385 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015386, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015386 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture"
        ".texture_cube_map.texture_srgb_decode_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015386 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015386 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015387, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015387 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture.t"
        "exture_cube_map.texture_srgb_decode_pure_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015387 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015387 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015388, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015388 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture.t"
        "exture_cube_map.texture_srgb_decode_pure_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015388 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015388 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015389, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015389 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture.t"
        "exture_cube_map.texture_border_color_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015389 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015389 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015390, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015390 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture."
        "texture_cube_map.texture_border_color_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015390 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015390 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015391, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015391 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture.t"
        "exture_cube_map.texture_border_color_pure_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015391 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015391 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015392, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015392 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture.te"
        "xture_cube_map.texture_border_color_pure_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015392 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015392 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015393, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015393 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture.textur"
        "e_cube_map.texture_wrap_s_clamp_to_border_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015393 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015393 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015394, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015394 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture.textu"
        "re_cube_map.texture_wrap_s_clamp_to_border_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015394 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015394 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015395, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015395 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture.textur"
        "e_cube_map.texture_wrap_t_clamp_to_border_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015395 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015395 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015396, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015396 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture.textu"
        "re_cube_map.texture_wrap_t_clamp_to_border_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015396 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015396 end";
}
