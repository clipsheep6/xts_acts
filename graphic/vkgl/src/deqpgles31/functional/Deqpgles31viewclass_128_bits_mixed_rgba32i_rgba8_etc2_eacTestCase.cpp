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

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036219, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036219 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
        "its_mixed.rgba32i_rgba8_etc2_eac.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036219 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036219 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036220, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036220 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
        "bits_mixed.rgba32i_rgba8_etc2_eac.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036220 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036220 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036221, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036221 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
        "its_mixed.rgba32i_rgba8_etc2_eac.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036221 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036221 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036222, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036222 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
        "bits_mixed.rgba32i_rgba8_etc2_eac.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036222 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036222 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036223, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036223 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
        "bits_mixed.rgba32i_rgba8_etc2_eac.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036223 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036223 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036224, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036224 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128"
        "_bits_mixed.rgba32i_rgba8_etc2_eac.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036224 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036224 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036225, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036225 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
        "_mixed.rgba32i_rgba8_etc2_eac.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036225 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036225 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036226, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036226 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba32i_rgba8_etc2_eac.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036226 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036226 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036227, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036227 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba32i_rgba8_etc2_eac.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036227 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036227 end";
}

static HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036228, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036228 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
        "its_mixed.rgba32i_rgba8_etc2_eac.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036228 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036228 end";
}
