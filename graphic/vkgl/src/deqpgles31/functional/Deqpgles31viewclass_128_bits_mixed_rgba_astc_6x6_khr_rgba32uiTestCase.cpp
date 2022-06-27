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
#include "../ActsDeqpgles310036TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035279, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035279 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba_astc_6x6_khr_rgba32ui.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035279 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035279 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035280, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035280 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba_astc_6x6_khr_rgba32ui.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035280 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035280 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035281, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035281 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba_astc_6x6_khr_rgba32ui.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035281 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035281 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035282, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035282 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba_astc_6x6_khr_rgba32ui.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035282 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035282 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035283, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035283 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
        "_mixed.rgba_astc_6x6_khr_rgba32ui.texture2d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035283 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035283 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035284, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035284 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba_astc_6x6_khr_rgba32ui.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035284 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035284 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035285, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035285 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba_astc_6x6_khr_rgba32ui.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035285 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035285 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035286, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035286 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba_astc_6x6_khr_rgba32ui.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035286 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035286 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035287, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035287 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba_astc_6x6_khr_rgba32ui.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035287 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035287 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035288, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035288 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
        "_mixed.rgba_astc_6x6_khr_rgba32ui.texture3d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035288 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035288 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035289, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035289 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba_astc_6x6_khr_rgba32ui.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035289 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035289 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035290, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035290 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba_astc_6x6_khr_rgba32ui.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035290 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035290 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035291, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035291 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
        "its_mixed.rgba_astc_6x6_khr_rgba32ui.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035291 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035291 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035292, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035292 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
        "mixed.rgba_astc_6x6_khr_rgba32ui.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035292 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035292 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035293, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035293 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba_astc_6x6_khr_rgba32ui.cubemap_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035293 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035293 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035294, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035294 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba_astc_6x6_khr_rgba32ui.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035294 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035294 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035295, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035295 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba_astc_6x6_khr_rgba32ui.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035295 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035295 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035296, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035296 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
        "mixed.rgba_astc_6x6_khr_rgba32ui.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035296 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035296 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035297, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035297 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
        "d.rgba_astc_6x6_khr_rgba32ui.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035297 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035297 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035298, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035298 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
        "xed.rgba_astc_6x6_khr_rgba32ui.texture2d_array_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035298 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035298 end";
}
