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

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032590, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032590 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.rg8_snorm_r16f.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032590 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032590 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032591, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032591 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.rg8_snorm_r16f.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032591 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032591 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032592, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032592 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_16_bits.rg8_snorm_r16f.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032592 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032592 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032593, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032593 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_16_bits.rg8_snorm_r16f.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032593 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032593 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032594, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032594 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.rg8_snorm_r16f.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032594 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032594 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032595, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032595 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.rg8_snorm_r16f.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032595 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032595 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032596, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032596 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_16_bits.rg8_snorm_r16f.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032596 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032596 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032597, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032597 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_16_bits.rg8_snorm_r16f.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032597 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032597 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032598, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032598 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_16_bits.rg8_snorm_r16f.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032598 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032598 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032599, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032599 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_16_bits.rg8_snorm_r16f.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032599 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032599 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032600, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032600 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_16_bits.rg8_snorm_r16f.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032600 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032600 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032601, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032601 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_16_bits.rg8_snorm_r16f.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032601 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032601 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032602, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032602 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_16_bits.rg8_snorm_r16f.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032602 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032602 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032603, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032603 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_16_bits.rg8_snorm_r16f.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032603 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032603 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032604, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032604 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_16_bits.rg8_snorm_r16f.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032604 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032604 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032605, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032605 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
        "_16_bits.rg8_snorm_r16f.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032605 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032605 end";
}
