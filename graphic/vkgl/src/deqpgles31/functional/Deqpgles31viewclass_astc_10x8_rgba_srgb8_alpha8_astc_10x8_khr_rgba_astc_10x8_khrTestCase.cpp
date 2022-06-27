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

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033835, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033835 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba"
        ".srgb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033835 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033835 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033836, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033836 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba"
        ".srgb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033836 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033836 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033837, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033837 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgb"
        "a.srgb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033837 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033837 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033838, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033838 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.sr"
        "gb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033838 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033838 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033839, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033839 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba"
        ".srgb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033839 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033839 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033840, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033840 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba"
        ".srgb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033840 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033840 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033841, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033841 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgb"
        "a.srgb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033841 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033841 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033842, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033842 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.sr"
        "gb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033842 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033842 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033843, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033843 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgb"
        "a.srgb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033843 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033843 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033844, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033844 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgb"
        "a.srgb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033844 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033844 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033845, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033845 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rg"
        "ba.srgb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033845 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033845 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033846, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033846 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.s"
        "rgb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033846 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033846 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033847, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033847 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.sr"
        "gb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033847 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033847 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033848, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033848 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.sr"
        "gb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033848 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033848 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033849, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033849 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.s"
        "rgb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033849 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033849 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033850, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033850 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.srgb8"
        "_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033850 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033850 end";
}
