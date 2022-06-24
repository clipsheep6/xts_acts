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

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025540, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025540 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_96_bits.rgb32ui_rgb32f.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025540 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025540 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025541, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025541 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_96_bits.rgb32ui_rgb32f.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025541 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025541 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025542, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025542 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_96_bits.rgb32ui_rgb32f.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025542 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025542 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025543, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025543 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_96_bits.rgb32ui_rgb32f.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025543 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025543 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025544, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025544 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_96_bits.rgb32ui_rgb32f.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025544 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025544 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025545, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025545 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_96_bits.rgb32ui_rgb32f.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025545 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025545 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025546, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025546 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_96_bits.rgb32ui_rgb32f.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025546 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025546 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025547, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025547 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_96_bits.rgb32ui_rgb32f.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025547 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025547 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025548, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025548 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_96_bits.rgb32ui_rgb32f.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025548 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025548 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025549, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025549 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_96_bits.rgb32ui_rgb32f.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025549 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025549 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025550, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025550 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_96_bits.rgb32ui_rgb32f.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025550 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025550 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025551, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025551 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_96_bits.rgb32ui_rgb32f.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025551 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025551 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025552, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025552 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_96_bits.rgb32ui_rgb32f.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025552 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025552 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025553, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025553 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_96_bits.rgb32ui_rgb32f.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025553 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025553 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025554, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025554 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_96_bits.rgb32ui_rgb32f.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025554 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025554 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025555, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025555 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
        "_96_bits.rgb32ui_rgb32f.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025555 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025555 end";
}
