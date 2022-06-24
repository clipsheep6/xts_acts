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

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035859, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035859 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
        "xed.rgba32ui_srgb8_alpha8_astc_8x5_khr.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035859 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035859 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035860, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035860 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
        "xed.rgba32ui_srgb8_alpha8_astc_8x5_khr.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035860 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035860 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035861, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035861 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba32ui_srgb8_alpha8_astc_8x5_khr.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035861 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035861 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035862, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035862 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
        ".rgba32ui_srgb8_alpha8_astc_8x5_khr.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035862 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035862 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035863, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035863 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
        "xed.rgba32ui_srgb8_alpha8_astc_8x5_khr.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035863 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035863 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035864, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035864 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
        "xed.rgba32ui_srgb8_alpha8_astc_8x5_khr.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035864 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035864 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035865, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035865 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba32ui_srgb8_alpha8_astc_8x5_khr.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035865 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035865 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035866, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035866 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
        ".rgba32ui_srgb8_alpha8_astc_8x5_khr.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035866 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035866 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035867, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035867 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba32ui_srgb8_alpha8_astc_8x5_khr.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035867 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035867 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035868, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035868 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba32ui_srgb8_alpha8_astc_8x5_khr.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035868 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035868 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035869, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035869 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
        "mixed.rgba32ui_srgb8_alpha8_astc_8x5_khr.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035869 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035869 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035870, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035870 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
        "d.rgba32ui_srgb8_alpha8_astc_8x5_khr.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035870 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035870 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035871, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035871 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
        ".rgba32ui_srgb8_alpha8_astc_8x5_khr.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035871 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035871 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035872, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035872 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
        ".rgba32ui_srgb8_alpha8_astc_8x5_khr.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035872 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035872 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035873, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035873 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
        "d.rgba32ui_srgb8_alpha8_astc_8x5_khr.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035873 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035873 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035874, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035874 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.rg"
        "ba32ui_srgb8_alpha8_astc_8x5_khr.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035874 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035874 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035875, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035875 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
        "ed.rgba32ui_srgb8_alpha8_astc_8x5_khr.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035875 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035875 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035876, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035876 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
        "ed.rgba32ui_srgb8_alpha8_astc_8x5_khr.renderbuffer_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035876 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035876 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035877, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035877 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
        "xed.rgba32ui_srgb8_alpha8_astc_8x5_khr.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035877 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035877 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035878, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035878 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
        "rgba32ui_srgb8_alpha8_astc_8x5_khr.renderbuffer_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035878 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035878 end";
}
