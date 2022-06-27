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
#include "../ActsDeqpgles310037TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036639, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036639 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba_astc_10x5_khr_rgba32i.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036639 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036639 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036640, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036640 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba_astc_10x5_khr_rgba32i.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036640 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036640 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036641, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036641 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba_astc_10x5_khr_rgba32i.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036641 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036641 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036642, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036642 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba_astc_10x5_khr_rgba32i.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036642 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036642 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036643, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036643 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
        "_mixed.rgba_astc_10x5_khr_rgba32i.texture2d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036643 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036643 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036644, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036644 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba_astc_10x5_khr_rgba32i.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036644 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036644 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036645, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036645 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba_astc_10x5_khr_rgba32i.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036645 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036645 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036646, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036646 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba_astc_10x5_khr_rgba32i.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036646 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036646 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036647, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036647 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba_astc_10x5_khr_rgba32i.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036647 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036647 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036648, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036648 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
        "_mixed.rgba_astc_10x5_khr_rgba32i.texture3d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036648 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036648 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036649, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036649 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba_astc_10x5_khr_rgba32i.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036649 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036649 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036650, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036650 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba_astc_10x5_khr_rgba32i.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036650 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036650 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036651, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036651 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
        "its_mixed.rgba_astc_10x5_khr_rgba32i.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036651 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036651 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036652, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036652 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
        "mixed.rgba_astc_10x5_khr_rgba32i.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036652 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036652 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036653, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036653 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba_astc_10x5_khr_rgba32i.cubemap_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036653 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036653 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036654, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036654 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba_astc_10x5_khr_rgba32i.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036654 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036654 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036655, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036655 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba_astc_10x5_khr_rgba32i.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036655 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036655 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036656, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036656 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
        "mixed.rgba_astc_10x5_khr_rgba32i.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036656 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036656 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036657, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036657 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
        "d.rgba_astc_10x5_khr_rgba32i.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036657 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036657 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036658, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036658 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
        "xed.rgba_astc_10x5_khr_rgba32i.texture2d_array_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036658 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036658 end";
}
