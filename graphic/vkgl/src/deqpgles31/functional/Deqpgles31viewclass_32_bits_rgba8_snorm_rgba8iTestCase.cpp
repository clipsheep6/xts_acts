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

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030462, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030462 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgba8_snorm_rgba8i.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030462 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030462 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030463, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030463 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgba8_snorm_rgba8i.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030463 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030463 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030464, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030464 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8_snorm_rgba8i.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030464 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030464 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030465, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030465 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rgba8_snorm_rgba8i.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030465 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030465 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030466, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030466 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.rgba8_snorm_rgba8i.texture2d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030466 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030466 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030467, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030467 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgba8_snorm_rgba8i.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030467 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030467 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030468, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030468 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgba8_snorm_rgba8i.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030468 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030468 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030469, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030469 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8_snorm_rgba8i.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030469 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030469 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030470, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030470 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rgba8_snorm_rgba8i.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030470 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030470 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030471, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030471 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.rgba8_snorm_rgba8i.texture3d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030471 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030471 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030472, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030472 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8_snorm_rgba8i.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030472 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030472 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030473, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030473 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8_snorm_rgba8i.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030473 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030473 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030474, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030474 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rgba8_snorm_rgba8i.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030474 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030474 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030475, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030475 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgba8_snorm_rgba8i.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030475 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030475 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030476, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030476 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgba8_snorm_rgba8i.cubemap_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030476 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030476 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030477, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030477 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rgba8_snorm_rgba8i.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030477 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030477 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030478, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030478 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rgba8_snorm_rgba8i.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030478 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030478 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030479, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030479 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgba8_snorm_rgba8i.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030479 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030479 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030480, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030480 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
        "2_bits.rgba8_snorm_rgba8i.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030480 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030480 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030481, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030481 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
        "_32_bits.rgba8_snorm_rgba8i.texture2d_array_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030481 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030481 end";
}
