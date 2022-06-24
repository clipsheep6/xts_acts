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

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030594, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030594 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgba8_snorm_rgb9_e5.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030594 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030594 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030595, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030595 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgba8_snorm_rgb9_e5.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030595 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030595 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030596, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030596 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8_snorm_rgb9_e5.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030596 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030596 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030597, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030597 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rgba8_snorm_rgb9_e5.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030597 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030597 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030598, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030598 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgba8_snorm_rgb9_e5.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030598 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030598 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030599, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030599 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgba8_snorm_rgb9_e5.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030599 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030599 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030600, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030600 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8_snorm_rgb9_e5.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030600 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030600 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030601, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030601 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rgba8_snorm_rgb9_e5.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030601 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030601 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030602, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030602 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8_snorm_rgb9_e5.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030602 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030602 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030603, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030603 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8_snorm_rgb9_e5.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030603 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030603 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030604, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030604 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rgba8_snorm_rgb9_e5.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030604 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030604 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030605, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030605 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgba8_snorm_rgb9_e5.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030605 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030605 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030606, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030606 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rgba8_snorm_rgb9_e5.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030606 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030606 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030607, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030607 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rgba8_snorm_rgb9_e5.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030607 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030607 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030608, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030608 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgba8_snorm_rgb9_e5.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030608 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030608 end";
}

static HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030609, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030609 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
        "2_bits.rgba8_snorm_rgb9_e5.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030609 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030609 end";
}
