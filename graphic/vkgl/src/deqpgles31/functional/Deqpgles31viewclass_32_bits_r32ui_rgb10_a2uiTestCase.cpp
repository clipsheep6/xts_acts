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
#include "../ActsDeqpgles310028TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027301, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027301 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.r32ui_rgb10_a2ui.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027301 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027301 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027302, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027302 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.r32ui_rgb10_a2ui.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027302 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027302 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027303, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027303 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.r32ui_rgb10_a2ui.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027303 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027303 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027304, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027304 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.r32ui_rgb10_a2ui.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027304 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027304 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027305, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027305 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.r32ui_rgb10_a2ui.texture2d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027305 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027305 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027306, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027306 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.r32ui_rgb10_a2ui.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027306 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027306 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027307, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027307 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.r32ui_rgb10_a2ui.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027307 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027307 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027308, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027308 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.r32ui_rgb10_a2ui.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027308 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027308 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027309, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027309 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.r32ui_rgb10_a2ui.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027309 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027309 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027310, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027310 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.r32ui_rgb10_a2ui.texture3d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027310 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027310 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027311, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027311 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.r32ui_rgb10_a2ui.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027311 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027311 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027312, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027312 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.r32ui_rgb10_a2ui.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027312 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027312 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027313, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027313 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.r32ui_rgb10_a2ui.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027313 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027313 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027314, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027314 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.r32ui_rgb10_a2ui.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027314 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027314 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027315, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027315 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.r32ui_rgb10_a2ui.cubemap_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027315 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027315 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027316, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027316 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.r32ui_rgb10_a2ui.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027316 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027316 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027317, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027317 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.r32ui_rgb10_a2ui.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027317 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027317 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027318, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027318 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.r32ui_rgb10_a2ui.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027318 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027318 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027319, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027319 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
        "32_bits.r32ui_rgb10_a2ui.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027319 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027319 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027320, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027320 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.r32ui_rgb10_a2ui.texture2d_array_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027320 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027320 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027321, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027321 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.r32ui_rgb10_a2ui.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027321 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027321 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027322, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027322 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.r32ui_rgb10_a2ui.renderbuffer_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027322 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027322 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027323, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027323 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.r32ui_rgb10_a2ui.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027323 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027323 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027324, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027324 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.r32ui_rgb10_a2ui.renderbuffer_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027324 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027324 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027325, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027325 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.r32ui_rgb10_a2ui.renderbuffer_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027325 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027325 end";
}
