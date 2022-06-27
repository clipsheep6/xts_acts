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
#include "../ActsDeqpgles310029TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028813, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028813 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.rgba8i_rg16ui.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028813 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028813 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028814, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028814 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.rgba8i_rg16ui.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028814 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028814 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028815, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028815 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.rgba8i_rg16ui.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028815 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028815 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028816, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028816 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgba8i_rg16ui.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028816 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028816 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028817, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028817 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8i_rg16ui.texture2d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028817 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028817 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028818, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028818 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.rgba8i_rg16ui.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028818 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028818 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028819, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028819 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.rgba8i_rg16ui.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028819 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028819 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028820, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028820 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.rgba8i_rg16ui.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028820 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028820 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028821, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028821 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgba8i_rg16ui.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028821 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028821 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028822, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028822 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8i_rg16ui.texture3d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028822 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028822 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028823, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028823 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.rgba8i_rg16ui.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028823 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028823 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028824, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028824 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.rgba8i_rg16ui.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028824 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028824 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028825, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028825 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_32_bits.rgba8i_rg16ui.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028825 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028825 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028826, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028826 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8i_rg16ui.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028826 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028826 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028827, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028827 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rgba8i_rg16ui.cubemap_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028827 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028827 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028828, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028828 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgba8i_rg16ui.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028828 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028828 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028829, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028829 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgba8i_rg16ui.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028829 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028829 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028830, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028830 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8i_rg16ui.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028830 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028830 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028831, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028831 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rgba8i_rg16ui.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028831 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028831 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028832, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028832 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgba8i_rg16ui.texture2d_array_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028832 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028832 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028833, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028833 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8i_rg16ui.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028833 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028833 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028834, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028834 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8i_rg16ui.renderbuffer_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028834 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028834 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028835, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028835 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rgba8i_rg16ui.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028835 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028835 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028836, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028836 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgba8i_rg16ui.renderbuffer_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028836 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028836 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028837, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028837 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgba8i_rg16ui.renderbuffer_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028837 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028837 end";
}
