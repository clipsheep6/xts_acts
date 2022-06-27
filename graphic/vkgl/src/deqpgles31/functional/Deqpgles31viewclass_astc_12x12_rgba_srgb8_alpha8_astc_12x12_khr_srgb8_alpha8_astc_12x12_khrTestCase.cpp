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

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034043, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034043 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.srg"
        "b8_alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034043 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034043 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034044, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034044 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.srg"
        "b8_alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034044 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034044 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034045, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034045 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.sr"
        "gb8_alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034045 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034045 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034046, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034046 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.srgb8_"
        "alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034046 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034046 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034047, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034047 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.srg"
        "b8_alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034047 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034047 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034048, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034048 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.srg"
        "b8_alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034048 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034048 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034049, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034049 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.sr"
        "gb8_alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034049 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034049 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034050, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034050 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.srgb8_"
        "alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034050 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034050 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034051, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034051 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.sr"
        "gb8_alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034051 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034051 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034052, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034052 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.sr"
        "gb8_alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034052 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034052 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034053, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034053 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.s"
        "rgb8_alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034053 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034053 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034054, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034054 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.srgb8"
        "_alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034054 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034054 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034055, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034055 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.srgb8_"
        "alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034055 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034055 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034056, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034056 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.srgb8_"
        "alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034056 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034056 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034057, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034057 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.srgb8"
        "_alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034057 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034057 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034058, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034058 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.srgb8_alp"
        "ha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034058 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034058 end";
}
