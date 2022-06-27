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
#include "../ActsDeqpgles310032TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031785, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031785 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_16_bits.r16i_r16i.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031785 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031785 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031786, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031786 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_16_bits.r16i_r16i.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031786 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031786 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031787, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031787 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed"
        ".viewclass_16_bits.r16i_r16i.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031787 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031787 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031788, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031788 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.r16i_r16i.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031788 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031788 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031789, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031789 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_16_bits.r16i_r16i.texture2d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031789 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031789 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031790, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031790 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_16_bits.r16i_r16i.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031790 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031790 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031791, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031791 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_16_bits.r16i_r16i.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031791 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031791 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031792, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031792 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed"
        ".viewclass_16_bits.r16i_r16i.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031792 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031792 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031793, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031793 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.r16i_r16i.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031793 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031793 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031794, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031794 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_16_bits.r16i_r16i.texture3d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031794 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031794 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031795, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031795 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed"
        ".viewclass_16_bits.r16i_r16i.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031795 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031795 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031796, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031796 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed"
        ".viewclass_16_bits.r16i_r16i.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031796 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031796 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031797, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031797 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compresse"
        "d.viewclass_16_bits.r16i_r16i.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031797 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031797 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031798, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031798 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_16_bits.r16i_r16i.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031798 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031798 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031799, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031799 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_16_bits.r16i_r16i.cubemap_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031799 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031799 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031800, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031800 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.r16i_r16i.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031800 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031800 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031801, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031801 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.r16i_r16i.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031801 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031801 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031802, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031802 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_16_bits.r16i_r16i.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031802 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031802 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031803, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031803 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_16_bits.r16i_r16i.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031803 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031803 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031804, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031804 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_16_bits.r16i_r16i.texture2d_array_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031804 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031804 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031805, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031805 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_16_bits.r16i_r16i.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031805 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031805 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031806, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031806 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_16_bits.r16i_r16i.renderbuffer_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031806 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031806 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031807, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031807 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_16_bits.r16i_r16i.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031807 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031807 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031808, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031808 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_16_bits.r16i_r16i.renderbuffer_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031808 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031808 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031809, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031809 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.r16i_r16i.renderbuffer_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031809 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031809 end";
}
