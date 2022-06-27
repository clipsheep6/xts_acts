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

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034427, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034427 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba_astc_10x6_khr_rgba32f.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034427 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034427 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034428, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034428 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba_astc_10x6_khr_rgba32f.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034428 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034428 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034429, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034429 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba_astc_10x6_khr_rgba32f.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034429 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034429 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034430, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034430 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba_astc_10x6_khr_rgba32f.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034430 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034430 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034431, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034431 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba_astc_10x6_khr_rgba32f.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034431 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034431 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034432, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034432 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba_astc_10x6_khr_rgba32f.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034432 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034432 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034433, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034433 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba_astc_10x6_khr_rgba32f.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034433 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034433 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034434, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034434 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba_astc_10x6_khr_rgba32f.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034434 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034434 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034435, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034435 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba_astc_10x6_khr_rgba32f.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034435 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034435 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034436, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034436 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba_astc_10x6_khr_rgba32f.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034436 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034436 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034437, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034437 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
        "its_mixed.rgba_astc_10x6_khr_rgba32f.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034437 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034437 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034438, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034438 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
        "mixed.rgba_astc_10x6_khr_rgba32f.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034438 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034438 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034439, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034439 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba_astc_10x6_khr_rgba32f.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034439 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034439 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034440, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034440 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba_astc_10x6_khr_rgba32f.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034440 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034440 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034441, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034441 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
        "mixed.rgba_astc_10x6_khr_rgba32f.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034441 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034441 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034442, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034442 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
        "d.rgba_astc_10x6_khr_rgba32f.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034442 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034442 end";
}
