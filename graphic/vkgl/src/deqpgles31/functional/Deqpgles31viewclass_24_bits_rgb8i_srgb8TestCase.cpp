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
#include "../ActsDeqpgles310032TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031365, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031365 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_24_bits.rgb8i_srgb8.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031365 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031365 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031366, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031366 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_24_bits.rgb8i_srgb8.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031366 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031366 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031367, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031367 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_24_bits.rgb8i_srgb8.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031367 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031367 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031368, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031368 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_24_bits.rgb8i_srgb8.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031368 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031368 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031369, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031369 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_24_bits.rgb8i_srgb8.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031369 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031369 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031370, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031370 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_24_bits.rgb8i_srgb8.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031370 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031370 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031371, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031371 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_24_bits.rgb8i_srgb8.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031371 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031371 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031372, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031372 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_24_bits.rgb8i_srgb8.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031372 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031372 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031373, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031373 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_24_bits.rgb8i_srgb8.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031373 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031373 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031374, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031374 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_24_bits.rgb8i_srgb8.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031374 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031374 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031375, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031375 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed"
        ".viewclass_24_bits.rgb8i_srgb8.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031375 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031375 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031376, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031376 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_24_bits.rgb8i_srgb8.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031376 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031376 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031377, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031377 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_24_bits.rgb8i_srgb8.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031377 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031377 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031378, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031378 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_24_bits.rgb8i_srgb8.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031378 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031378 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031379, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031379 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_24_bits.rgb8i_srgb8.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031379 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031379 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031380, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031380 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_24_bits.rgb8i_srgb8.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031380 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031380 end";
}
