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
#include "../ActsDeqpgles310034TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033643, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033643 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgb"
        "a.srgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033643 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033643 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033644, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033644 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgb"
        "a.srgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033644 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033644 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033645, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033645 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rg"
        "ba.srgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033645 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033645 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033646, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033646 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.s"
        "rgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033646 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033646 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033647, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033647 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgb"
        "a.srgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033647 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033647 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033648, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033648 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgb"
        "a.srgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033648 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033648 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033649, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033649 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rg"
        "ba.srgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033649 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033649 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033650, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033650 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.s"
        "rgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033650 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033650 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033651, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033651 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rg"
        "ba.srgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033651 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033651 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033652, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033652 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rg"
        "ba.srgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033652 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033652 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033653, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033653 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_r"
        "gba.srgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033653 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033653 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033654, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033654 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba."
        "srgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033654 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033654 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033655, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033655 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.s"
        "rgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033655 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033655 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033656, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033656 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.s"
        "rgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033656 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033656 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033657, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033657 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba."
        "srgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033657 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033657 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033658, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033658 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.srgb"
        "8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033658 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033658 end";
}
