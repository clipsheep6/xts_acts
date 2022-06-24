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

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035139, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035139 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba32ui_rgba_astc_5x4_khr.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035139 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035139 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035140, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035140 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba32ui_rgba_astc_5x4_khr.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035140 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035140 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035141, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035141 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba32ui_rgba_astc_5x4_khr.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035141 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035141 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035142, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035142 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba32ui_rgba_astc_5x4_khr.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035142 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035142 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035143, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035143 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba32ui_rgba_astc_5x4_khr.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035143 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035143 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035144, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035144 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba32ui_rgba_astc_5x4_khr.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035144 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035144 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035145, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035145 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba32ui_rgba_astc_5x4_khr.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035145 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035145 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035146, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035146 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba32ui_rgba_astc_5x4_khr.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035146 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035146 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035147, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035147 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba32ui_rgba_astc_5x4_khr.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035147 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035147 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035148, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035148 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba32ui_rgba_astc_5x4_khr.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035148 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035148 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035149, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035149 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
        "its_mixed.rgba32ui_rgba_astc_5x4_khr.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035149 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035149 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035150, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035150 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
        "mixed.rgba32ui_rgba_astc_5x4_khr.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035150 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035150 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035151, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035151 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba32ui_rgba_astc_5x4_khr.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035151 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035151 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035152, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035152 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba32ui_rgba_astc_5x4_khr.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035152 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035152 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035153, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035153 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
        "mixed.rgba32ui_rgba_astc_5x4_khr.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035153 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035153 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035154, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035154 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
        "d.rgba32ui_rgba_astc_5x4_khr.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035154 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035154 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035155, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035155 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
        "_mixed.rgba32ui_rgba_astc_5x4_khr.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035155 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035155 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035156, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035156 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
        "_mixed.rgba32ui_rgba_astc_5x4_khr.renderbuffer_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035156 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035156 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035157, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035157 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba32ui_rgba_astc_5x4_khr.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035157 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035157 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035158, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035158 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
        "xed.rgba32ui_rgba_astc_5x4_khr.renderbuffer_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035158 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035158 end";
}
