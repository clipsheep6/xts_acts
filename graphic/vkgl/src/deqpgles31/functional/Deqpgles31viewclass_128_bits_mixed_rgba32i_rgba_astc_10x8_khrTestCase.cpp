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
#include "../ActsDeqpgles310037TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036699, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036699 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba32i_rgba_astc_10x8_khr.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036699 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036699 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036700, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036700 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba32i_rgba_astc_10x8_khr.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036700 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036700 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036701, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036701 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba32i_rgba_astc_10x8_khr.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036701 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036701 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036702, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036702 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba32i_rgba_astc_10x8_khr.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036702 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036702 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036703, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036703 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba32i_rgba_astc_10x8_khr.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036703 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036703 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036704, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036704 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba32i_rgba_astc_10x8_khr.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036704 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036704 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036705, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036705 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba32i_rgba_astc_10x8_khr.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036705 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036705 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036706, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036706 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba32i_rgba_astc_10x8_khr.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036706 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036706 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036707, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036707 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba32i_rgba_astc_10x8_khr.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036707 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036707 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036708, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036708 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba32i_rgba_astc_10x8_khr.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036708 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036708 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036709, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036709 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
        "its_mixed.rgba32i_rgba_astc_10x8_khr.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036709 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036709 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036710, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036710 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
        "mixed.rgba32i_rgba_astc_10x8_khr.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036710 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036710 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036711, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036711 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba32i_rgba_astc_10x8_khr.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036711 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036711 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036712, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036712 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba32i_rgba_astc_10x8_khr.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036712 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036712 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036713, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036713 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
        "mixed.rgba32i_rgba_astc_10x8_khr.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036713 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036713 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036714, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036714 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
        "d.rgba32i_rgba_astc_10x8_khr.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036714 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036714 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036715, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036715 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
        "_mixed.rgba32i_rgba_astc_10x8_khr.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036715 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036715 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036716, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036716 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
        "_mixed.rgba32i_rgba_astc_10x8_khr.renderbuffer_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036716 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036716 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036717, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036717 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba32i_rgba_astc_10x8_khr.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036717 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036717 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036718, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036718 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
        "xed.rgba32i_rgba_astc_10x8_khr.renderbuffer_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036718 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036718 end";
}
