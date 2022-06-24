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

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037179, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037179 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
        "xed.rgba32i_srgb8_alpha8_astc_10x5_khr.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037179 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037179 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037180, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037180 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
        "xed.rgba32i_srgb8_alpha8_astc_10x5_khr.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037180 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037180 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037181, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037181 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba32i_srgb8_alpha8_astc_10x5_khr.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037181 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037181 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037182, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037182 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
        ".rgba32i_srgb8_alpha8_astc_10x5_khr.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037182 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037182 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037183, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037183 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
        "xed.rgba32i_srgb8_alpha8_astc_10x5_khr.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037183 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037183 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037184, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037184 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
        "xed.rgba32i_srgb8_alpha8_astc_10x5_khr.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037184 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037184 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037185, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037185 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba32i_srgb8_alpha8_astc_10x5_khr.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037185 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037185 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037186, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037186 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
        ".rgba32i_srgb8_alpha8_astc_10x5_khr.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037186 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037186 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037187, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037187 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba32i_srgb8_alpha8_astc_10x5_khr.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037187 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037187 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037188, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037188 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba32i_srgb8_alpha8_astc_10x5_khr.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037188 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037188 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037189, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037189 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
        "mixed.rgba32i_srgb8_alpha8_astc_10x5_khr.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037189 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037189 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037190, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037190 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
        "d.rgba32i_srgb8_alpha8_astc_10x5_khr.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037190 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037190 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037191, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037191 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
        ".rgba32i_srgb8_alpha8_astc_10x5_khr.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037191 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037191 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037192, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037192 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
        ".rgba32i_srgb8_alpha8_astc_10x5_khr.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037192 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037192 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037193, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037193 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
        "d.rgba32i_srgb8_alpha8_astc_10x5_khr.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037193 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037193 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037194, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037194 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.rg"
        "ba32i_srgb8_alpha8_astc_10x5_khr.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037194 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037194 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037195, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037195 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
        "ed.rgba32i_srgb8_alpha8_astc_10x5_khr.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037195 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037195 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037196, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037196 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
        "ed.rgba32i_srgb8_alpha8_astc_10x5_khr.renderbuffer_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037196 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037196 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037197, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037197 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
        "xed.rgba32i_srgb8_alpha8_astc_10x5_khr.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037197 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037197 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037198, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037198 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
        "rgba32i_srgb8_alpha8_astc_10x5_khr.renderbuffer_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037198 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037198 end";
}
