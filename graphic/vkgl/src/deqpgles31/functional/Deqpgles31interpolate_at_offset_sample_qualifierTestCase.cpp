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
#include "../ActsDeqpgles310004TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003244, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003244 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.multisample_interpolation."
        "interpolate_at_offset.sample_qualifier.default_framebuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003244 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003244 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003245, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003245 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.multisample_interpolation.i"
        "nterpolate_at_offset.sample_qualifier.singlesample_texture",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003245 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003245 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003246, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003246 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.multisample_interpolation.i"
        "nterpolate_at_offset.sample_qualifier.multisample_texture_1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003246 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003246 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003247, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003247 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.multisample_interpolation.i"
        "nterpolate_at_offset.sample_qualifier.multisample_texture_2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003247 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003247 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003248, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003248 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.multisample_interpolation.i"
        "nterpolate_at_offset.sample_qualifier.multisample_texture_4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003248 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003248 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003249, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003249 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.multisample_interpolation.i"
        "nterpolate_at_offset.sample_qualifier.multisample_texture_8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003249 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003249 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003250, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003250 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.multisample_interpolation.in"
        "terpolate_at_offset.sample_qualifier.multisample_texture_16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003250 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003250 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003251, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003251 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.multisample_interpolation"
        ".interpolate_at_offset.sample_qualifier.singlesample_rbo",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003251 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003251 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003252, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003252 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.multisample_interpolation"
        ".interpolate_at_offset.sample_qualifier.multisample_rbo_1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003252 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003252 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003253, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003253 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.multisample_interpolation"
        ".interpolate_at_offset.sample_qualifier.multisample_rbo_2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003253 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003253 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003254, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003254 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.multisample_interpolation"
        ".interpolate_at_offset.sample_qualifier.multisample_rbo_4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003254 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003254 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003255, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003255 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.multisample_interpolation"
        ".interpolate_at_offset.sample_qualifier.multisample_rbo_8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003255 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003255 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003256, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003256 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.multisample_interpolation."
        "interpolate_at_offset.sample_qualifier.multisample_rbo_16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003256 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003256 end";
}
