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

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023311, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023311 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.as"
        "tc_12x10.clamp_clamp_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023311 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023311 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023312, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023312 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.as"
        "tc_12x10.clamp_clamp_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023312 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023312 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023313, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023313 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.ast"
        "c_12x10.clamp_repeat_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023313 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023313 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023314, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023314 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.as"
        "tc_12x10.clamp_repeat_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023314 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023314 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023315, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023315 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.ast"
        "c_12x10.clamp_mirror_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023315 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023315 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023316, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023316 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.as"
        "tc_12x10.clamp_mirror_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023316 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023316 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023317, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023317 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.ast"
        "c_12x10.repeat_clamp_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023317 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023317 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023318, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023318 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.as"
        "tc_12x10.repeat_clamp_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023318 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023318 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023319, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023319 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.ast"
        "c_12x10.repeat_repeat_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023319 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023319 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023320, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023320 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.ast"
        "c_12x10.repeat_repeat_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023320 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023320 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023321, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023321 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.ast"
        "c_12x10.repeat_mirror_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023321 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023321 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023322, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023322 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.ast"
        "c_12x10.repeat_mirror_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023322 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023322 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023323, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023323 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.ast"
        "c_12x10.mirror_clamp_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023323 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023323 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023324, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023324 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.as"
        "tc_12x10.mirror_clamp_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023324 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023324 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023325, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023325 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.ast"
        "c_12x10.mirror_repeat_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023325 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023325 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023326, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023326 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.ast"
        "c_12x10.mirror_repeat_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023326 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023326 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023327, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023327 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.ast"
        "c_12x10.mirror_mirror_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023327 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023327 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023328, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023328 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.ast"
        "c_12x10.mirror_mirror_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023328 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023328 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023329, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023329 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_12x10.clamp_clamp_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023329 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023329 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023330, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023330 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_12x10.clamp_clamp_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023330 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023330 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023331, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023331 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "12x10.clamp_repeat_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023331 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023331 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023332, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023332 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_12x10.clamp_repeat_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023332 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023332 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023333, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023333 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "12x10.clamp_mirror_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023333 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023333 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023334, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023334 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_12x10.clamp_mirror_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023334 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023334 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023335, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023335 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "12x10.repeat_clamp_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023335 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023335 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023336, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023336 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_12x10.repeat_clamp_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023336 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023336 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023337, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023337 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "12x10.repeat_repeat_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023337 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023337 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023338, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023338 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "12x10.repeat_repeat_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023338 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023338 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023339, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023339 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "12x10.repeat_mirror_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023339 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023339 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023340, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023340 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "12x10.repeat_mirror_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023340 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023340 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023341, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023341 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "12x10.mirror_clamp_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023341 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023341 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023342, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023342 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_12x10.mirror_clamp_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023342 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023342 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023343, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023343 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "12x10.mirror_repeat_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023343 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023343 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023344, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023344 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "12x10.mirror_repeat_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023344 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023344 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023345, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023345 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "12x10.mirror_mirror_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023345 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023345 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023346, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023346 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "12x10.mirror_mirror_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023346 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023346 end";
}
