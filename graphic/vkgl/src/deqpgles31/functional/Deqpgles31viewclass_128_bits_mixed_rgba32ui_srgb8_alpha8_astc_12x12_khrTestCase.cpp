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

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036179, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036179 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
        "ed.rgba32ui_srgb8_alpha8_astc_12x12_khr.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036179 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036179 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036180, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036180 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
        "ed.rgba32ui_srgb8_alpha8_astc_12x12_khr.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036180 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036180 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036181, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036181 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
        "xed.rgba32ui_srgb8_alpha8_astc_12x12_khr.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036181 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036181 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036182, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036182 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
        "rgba32ui_srgb8_alpha8_astc_12x12_khr.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036182 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036182 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036183, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036183 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
        "ed.rgba32ui_srgb8_alpha8_astc_12x12_khr.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036183 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036183 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036184, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036184 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
        "ed.rgba32ui_srgb8_alpha8_astc_12x12_khr.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036184 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036184 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036185, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036185 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
        "xed.rgba32ui_srgb8_alpha8_astc_12x12_khr.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036185 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036185 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036186, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036186 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
        "rgba32ui_srgb8_alpha8_astc_12x12_khr.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036186 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036186 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036187, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036187 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
        "xed.rgba32ui_srgb8_alpha8_astc_12x12_khr.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036187 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036187 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036188, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036188 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
        "xed.rgba32ui_srgb8_alpha8_astc_12x12_khr.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036188 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036188 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036189, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036189 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba32ui_srgb8_alpha8_astc_12x12_khr.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036189 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036189 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036190, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036190 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
        ".rgba32ui_srgb8_alpha8_astc_12x12_khr.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036190 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036190 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036191, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036191 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
        "rgba32ui_srgb8_alpha8_astc_12x12_khr.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036191 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036191 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036192, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036192 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
        "rgba32ui_srgb8_alpha8_astc_12x12_khr.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036192 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036192 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036193, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036193 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
        ".rgba32ui_srgb8_alpha8_astc_12x12_khr.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036193 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036193 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036194, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036194 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.rgb"
        "a32ui_srgb8_alpha8_astc_12x12_khr.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036194 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036194 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036195, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036195 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
        "d.rgba32ui_srgb8_alpha8_astc_12x12_khr.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036195 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036195 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036196, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036196 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
        "d.rgba32ui_srgb8_alpha8_astc_12x12_khr.renderbuffer_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036196 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036196 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036197, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036197 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
        "ed.rgba32ui_srgb8_alpha8_astc_12x12_khr.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036197 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036197 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036198, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036198 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.r"
        "gba32ui_srgb8_alpha8_astc_12x12_khr.renderbuffer_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036198 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036198 end";
}
