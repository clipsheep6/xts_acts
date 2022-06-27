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

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033787, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033787 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.srg"
        "b8_alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033787 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033787 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033788, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033788 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.srg"
        "b8_alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033788 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033788 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033789, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033789 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.sr"
        "gb8_alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033789 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033789 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033790, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033790 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.srgb8_"
        "alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033790 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033790 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033791, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033791 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.srg"
        "b8_alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033791 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033791 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033792, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033792 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.srg"
        "b8_alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033792 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033792 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033793, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033793 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.sr"
        "gb8_alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033793 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033793 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033794, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033794 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.srgb8_"
        "alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033794 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033794 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033795, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033795 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.sr"
        "gb8_alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033795 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033795 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033796, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033796 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.sr"
        "gb8_alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033796 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033796 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033797, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033797 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.s"
        "rgb8_alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033797 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033797 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033798, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033798 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.srgb8"
        "_alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033798 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033798 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033799, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033799 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.srgb8_"
        "alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033799 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033799 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033800, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033800 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.srgb8_"
        "alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033800 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033800 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033801, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033801 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.srgb8"
        "_alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033801 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033801 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033802, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033802 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.srgb8_alp"
        "ha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033802 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033802 end";
}
