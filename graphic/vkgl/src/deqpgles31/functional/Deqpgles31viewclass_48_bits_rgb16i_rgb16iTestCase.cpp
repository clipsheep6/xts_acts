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
#include "../ActsDeqpgles310027TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026404, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026404 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_48_bits.rgb16i_rgb16i.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026404 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026404 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026405, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026405 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_48_bits.rgb16i_rgb16i.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026405 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026405 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026406, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026406 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_48_bits.rgb16i_rgb16i.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026406 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026406 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026407, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026407 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_48_bits.rgb16i_rgb16i.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026407 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026407 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026408, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026408 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_48_bits.rgb16i_rgb16i.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026408 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026408 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026409, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026409 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_48_bits.rgb16i_rgb16i.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026409 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026409 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026410, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026410 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_48_bits.rgb16i_rgb16i.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026410 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026410 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026411, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026411 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_48_bits.rgb16i_rgb16i.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026411 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026411 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026412, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026412 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_48_bits.rgb16i_rgb16i.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026412 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026412 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026413, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026413 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_48_bits.rgb16i_rgb16i.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026413 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026413 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026414, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026414 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_48_bits.rgb16i_rgb16i.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026414 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026414 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026415, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026415 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_48_bits.rgb16i_rgb16i.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026415 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026415 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026416, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026416 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_48_bits.rgb16i_rgb16i.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026416 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026416 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026417, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026417 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_48_bits.rgb16i_rgb16i.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026417 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026417 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026418, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026418 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_48_bits.rgb16i_rgb16i.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026418 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026418 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026419, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026419 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_48_bits.rgb16i_rgb16i.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026419 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026419 end";
}
