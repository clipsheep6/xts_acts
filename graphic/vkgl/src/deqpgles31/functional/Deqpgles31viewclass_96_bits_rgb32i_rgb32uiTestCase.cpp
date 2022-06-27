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
#include "../ActsDeqpgles310026TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025524, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025524 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_96_bits.rgb32i_rgb32ui.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025524 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025524 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025525, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025525 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_96_bits.rgb32i_rgb32ui.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025525 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025525 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025526, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025526 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_96_bits.rgb32i_rgb32ui.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025526 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025526 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025527, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025527 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_96_bits.rgb32i_rgb32ui.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025527 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025527 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025528, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025528 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_96_bits.rgb32i_rgb32ui.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025528 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025528 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025529, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025529 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_96_bits.rgb32i_rgb32ui.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025529 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025529 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025530, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025530 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_96_bits.rgb32i_rgb32ui.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025530 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025530 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025531, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025531 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_96_bits.rgb32i_rgb32ui.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025531 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025531 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025532, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025532 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_96_bits.rgb32i_rgb32ui.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025532 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025532 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025533, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025533 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_96_bits.rgb32i_rgb32ui.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025533 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025533 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025534, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025534 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_96_bits.rgb32i_rgb32ui.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025534 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025534 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025535, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025535 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_96_bits.rgb32i_rgb32ui.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025535 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025535 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025536, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025536 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_96_bits.rgb32i_rgb32ui.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025536 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025536 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025537, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025537 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_96_bits.rgb32i_rgb32ui.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025537 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025537 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025538, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025538 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_96_bits.rgb32i_rgb32ui.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025538 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025538 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025539, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025539 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
        "_96_bits.rgb32i_rgb32ui.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025539 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025539 end";
}
