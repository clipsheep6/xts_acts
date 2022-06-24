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
#include "../ActsDeqpgles30026TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025376, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025376 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d.neares"
        "t_mipmap_linear.less_or_equal_depth_component16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025376 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025376 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025377, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025377 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d.nearest"
        "_mipmap_linear.less_or_equal_depth_component32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025377 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025377 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025378, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025378 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d.neares"
        "t_mipmap_linear.less_or_equal_depth24_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025378 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025378 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025379, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025379 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d.nearest_"
        "mipmap_linear.greater_or_equal_depth_component16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025379 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025379 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025380, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025380 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d.nearest_"
        "mipmap_linear.greater_or_equal_depth_component32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025380 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025380 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025381, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025381 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d.nearest"
        "_mipmap_linear.greater_or_equal_depth24_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025381 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025381 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025382, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025382 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d.ne"
        "arest_mipmap_linear.less_depth_component16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025382 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025382 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025383, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025383 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d.ne"
        "arest_mipmap_linear.less_depth_component32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025383 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025383 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025384, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025384 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d.n"
        "earest_mipmap_linear.less_depth24_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025384 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025384 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025385, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025385 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d.nea"
        "rest_mipmap_linear.greater_depth_component16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025385 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025385 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025386, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025386 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d.near"
        "est_mipmap_linear.greater_depth_component32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025386 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025386 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025387, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025387 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d.nea"
        "rest_mipmap_linear.greater_depth24_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025387 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025387 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025388, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025388 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d.ne"
        "arest_mipmap_linear.equal_depth_component16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025388 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025388 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025389, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025389 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d.nea"
        "rest_mipmap_linear.equal_depth_component32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025389 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025389 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025390, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025390 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d.ne"
        "arest_mipmap_linear.equal_depth24_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025390 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025390 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025391, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025391 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d.near"
        "est_mipmap_linear.not_equal_depth_component16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025391 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025391 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025392, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025392 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d.neare"
        "st_mipmap_linear.not_equal_depth_component32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025392 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025392 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025393, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025393 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d.near"
        "est_mipmap_linear.not_equal_depth24_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025393 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025393 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025394, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025394 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d.nea"
        "rest_mipmap_linear.always_depth_component16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025394 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025394 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025395, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025395 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d.nea"
        "rest_mipmap_linear.always_depth_component32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025395 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025395 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025396, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025396 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d.ne"
        "arest_mipmap_linear.always_depth24_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025396 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025396 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025397, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025397 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d.ne"
        "arest_mipmap_linear.never_depth_component16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025397 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025397 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025398, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025398 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d.nea"
        "rest_mipmap_linear.never_depth_component32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025398 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025398 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025399, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025399 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d.ne"
        "arest_mipmap_linear.never_depth24_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025399 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025399 end";
}
