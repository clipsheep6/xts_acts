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
#include "../ActsDeqpgles310031TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030285, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030285 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.rgb10_a2_srgb8_alpha8.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030285 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030285 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030286, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030286 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.rgb10_a2_srgb8_alpha8.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030286 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030286 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030287, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030287 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgb10_a2_srgb8_alpha8.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030287 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030287 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030288, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030288 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
        "_32_bits.rgb10_a2_srgb8_alpha8.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030288 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030288 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030289, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030289 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rgb10_a2_srgb8_alpha8.texture2d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030289 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030289 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030290, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030290 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.rgb10_a2_srgb8_alpha8.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030290 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030290 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030291, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030291 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.rgb10_a2_srgb8_alpha8.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030291 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030291 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030292, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030292 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgb10_a2_srgb8_alpha8.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030292 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030292 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030293, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030293 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
        "_32_bits.rgb10_a2_srgb8_alpha8.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030293 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030293 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030294, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030294 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rgb10_a2_srgb8_alpha8.texture3d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030294 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030294 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030295, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030295 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgb10_a2_srgb8_alpha8.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030295 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030295 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030296, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030296 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgb10_a2_srgb8_alpha8.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030296 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030296 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030297, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030297 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgb10_a2_srgb8_alpha8.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030297 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030297 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030298, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030298 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rgb10_a2_srgb8_alpha8.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030298 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030298 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030299, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030299 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgb10_a2_srgb8_alpha8.cubemap_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030299 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030299 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030300, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030300 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
        "_32_bits.rgb10_a2_srgb8_alpha8.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030300 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030300 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030301, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030301 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
        "_32_bits.rgb10_a2_srgb8_alpha8.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030301 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030301 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030302, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030302 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rgb10_a2_srgb8_alpha8.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030302 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030302 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030303, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030303 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
        "_bits.rgb10_a2_srgb8_alpha8.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030303 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030303 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030304, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030304 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
        "2_bits.rgb10_a2_srgb8_alpha8.texture2d_array_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030304 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030304 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030305, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030305 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rgb10_a2_srgb8_alpha8.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030305 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030305 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030306, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030306 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rgb10_a2_srgb8_alpha8.renderbuffer_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030306 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030306 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030307, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030307 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgb10_a2_srgb8_alpha8.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030307 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030307 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030308, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030308 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
        "2_bits.rgb10_a2_srgb8_alpha8.renderbuffer_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030308 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030308 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030309, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030309 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
        "_32_bits.rgb10_a2_srgb8_alpha8.renderbuffer_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030309 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030309 end";
}
