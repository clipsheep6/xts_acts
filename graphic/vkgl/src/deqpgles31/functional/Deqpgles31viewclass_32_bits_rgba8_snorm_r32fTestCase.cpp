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

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030330, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030330 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8_snorm_r32f.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030330 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030330 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030331, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030331 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8_snorm_r32f.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030331 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030331 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030332, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030332 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rgba8_snorm_r32f.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030332 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030332 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030333, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030333 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgba8_snorm_r32f.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030333 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030333 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030334, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030334 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8_snorm_r32f.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030334 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030334 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030335, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030335 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8_snorm_r32f.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030335 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030335 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030336, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030336 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rgba8_snorm_r32f.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030336 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030336 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030337, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030337 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgba8_snorm_r32f.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030337 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030337 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030338, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030338 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rgba8_snorm_r32f.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030338 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030338 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030339, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030339 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rgba8_snorm_r32f.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030339 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030339 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030340, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030340 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.rgba8_snorm_r32f.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030340 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030340 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030341, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030341 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.rgba8_snorm_r32f.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030341 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030341 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030342, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030342 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgba8_snorm_r32f.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030342 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030342 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030343, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030343 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgba8_snorm_r32f.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030343 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030343 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030344, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030344 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.rgba8_snorm_r32f.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030344 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030344 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030345, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030345 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
        "32_bits.rgba8_snorm_r32f.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030345 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030345 end";
}
