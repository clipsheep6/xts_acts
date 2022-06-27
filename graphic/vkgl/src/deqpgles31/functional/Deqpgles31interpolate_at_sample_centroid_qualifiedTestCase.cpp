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

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003170, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003170 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.multisample_interpolation.i"
        "nterpolate_at_sample.centroid_qualified.default_framebuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003170 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003170 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003171, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003171 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.multisample_interpolation.in"
        "terpolate_at_sample.centroid_qualified.singlesample_texture",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003171 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003171 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003172, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003172 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.multisample_interpolation.in"
        "terpolate_at_sample.centroid_qualified.multisample_texture_1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003172 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003172 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003173, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003173 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.multisample_interpolation.in"
        "terpolate_at_sample.centroid_qualified.multisample_texture_2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003173 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003173 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003174, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003174 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.multisample_interpolation.in"
        "terpolate_at_sample.centroid_qualified.multisample_texture_4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003174 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003174 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003175, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003175 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.multisample_interpolation.in"
        "terpolate_at_sample.centroid_qualified.multisample_texture_8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003175 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003175 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003176, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003176 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.multisample_interpolation.int"
        "erpolate_at_sample.centroid_qualified.multisample_texture_16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003176 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003176 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003177, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003177 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.multisample_interpolation."
        "interpolate_at_sample.centroid_qualified.singlesample_rbo",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003177 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003177 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003178, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003178 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.multisample_interpolation."
        "interpolate_at_sample.centroid_qualified.multisample_rbo_1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003178 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003178 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003179, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003179 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.multisample_interpolation."
        "interpolate_at_sample.centroid_qualified.multisample_rbo_2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003179 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003179 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003180, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003180 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.multisample_interpolation."
        "interpolate_at_sample.centroid_qualified.multisample_rbo_4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003180 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003180 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003181, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003181 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.multisample_interpolation."
        "interpolate_at_sample.centroid_qualified.multisample_rbo_8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003181 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003181 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003182, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003182 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.multisample_interpolation.i"
        "nterpolate_at_sample.centroid_qualified.multisample_rbo_16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003182 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003182 end";
}
