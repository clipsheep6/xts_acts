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
#include "../ActsDeqpgles310026TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025248, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025248 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_128_bits.rgba32f_rgba32f.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025248 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025248 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025249, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025249 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_128_bits.rgba32f_rgba32f.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025249 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025249 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025250, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025250 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_128_bits.rgba32f_rgba32f.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025250 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025250 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025251, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025251 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_128_bits.rgba32f_rgba32f.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025251 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025251 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025252, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025252 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_128_bits.rgba32f_rgba32f.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025252 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025252 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025253, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025253 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_128_bits.rgba32f_rgba32f.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025253 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025253 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025254, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025254 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_128_bits.rgba32f_rgba32f.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025254 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025254 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025255, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025255 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_128_bits.rgba32f_rgba32f.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025255 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025255 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025256, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025256 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_128_bits.rgba32f_rgba32f.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025256 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025256 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025257, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025257 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_128_bits.rgba32f_rgba32f.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025257 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025257 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025258, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025258 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_128_bits.rgba32f_rgba32f.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025258 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025258 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025259, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025259 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_128_bits.rgba32f_rgba32f.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025259 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025259 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025260, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025260 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_128_bits.rgba32f_rgba32f.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025260 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025260 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025261, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025261 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_128_bits.rgba32f_rgba32f.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025261 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025261 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025262, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025262 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_128_bits.rgba32f_rgba32f.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025262 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025262 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025263, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025263 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
        "128_bits.rgba32f_rgba32f.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025263 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025263 end";
}
