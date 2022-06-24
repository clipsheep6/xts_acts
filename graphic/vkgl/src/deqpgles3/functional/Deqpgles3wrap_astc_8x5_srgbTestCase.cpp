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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30024TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023563, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023563 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_8x5_srgb.clamp_clamp_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023563 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023563 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023564, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023564 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.ast"
        "c_8x5_srgb.clamp_clamp_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023564 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023564 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023565, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023565 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_8x5_srgb.clamp_repeat_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023565 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023565 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023566, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023566 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_8x5_srgb.clamp_repeat_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023566 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023566 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023567, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023567 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_8x5_srgb.clamp_mirror_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023567 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023567 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023568, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023568 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_8x5_srgb.clamp_mirror_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023568 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023568 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023569, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023569 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_8x5_srgb.repeat_clamp_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023569 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023569 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023570, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023570 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_8x5_srgb.repeat_clamp_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023570 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023570 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023571, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023571 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "8x5_srgb.repeat_repeat_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023571 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023571 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023572, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023572 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_8x5_srgb.repeat_repeat_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023572 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023572 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023573, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023573 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "8x5_srgb.repeat_mirror_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023573 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023573 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023574, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023574 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_8x5_srgb.repeat_mirror_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023574 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023574 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023575, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023575 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_8x5_srgb.mirror_clamp_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023575 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023575 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023576, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023576 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_8x5_srgb.mirror_clamp_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023576 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023576 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023577, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023577 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "8x5_srgb.mirror_repeat_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023577 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023577 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023578, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023578 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_8x5_srgb.mirror_repeat_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023578 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023578 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023579, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023579 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "8x5_srgb.mirror_mirror_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023579 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023579 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023580, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023580 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_8x5_srgb.mirror_mirror_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023580 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023580 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023581, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023581 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_8"
        "x5_srgb.clamp_clamp_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023581 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023581 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023582, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023582 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "8x5_srgb.clamp_clamp_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023582 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023582 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023583, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023583 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_8"
        "x5_srgb.clamp_repeat_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023583 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023583 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023584, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023584 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_8"
        "x5_srgb.clamp_repeat_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023584 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023584 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023585, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023585 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_8"
        "x5_srgb.clamp_mirror_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023585 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023585 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023586, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023586 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_8"
        "x5_srgb.clamp_mirror_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023586 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023586 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023587, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023587 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_8"
        "x5_srgb.repeat_clamp_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023587 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023587 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023588, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023588 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_8"
        "x5_srgb.repeat_clamp_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023588 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023588 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023589, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023589 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_8x"
        "5_srgb.repeat_repeat_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023589 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023589 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023590, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023590 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_8"
        "x5_srgb.repeat_repeat_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023590 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023590 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023591, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023591 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_8x"
        "5_srgb.repeat_mirror_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023591 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023591 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023592, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023592 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_8"
        "x5_srgb.repeat_mirror_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023592 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023592 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023593, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023593 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_8"
        "x5_srgb.mirror_clamp_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023593 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023593 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023594, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023594 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_8"
        "x5_srgb.mirror_clamp_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023594 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023594 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023595, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023595 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_8x"
        "5_srgb.mirror_repeat_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023595 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023595 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023596, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023596 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_8"
        "x5_srgb.mirror_repeat_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023596 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023596 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023597, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023597 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_8x"
        "5_srgb.mirror_mirror_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023597 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023597 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023598, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023598 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_8"
        "x5_srgb.mirror_mirror_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023598 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023598 end";
}
