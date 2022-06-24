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
#include "../ActsDeqpgles310033TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032747, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032747 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compresse"
        "d.viewclass_8_bits.r8_r8i.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032747 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032747 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032748, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032748 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compresse"
        "d.viewclass_8_bits.r8_r8i.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032748 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032748 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032749, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032749 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compress"
        "ed.viewclass_8_bits.r8_r8i.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032749 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032749 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032750, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032750 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_8_bits.r8_r8i.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032750 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032750 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032751, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032751 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_8_bits.r8_r8i.texture2d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032751 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032751 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032752, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032752 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compresse"
        "d.viewclass_8_bits.r8_r8i.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032752 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032752 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032753, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032753 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compresse"
        "d.viewclass_8_bits.r8_r8i.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032753 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032753 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032754, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032754 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compress"
        "ed.viewclass_8_bits.r8_r8i.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032754 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032754 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032755, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032755 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_8_bits.r8_r8i.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032755 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032755 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032756, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032756 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_8_bits.r8_r8i.texture3d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032756 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032756 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032757, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032757 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compress"
        "ed.viewclass_8_bits.r8_r8i.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032757 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032757 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032758, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032758 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compress"
        "ed.viewclass_8_bits.r8_r8i.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032758 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032758 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032759, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032759 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compres"
        "sed.viewclass_8_bits.r8_r8i.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032759 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032759 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032760, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032760 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_8_bits.r8_r8i.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032760 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032760 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032761, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032761 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed"
        ".viewclass_8_bits.r8_r8i.cubemap_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032761 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032761 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032762, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032762 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_8_bits.r8_r8i.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032762 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032762 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032763, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032763 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_8_bits.r8_r8i.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032763 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032763 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032764, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032764 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_8_bits.r8_r8i.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032764 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032764 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032765, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032765 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_8_bits.r8_r8i.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032765 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032765 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032766, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032766 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_8_bits.r8_r8i.texture2d_array_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032766 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032766 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032767, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032767 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_8_bits.r8_r8i.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032767 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032767 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032768, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032768 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_8_bits.r8_r8i.renderbuffer_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032768 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032768 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032769, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032769 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed"
        ".viewclass_8_bits.r8_r8i.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032769 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032769 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032770, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032770 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_8_bits.r8_r8i.renderbuffer_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032770 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032770 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032771, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032771 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_8_bits.r8_r8i.renderbuffer_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032771 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032771 end";
}
