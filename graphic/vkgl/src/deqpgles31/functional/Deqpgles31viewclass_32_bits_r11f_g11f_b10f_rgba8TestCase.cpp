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

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029478, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029478 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.r11f_g11f_b10f_rgba8.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029478 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029478 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029479, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029479 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.r11f_g11f_b10f_rgba8.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029479 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029479 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029480, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029480 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.r11f_g11f_b10f_rgba8.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029480 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029480 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029481, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029481 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
        "_32_bits.r11f_g11f_b10f_rgba8.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029481 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029481 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029482, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029482 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.r11f_g11f_b10f_rgba8.texture2d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029482 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029482 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029483, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029483 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.r11f_g11f_b10f_rgba8.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029483 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029483 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029484, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029484 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.r11f_g11f_b10f_rgba8.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029484 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029484 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029485, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029485 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.r11f_g11f_b10f_rgba8.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029485 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029485 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029486, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029486 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
        "_32_bits.r11f_g11f_b10f_rgba8.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029486 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029486 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029487, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029487 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.r11f_g11f_b10f_rgba8.texture3d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029487 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029487 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029488, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029488 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.r11f_g11f_b10f_rgba8.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029488 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029488 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029489, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029489 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.r11f_g11f_b10f_rgba8.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029489 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029489 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029490, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029490 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.r11f_g11f_b10f_rgba8.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029490 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029490 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029491, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029491 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.r11f_g11f_b10f_rgba8.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029491 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029491 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029492, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029492 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.r11f_g11f_b10f_rgba8.cubemap_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029492 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029492 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029493, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029493 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
        "_32_bits.r11f_g11f_b10f_rgba8.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029493 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029493 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029494, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029494 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
        "_32_bits.r11f_g11f_b10f_rgba8.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029494 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029494 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029495, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029495 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.r11f_g11f_b10f_rgba8.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029495 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029495 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029496, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029496 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
        "_bits.r11f_g11f_b10f_rgba8.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029496 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029496 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029497, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029497 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
        "32_bits.r11f_g11f_b10f_rgba8.texture2d_array_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029497 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029497 end";
}
