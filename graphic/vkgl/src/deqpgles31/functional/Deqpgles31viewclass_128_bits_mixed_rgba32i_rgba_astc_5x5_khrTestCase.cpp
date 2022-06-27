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

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036379, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036379 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba32i_rgba_astc_5x5_khr.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036379 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036379 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036380, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036380 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba32i_rgba_astc_5x5_khr.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036380 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036380 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036381, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036381 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
        "its_mixed.rgba32i_rgba_astc_5x5_khr.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036381 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036381 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036382, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036382 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
        "mixed.rgba32i_rgba_astc_5x5_khr.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036382 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036382 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036383, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036383 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba32i_rgba_astc_5x5_khr.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036383 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036383 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036384, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036384 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba32i_rgba_astc_5x5_khr.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036384 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036384 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036385, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036385 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
        "its_mixed.rgba32i_rgba_astc_5x5_khr.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036385 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036385 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036386, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036386 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
        "mixed.rgba32i_rgba_astc_5x5_khr.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036386 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036386 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036387, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036387 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
        "its_mixed.rgba32i_rgba_astc_5x5_khr.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036387 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036387 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036388, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036388 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
        "its_mixed.rgba32i_rgba_astc_5x5_khr.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036388 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036388 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036389, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036389 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
        "bits_mixed.rgba32i_rgba_astc_5x5_khr.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036389 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036389 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036390, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036390 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
        "_mixed.rgba32i_rgba_astc_5x5_khr.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036390 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036390 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036391, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036391 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
        "mixed.rgba32i_rgba_astc_5x5_khr.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036391 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036391 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036392, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036392 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
        "mixed.rgba32i_rgba_astc_5x5_khr.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036392 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036392 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036393, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036393 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
        "_mixed.rgba32i_rgba_astc_5x5_khr.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036393 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036393 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036394, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036394 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
        "ed.rgba32i_rgba_astc_5x5_khr.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036394 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036394 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036395, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036395 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
        "_mixed.rgba32i_rgba_astc_5x5_khr.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036395 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036395 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036396, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036396 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
        "_mixed.rgba32i_rgba_astc_5x5_khr.renderbuffer_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036396 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036396 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036397, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036397 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba32i_rgba_astc_5x5_khr.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036397 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036397 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036398, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036398 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
        "xed.rgba32i_rgba_astc_5x5_khr.renderbuffer_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036398 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036398 end";
}
