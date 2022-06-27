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

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029554, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029554 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.r11f_g11f_b10f_rgb10_a2ui.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029554 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029554 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029555, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029555 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.r11f_g11f_b10f_rgb10_a2ui.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029555 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029555 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029556, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029556 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.r11f_g11f_b10f_rgb10_a2ui.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029556 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029556 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029557, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029557 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
        "2_bits.r11f_g11f_b10f_rgb10_a2ui.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029557 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029557 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029558, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029558 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
        "32_bits.r11f_g11f_b10f_rgb10_a2ui.texture2d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029558 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029558 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029559, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029559 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.r11f_g11f_b10f_rgb10_a2ui.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029559 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029559 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029560, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029560 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.r11f_g11f_b10f_rgb10_a2ui.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029560 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029560 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029561, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029561 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.r11f_g11f_b10f_rgb10_a2ui.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029561 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029561 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029562, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029562 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
        "2_bits.r11f_g11f_b10f_rgb10_a2ui.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029562 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029562 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029563, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029563 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
        "32_bits.r11f_g11f_b10f_rgb10_a2ui.texture3d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029563 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029563 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029564, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029564 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.r11f_g11f_b10f_rgb10_a2ui.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029564 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029564 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029565, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029565 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.r11f_g11f_b10f_rgb10_a2ui.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029565 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029565 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029566, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029566 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.r11f_g11f_b10f_rgb10_a2ui.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029566 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029566 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029567, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029567 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
        "32_bits.r11f_g11f_b10f_rgb10_a2ui.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029567 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029567 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029568, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029568 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
        "_32_bits.r11f_g11f_b10f_rgb10_a2ui.cubemap_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029568 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029568 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029569, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029569 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
        "2_bits.r11f_g11f_b10f_rgb10_a2ui.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029569 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029569 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029570, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029570 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
        "2_bits.r11f_g11f_b10f_rgb10_a2ui.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029570 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029570 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029571, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029571 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
        "32_bits.r11f_g11f_b10f_rgb10_a2ui.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029571 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029571 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029572, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029572 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_b"
        "its.r11f_g11f_b10f_rgb10_a2ui.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029572 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029572 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029573, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029573 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_"
        "bits.r11f_g11f_b10f_rgb10_a2ui.texture2d_array_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029573 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029573 end";
}
