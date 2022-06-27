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

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029675, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029675 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgb10_a2ui_r32ui.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029675 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029675 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029676, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029676 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgb10_a2ui_r32ui.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029676 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029676 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029677, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029677 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rgb10_a2ui_r32ui.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029677 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029677 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029678, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029678 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgb10_a2ui_r32ui.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029678 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029678 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029679, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029679 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgb10_a2ui_r32ui.texture2d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029679 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029679 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029680, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029680 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgb10_a2ui_r32ui.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029680 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029680 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029681, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029681 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgb10_a2ui_r32ui.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029681 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029681 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029682, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029682 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rgb10_a2ui_r32ui.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029682 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029682 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029683, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029683 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgb10_a2ui_r32ui.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029683 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029683 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029684, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029684 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgb10_a2ui_r32ui.texture3d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029684 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029684 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029685, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029685 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rgb10_a2ui_r32ui.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029685 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029685 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029686, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029686 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rgb10_a2ui_r32ui.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029686 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029686 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029687, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029687 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.rgb10_a2ui_r32ui.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029687 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029687 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029688, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029688 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.rgb10_a2ui_r32ui.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029688 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029688 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029689, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029689 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgb10_a2ui_r32ui.cubemap_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029689 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029689 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029690, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029690 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgb10_a2ui_r32ui.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029690 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029690 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029691, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029691 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgb10_a2ui_r32ui.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029691 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029691 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029692, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029692 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.rgb10_a2ui_r32ui.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029692 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029692 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029693, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029693 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
        "32_bits.rgb10_a2ui_r32ui.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029693 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029693 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029694, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029694 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rgb10_a2ui_r32ui.texture2d_array_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029694 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029694 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029695, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029695 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgb10_a2ui_r32ui.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029695 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029695 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029696, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029696 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgb10_a2ui_r32ui.renderbuffer_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029696 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029696 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029697, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029697 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgb10_a2ui_r32ui.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029697 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029697 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029698, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029698 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rgb10_a2ui_r32ui.renderbuffer_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029698 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029698 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029699, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029699 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgb10_a2ui_r32ui.renderbuffer_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029699 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029699 end";
}
