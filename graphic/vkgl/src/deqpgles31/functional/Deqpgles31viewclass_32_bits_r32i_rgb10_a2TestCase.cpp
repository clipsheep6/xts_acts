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

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026976, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026976 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.r32i_rgb10_a2.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026976 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026976 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026977, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026977 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.r32i_rgb10_a2.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026977 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026977 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026978, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026978 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.r32i_rgb10_a2.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026978 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026978 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026979, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026979 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.r32i_rgb10_a2.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026979 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026979 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026980, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026980 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.r32i_rgb10_a2.texture2d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026980 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026980 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026981, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026981 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.r32i_rgb10_a2.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026981 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026981 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026982, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026982 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.r32i_rgb10_a2.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026982 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026982 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026983, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026983 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.r32i_rgb10_a2.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026983 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026983 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026984, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026984 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.r32i_rgb10_a2.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026984 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026984 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026985, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026985 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.r32i_rgb10_a2.texture3d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026985 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026985 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026986, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026986 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.r32i_rgb10_a2.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026986 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026986 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026987, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026987 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.r32i_rgb10_a2.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026987 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026987 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026988, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026988 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_32_bits.r32i_rgb10_a2.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026988 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026988 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026989, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026989 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.r32i_rgb10_a2.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026989 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026989 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026990, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026990 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.r32i_rgb10_a2.cubemap_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026990 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026990 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026991, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026991 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.r32i_rgb10_a2.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026991 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026991 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026992, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026992 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.r32i_rgb10_a2.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026992 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026992 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026993, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026993 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.r32i_rgb10_a2.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026993 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026993 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026994, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026994 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.r32i_rgb10_a2.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026994 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026994 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026995, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026995 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.r32i_rgb10_a2.texture2d_array_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026995 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026995 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026996, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026996 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.r32i_rgb10_a2.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026996 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026996 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026997, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026997 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.r32i_rgb10_a2.renderbuffer_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026997 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026997 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026998, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026998 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.r32i_rgb10_a2.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026998 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026998 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026999, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026999 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.r32i_rgb10_a2.renderbuffer_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026999 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026999 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_027000, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027000 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.r32i_rgb10_a2.renderbuffer_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027000 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027000 end";
}
