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

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026388, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026388 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_48_bits.rgb16i_rgb16f.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026388 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026388 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026389, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026389 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_48_bits.rgb16i_rgb16f.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026389 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026389 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026390, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026390 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_48_bits.rgb16i_rgb16f.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026390 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026390 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026391, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026391 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_48_bits.rgb16i_rgb16f.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026391 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026391 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026392, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026392 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_48_bits.rgb16i_rgb16f.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026392 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026392 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026393, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026393 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_48_bits.rgb16i_rgb16f.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026393 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026393 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026394, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026394 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_48_bits.rgb16i_rgb16f.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026394 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026394 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026395, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026395 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_48_bits.rgb16i_rgb16f.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026395 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026395 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026396, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026396 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_48_bits.rgb16i_rgb16f.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026396 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026396 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026397, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026397 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_48_bits.rgb16i_rgb16f.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026397 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026397 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026398, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026398 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_48_bits.rgb16i_rgb16f.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026398 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026398 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026399, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026399 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_48_bits.rgb16i_rgb16f.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026399 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026399 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026400, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026400 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_48_bits.rgb16i_rgb16f.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026400 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026400 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026401, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026401 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_48_bits.rgb16i_rgb16f.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026401 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026401 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026402, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026402 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_48_bits.rgb16i_rgb16f.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026402 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026402 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026403, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026403 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_48_bits.rgb16i_rgb16f.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026403 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026403 end";
}
