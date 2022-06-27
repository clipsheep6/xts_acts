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
#include "../ActsDeqpgles310035TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034491, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034491 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba_astc_10x10_khr_rgba32f.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034491 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034491 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034492, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034492 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba_astc_10x10_khr_rgba32f.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034492 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034492 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034493, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034493 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba_astc_10x10_khr_rgba32f.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034493 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034493 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034494, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034494 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba_astc_10x10_khr_rgba32f.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034494 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034494 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034495, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034495 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba_astc_10x10_khr_rgba32f.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034495 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034495 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034496, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034496 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba_astc_10x10_khr_rgba32f.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034496 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034496 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034497, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034497 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba_astc_10x10_khr_rgba32f.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034497 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034497 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034498, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034498 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba_astc_10x10_khr_rgba32f.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034498 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034498 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034499, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034499 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba_astc_10x10_khr_rgba32f.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034499 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034499 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034500, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034500 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba_astc_10x10_khr_rgba32f.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034500 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034500 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034501, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034501 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
        "its_mixed.rgba_astc_10x10_khr_rgba32f.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034501 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034501 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034502, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034502 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
        "mixed.rgba_astc_10x10_khr_rgba32f.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034502 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034502 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034503, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034503 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba_astc_10x10_khr_rgba32f.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034503 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034503 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034504, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034504 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba_astc_10x10_khr_rgba32f.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034504 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034504 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034505, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034505 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
        "mixed.rgba_astc_10x10_khr_rgba32f.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034505 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034505 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034506, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034506 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
        "d.rgba_astc_10x10_khr_rgba32f.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034506 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034506 end";
}
