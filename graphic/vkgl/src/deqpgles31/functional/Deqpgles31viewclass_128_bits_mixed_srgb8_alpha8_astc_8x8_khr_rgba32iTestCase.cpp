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
#include "../ActsDeqpgles310038TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037159, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037159 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.srgb8_alpha8_astc_8x8_khr_rgba32i.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037159 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037159 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037160, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037160 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.srgb8_alpha8_astc_8x8_khr_rgba32i.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037160 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037160 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037161, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037161 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
        "mixed.srgb8_alpha8_astc_8x8_khr_rgba32i.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037161 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037161 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037162, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037162 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
        "d.srgb8_alpha8_astc_8x8_khr_rgba32i.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037162 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037162 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037163, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037163 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
        "ed.srgb8_alpha8_astc_8x8_khr_rgba32i.texture2d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037163 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037163 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037164, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037164 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.srgb8_alpha8_astc_8x8_khr_rgba32i.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037164 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037164 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037165, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037165 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.srgb8_alpha8_astc_8x8_khr_rgba32i.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037165 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037165 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037166, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037166 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
        "mixed.srgb8_alpha8_astc_8x8_khr_rgba32i.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037166 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037166 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037167, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037167 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
        "d.srgb8_alpha8_astc_8x8_khr_rgba32i.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037167 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037167 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037168, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037168 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
        "ed.srgb8_alpha8_astc_8x8_khr_rgba32i.texture3d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037168 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037168 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037169, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037169 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
        "mixed.srgb8_alpha8_astc_8x8_khr_rgba32i.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037169 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037169 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037170, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037170 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
        "mixed.srgb8_alpha8_astc_8x8_khr_rgba32i.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037170 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037170 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037171, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037171 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
        "_mixed.srgb8_alpha8_astc_8x8_khr_rgba32i.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037171 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037171 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037172, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037172 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
        "ed.srgb8_alpha8_astc_8x8_khr_rgba32i.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037172 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037172 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037173, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037173 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
        "xed.srgb8_alpha8_astc_8x8_khr_rgba32i.cubemap_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037173 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037173 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037174, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037174 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
        "d.srgb8_alpha8_astc_8x8_khr_rgba32i.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037174 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037174 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037175, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037175 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
        "d.srgb8_alpha8_astc_8x8_khr_rgba32i.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037175 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037175 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037176, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037176 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
        "ed.srgb8_alpha8_astc_8x8_khr_rgba32i.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037176 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037176 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037177, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037177 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.s"
        "rgb8_alpha8_astc_8x8_khr_rgba32i.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037177 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037177 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037178, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037178 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
        "srgb8_alpha8_astc_8x8_khr_rgba32i.texture2d_array_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037178 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037178 end";
}
