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
#include "../ActsDeqpgles310036TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035879, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035879 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
        "xed.srgb8_alpha8_astc_8x5_khr_rgba32ui.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035879 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035879 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035880, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035880 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
        "xed.srgb8_alpha8_astc_8x5_khr_rgba32ui.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035880 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035880 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035881, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035881 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.srgb8_alpha8_astc_8x5_khr_rgba32ui.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035881 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035881 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035882, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035882 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
        ".srgb8_alpha8_astc_8x5_khr_rgba32ui.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035882 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035882 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035883, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035883 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
        "ed.srgb8_alpha8_astc_8x5_khr_rgba32ui.texture2d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035883 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035883 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035884, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035884 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
        "xed.srgb8_alpha8_astc_8x5_khr_rgba32ui.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035884 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035884 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035885, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035885 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
        "xed.srgb8_alpha8_astc_8x5_khr_rgba32ui.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035885 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035885 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035886, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035886 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.srgb8_alpha8_astc_8x5_khr_rgba32ui.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035886 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035886 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035887, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035887 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
        ".srgb8_alpha8_astc_8x5_khr_rgba32ui.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035887 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035887 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035888, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035888 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
        "ed.srgb8_alpha8_astc_8x5_khr_rgba32ui.texture3d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035888 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035888 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035889, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035889 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.srgb8_alpha8_astc_8x5_khr_rgba32ui.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035889 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035889 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035890, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035890 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.srgb8_alpha8_astc_8x5_khr_rgba32ui.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035890 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035890 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035891, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035891 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
        "mixed.srgb8_alpha8_astc_8x5_khr_rgba32ui.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035891 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035891 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035892, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035892 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
        "d.srgb8_alpha8_astc_8x5_khr_rgba32ui.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035892 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035892 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035893, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035893 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
        "xed.srgb8_alpha8_astc_8x5_khr_rgba32ui.cubemap_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035893 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035893 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035894, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035894 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
        ".srgb8_alpha8_astc_8x5_khr_rgba32ui.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035894 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035894 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035895, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035895 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
        ".srgb8_alpha8_astc_8x5_khr_rgba32ui.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035895 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035895 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035896, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035896 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
        "d.srgb8_alpha8_astc_8x5_khr_rgba32ui.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035896 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035896 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035897, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035897 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.sr"
        "gb8_alpha8_astc_8x5_khr_rgba32ui.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035897 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035897 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035898, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035898 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
        "srgb8_alpha8_astc_8x5_khr_rgba32ui.texture2d_array_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035898 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035898 end";
}
