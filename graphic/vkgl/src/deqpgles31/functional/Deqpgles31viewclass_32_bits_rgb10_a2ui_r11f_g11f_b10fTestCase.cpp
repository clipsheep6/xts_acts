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
#include "../ActsDeqpgles310030TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029845, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029845 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rgb10_a2ui_r11f_g11f_b10f.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029845 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029845 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029846, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029846 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rgb10_a2ui_r11f_g11f_b10f.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029846 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029846 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029847, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029847 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgb10_a2ui_r11f_g11f_b10f.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029847 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029847 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029848, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029848 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
        "2_bits.rgb10_a2ui_r11f_g11f_b10f.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029848 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029848 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029849, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029849 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rgb10_a2ui_r11f_g11f_b10f.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029849 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029849 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029850, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029850 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rgb10_a2ui_r11f_g11f_b10f.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029850 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029850 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029851, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029851 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgb10_a2ui_r11f_g11f_b10f.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029851 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029851 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029852, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029852 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
        "2_bits.rgb10_a2ui_r11f_g11f_b10f.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029852 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029852 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029853, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029853 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgb10_a2ui_r11f_g11f_b10f.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029853 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029853 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029854, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029854 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgb10_a2ui_r11f_g11f_b10f.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029854 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029854 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029855, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029855 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.rgb10_a2ui_r11f_g11f_b10f.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029855 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029855 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029856, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029856 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
        "32_bits.rgb10_a2ui_r11f_g11f_b10f.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029856 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029856 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029857, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029857 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
        "2_bits.rgb10_a2ui_r11f_g11f_b10f.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029857 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029857 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029858, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029858 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
        "2_bits.rgb10_a2ui_r11f_g11f_b10f.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029858 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029858 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029859, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029859 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
        "32_bits.rgb10_a2ui_r11f_g11f_b10f.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029859 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029859 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029860, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029860 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_b"
        "its.rgb10_a2ui_r11f_g11f_b10f.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029860 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029860 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029861, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029861 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
        "32_bits.rgb10_a2ui_r11f_g11f_b10f.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029861 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029861 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029862, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029862 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
        "32_bits.rgb10_a2ui_r11f_g11f_b10f.renderbuffer_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029862 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029862 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029863, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029863 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
        "_32_bits.rgb10_a2ui_r11f_g11f_b10f.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029863 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029863 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029864, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029864 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_"
        "bits.rgb10_a2ui_r11f_g11f_b10f.renderbuffer_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029864 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029864 end";
}
