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

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034235, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034235 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba_astc_6x5_khr_rgba32f.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034235 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034235 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034236, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034236 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba_astc_6x5_khr_rgba32f.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034236 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034236 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034237, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034237 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
        "its_mixed.rgba_astc_6x5_khr_rgba32f.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034237 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034237 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034238, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034238 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
        "mixed.rgba_astc_6x5_khr_rgba32f.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034238 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034238 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034239, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034239 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba_astc_6x5_khr_rgba32f.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034239 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034239 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034240, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034240 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba_astc_6x5_khr_rgba32f.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034240 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034240 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034241, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034241 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
        "its_mixed.rgba_astc_6x5_khr_rgba32f.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034241 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034241 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034242, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034242 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
        "mixed.rgba_astc_6x5_khr_rgba32f.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034242 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034242 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034243, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034243 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
        "its_mixed.rgba_astc_6x5_khr_rgba32f.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034243 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034243 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034244, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034244 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
        "its_mixed.rgba_astc_6x5_khr_rgba32f.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034244 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034244 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034245, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034245 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
        "bits_mixed.rgba_astc_6x5_khr_rgba32f.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034245 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034245 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034246, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034246 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
        "_mixed.rgba_astc_6x5_khr_rgba32f.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034246 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034246 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034247, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034247 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
        "mixed.rgba_astc_6x5_khr_rgba32f.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034247 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034247 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034248, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034248 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
        "mixed.rgba_astc_6x5_khr_rgba32f.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034248 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034248 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034249, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034249 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
        "_mixed.rgba_astc_6x5_khr_rgba32f.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034249 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034249 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034250, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034250 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
        "ed.rgba_astc_6x5_khr_rgba32f.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034250 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034250 end";
}
