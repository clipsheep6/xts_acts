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

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030386, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030386 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8_snorm_rg16f.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030386 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030386 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030387, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030387 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8_snorm_rg16f.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030387 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030387 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030388, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030388 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rgba8_snorm_rg16f.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030388 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030388 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030389, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030389 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgba8_snorm_rg16f.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030389 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030389 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030390, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030390 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8_snorm_rg16f.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030390 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030390 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030391, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030391 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8_snorm_rg16f.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030391 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030391 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030392, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030392 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rgba8_snorm_rg16f.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030392 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030392 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030393, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030393 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgba8_snorm_rg16f.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030393 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030393 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030394, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030394 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rgba8_snorm_rg16f.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030394 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030394 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030395, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030395 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rgba8_snorm_rg16f.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030395 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030395 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030396, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030396 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.rgba8_snorm_rg16f.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030396 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030396 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030397, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030397 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.rgba8_snorm_rg16f.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030397 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030397 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030398, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030398 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgba8_snorm_rg16f.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030398 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030398 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030399, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030399 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgba8_snorm_rg16f.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030399 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030399 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030400, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030400 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.rgba8_snorm_rg16f.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030400 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030400 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030401, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030401 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
        "32_bits.rgba8_snorm_rg16f.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030401 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030401 end";
}
