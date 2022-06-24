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
#include "../ActsDeqpgles30025TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024217, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024217 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cu"
        "be.combinations.nearest_nearest_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024217 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024217 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024218, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024218 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cub"
        "e.combinations.nearest_nearest_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024218 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024218 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024219, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024219 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cub"
        "e.combinations.nearest_nearest_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024219 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024219 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024220, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024220 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cub"
        "e.combinations.nearest_nearest_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024220 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024220 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024221, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024221 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cub"
        "e.combinations.nearest_nearest_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024221 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024221 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024222, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024222 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cub"
        "e.combinations.nearest_nearest_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024222 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024222 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024223, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024223 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cub"
        "e.combinations.nearest_nearest_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024223 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024223 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024224, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024224 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cub"
        "e.combinations.nearest_nearest_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024224 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024224 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024225, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024225 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cub"
        "e.combinations.nearest_nearest_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024225 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024225 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024226, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024226 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cu"
        "be.combinations.nearest_linear_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024226 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024226 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024227, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024227 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cu"
        "be.combinations.nearest_linear_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024227 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024227 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024228, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024228 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cu"
        "be.combinations.nearest_linear_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024228 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024228 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024229, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024229 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cu"
        "be.combinations.nearest_linear_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024229 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024229 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024230, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024230 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cub"
        "e.combinations.nearest_linear_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024230 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024230 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024231, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024231 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cub"
        "e.combinations.nearest_linear_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024231 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024231 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024232, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024232 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cu"
        "be.combinations.nearest_linear_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024232 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024232 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024233, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024233 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cub"
        "e.combinations.nearest_linear_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024233 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024233 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024234, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024234 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cub"
        "e.combinations.nearest_linear_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024234 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024234 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024235, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024235 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cu"
        "be.combinations.linear_nearest_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024235 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024235 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024236, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024236 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cu"
        "be.combinations.linear_nearest_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024236 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024236 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024237, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024237 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cu"
        "be.combinations.linear_nearest_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024237 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024237 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024238, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024238 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cu"
        "be.combinations.linear_nearest_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024238 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024238 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024239, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024239 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cub"
        "e.combinations.linear_nearest_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024239 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024239 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024240, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024240 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cub"
        "e.combinations.linear_nearest_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024240 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024240 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024241, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024241 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cu"
        "be.combinations.linear_nearest_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024241 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024241 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024242, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024242 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cub"
        "e.combinations.linear_nearest_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024242 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024242 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024243, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024243 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cub"
        "e.combinations.linear_nearest_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024243 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024243 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024244, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024244 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.c"
        "ube.combinations.linear_linear_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024244 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024244 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024245, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024245 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cu"
        "be.combinations.linear_linear_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024245 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024245 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024246, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024246 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cu"
        "be.combinations.linear_linear_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024246 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024246 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024247, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024247 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cu"
        "be.combinations.linear_linear_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024247 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024247 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024248, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024248 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cu"
        "be.combinations.linear_linear_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024248 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024248 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024249, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024249 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cu"
        "be.combinations.linear_linear_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024249 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024249 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024250, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024250 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cu"
        "be.combinations.linear_linear_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024250 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024250 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024251, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024251 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cu"
        "be.combinations.linear_linear_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024251 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024251 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024252, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024252 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cu"
        "be.combinations.linear_linear_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024252 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024252 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024253, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024253 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.nearest_mipmap_nearest_nearest_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024253 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024253 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024254, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024254 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.nearest_mipmap_nearest_nearest_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024254 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024254 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024255, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024255 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.nearest_mipmap_nearest_nearest_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024255 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024255 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024256, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024256 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.nearest_mipmap_nearest_nearest_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024256 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024256 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024257, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024257 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combin"
        "ations.nearest_mipmap_nearest_nearest_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024257 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024257 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024258, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024258 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combin"
        "ations.nearest_mipmap_nearest_nearest_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024258 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024258 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024259, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024259 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.nearest_mipmap_nearest_nearest_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024259 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024259 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024260, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024260 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combin"
        "ations.nearest_mipmap_nearest_nearest_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024260 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024260 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024261, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024261 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combin"
        "ations.nearest_mipmap_nearest_nearest_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024261 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024261 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024262, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024262 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.comb"
        "inations.nearest_mipmap_nearest_linear_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024262 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024262 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024263, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024263 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.nearest_mipmap_nearest_linear_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024263 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024263 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024264, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024264 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.nearest_mipmap_nearest_linear_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024264 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024264 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024265, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024265 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.nearest_mipmap_nearest_linear_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024265 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024265 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024266, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024266 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.nearest_mipmap_nearest_linear_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024266 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024266 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024267, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024267 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.nearest_mipmap_nearest_linear_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024267 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024267 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024268, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024268 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.nearest_mipmap_nearest_linear_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024268 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024268 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024269, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024269 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.nearest_mipmap_nearest_linear_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024269 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024269 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024270, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024270 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.nearest_mipmap_nearest_linear_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024270 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024270 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024271, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024271 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.comb"
        "inations.linear_mipmap_nearest_nearest_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024271 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024271 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024272, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024272 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.linear_mipmap_nearest_nearest_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024272 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024272 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024273, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024273 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.linear_mipmap_nearest_nearest_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024273 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024273 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024274, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024274 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.linear_mipmap_nearest_nearest_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024274 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024274 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024275, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024275 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.linear_mipmap_nearest_nearest_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024275 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024275 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024276, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024276 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.linear_mipmap_nearest_nearest_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024276 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024276 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024277, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024277 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.linear_mipmap_nearest_nearest_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024277 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024277 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024278, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024278 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.linear_mipmap_nearest_nearest_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024278 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024278 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024279, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024279 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.linear_mipmap_nearest_nearest_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024279 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024279 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024280, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024280 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.comb"
        "inations.linear_mipmap_nearest_linear_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024280 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024280 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024281, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024281 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.comb"
        "inations.linear_mipmap_nearest_linear_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024281 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024281 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024282, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024282 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.comb"
        "inations.linear_mipmap_nearest_linear_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024282 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024282 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024283, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024283 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.comb"
        "inations.linear_mipmap_nearest_linear_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024283 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024283 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024284, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024284 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.linear_mipmap_nearest_linear_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024284 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024284 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024285, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024285 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.linear_mipmap_nearest_linear_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024285 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024285 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024286, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024286 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.comb"
        "inations.linear_mipmap_nearest_linear_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024286 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024286 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024287, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024287 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.linear_mipmap_nearest_linear_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024287 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024287 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024288, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024288 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.linear_mipmap_nearest_linear_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024288 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024288 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024289, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024289 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.comb"
        "inations.nearest_mipmap_linear_nearest_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024289 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024289 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024290, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024290 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.nearest_mipmap_linear_nearest_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024290 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024290 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024291, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024291 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.nearest_mipmap_linear_nearest_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024291 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024291 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024292, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024292 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.nearest_mipmap_linear_nearest_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024292 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024292 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024293, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024293 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.nearest_mipmap_linear_nearest_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024293 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024293 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024294, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024294 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.nearest_mipmap_linear_nearest_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024294 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024294 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024295, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024295 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.nearest_mipmap_linear_nearest_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024295 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024295 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024296, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024296 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.nearest_mipmap_linear_nearest_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024296 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024296 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024297, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024297 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.nearest_mipmap_linear_nearest_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024297 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024297 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024298, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024298 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.comb"
        "inations.nearest_mipmap_linear_linear_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024298 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024298 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024299, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024299 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.comb"
        "inations.nearest_mipmap_linear_linear_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024299 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024299 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024300, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024300 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.comb"
        "inations.nearest_mipmap_linear_linear_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024300 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024300 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024301, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024301 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.comb"
        "inations.nearest_mipmap_linear_linear_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024301 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024301 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024302, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024302 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.nearest_mipmap_linear_linear_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024302 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024302 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024303, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024303 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.nearest_mipmap_linear_linear_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024303 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024303 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024304, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024304 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.comb"
        "inations.nearest_mipmap_linear_linear_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024304 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024304 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024305, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024305 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.nearest_mipmap_linear_linear_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024305 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024305 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024306, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024306 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.nearest_mipmap_linear_linear_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024306 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024306 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024307, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024307 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.comb"
        "inations.linear_mipmap_linear_nearest_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024307 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024307 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024308, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024308 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.comb"
        "inations.linear_mipmap_linear_nearest_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024308 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024308 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024309, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024309 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.comb"
        "inations.linear_mipmap_linear_nearest_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024309 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024309 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024310, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024310 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.comb"
        "inations.linear_mipmap_linear_nearest_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024310 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024310 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024311, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024311 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.linear_mipmap_linear_nearest_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024311 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024311 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024312, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024312 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.linear_mipmap_linear_nearest_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024312 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024312 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024313, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024313 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.comb"
        "inations.linear_mipmap_linear_nearest_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024313 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024313 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024314, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024314 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.linear_mipmap_linear_nearest_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024314 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024314 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024315, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024315 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.combi"
        "nations.linear_mipmap_linear_nearest_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024315 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024315 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024316, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024316 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.com"
        "binations.linear_mipmap_linear_linear_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024316 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024316 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024317, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024317 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.comb"
        "inations.linear_mipmap_linear_linear_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024317 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024317 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024318, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024318 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.comb"
        "inations.linear_mipmap_linear_linear_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024318 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024318 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024319, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024319 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.comb"
        "inations.linear_mipmap_linear_linear_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024319 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024319 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024320, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024320 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.comb"
        "inations.linear_mipmap_linear_linear_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024320 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024320 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024321, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024321 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.comb"
        "inations.linear_mipmap_linear_linear_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024321 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024321 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024322, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024322 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.comb"
        "inations.linear_mipmap_linear_linear_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024322 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024322 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024323, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024323 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.comb"
        "inations.linear_mipmap_linear_linear_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024323 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024323 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024324, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024324 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.cube.comb"
        "inations.linear_mipmap_linear_linear_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024324 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024324 end";
}
