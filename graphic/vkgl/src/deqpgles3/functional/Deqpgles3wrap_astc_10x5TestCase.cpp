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

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023167, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023167 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.as"
        "tc_10x5.clamp_clamp_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023167 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023167 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023168, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023168 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.a"
        "stc_10x5.clamp_clamp_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023168 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023168 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023169, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023169 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.as"
        "tc_10x5.clamp_repeat_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023169 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023169 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023170, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023170 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.as"
        "tc_10x5.clamp_repeat_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023170 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023170 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023171, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023171 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.as"
        "tc_10x5.clamp_mirror_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023171 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023171 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023172, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023172 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.as"
        "tc_10x5.clamp_mirror_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023172 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023172 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023173, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023173 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.as"
        "tc_10x5.repeat_clamp_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023173 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023173 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023174, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023174 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.as"
        "tc_10x5.repeat_clamp_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023174 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023174 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023175, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023175 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.ast"
        "c_10x5.repeat_repeat_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023175 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023175 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023176, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023176 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.as"
        "tc_10x5.repeat_repeat_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023176 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023176 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023177, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023177 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.ast"
        "c_10x5.repeat_mirror_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023177 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023177 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023178, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023178 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.as"
        "tc_10x5.repeat_mirror_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023178 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023178 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023179, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023179 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.as"
        "tc_10x5.mirror_clamp_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023179 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023179 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023180, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023180 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.as"
        "tc_10x5.mirror_clamp_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023180 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023180 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023181, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023181 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.ast"
        "c_10x5.mirror_repeat_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023181 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023181 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023182, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023182 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.as"
        "tc_10x5.mirror_repeat_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023182 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023182 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023183, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023183 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.ast"
        "c_10x5.mirror_mirror_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023183 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023183 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023184, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023184 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.as"
        "tc_10x5.mirror_mirror_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023184 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023184 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023185, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023185 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_10x5.clamp_clamp_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023185 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023185 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023186, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023186 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.ast"
        "c_10x5.clamp_clamp_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023186 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023186 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023187, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023187 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_10x5.clamp_repeat_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023187 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023187 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023188, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023188 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_10x5.clamp_repeat_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023188 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023188 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023189, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023189 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_10x5.clamp_mirror_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023189 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023189 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023190, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023190 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_10x5.clamp_mirror_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023190 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023190 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023191, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023191 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_10x5.repeat_clamp_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023191 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023191 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023192, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023192 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_10x5.repeat_clamp_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023192 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023192 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023193, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023193 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "10x5.repeat_repeat_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023193 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023193 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023194, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023194 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_10x5.repeat_repeat_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023194 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023194 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023195, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023195 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "10x5.repeat_mirror_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023195 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023195 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023196, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023196 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_10x5.repeat_mirror_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023196 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023196 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023197, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023197 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_10x5.mirror_clamp_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023197 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023197 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023198, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023198 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_10x5.mirror_clamp_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023198 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023198 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023199, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023199 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "10x5.mirror_repeat_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023199 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023199 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023200, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023200 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_10x5.mirror_repeat_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023200 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023200 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023201, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023201 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "10x5.mirror_mirror_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023201 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023201 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023202, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023202 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_10x5.mirror_mirror_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023202 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023202 end";
}
