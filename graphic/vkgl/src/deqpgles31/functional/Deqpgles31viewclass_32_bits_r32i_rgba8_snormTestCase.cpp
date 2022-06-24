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

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027001, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027001 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.r32i_rgba8_snorm.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027001 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027001 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027002, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027002 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.r32i_rgba8_snorm.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027002 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027002 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027003, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027003 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.r32i_rgba8_snorm.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027003 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027003 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027004, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027004 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.r32i_rgba8_snorm.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027004 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027004 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027005, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027005 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.r32i_rgba8_snorm.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027005 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027005 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027006, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027006 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.r32i_rgba8_snorm.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027006 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027006 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027007, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027007 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.r32i_rgba8_snorm.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027007 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027007 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027008, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027008 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.r32i_rgba8_snorm.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027008 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027008 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027009, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027009 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.r32i_rgba8_snorm.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027009 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027009 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027010, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027010 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.r32i_rgba8_snorm.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027010 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027010 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027011, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027011 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.r32i_rgba8_snorm.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027011 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027011 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027012, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027012 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.r32i_rgba8_snorm.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027012 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027012 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027013, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027013 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.r32i_rgba8_snorm.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027013 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027013 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027014, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027014 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.r32i_rgba8_snorm.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027014 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027014 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027015, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027015 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.r32i_rgba8_snorm.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027015 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027015 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027016, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027016 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
        "32_bits.r32i_rgba8_snorm.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027016 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027016 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027017, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027017 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.r32i_rgba8_snorm.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027017 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027017 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027018, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027018 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.r32i_rgba8_snorm.renderbuffer_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027018 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027018 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027019, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027019 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.r32i_rgba8_snorm.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027019 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027019 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027020, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027020 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.r32i_rgba8_snorm.renderbuffer_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027020 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027020 end";
}
